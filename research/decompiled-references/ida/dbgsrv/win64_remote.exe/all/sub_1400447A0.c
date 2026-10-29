/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400447A0
// Address: 0x00000001400447A0

//----- (00000001400447A0) ----------------------------------------------------
void __fastcall sub_1400447A0(__int64 a1, const void *a2)
{
  __int64 v2; // rdi
  size_t v4; // rax

  v2 = a1 + 240;
  if ( a2 && (v4 = strlen((const char *)a2)) != 0 )
    sub_140001810(v2, a2, v4);
  else
    *(_QWORD *)(v2 + 8) = 0;
}
