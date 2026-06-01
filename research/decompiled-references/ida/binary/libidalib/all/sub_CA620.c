__int64 __fastcall sub_CA620(unsigned __int64 *a1)
{
  __int64 v1; // rsi
  int v2; // r12d
  unsigned __int64 *v3; // rbx

  do
  {
    v3 = (unsigned __int64 *)a1[1];
    if ( v3 )
    {
      if ( !*(_DWORD *)a1 )
      {
        v1 = a1[1];
        a1[1] = *v3;
        v2 = sub_CA2A0(a1, v1);
        sub_C9E30((__int64)v3);
        operator delete(v3, 0x38u);
        if ( v2 > 0 )
          continue;
      }
    }
    return 0;
  }
  while ( !*(_DWORD *)a1 );
  return 1;
}

