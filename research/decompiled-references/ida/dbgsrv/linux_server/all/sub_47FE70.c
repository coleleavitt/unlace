/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47FE70
// Address: 0x000000000047FE70

//----- (000000000047FE70) ----------------------------------------------------
__int64 __fastcall sub_47FE70(unsigned __int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // rbx

  v2 = (unsigned int)sub_47FD50(a1, a2);
  return v2 | (sub_47FD50(a1, a2) << 32);
}
