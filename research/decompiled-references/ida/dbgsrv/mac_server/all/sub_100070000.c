/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100070000
// Address: 0x0000000100070000

//----- (0000000100070000) ----------------------------------------------------
bool __fastcall sub_100070000(__int64 a1, int a2)
{
  unsigned int v2; // r14d
  bool v3; // zf
  const char *v4; // rcx

  *(_DWORD *)(a1 + 76) = a2;
  v2 = (*(__int64 (__fastcall **)(_QWORD))(xmmword_1000AE410 + 184))(*(_QWORD *)(a1 + 88));
  *(_DWORD *)(a1 + 76) = -1;
  if ( v2 != 1 )
  {
    v3 = (*(unsigned int (__fastcall **)(_QWORD, _QWORD))(xmmword_1000AE410 + 232))(*(_QWORD *)(a1 + 88), v2) == 5;
    v4 = "openssl";
    if ( v3 )
      v4 = "irs";
    *(_QWORD *)(a1 + 64) = v4;
  }
  return v2 == 1;
}
// 1000AE410: using guessed type __int128 xmmword_1000AE410;
