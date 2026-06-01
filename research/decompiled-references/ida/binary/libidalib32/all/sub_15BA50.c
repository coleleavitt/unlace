void __fastcall sub_15BA50(__int64 *a1)
{
  __int64 v1; // r13
  __int64 v3; // rdi
  __int64 i; // rbx
  _QWORD *v5; // r12
  _QWORD *v6; // rbx
  _QWORD *v7; // rbp
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  void (*v10)(void); // rax
  void (__fastcall *v11)(_QWORD); // rdx
  _QWORD *v12; // rax

  v1 = a1[1];
  if ( v1 )
  {
    v3 = *a1;
    if ( v3 )
    {
      for ( i = 0; i != v1; ++i )
      {
        v5 = (_QWORD *)(v3 + 72 * i);
        if ( v5[4] )
        {
          v5[5] = 0;
          qfree();
        }
        if ( v5[1] )
        {
          v5[2] = 0;
          qfree();
        }
        v3 = *a1;
      }
      a1[1] = 0;
      qfree();
      *a1 = 0;
      a1[2] = 0;
    }
    v6 = (_QWORD *)a1[5];
    v7 = a1 + 5;
    while ( v7 != v6 )
    {
      v8 = v6;
      v6 = (_QWORD *)*v6;
      v9 = (_QWORD *)v8[2];
      v10 = *(void (**)(void))(*v9 + 24LL);
      if ( (char *)v10 == (char *)sub_157D60 )
      {
        v11 = (void (__fastcall *)(_QWORD))v9[2];
        v12 = (_QWORD *)(v9[1] + v9[3]);
        if ( ((unsigned __int8)v11 & 1) != 0 )
          v11 = *(void (__fastcall **)(_QWORD))((char *)v11 + *v12 - 1);
        v11(v12);
      }
      else
      {
        v10();
      }
    }
  }
}

