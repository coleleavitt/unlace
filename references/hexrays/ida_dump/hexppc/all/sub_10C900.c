__int64 __fastcall sub_10C900(__int64 a1, int a2)
{
  int v2; // ecx
  int v3; // ebp
  __int64 v4; // r13
  int v5; // edx

  sub_136150(*(_QWORD *)(a1 + 40));
  v2 = 2 * a2;
  v3 = 1 << (2 * a2);
  v4 = a1 + 64LL * a2 + 56;
  if ( (*(_DWORD *)(a1 + 48) & v3) != 0 )
  {
    if ( *(_DWORD *)(32LL * v2 + a1 + 80) )
    {
      return 0;
    }
    else
    {
      v5 = 258;
      if ( a2 != 2 )
      {
        v5 = 130;
        if ( a2 <= 0 )
          v5 = 2;
      }
      sub_10C570(a1, a1 + 32LL * v2 + 56, v5);
      ++*(_DWORD *)(a1 + 52);
      *(_DWORD *)(a1 + 48) &= ~v3;
    }
  }
  return v4;
}
