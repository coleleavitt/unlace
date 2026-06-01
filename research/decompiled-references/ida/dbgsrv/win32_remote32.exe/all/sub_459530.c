/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_459530
// Address: 0x00459530

//----- (00459530) --------------------------------------------------------
int __cdecl sub_459530(int a1, unsigned __int8 *a2, int a3, _WORD *a4, _DWORD *a5)
{
  unsigned int v5; // edx
  int v6; // ebx
  int v7; // esi
  int v9; // edx
  int v10; // eax
  int v11; // ebx

  v5 = 55296;
  v6 = *(_DWORD *)(a1 + 24);
  v7 = *(_DWORD *)a1 ^ 1;
  if ( (v6 & 2) == 0 )
    v7 = *(_DWORD *)a1;
  if ( a3 < 4 )
  {
    *sub_46B984() = 22;
    return -1;
  }
  if ( v7 == 12000 )
  {
    v9 = a2[1] | (*((unsigned __int16 *)a2 + 1) << 8);
    v10 = *a2;
LABEL_9:
    v5 = v10 | (v9 << 8);
    goto LABEL_10;
  }
  if ( v7 == 12001 )
  {
    v9 = a2[2] | ((a2[1] | (*a2 << 8)) << 8);
    v10 = a2[3];
    goto LABEL_9;
  }
LABEL_10:
  if ( (*(_BYTE *)(a1 + 4) & 1) != 0 && (v6 & 1) == 0 )
  {
    v11 = v6 | 1;
    *(_DWORD *)(a1 + 24) = v11;
    if ( v5 == -131072 )
    {
      *(_DWORD *)(a1 + 24) = v11 | 2;
LABEL_14:
      *a5 = 0;
      return 4;
    }
    if ( v5 == 65279 )
      goto LABEL_14;
  }
  if ( (v5 < 0xD800 || v5 > 0xDFFF) && v5 <= 0x10FFFF )
  {
    sub_459260(v5, a4, a5);
    return 4;
  }
  else
  {
    *sub_46B984() = 42;
    return -1;
  }
}
