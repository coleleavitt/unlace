/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400536F0
// Address: 0x00000001400536F0

//----- (00000001400536F0) ----------------------------------------------------
void __fastcall sub_1400536F0(const void *a1, __int64 a2)
{
  __int64 v2; // rdi
  size_t v4; // rax

  v2 = a2 + 56;
  if ( a1 && (v4 = strlen((const char *)a1)) != 0 )
    sub_140001810(v2, a1, v4);
  else
    *(_QWORD *)(v2 + 8) = 0;
}
