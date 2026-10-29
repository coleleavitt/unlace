/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47C838
// Address: 0x000000000047C838

//----- (000000000047C838) ----------------------------------------------------
__int64 *__fastcall sub_47C838(const char *a1)
{
  size_t v2; // x0
  size_t v3; // x20
  __int64 *result; // x0
  unsigned __int64 v5; // x22
  void *v6; // x0

  if ( a1 )
  {
    v2 = strlen(a1);
    v3 = v2;
    if ( v2 )
    {
      v5 = v2 + 1;
      v6 = (void *)qword_5223F8;
      if ( v5 > qword_522408 )
      {
        v6 = sub_491288((__int64)&qword_5223F8, (void *)qword_5223F8, v5, 1u);
        qword_5223F8 = (__int64)v6;
      }
      qword_522400 = v5;
      memmove(v6, a1, v3);
      result = (__int64 *)qword_5223F8;
      *(_BYTE *)(qword_5223F8 + v3) = 0;
    }
    else
    {
      qword_522400 = 0;
      return &qword_522000;
    }
  }
  else
  {
    qword_522400 = 0;
    return &qword_522000;
  }
  return result;
}
// 522000: using guessed type __int64 qword_522000;
// 5223F8: using guessed type __int64 qword_5223F8;
// 522400: using guessed type __int64 qword_522400;
// 522408: using guessed type __int64 qword_522408;
