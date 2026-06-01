/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46C68
// Address: 0x00046C68

//----- (00046C68) --------------------------------------------------------
int __fastcall sub_46C68(int a1, int a2)
{
  _DWORD *v5; // r0
  _DWORD *v6; // r7
  _DWORD *v7; // r4
  unsigned __int8 *v8; // r1
  _DWORD *v9; // r0
  _DWORD *i; // r2
  _DWORD *j; // r2
  int v12; // r3
  _DWORD *v13; // [sp+0h] [bp-Ch] BYREF

  if ( *(_BYTE *)a2 != 5 )
    return sub_45B30((unsigned __int8 *)a1, (unsigned __int8 *)a2);
  v5 = sub_808A4(0x20u);
  v6 = *(_DWORD **)(a2 + 8);
  v5[5] = 0;
  v5[3] = v5 + 1;
  v5[4] = v5 + 1;
  v7 = v5;
  v5[1] = 0;
  v5[2] = 0;
  v8 = (unsigned __int8 *)v6[2];
  if ( v8 )
  {
    v13 = v5;
    v9 = sub_46AFC((int)v5, v8, (int)(v5 + 1), (int)&v13);
    for ( i = v9; i[2]; i = (_DWORD *)i[2] )
      ;
    v7[3] = i;
    for ( j = v9; j[3]; j = (_DWORD *)j[3] )
      ;
    v7[4] = j;
    v12 = v6[5];
    v7[2] = v9;
    v7[5] = v12;
  }
  v7[6] = 1;
  v7[7] = v6[7];
  sub_45758((unsigned __int8 *)a1);
  *(_DWORD *)(a1 + 8) = v7;
  *(_BYTE *)a1 = 5;
  return 0;
}
