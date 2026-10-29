/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140068920
// Address: 0x0000000140068920

//----- (0000000140068920) ----------------------------------------------------
void __fastcall sub_140068920(__int64 a1, __int128 *a2, __int64 a3)
{
  __int64 v3; // rsi
  __int128 v6; // xmm0
  unsigned __int64 v7; // r8
  __int128 v8; // xmm1
  __int64 v9; // xmm2_8
  __int64 v10; // rcx
  _QWORD *v11; // rax

  if ( a3 )
  {
    v3 = a3;
    do
    {
      v6 = *a2;
      v7 = *(_QWORD *)(a1 + 8) + 1LL;
      v8 = a2[1];
      v9 = *((_QWORD *)a2 + 4);
      if ( v7 > *(_QWORD *)(a1 + 16) )
      {
        v6 = *a2;
        *(_QWORD *)a1 = sub_14005ABE0(a1, *(void **)a1, v7, 0x28u);
      }
      a2 = (__int128 *)((char *)a2 + 40);
      v10 = 5LL * *(_QWORD *)(a1 + 8);
      v11 = *(_QWORD **)a1;
      *(_OWORD *)&v11[v10] = v6;
      *(_OWORD *)&v11[v10 + 2] = v8;
      v11[v10 + 4] = v9;
      ++*(_QWORD *)(a1 + 8);
      --v3;
    }
    while ( v3 );
  }
}
