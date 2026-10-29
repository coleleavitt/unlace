/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_472E50
// Address: 0x0000000000472E50

//----- (0000000000472E50) ----------------------------------------------------
__int64 __fastcall sub_472E50(__int64 a1)
{
  if ( !strcmp(*(const char **)(a1 + 64), "irs") )
    return sub_46EFF0(*(_QWORD *)(a1 + 32));
  else
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(qword_4C83E0 + 232))(*(_QWORD *)(a1 + 88), 0xFFFFFFFFLL);
}
// 4C83E0: using guessed type __int64 qword_4C83E0;
