/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: ps_pdwrite
// Address: 0x0000000000413290

//----- (0000000000413290) ----------------------------------------------------
__int64 __fastcall ps_pdwrite(unsigned int *a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v6; // w4
  __int64 result; // x0
  __int64 (__fastcall **v10)(); // [xsp+30h] [xbp-20h] BYREF
  unsigned int v11; // [xsp+38h] [xbp-18h]
  __int64 v12; // [xsp+40h] [xbp-10h]

  v6 = *a1;
  v10 = &off_519A58;
  v11 = v6;
  v12 = 0;
  sub_461B90((__int64 (__fastcall ***)(_QWORD, __int64))&v10);
  if ( !v12 )
    return 2;
  result = 1;
  if ( !*(_BYTE *)(v12 + 2053) && *(_DWORD *)(v12 + 2044) != -1 )
    return (int)sub_413008(v12, *a1, a2, a3, a4, 0) <= 0;
  return result;
}
// 519A58: using guessed type __int64 (__fastcall *off_519A58)();
