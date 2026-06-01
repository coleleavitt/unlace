/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47D318
// Address: 0x000000000047D318

//----- (000000000047D318) ----------------------------------------------------
__int64 __fastcall sub_47D318(__int64 result)
{
  __int64 v1; // x19
  const char *v2; // x20
  FILE *v3; // x0
  const char *v4; // x0

  if ( (unsigned __int64)qword_522418 > 1 )
  {
    v1 = result;
    v2 = (const char *)qword_522410;
    v3 = sub_48DD60((const char *)qword_522410);
    *(_QWORD *)(v1 + 160) = v3;
    if ( v3 )
    {
      return sub_47B570((__int64)v3);
    }
    else
    {
      v4 = (const char *)sub_487060(-1);
      return sub_47B4D0("Cannot open log file \"%s\": %s\n", v2, v4);
    }
  }
  return result;
}
// 4C8FE0: using guessed type __int64 qword_4C8FE0[16];
// 522410: using guessed type __int64 qword_522410;
// 522418: using guessed type __int64 qword_522418;
