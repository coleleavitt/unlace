/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006F850
// Address: 0x000000010006F850

//----- (000000010006F850) ----------------------------------------------------
__int64 __fastcall sub_10006F850(__int64 a1)
{
  int v1; // r14d
  int v2; // eax
  const char *v3; // rcx

  v1 = (*(__int64 (__fastcall **)(_QWORD))(xmmword_1000AE410 + 312))(*(_QWORD *)(a1 + 88));
  if ( v1 <= 0 )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(xmmword_1000AE410 + 232))(*(_QWORD *)(a1 + 88), (unsigned int)v1);
    v3 = "openssl";
    if ( v2 == 5 )
      v3 = "irs";
    *(_QWORD *)(a1 + 64) = v3;
  }
  return v1;
}
// 1000AE410: using guessed type __int128 xmmword_1000AE410;
