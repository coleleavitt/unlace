/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140047880
// Address: 0x0000000140047880

//----- (0000000140047880) ----------------------------------------------------
void __fastcall sub_140047880(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  sub_1400485F0(a1);
  if ( *(_QWORD *)(a1 + 256) )
  {
    sub_14001A6C0((_QWORD *)(a1 + 256), 0);
    j_free(*(void **)(a1 + 256));
    *(_QWORD *)(a1 + 256) = 0;
    *(_QWORD *)(a1 + 272) = 0;
  }
  sub_140047660((void **)(a1 + 232));
  v2 = *(void **)(a1 + 192);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 200) = 0;
    j_free(v2);
    *(_QWORD *)(a1 + 192) = 0;
    *(_QWORD *)(a1 + 208) = 0;
  }
  v3 = *(void **)(a1 + 128);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 136) = 0;
    j_free(v3);
    *(_QWORD *)(a1 + 128) = 0;
    *(_QWORD *)(a1 + 144) = 0;
  }
  if ( *(_QWORD *)(a1 + 104) )
  {
    sub_14004DFD0((_QWORD *)(a1 + 104), 0);
    j_free(*(void **)(a1 + 104));
    *(_QWORD *)(a1 + 104) = 0;
    *(_QWORD *)(a1 + 120) = 0;
  }
}
