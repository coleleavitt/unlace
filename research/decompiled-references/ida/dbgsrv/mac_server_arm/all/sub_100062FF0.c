/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100062FF0
// Address: 0x0000000100062FF0

//----- (0000000100062FF0) ----------------------------------------------------
__int64 __fastcall sub_100062FF0(__int64 a1)
{
  if ( !strcmp(*(const char **)(a1 + 64), "irs") )
    return sub_10005E2F0(*(_QWORD *)(a1 + 32));
  else
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(qword_10009DAD8 + 232))(*(_QWORD *)(a1 + 88), 0xFFFFFFFFLL);
}
// 10009DAD8: using guessed type __int64 qword_10009DAD8;
