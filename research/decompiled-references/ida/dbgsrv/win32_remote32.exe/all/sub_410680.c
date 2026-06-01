/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_410680
// Address: 0x00410680

//----- (00410680) --------------------------------------------------------
void __userpurge sub_410680(_DWORD *a1@<ecx>, int a2@<ebx>, _DWORD *a3, int a4)
{
  unsigned int v5; // eax
  int v6; // eax
  int v7; // edi
  int v8; // edi
  int v9; // ebx
  int v10; // ecx
  int v11; // edi
  int v12; // edi
  int v13; // ebx
  int v14; // [esp-8h] [ebp-14h]
  int v15; // [esp-8h] [ebp-14h]

  v5 = a1[4] + 1;
  if ( a4 == 1 )
  {
    if ( a1[2] <= v5 )
      sub_40BF00(a1, a2, 1u);
    v10 = a1[2];
    v11 = a1[4];
    a1[3] &= v10 - 1;
    v12 = a1[3] + v11;
    v13 = 4 * (v12 & (v10 - 1));
    if ( !*(_DWORD *)(v13 + a1[1]) )
      *(_DWORD *)(v13 + a1[1]) = sub_4627C2(0x2Cu);
    v15 = *(_DWORD *)(a1[1] + 4 * (v12 & (a1[2] - 1)));
    *(_DWORD *)v15 = -1;
    *(_DWORD *)(v15 + 4) = 0;
    *(_DWORD *)(v15 + 8) = -1;
    *(_BYTE *)(v15 + 12) = 0;
    *(_DWORD *)(v15 + 16) = 0;
    sub_45AE50((_DWORD *)v15, a3);
    ++a1[4];
  }
  else
  {
    if ( a1[2] <= v5 )
      sub_40BF00(a1, a2, 1u);
    v6 = a1[2];
    v7 = a1[3] & (v6 - 1);
    a1[3] = v7;
    if ( !v7 )
      v7 = v6;
    v8 = v7 - 1;
    v9 = 4 * (v8 & (v6 - 1));
    if ( !*(_DWORD *)(v9 + a1[1]) )
      *(_DWORD *)(v9 + a1[1]) = sub_4627C2(0x2Cu);
    v14 = *(_DWORD *)(a1[1] + 4 * (v8 & (a1[2] - 1)));
    *(_DWORD *)v14 = -1;
    *(_DWORD *)(v14 + 4) = 0;
    *(_DWORD *)(v14 + 8) = -1;
    *(_BYTE *)(v14 + 12) = 0;
    *(_DWORD *)(v14 + 16) = 0;
    sub_45AE50((_DWORD *)v14, a3);
    a1[3] = v8;
    ++a1[4];
  }
}
