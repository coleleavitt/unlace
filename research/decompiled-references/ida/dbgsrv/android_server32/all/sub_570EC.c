/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_570EC
// Address: 0x000570EC

//----- (000570EC) --------------------------------------------------------
int __fastcall sub_570EC(int a1, int a2, unsigned int a3, unsigned int a4, _DWORD *ptr, int a6, int a7)
{
  unsigned int v7; // r5
  int v9; // r7
  int v11; // r0
  int v14; // r7
  int v15; // r4
  _UNKNOWN **v16; // r4
  int v17; // r5
  int v19; // [sp+14h] [bp-14h]
  int *v20; // [sp+18h] [bp-10h]
  unsigned int v21; // [sp+24h] [bp-4h]
  int v22; // [sp+24h] [bp-4h]

  v7 = a4;
  v9 = a2;
  v11 = dword_DD690;
  if ( dword_DD690 == -1 )
  {
    v21 = a3;
    v14 = a1;
    v11 = qgetenv("IDA_IDB_BIN_SEARCH", 0);
    a1 = v14;
    v9 = a2;
    v7 = a4;
    a3 = v21;
    dword_DD690 = v11;
  }
  v15 = 0;
  if ( !v11 )
  {
    v22 = a1;
    sub_64B30(a1, "dbg_bin_search %a..%a\n");
    if ( a3 < v7 && ptr[1] && *(_DWORD *)(v22 + 200) )
    {
      if ( (a6 & 0x10) != 0 )
      {
        v16 = &off_D9E40;
        v19 = 0;
      }
      else
      {
        v16 = &off_D9E98;
        v19 = 4096;
      }
      v20 = (int *)operator new(0x104Cu);
      sub_5723C(v20, v9, v22, ptr, a6, a7);
      *v20 = (int)v16;
      v20[1042] = v19;
      v15 = ((int (__fastcall *)(int *, unsigned int, unsigned int))v16[2])(v20, a3, v7);
      if ( v15 == -7 )
      {
        v17 = v20[1034];
        v15 = -7;
        if ( v17 != -1 )
        {
          sub_64B30(v22, "dbg_bin_search failed to read memory at %a\n");
          if ( a7 )
          {
            if ( *(_DWORD *)(a7 + 4) <= 1u )
              sub_1DA58(a7, "Failed to read memory at %a\n", v17);
          }
        }
      }
    }
  }
  return v15;
}
// D9E40: using guessed type _UNKNOWN *off_D9E40;
// D9E98: using guessed type _UNKNOWN *off_D9E98;
// DD690: using guessed type int dword_DD690;
