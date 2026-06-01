__int64 __fastcall sub_690A60(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
    reg_bin_op("StrWinStringTypes", 1, *(_QWORD *)a1, v1, 0, 0);
  else
    reg_delete("StrWinStringTypes", 0);
  reg_int_op("StrWinDisplayOnly", 1, *(_BYTE *)(a1 + 32) != 0, 0);
  reg_int_op("StrWinIgnoreHeads", 1, *(_BYTE *)(a1 + 34) != 0, 0);
  reg_int_op("StrWinOnly7Bit", 1, *(_BYTE *)(a1 + 33) != 0, 0);
  return reg_int_op("StrWinMinlen", 1, *(unsigned int *)(a1 + 24), 0);
}
