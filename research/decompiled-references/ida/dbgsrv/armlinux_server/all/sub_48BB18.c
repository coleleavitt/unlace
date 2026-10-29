/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48BB18
// Address: 0x000000000048BB18

//----- (000000000048BB18) ----------------------------------------------------
size_t __fastcall sub_48BB18(__int64 a1, unsigned __int64 a2, void *dest, size_t a4)
{
  unsigned __int64 v5; // x4
  size_t v6; // x2
  size_t v7; // x19

  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 < a2 )
  {
    memcpy(dest, (const void *)(*(_QWORD *)(a1 + 24) + v5), 0);
    return 0;
  }
  else
  {
    v6 = v5 - a2;
    if ( v5 - a2 > a4 )
      v6 = a4;
    v7 = v6;
    memcpy(dest, (const void *)(*(_QWORD *)(a1 + 24) + a2), v6);
    return v7;
  }
}
