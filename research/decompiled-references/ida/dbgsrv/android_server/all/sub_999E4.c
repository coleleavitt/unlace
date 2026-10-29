/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_999E4
// Address: 0x00000000000999E4

//----- (00000000000999E4) ----------------------------------------------------
__int64 __fastcall sub_999E4(__int64 a1, _QWORD *a2)
{
  __int64 v2; // x8
  __int64 v5; // x21
  unsigned __int64 v6; // x22

  v2 = *(_QWORD *)(a1 + 384);
  if ( v2 == a2[1] )
  {
    if ( !v2 )
      return 1;
    v5 = 0;
    v6 = 0;
    while ( sub_9D5C0(*(_QWORD *)(a1 + 376) + v5, *a2 + v5) )
    {
      ++v6;
      v5 += 80;
      if ( v6 >= *(_QWORD *)(a1 + 384) )
        return 1;
    }
  }
  return 0;
}
