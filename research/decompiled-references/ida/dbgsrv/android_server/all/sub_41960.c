/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41960
// Address: 0x0000000000041960

//----- (0000000000041960) ----------------------------------------------------
void __fastcall sub_41960(__int64 a1)
{
  void *v2; // x0
  void *v3; // x0
  void *v4; // x0
  void *v5; // x0

  v2 = *(void **)(a1 + 112);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 120) = 0;
    qfree(v2);
    *(_QWORD *)(a1 + 112) = 0;
    *(_QWORD *)(a1 + 128) = 0;
  }
  v3 = *(void **)(a1 + 88);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 96) = 0;
    qfree(v3);
    *(_QWORD *)(a1 + 88) = 0;
    *(_QWORD *)(a1 + 104) = 0;
  }
  sub_48970(a1 + 64, *(_QWORD **)(a1 + 72));
  v4 = *(void **)(a1 + 40);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 48) = 0;
    qfree(v4);
    *(_QWORD *)(a1 + 40) = 0;
    *(_QWORD *)(a1 + 56) = 0;
  }
  v5 = *(void **)(a1 + 16);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    qfree(v5);
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 32) = 0;
  }
}
