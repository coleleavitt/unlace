/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: ps_pdread
// Address: 0x0000000000412898

//----- (0000000000412898) ----------------------------------------------------
__int64 __fastcall ps_pdread(unsigned int *a1, __off64_t a2, void *a3, int a4)
{
  unsigned int v6; // w4
  __int64 v9; // x20
  unsigned int v10; // w1
  int v11; // w0
  unsigned int v12; // w1
  int v14; // w0
  __int64 (__fastcall **v15)(); // [xsp+40h] [xbp-20h] BYREF
  unsigned int v16; // [xsp+48h] [xbp-18h]
  __int64 v17; // [xsp+50h] [xbp-10h]

  v6 = *a1;
  v15 = &off_519A58;
  v16 = v6;
  v17 = 0;
  sub_461B90((__int64 (__fastcall ***)(_QWORD, __int64))&v15);
  v9 = v17;
  if ( !v17 )
    return 2;
  v10 = *(_DWORD *)(v17 + 2048);
  v11 = *(unsigned __int8 *)(v17 + 2053);
  if ( v10 == -1 )
  {
LABEL_9:
    if ( !v11 && *(_DWORD *)(v9 + 2044) != -1 )
      return (int)sub_412600(v9, *a1, a2, a3, a4, 0) <= 0;
    return 1;
  }
  if ( !*(_BYTE *)(v17 + 2053) && *(_DWORD *)(v17 + 2044) != -1 )
  {
    v14 = sub_412600(v17, v10, a2, a3, a4, 0);
    v12 = 0;
    if ( v14 > 0 )
      return v12;
    v11 = *(unsigned __int8 *)(v9 + 2053);
    goto LABEL_9;
  }
  return 1;
}
// 519A58: using guessed type __int64 (__fastcall *off_519A58)();
