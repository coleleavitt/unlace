/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_97308
// Address: 0x0000000000097308

//----- (0000000000097308) ----------------------------------------------------
void __fastcall sub_97308(__int64 a1)
{
  void *v2; // x0
  void *v3; // x0

  sub_8A574((__int64 *)a1);
  sub_95F90(a1 + 256);
  if ( *(_QWORD *)(a1 + 232) )
  {
    sub_97494((__int64 *)(a1 + 232), 0);
    qfree(*(void **)(a1 + 232));
    *(_QWORD *)(a1 + 232) = 0;
    *(_QWORD *)(a1 + 248) = 0;
  }
  v2 = *(void **)(a1 + 192);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 200) = 0;
    qfree(v2);
    *(_QWORD *)(a1 + 192) = 0;
    *(_QWORD *)(a1 + 208) = 0;
  }
  v3 = *(void **)(a1 + 128);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 136) = 0;
    qfree(v3);
    *(_QWORD *)(a1 + 128) = 0;
    *(_QWORD *)(a1 + 144) = 0;
  }
  sub_973FC((char **)(a1 + 104));
}
