void __fastcall sub_1DF9A0(__int64 *a1)
{
  __int64 v1; // r10
  __int64 v2; // rbp
  __int64 v3; // r11
  int v4; // ebx
  int v5; // eax
  int v6; // ebx

  v1 = *a1;
  v2 = a1[1];
  if ( v2 != *a1 )
  {
    v3 = *a1;
    v4 = 4;
    do
    {
      if ( !*(_BYTE *)(v3 + 12) )
      {
        v5 = sub_1DF900(v3) + 1;
        if ( v4 < v5 )
          v4 = v5;
      }
      v3 += 56;
    }
    while ( v2 != v3 );
    v6 = v4 - 1;
    do
    {
      if ( !*(_BYTE *)(v1 + 12) )
        *(_DWORD *)(v1 + 40) = v6;
      v1 += 56;
    }
    while ( v2 != v1 );
  }
}
