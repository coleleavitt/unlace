/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000E160
// Address: 0x000000014000E160

//----- (000000014000E160) ----------------------------------------------------
__int64 __fastcall sub_14000E160(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  size_t v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rsi
  size_t v8; // rbp

  v2 = *(_QWORD *)(a2 + 8);
  v5 = v2 - 1;
  if ( !v2 )
    v5 = 0;
  if ( v5 )
  {
    v6 = *(_QWORD *)(a1 + 8);
    v7 = v6 - 1;
    if ( !v6 )
      v7 = 0;
    v8 = v7 + v5 + 1;
    if ( v8 > *(_QWORD *)(a1 + 16) )
      *(_QWORD *)a1 = sub_14005ABE0(a1, *(void **)a1, v7 + v5 + 1, 1u);
    *(_QWORD *)(a1 + 8) = v8;
    *(_BYTE *)(v7 + *(_QWORD *)a1 + v5) = 0;
    memcpy((void *)(v7 + *(_QWORD *)a1), *(const void **)a2, v5);
  }
  return a1;
}
