/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140003700
// Address: 0x0000000140003700

//----- (0000000140003700) ----------------------------------------------------
__int64 __fastcall sub_140003700(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  size_t v4; // r8

  if ( a1 != a2 )
  {
    v3 = *(_QWORD *)(a2 + 8);
    v4 = v3 - 1;
    if ( !v3 )
      v4 = 0;
    if ( v4 )
    {
      sub_140001810(a1, *(const void **)a2, v4);
      return a1;
    }
    *(_QWORD *)(a1 + 8) = 0;
  }
  return a1;
}
