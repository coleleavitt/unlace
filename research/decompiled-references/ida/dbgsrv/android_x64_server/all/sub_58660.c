/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_58660
// Address: 0x0000000000058660

//----- (0000000000058660) ----------------------------------------------------
__int64 __fastcall sub_58660(__int64 a1, __int64 a2, int a3)
{
  const char *v4; // rax

  v4 = sub_58370(a2, a3);
  sub_37F60(a1, v4);
  if ( *(_QWORD *)(a1 + 8) <= 1u )
    sub_3BBA0(a1, "%08X", a3);
  return a1;
}
