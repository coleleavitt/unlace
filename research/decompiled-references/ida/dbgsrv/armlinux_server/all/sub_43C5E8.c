/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43C5E8
// Address: 0x000000000043C5E8

//----- (000000000043C5E8) ----------------------------------------------------
void __fastcall sub_43C5E8(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x21

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
  {
    v3 = 32LL * *(_QWORD *)(v2 - 8);
    v4 = v2 + v3;
    if ( v2 != v2 + v3 )
    {
      while ( 1 )
      {
        sub_448310((__int64 *)(v4 - 32));
        v2 = *(_QWORD *)(a1 + 24);
        if ( v2 == v4 - 32 )
          break;
        v4 -= 32;
      }
    }
    j_j_j__free_0_1((void *)(v2 - 8));
  }
  j__free(*(void **)a1);
  j__free(*(void **)(a1 + 16));
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
}
