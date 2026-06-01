/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_472CF0
// Address: 0x0000000000472CF0

//----- (0000000000472CF0) ----------------------------------------------------
__int64 __fastcall sub_472CF0(__int64 a1, const char *a2)
{
  __int64 v2; // rbp
  __int64 result; // rax

  v2 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_4C83E0 + 184LL))(qword_4C83E0, a1);
  strlen(a2);
  result = sub_46EFD0(*(_QWORD *)(v2 + 32));
  if ( result <= 0 )
    *(_QWORD *)(v2 + 64) = "irs";
  return result;
}
// 4C83E0: using guessed type __int64 qword_4C83E0;
