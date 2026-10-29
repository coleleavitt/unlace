__int64 __fastcall sub_10BCD0(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r14
  __int64 v4; // r12
  __int64 v5; // rbp
  _QWORD *v6; // rbx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      v4 = 0;
      v5 = 0;
      do
      {
        v6 = (_QWORD *)(v2 + v4);
        if ( *(_QWORD *)(v2 + v4 + 144) )
        {
          v6[19] = 0;
          qfree();
        }
        if ( v6[14] )
        {
          v6[15] = 0;
          qfree();
        }
        if ( v6[10] )
        {
          v6[11] = 0;
          qfree();
        }
        clear_tinfo_t();
        if ( v6[5] )
        {
          v6[6] = 0;
          qfree();
        }
        if ( v6[1] )
        {
          v6[2] = 0;
          qfree();
        }
        ++v5;
        v4 += 200;
        clear_tinfo_t();
        v2 = *a1;
      }
      while ( v3 != v5 );
    }
    a1[1] = 0;
    return qfree();
  }
  return result;
}

