/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47C788
// Address: 0x000000000047C788

//----- (000000000047C788) ----------------------------------------------------
__int64 *__fastcall sub_47C788(const char *a1)
{
  size_t v2; // x0
  size_t v3; // x20
  __int64 *result; // x0
  __int64 v5; // x23
  void *v6; // x0

  if ( a1 )
  {
    v2 = strlen(a1);
    v3 = v2;
    if ( v2 )
    {
      v5 = v2 + 1;
      v6 = (void *)qword_522428;
      if ( v3 + 1 > qword_522438 )
      {
        v6 = sub_491288((__int64)&qword_522428, (void *)qword_522428, v3 + 1, 1u);
        qword_522428 = (__int64)v6;
      }
      qword_522430 = v5;
      memmove(v6, a1, v3);
      result = (__int64 *)qword_522428;
      *(_BYTE *)(qword_522428 + v3) = 0;
    }
    else
    {
      qword_522430 = 0;
      return &qword_522000;
    }
  }
  else
  {
    qword_522430 = 0;
    return &qword_522000;
  }
  return result;
}
// 522000: using guessed type __int64 qword_522000;
// 522428: using guessed type __int64 qword_522428;
// 522430: using guessed type __int64 qword_522430;
// 522438: using guessed type __int64 qword_522438;
