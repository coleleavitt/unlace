/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47C8E0
// Address: 0x000000000047C8E0

//----- (000000000047C8E0) ----------------------------------------------------
__int64 *__fastcall sub_47C8E0(const char *a1)
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
      v6 = (void *)qword_522410;
      if ( v3 + 1 > qword_522420 )
      {
        v6 = sub_491288((__int64)&qword_522410, (void *)qword_522410, v3 + 1, 1u);
        qword_522410 = (__int64)v6;
      }
      qword_522418 = v5;
      memmove(v6, a1, v3);
      result = (__int64 *)qword_522410;
      *(_BYTE *)(qword_522410 + v3) = 0;
    }
    else
    {
      qword_522418 = 0;
      return &qword_522000;
    }
  }
  else
  {
    qword_522418 = 0;
    return &qword_522000;
  }
  return result;
}
// 522000: using guessed type __int64 qword_522000;
// 522410: using guessed type __int64 qword_522410;
// 522418: using guessed type __int64 qword_522418;
// 522420: using guessed type __int64 qword_522420;
