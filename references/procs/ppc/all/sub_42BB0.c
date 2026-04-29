__int64 __fastcall sub_42BB0(__int64 *a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v5; // rdi
  __int64 v6; // r13
  __int64 i; // rbp
  _QWORD *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 result; // rax

  v5 = *a1;
  if ( v5 )
  {
    v6 = a1[1];
    if ( v6 )
    {
      for ( i = 0; i != v6; ++i )
      {
        v8 = (_QWORD *)(v5 + 144 * i);
        clear_tinfo_t(v8 + 8);
        v9 = v8[5];
        if ( v9 )
        {
          v8[6] = 0;
          qfree(v9, a2, a3, a4);
        }
        v10 = v8[2];
        if ( v10 )
        {
          v8[3] = 0;
          qfree(v10, a2, a3, a4);
        }
        v5 = *a1;
      }
    }
    a1[1] = 0;
    return qfree(v5, a2, a3, a4);
  }
  return result;
}
