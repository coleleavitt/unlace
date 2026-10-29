/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1CFA4
// Address: 0x0001CFA4

//----- (0001CFA4) --------------------------------------------------------
bool __fastcall sub_1CFA4(int a1, int a2)
{
  int v2; // r4
  int v3; // r3
  int v4; // r6
  int v5; // r2
  int v7; // r5
  int i; // r7

  v2 = a1;
  v3 = *(_DWORD *)(a1 + 228);
  v4 = a2;
  if ( v3 )
  {
    v3 = 1;
    *(_BYTE *)(a1 + 1112) = 1;
    if ( a2 )
      return sub_1C560(a1, a2, 0, v3) != 0;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 64) == *(_DWORD *)(a1 + 80) )
      v3 = (unsigned __int8)sub_1613C(a1) ^ 1;
    v5 = *(_DWORD *)(v2 + 1100);
    *(_BYTE *)(v2 + 1112) = v3;
    if ( v5 )
    {
      v3 = *(_DWORD *)(v2 + 1108);
      if ( !v3 )
      {
        v7 = *(_DWORD *)(v2 + 1092);
        for ( i = v2 + 1084; v7 != i; v7 = sub_81478(v7) )
          sub_1A244((_DWORD *)(v2 + 264), (unsigned int *)(v7 + 16));
        sub_19C20(v2 + 1080, *(_DWORD **)(v2 + 1088));
        v3 = 0;
        *(_DWORD *)(v2 + 1092) = i;
        *(_DWORD *)(v2 + 1096) = i;
        *(_DWORD *)(v2 + 1088) = 0;
        *(_DWORD *)(v2 + 1100) = 0;
      }
    }
    a2 = v4;
    a1 = v2;
    if ( v4 )
      return sub_1C560(a1, a2, 0, v3) != 0;
  }
  return sub_1C560(a1, a2, 1, v3) != 0;
}
// 81478: using guessed type int __fastcall sub_81478(_DWORD);
