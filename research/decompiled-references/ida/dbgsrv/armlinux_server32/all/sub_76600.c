/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_76600
// Address: 0x00076600

//----- (00076600) --------------------------------------------------------
int __fastcall sub_76600(int a1, _DWORD *a2, char *name)
{
  int v6; // r4
  __int16 v8; // r3
  int v9; // r2
  int v10; // r3
  int v11; // r1
  __int16 v12; // r3
  struct tm v13; // [sp+Ch] [bp-1088h] BYREF
  _BYTE v14[12]; // [sp+38h] [bp-105Ch] BYREF
  int v15; // [sp+44h] [bp-1050h]
  int v16; // [sp+60h] [bp-1034h]
  int v17; // [sp+64h] [bp-1030h]
  int v18; // [sp+7Ch] [bp-1018h]
  char v19[4084]; // [sp+8Ch] [bp-1008h] BYREF

  v6 = fnmatch((const char *)(a1 + 8216), name, 21);
  if ( !v6 )
  {
    sub_76B98(v19, 4096, (unsigned __int8 *)(a1 + 4120), name, 0);
    v6 = sub_7749C((int)v19, (int)v14);
    if ( v6 )
      return 1;
    v8 = v15;
    v9 = *(_DWORD *)(a1 + 12312);
    *(_DWORD *)a1 = v15;
    if ( (v9 & 0x4000) == 0 && (v8 & 0x4000) != 0 )
    {
      return 1;
    }
    else
    {
      sub_70558((unsigned __int8 *)(a1 + 4), (unsigned __int8 *)name, 4096);
      v10 = v16;
      v11 = v17;
      *(_DWORD *)(a1 + 4100) = v16;
      if ( a2 )
      {
        *a2 = v10;
        a2[1] = v11;
      }
      sub_78FF8(&v13, v18);
      v12 = 32 * (LOWORD(v13.tm_mon) + 1) + ((LOWORD(v13.tm_year) - 80) << 9) + LOWORD(v13.tm_mday);
      *(_WORD *)(a1 + 4106) = 32 * LOWORD(v13.tm_min) + (LOWORD(v13.tm_hour) << 11) + v13.tm_sec / 2;
      *(_WORD *)(a1 + 4104) = v12;
    }
  }
  return v6;
}
