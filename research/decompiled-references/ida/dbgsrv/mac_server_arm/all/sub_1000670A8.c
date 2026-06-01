/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000670A8
// Address: 0x00000001000670A8

//----- (00000001000670A8) ----------------------------------------------------
__int64 __fastcall sub_1000670A8(__int64 a1)
{
  __tag_iconv_t *v2; // x0
  void *v3; // x0
  void *v4; // x0

  v2 = *(__tag_iconv_t **)(a1 + 48);
  if ( v2 != (__tag_iconv_t *)-1LL )
  {
    iconv_close(v2);
    *(_QWORD *)(a1 + 48) = -1;
  }
  v3 = *(void **)(a1 + 24);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 32) = 0;
    qfree(v3);
    *(_QWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 40) = 0;
  }
  v4 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v4);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
  return a1;
}
