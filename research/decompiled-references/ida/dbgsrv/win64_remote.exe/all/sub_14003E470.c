/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14003E470
// Address: 0x000000014003E470

//----- (000000014003E470) ----------------------------------------------------
_QWORD *__fastcall sub_14003E470(__int64 a1)
{
  void **v2; // rsi

  if ( !*(_BYTE *)(a1 + 720) )
  {
    v2 = *(void ***)(a1 + 648);
    if ( v2 )
    {
      sub_14000A670((__int64)(v2 + 3));
      sub_1400363A0((__int64)(v2 + 1), (_QWORD **)v2[1]);
      j_j_free(v2[1]);
      j_j_free(v2);
    }
  }
  *(_QWORD *)(a1 + 648) = 0;
  *(_BYTE *)(a1 + 720) = 0;
  return sub_140039A40(a1 + 656);
}
