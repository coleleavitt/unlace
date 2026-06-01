/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_50628
// Address: 0x00050628

//----- (00050628) --------------------------------------------------------
int __fastcall sub_50628(int a1, int a2, int a3)
{
  int result; // r0
  int v6; // r3
  int v7; // r3
  unsigned int v8; // r3
  int v9; // r2
  bool v10; // cf
  int v11; // r3
  int v12; // r2
  _BYTE v13[8]; // [sp+0h] [bp+0h] BYREF
  unsigned int v14; // [sp+8h] [bp+8h]
  int v15; // [sp+Ch] [bp+Ch]

  for ( result = sub_5055C(a1, a2, a3); ; *(_DWORD *)(a2 + 12) = v9 - (result + !v10) )
  {
    while ( 1 )
    {
      v6 = *(_DWORD *)(a1 + 592);
      v14 = 0;
      v15 = 0;
      v13[0] = 1;
      v7 = *(unsigned __int16 *)(v6 + 12);
      if ( v7 != 43 )
        break;
      sub_5055C(a1, (int)v13, 1);
      v11 = *(_DWORD *)(a2 + 8);
      v12 = *(_DWORD *)(a2 + 12);
      result = v15;
      v10 = __CFADD__(v11, v14);
      *(_DWORD *)(a2 + 8) = v11 + v14;
      *(_DWORD *)(a2 + 12) = v12 + v10 + result;
    }
    if ( v7 != 45 )
      break;
    sub_5055C(a1, (int)v13, 1);
    v8 = *(_DWORD *)(a2 + 8);
    v9 = *(_DWORD *)(a2 + 12);
    result = v15;
    v10 = v8 >= v14;
    *(_DWORD *)(a2 + 8) = v8 - v14;
  }
  return result;
}
