/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140063590
// Address: 0x0000000140063590

//----- (0000000140063590) ----------------------------------------------------
int __fastcall sub_140063590(__int64 a1)
{
  intptr_t v2; // rcx
  int result; // eax

  v2 = *(_QWORD *)(a1 + 584);
  if ( v2 != -1 )
  {
    result = findclose(v2);
    *(_QWORD *)(a1 + 584) = -1;
  }
  return result;
}
