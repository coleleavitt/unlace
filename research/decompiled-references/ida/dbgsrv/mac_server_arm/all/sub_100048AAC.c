/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100048AAC
// Address: 0x0000000100048AAC

//----- (0000000100048AAC) ----------------------------------------------------
__int64 __fastcall sub_100048AAC(__int64 a1, int a2, int a3)
{
  int v6; // w23
  __int64 v7; // x22
  __int64 v9; // x0
  int v11[5]; // [xsp+0h] [xbp-50h] BYREF
  unsigned __int8 v12; // [xsp+17h] [xbp-39h] BYREF

  v6 = *(_DWORD *)(a1 + 80);
  if ( !v6 )
  {
    sub_10000EB00(a1, 0, 0, 0);
    v9 = sub_10000F3CC(a1);
    if ( (unsigned int)sub_10000DD1C(*(_DWORD *)(v9 + 4), *(unsigned int *)(v9 + 8), (char *)&v12) == a2 && v12 == a3 )
      return 0;
    return 0xFFFFFFFFLL;
  }
  if ( v6 < 1 )
    return 0xFFFFFFFFLL;
  v7 = 0;
  while ( !sub_10000E730(a1, v7, (__int64)v11)
       || (unsigned int)sub_10000DD1C(v11[0], (unsigned int)v11[1], (char *)&v12) != a2
       || v12 != a3 )
  {
    v7 = (unsigned int)(v7 + 1);
    if ( v6 == (_DWORD)v7 )
      return 0xFFFFFFFFLL;
  }
  return v7;
}
