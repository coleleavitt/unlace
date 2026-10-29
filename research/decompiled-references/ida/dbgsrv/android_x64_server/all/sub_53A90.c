/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_53A90
// Address: 0x0000000000053A90

//----- (0000000000053A90) ----------------------------------------------------
__int64 __fastcall sub_53A90(__int64 a1, __int64 a2)
{
  const char *v2; // rax

  v2 = sub_53470(a2);
  sub_37F60(a1, v2);
  if ( *(_QWORD *)(a1 + 8) <= 1u )
    sub_3BBA0(a1, "Unknown CPU [%u]", *(unsigned __int16 *)(a2 + 522));
  return a1;
}
