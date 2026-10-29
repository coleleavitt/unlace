/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9B070
// Address: 0x000000000009B070

//----- (000000000009B070) ----------------------------------------------------
__int64 __fastcall sub_9B070(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  __int64 v4; // rdi

  v3 = *(_QWORD *)(a1 + 400);
  v4 = v3 - 192;
  if ( !v3 )
    v4 = 0;
  return sub_9AF00(v4, a2, a3);
}
