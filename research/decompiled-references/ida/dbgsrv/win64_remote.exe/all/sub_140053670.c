/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140053670
// Address: 0x0000000140053670

//----- (0000000140053670) ----------------------------------------------------
void __fastcall sub_140053670(const void *a1, __int64 a2)
{
  __int64 v2; // rdi
  size_t v4; // rax

  v2 = a2 + 8;
  if ( a1 && (v4 = strlen((const char *)a1)) != 0 )
    sub_140001810(v2, a1, v4);
  else
    *(_QWORD *)(v2 + 8) = 0;
}
