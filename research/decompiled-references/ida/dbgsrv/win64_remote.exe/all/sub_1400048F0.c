/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400048F0
// Address: 0x00000001400048F0

//----- (00000001400048F0) ----------------------------------------------------
__int64 __fastcall sub_1400048F0(__int64 a1, const void *a2, size_t a3)
{
  __int64 v3; // rax
  __int64 v7; // rdi
  size_t v8; // rsi

  v3 = *(_QWORD *)(a1 + 8);
  v7 = v3 - 1;
  if ( !v3 )
    v7 = 0;
  v8 = v7 + a3 + 1;
  if ( v8 > *(_QWORD *)(a1 + 16) )
    *(_QWORD *)a1 = sub_14005ABE0(a1, *(void **)a1, v7 + a3 + 1, 1u);
  *(_QWORD *)(a1 + 8) = v8;
  *(_BYTE *)(v7 + *(_QWORD *)a1 + a3) = 0;
  memcpy((void *)(v7 + *(_QWORD *)a1), a2, a3);
  return a1;
}
