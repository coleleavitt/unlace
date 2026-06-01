/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001B870
// Address: 0x000000010001B870

//----- (000000010001B870) ----------------------------------------------------
size_t __fastcall sub_10001B870(__int64 a1, off_t a2, void *a3, size_t a4)
{
  off_t v6; // x22
  off_t v8; // x8
  __int64 v10; // x0
  __int64 _28; // [xsp+28h] [xbp+8h]

  v6 = a2;
  if ( (*(_BYTE *)(a1 + 48) & 1) == 0 )
  {
    v8 = *(_QWORD *)(a1 + 40);
    if ( !v8 || v8 > a2 )
      v6 = *(_QWORD *)(a1 + 32) + a2;
  }
  if ( qlseek(*(_QWORD *)(a1 + 24), v6, 0) != v6 )
    return -1;
  v10 = *(_QWORD *)(a1 + 24);
  if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return qlread(v10, a3, a4);
}
// 10001B8E8: variable '_28' is possibly undefined
