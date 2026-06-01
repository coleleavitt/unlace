/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47D6F0
// Address: 0x000000000047D6F0

//----- (000000000047D6F0) ----------------------------------------------------
__int64 *__fastcall sub_47D6F0(__int64 a1)
{
  __int64 *result; // x0
  __int64 v3; // x2
  __int64 v4; // x7
  __int64 v5; // x5
  __int64 v6; // x4
  const char *v7; // x1

  if ( *(_QWORD *)(a1 + 40) > 1u )
  {
    sub_47D588("certificate", *(const char **)(a1 + 32), 17);
    if ( *(_QWORD *)(a1 + 64) )
      v7 = *(const char **)(a1 + 56);
    else
      v7 = (const char *)&qword_4B2D48;
    sub_47D588("private key", v7, 17);
  }
  result = &qword_5223F8;
  v3 = qword_522430;
  if ( (unsigned __int64)qword_522430 > 1 )
  {
    v4 = qword_522428;
    v5 = qword_522438;
    v6 = *(_QWORD *)(a1 + 120);
    qword_522428 = *(_QWORD *)(a1 + 112);
    qword_522430 = v6;
    qword_522438 = *(_QWORD *)(a1 + 128);
    *(_QWORD *)(a1 + 112) = v4;
    *(_QWORD *)(a1 + 120) = v3;
    *(_QWORD *)(a1 + 128) = v5;
  }
  return result;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 5223F8: using guessed type __int64 qword_5223F8;
// 522428: using guessed type __int64 qword_522428;
// 522430: using guessed type __int64 qword_522430;
// 522438: using guessed type __int64 qword_522438;
