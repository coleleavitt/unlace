/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_52610
// Address: 0x0000000000052610

//----- (0000000000052610) ----------------------------------------------------
__int64 __fastcall sub_52610(__int64 a1, __int64 a2, int a3)
{
  const char *v4; // rax

  v4 = sub_57DA0(a2, a3);
  sub_37F60(a1, v4);
  if ( *(_QWORD *)(a1 + 8) <= 1u )
    sub_3BBA0(a1, "%X", a3);
  return a1;
}
