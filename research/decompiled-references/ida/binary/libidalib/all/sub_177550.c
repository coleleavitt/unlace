void __fastcall sub_177550(_QWORD *a1)
{
  _QWORD *v1; // r12
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  _QWORD *v5; // rdi
  void (*v6)(void); // rax
  void (__fastcall *v7)(_QWORD); // rdx
  _QWORD *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx

  v1 = a1 + 1;
  v3 = (_QWORD *)a1[1];
  if ( v3 != a1 + 1 )
  {
    do
    {
      v4 = v3;
      v3 = (_QWORD *)*v3;
      v5 = (_QWORD *)v4[2];
      v6 = *(void (**)(void))(*v5 + 24LL);
      if ( (char *)v6 == (char *)sub_174780 )
      {
        v7 = (void (__fastcall *)(_QWORD))v5[2];
        v8 = (_QWORD *)(v5[1] + v5[3]);
        if ( ((unsigned __int8)v7 & 1) != 0 )
          v7 = *(void (__fastcall **)(_QWORD))((char *)v7 + *v8 - 1);
        v7(v8);
      }
      else
      {
        v6();
      }
    }
    while ( v1 != v3 );
  }
  v9 = qword_2565D0;
  v10 = qword_2565D0 + 16 * xmmword_2565D8;
  if ( qword_2565D0 == v10 )
    goto LABEL_15;
  while ( a1 != *(_QWORD **)(v9 + 8) )
  {
    v9 += 16;
    if ( v10 == v9 )
      goto LABEL_15;
  }
  if ( !v9 )
  {
LABEL_15:
    if ( under_debugger )
      goto LABEL_19;
    interr();
  }
  else if ( *(_QWORD *)v9 )
  {
    *(_OWORD *)v9 = 0;
    *a1 = &off_22F2F8;
    sub_8EA40(a1);
    return;
  }
  if ( under_debugger )
LABEL_19:
    BUG();
  interr();
  sub_177660(40840);
}

