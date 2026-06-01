/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140024990
// Address: 0x0000000140024990

//----- (0000000140024990) ----------------------------------------------------
void __fastcall sub_140024990(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rbx

  v2 = *(_QWORD *)(a1 + 32);
  if ( !v2 )
  {
    if ( !*(_QWORD *)(a1 + 40) )
      *(_QWORD *)(a1 + 24) = sub_14005ABE0(a1 + 24, *(void **)(a1 + 24), 1u, 0x20u);
    v3 = *(_QWORD *)(a1 + 24);
    v4 = 32LL * *(_QWORD *)(a1 + 32);
    *(_BYTE *)(v4 + v3) = 2;
    *(_QWORD *)(v4 + v3 + 16) = 0;
    *(_QWORD *)(v4 + v3 + 24) = 0;
    *(_QWORD *)(v4 + v3 + 8) = 0;
    v2 = ++*(_QWORD *)(a1 + 32);
  }
  v5 = 32 * v2 + *(_QWORD *)(a1 + 24);
  sub_140021BB0(v5 - 32);
  sub_140023AB0(a1, v5 - 32);
}
