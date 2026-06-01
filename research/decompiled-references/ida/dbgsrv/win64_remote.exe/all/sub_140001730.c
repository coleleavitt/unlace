/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140001730
// Address: 0x0000000140001730

//----- (0000000140001730) ----------------------------------------------------
__int64 __fastcall sub_140001730(__int64 a1, const void *a2)
{
  size_t v4; // rax

  if ( a2 && (v4 = strlen((const char *)a2)) != 0 )
  {
    sub_140001810(a1, a2, v4);
    return a1;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
    return a1;
  }
}
