/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_473630
// Address: 0x0000000000473630

//----- (0000000000473630) ----------------------------------------------------
__int64 __fastcall sub_473630(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbp
  bool v3; // zf
  const char *v4; // rax

  LODWORD(result) = (*(__int64 (__fastcall **)(_QWORD))(qword_4C83E0 + 312))(*(_QWORD *)(a1 + 88));
  v2 = (int)result;
  if ( (int)result > 0 )
    return (int)result;
  v3 = (*(unsigned int (__fastcall **)(_QWORD, _QWORD))(qword_4C83E0 + 232))(*(_QWORD *)(a1 + 88), (unsigned int)result) == 5;
  v4 = "irs";
  if ( !v3 )
    v4 = "openssl";
  *(_QWORD *)(a1 + 64) = v4;
  return v2;
}
// 4C83E0: using guessed type __int64 qword_4C83E0;
