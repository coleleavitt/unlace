/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100051B10
// Address: 0x0000000100051B10

//----- (0000000100051B10) ----------------------------------------------------
__int64 __fastcall sub_100051B10(_QWORD *a1, __int64 a2)
{
  void *v3; // rdi
  void *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax
  signed __int64 v7; // rdx
  __int64 v8; // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm1

  v3 = *(void **)(a2 + 24);
  if ( v3 )
  {
    *(_QWORD *)(a2 + 32) = 0;
    qfree(v3);
    *(_QWORD *)(a2 + 24) = 0;
    *(_QWORD *)(a2 + 40) = 0;
  }
  v4 = *(void **)a2;
  if ( *(_QWORD *)a2 )
  {
    *(_QWORD *)(a2 + 8) = 0;
    qfree(v4);
    *(_QWORD *)a2 = 0;
    *(_QWORD *)(a2 + 16) = 0;
  }
  v5 = a1[1];
  v6 = *a1 + 72 * v5 - a2;
  if ( v6 >= 73 )
  {
    v7 = v6 / 0x48uLL - 1;
    v8 = a2 + 120;
    do
    {
      *(_QWORD *)(v8 - 120) = *(_QWORD *)(v8 - 48);
      *(_QWORD *)(v8 - 48) = 0;
      v9 = *(_OWORD *)(v8 - 40);
      *(_OWORD *)(v8 - 40) = 0;
      *(_OWORD *)(v8 - 112) = v9;
      *(_QWORD *)(v8 - 96) = *(_QWORD *)(v8 - 24);
      *(_QWORD *)(v8 - 24) = 0;
      v10 = *(_OWORD *)(v8 - 16);
      *(_OWORD *)(v8 - 16) = 0;
      *(_OWORD *)(v8 - 88) = v10;
      *(_OWORD *)(v8 - 72) = *(_OWORD *)v8;
      *(_QWORD *)(v8 - 56) = *(_QWORD *)(v8 + 16);
      v8 += 72;
    }
    while ( v7-- > 1 );
    v5 = a1[1];
  }
  a1[1] = v5 - 1;
  return a2;
}
