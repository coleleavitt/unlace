/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47C990
// Address: 0x000000000047C990

//----- (000000000047C990) ----------------------------------------------------
__int64 *__fastcall sub_47C990(const char *a1)
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
      v6 = (void *)qword_522440;
      if ( v3 + 1 > qword_522450 )
      {
        v6 = sub_491288((__int64)&qword_522440, (void *)qword_522440, v3 + 1, 1u);
        qword_522440 = (__int64)v6;
      }
      qword_522448 = v5;
      memmove(v6, a1, v3);
      result = (__int64 *)qword_522440;
      *(_BYTE *)(qword_522440 + v3) = 0;
    }
    else
    {
      qword_522448 = 0;
      return &qword_522000;
    }
  }
  else
  {
    qword_522448 = 0;
    return &qword_522000;
  }
  return result;
}
// 522000: using guessed type __int64 qword_522000;
// 522440: using guessed type __int64 qword_522440;
// 522448: using guessed type __int64 qword_522448;
// 522450: using guessed type __int64 qword_522450;
