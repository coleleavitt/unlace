__int64 __fastcall sub_238E70(__int64 a1, double a2)
{
  const char *v2; // rsi
  int v3; // r12d
  _QWORD *v4; // rbx

  do
  {
    v4 = *(_QWORD **)(a1 + 8);
    if ( v4 )
    {
      if ( !*(_DWORD *)a1 )
      {
        v2 = *(const char **)(a1 + 8);
        *(_QWORD *)(a1 + 8) = *v4;
        v3 = sub_238AE0((double *)a1, (__int64)v2, a2);
        sub_238680((__int64)v4, v2);
        operator delete(v4, 0x38u);
        if ( v3 > 0 )
          continue;
      }
    }
    return 0;
  }
  while ( !*(_DWORD *)a1 );
  return 1;
}
