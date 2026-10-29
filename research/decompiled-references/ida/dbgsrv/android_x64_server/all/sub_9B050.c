/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9B050
// Address: 0x000000000009B050

//----- (000000000009B050) ----------------------------------------------------
__int64 __fastcall sub_9B050(__int64 a1, _QWORD *a2, const char **a3, int a4)
{
  __int64 v4; // rax
  __int64 v5; // rdi

  v4 = *(_QWORD *)(a1 + 400);
  v5 = v4 - 192;
  if ( !v4 )
    v5 = 0;
  return sub_9A5F0(v5, a2, a3, a4);
}
