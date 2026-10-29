/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48C428
// Address: 0x000000000048C428

//----- (000000000048C428) ----------------------------------------------------
__int64 __fastcall sub_48C428(__int64 a1, __off64_t a2, int a3)
{
  __off64_t v3; // x3
  __off64_t v7; // x3

  if ( !a1 )
    return -1;
  if ( *(int *)a1 <= 1 )
  {
    if ( (unsigned int)sub_490650(*(FILE **)(a1 + 8), a2, a3) )
      return -1;
    else
      return sub_4905F0(*(FILE **)(a1 + 8));
  }
  else
  {
    v3 = a2;
    if ( a3 == 1 )
    {
      v3 = a2 + *(_QWORD *)(a1 + 24);
LABEL_9:
      *(_QWORD *)(a1 + 24) = v3;
      return v3;
    }
    if ( a3 != 2 )
    {
      if ( a3 )
        return *(_QWORD *)(a1 + 24);
      goto LABEL_9;
    }
    v7 = a2 + *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 24) = v7;
    return v7;
  }
}
