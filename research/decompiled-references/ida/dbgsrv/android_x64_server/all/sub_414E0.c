/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_414E0
// Address: 0x00000000000414E0

//----- (00000000000414E0) ----------------------------------------------------
__int64 __fastcall sub_414E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int128 v6; // xmm0
  size_t v7; // r12
  void *v9; // rax
  size_t v10; // r15
  void *v11; // rax

  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  v6 = 0;
  *(_OWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  v7 = *(_QWORD *)(a4 + 8);
  if ( v7 )
  {
    v9 = qalloc_or_throw(*(_QWORD *)(a4 + 8));
    *(_QWORD *)(a1 + 16) = v9;
    *(_QWORD *)(a1 + 32) = v7;
    memcpy(v9, *(const void **)a4, v7);
    v6 = 0;
    *(_QWORD *)(a1 + 24) = v7;
  }
  *(_OWORD *)(a1 + 40) = v6;
  *(_QWORD *)(a1 + 56) = 0;
  v10 = *(_QWORD *)(a5 + 8);
  if ( v10 )
  {
    v11 = qalloc_or_throw(*(_QWORD *)(a5 + 8));
    *(_QWORD *)(a1 + 40) = v11;
    *(_QWORD *)(a1 + 56) = v10;
    memcpy(v11, *(const void **)a5, v10);
    *(_QWORD *)(a1 + 48) = v10;
  }
  *(_OWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 64) = a1 + 72;
  *(_OWORD *)(a1 + 120) = 0;
  *(_OWORD *)(a1 + 104) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 136) = 0;
  return a1 + 72;
}
