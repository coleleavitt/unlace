/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000B620
// Address: 0x000000014000B620

//----- (000000014000B620) ----------------------------------------------------
void __fastcall sub_14000B620(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  if ( *(_QWORD *)(a1 + 72) )
  {
    sub_14001A750((_QWORD *)(a1 + 72), 0);
    j_free(*(void **)(a1 + 72));
    *(_QWORD *)(a1 + 72) = 0;
    *(_QWORD *)(a1 + 88) = 0;
  }
  v2 = *(void **)(a1 + 48);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 56) = 0;
    j_free(v2);
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 64) = 0;
  }
  if ( *(_QWORD *)(a1 + 24) )
  {
    sub_14001A6C0((_QWORD *)(a1 + 24), 0);
    j_free(*(void **)(a1 + 24));
    *(_QWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 40) = 0;
  }
  v3 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    j_free(v3);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
}
