/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6D9D0
// Address: 0x0006D9D0

//----- (0006D9D0) --------------------------------------------------------
int __cdecl sub_6D9D0(_DWORD *a1, int a2)
{
  _DWORD *v2; // edx
  int v3; // edi
  int v4; // esi
  int v5; // eax
  int v6; // ecx
  const char *v7; // ecx
  unsigned int v8; // ecx
  int v10; // [esp+4h] [ebp-28h]
  size_t v11; // [esp+10h] [ebp-1Ch]
  int v12; // [esp+14h] [ebp-18h]
  const char *v13; // [esp+18h] [ebp-14h]

  v2 = a1;
  v3 = a1[8] - 1;
  if ( v3 >= 0 )
  {
    v4 = 28 * a1[8] - 4;
    v5 = a2;
    do
    {
      v6 = v2[7];
      if ( *(_DWORD *)(v6 + v4 - 4) == v5 )
      {
        if ( !*(_BYTE *)(v5 + 13) )
        {
          LOBYTE(v5) = 1;
          return v5;
        }
        v12 = v2[7];
        LOBYTE(v6) = 1;
        v10 = v6;
        v7 = byte_EF875;
        if ( *(_DWORD *)(v5 + 4) )
          v7 = *(const char **)v5;
        v13 = v7;
        v11 = strlen(v7);
        v2 = a1;
        v8 = a1[1];
        if ( (unsigned int)v13 <= v8 && v8 <= (unsigned int)&v13[v11] )
          return v10;
        v5 = a2;
        if ( a1[10] > *(_DWORD *)(v12 + v4) )
          return v10;
      }
      v4 -= 28;
      --v3;
    }
    while ( v3 >= 0 );
  }
  return 0;
}
