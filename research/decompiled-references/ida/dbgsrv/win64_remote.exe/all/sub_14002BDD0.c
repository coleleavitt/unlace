/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002BDD0
// Address: 0x000000014002BDD0

//----- (000000014002BDD0) ----------------------------------------------------
__int64 (__fastcall **__fastcall sub_14002BDD0(__int64 a1))()
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = *(void **)(a1 + 136);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 144) = 0;
    j_free(v2);
    *(_QWORD *)(a1 + 136) = 0;
    *(_QWORD *)(a1 + 152) = 0;
  }
  sub_14002BD20((void **)(a1 + 88));
  v3 = *(void **)(a1 + 64);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 72) = 0;
    j_free(v3);
    *(_QWORD *)(a1 + 64) = 0;
    *(_QWORD *)(a1 + 80) = 0;
  }
  sub_14002BC90(a1 + 40);
  sub_14000B020((void **)(a1 + 16));
  *(_QWORD *)a1 = &off_140094B78;
  return &off_140094B78;
}
// 140094B78: using guessed type __int64 (__fastcall *off_140094B78)();
