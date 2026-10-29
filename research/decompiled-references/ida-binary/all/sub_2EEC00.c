double __fastcall apply_md_chooser_t__::vfunc_0(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  double result; // xmm0_8
  __int64 v6; // rdi
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 v9; // r12
  _QWORD *v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  _QWORD *v16; // rbx
  _QWORD *v17; // rbp
  __int64 v18; // rdi

  *a1 = apply_md_chooser_t___vtable;
  v3 = a1[29];
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    a1[29] = 0;
  }
  v4 = a1[26];
  if ( v4 )
  {
    a1[27] = 0;
    result = qfree(v4, a2);
  }
  v6 = a1[23];
  if ( v6 )
  {
    v7 = a1[24];
    if ( v7 )
    {
      v8 = 0;
      v9 = 0;
      do
      {
        v10 = (_QWORD *)(v6 + v8);
        v11 = *(_QWORD *)(v6 + v8 + 144);
        if ( v11 )
        {
          v10[19] = 0;
          qfree(v11, a2);
        }
        v12 = v10[14];
        if ( v12 )
        {
          v10[15] = 0;
          qfree(v12, a2);
        }
        v13 = v10[10];
        if ( v13 )
        {
          v10[11] = 0;
          qfree(v13, a2);
        }
        clear_tinfo_t(v10 + 9);
        v14 = v10[5];
        if ( v14 )
        {
          v10[6] = 0;
          qfree(v14, a2);
        }
        v15 = v10[1];
        if ( v15 )
        {
          v10[2] = 0;
          qfree(v15, a2);
        }
        ++v9;
        v8 += 200;
        clear_tinfo_t(v10);
        v6 = a1[23];
      }
      while ( v7 != v9 );
    }
    a1[24] = 0;
    result = qfree(v6, a2);
  }
  v16 = a1 + 22;
  v17 = a1 + 10;
  *(v17 - 10) = &stru_86F6A0;
  do
  {
    v18 = *(v16 - 3);
    v16 -= 3;
    if ( v18 )
    {
      v16[1] = 0;
      result = qfree(v18, a2);
    }
  }
  while ( v17 != v16 );
  return result;
}
