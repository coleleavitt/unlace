/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006F920
// Address: 0x000000010006F920

//----- (000000010006F920) ----------------------------------------------------
__int64 __fastcall sub_10006F920(__int64 a1)
{
  if ( !strcmp(*(const char **)(a1 + 64), "irs") )
    return sub_10006AA90(*(_QWORD *)(a1 + 32));
  else
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(xmmword_1000AE410 + 232))(*(_QWORD *)(a1 + 88), 0xFFFFFFFFLL);
}
// 1000AE410: using guessed type __int128 xmmword_1000AE410;
