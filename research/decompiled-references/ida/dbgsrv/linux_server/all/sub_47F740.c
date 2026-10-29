/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47F740
// Address: 0x000000000047F740

//----- (000000000047F740) ----------------------------------------------------
__int64 __fastcall sub_47F740(__int64 a1, __off64_t a2, int a3)
{
  __int64 result; // rax

  if ( !a1 )
    return -1;
  if ( *(int *)a1 <= 1 )
  {
    if ( (unsigned int)sub_480D20(*(FILE **)(a1 + 8), a2, a3) )
      return -1;
    else
      return sub_480CC0(*(FILE **)(a1 + 8));
  }
  else if ( a3 == 1 )
  {
    result = a2 + *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 24) = result;
  }
  else if ( a3 == 2 )
  {
    result = a2 + *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 24) = result;
  }
  else if ( a3 )
  {
    return *(_QWORD *)(a1 + 24);
  }
  else
  {
    *(_QWORD *)(a1 + 24) = a2;
    return a2;
  }
  return result;
}
