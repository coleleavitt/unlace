/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_90500
// Address: 0x0000000000090500

//----- (0000000000090500) ----------------------------------------------------
__int64 __fastcall sub_90500(_QWORD *a1, __int64 a2)
{
  void *v3; // rdi
  void *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax
  signed __int64 v7; // rdx
  __int128 *v8; // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int128 v11; // xmm3
  __int128 v12; // xmm4

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
    v7 = v6 / 0x48uLL - 2;
    v8 = (__int128 *)(a2 + 120);
    do
    {
      v9 = *(v8 - 3);
      v10 = *(v8 - 2);
      v11 = *(v8 - 1);
      v12 = *v8;
      *((_QWORD *)v8 - 6) = 0;
      *(__int128 *)((char *)v8 - 120) = v9;
      *(__int128 *)((char *)v8 - 40) = 0;
      *(__int128 *)((char *)v8 - 104) = v10;
      *((_QWORD *)v8 - 3) = 0;
      *(__int128 *)((char *)v8 - 88) = v11;
      *(v8 - 1) = 0;
      *(__int128 *)((char *)v8 - 72) = v12;
      *((_QWORD *)v8 - 7) = *((_QWORD *)v8 + 2);
      v8 = (__int128 *)((char *)v8 + 72);
      --v7;
    }
    while ( v7 >= 0 );
    v5 = a1[1];
  }
  a1[1] = v5 - 1;
  return a2;
}
