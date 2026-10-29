/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9CB30
// Address: 0x000000000009CB30

//----- (000000000009CB30) ----------------------------------------------------
void __fastcall sub_9CB30(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi

  sub_90250((__int64 *)a1);
  sub_9CC60((char **)(a1 + 256));
  if ( *(_QWORD *)(a1 + 232) )
  {
    sub_9CE00((__int64 *)(a1 + 232), 0);
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
  sub_9CD50((char **)(a1 + 104));
}
