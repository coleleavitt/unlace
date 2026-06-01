void __fastcall sub_15BD20(__int64 a1, int a2)
{
  __int64 v2; // rbp
  __int64 v3; // r13
  __int64 i; // rbx
  _QWORD *v5; // rbx
  _QWORD *v6; // r12
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  void (*v9)(void); // rax
  void (__fastcall *v10)(_QWORD); // rdx
  _QWORD *v11; // rax

  if ( !a2 )
  {
    v2 = a1;
    if ( !*(_QWORD *)a1 )
    {
      *(_BYTE *)(a1 + 24) = 0;
      return;
    }
    v3 = *(_QWORD *)(a1 + 8);
    if ( !v3 )
      goto LABEL_6;
    goto LABEL_4;
  }
  v2 = a1 + 32;
  if ( !*(_QWORD *)(a1 + 32) )
    goto LABEL_7;
  v3 = *(_QWORD *)(a1 + 40);
  if ( v3 )
  {
LABEL_4:
    for ( i = 0; i != v3; ++i )
      qfree();
  }
LABEL_6:
  *(_QWORD *)(v2 + 8) = 0;
  qfree();
  *(_QWORD *)v2 = 0;
  *(_QWORD *)(v2 + 16) = 0;
LABEL_7:
  *(_BYTE *)(v2 + 24) = 0;
  if ( a2 == 1 )
  {
    v5 = *(_QWORD **)(a1 + 72);
    v6 = (_QWORD *)(a1 + 72);
    while ( v6 != v5 )
    {
      v7 = v5;
      v5 = (_QWORD *)*v5;
      v8 = (_QWORD *)v7[2];
      v9 = *(void (**)(void))(*v8 + 24LL);
      if ( (char *)v9 == (char *)sub_158590 )
      {
        v10 = (void (__fastcall *)(_QWORD))v8[2];
        v11 = (_QWORD *)(v8[1] + v8[3]);
        if ( ((unsigned __int8)v10 & 1) != 0 )
          v10 = *(void (__fastcall **)(_QWORD))((char *)v10 + *v11 - 1);
        v10(v11);
      }
      else
      {
        v9();
      }
    }
  }
}

