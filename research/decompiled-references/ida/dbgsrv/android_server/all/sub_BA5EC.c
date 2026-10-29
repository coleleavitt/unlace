/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BA5EC
// Address: 0x00000000000BA5EC

//----- (00000000000BA5EC) ----------------------------------------------------
size_t __fastcall sub_BA5EC(__int64 a1, unsigned __int64 a2, void *dest, size_t a4)
{
  unsigned __int64 v4; // x8
  unsigned __int64 v5; // x10
  size_t v6; // x8
  size_t v7; // x19

  __break(1u);
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 >= a2 )
    v5 = a2;
  else
    v5 = *(_QWORD *)(a1 + 8);
  v6 = v4 - v5;
  if ( v6 >= a4 )
    v7 = a4;
  else
    v7 = v6;
  memcpy(dest, (const void *)(*(_QWORD *)(a1 + 24) + v5), v7);
  return v7;
}
