__int64 __fastcall sub_22D2D0(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 i; // rbp
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (_QWORD *)(v2 + 144 * i);
        clear_tinfo_t();
        v6 = v5[5];
        if ( v6 )
        {
          v5[6] = 0;
          qfree(v6);
        }
        v7 = v5[2];
        if ( v7 )
        {
          v5[3] = 0;
          qfree(v7);
        }
        v2 = *a1;
      }
    }
    a1[1] = 0;
    return qfree(v2);
  }
  return result;
}
