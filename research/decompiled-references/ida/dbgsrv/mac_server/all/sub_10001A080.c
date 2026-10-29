/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001A080
// Address: 0x000000010001A080

//----- (000000010001A080) ----------------------------------------------------
void __fastcall sub_10001A080(__int64 a1)
{
  void *v2; // rdi

  *(_DWORD *)(a1 + 20) = 8;
  *(_WORD *)(a1 + 24) = 0;
  sub_100009B00(a1 + 32, *(_QWORD **)(a1 + 40));
  *(_QWORD *)(a1 + 32) = a1 + 40;
  *(_OWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  *(_OWORD *)(a1 + 104) = 0;
  *(_OWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  v2 = *(void **)(a1 + 144);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 152) = 0;
    qfree(v2);
    *(_QWORD *)(a1 + 144) = 0;
    *(_QWORD *)(a1 + 160) = 0;
  }
  *(_QWORD *)(a1 + 168) = 0;
  *(_OWORD *)(a1 + 56) = -1;
  *(_OWORD *)(a1 + 72) = -1;
}
