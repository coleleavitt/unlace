/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43CF60
// Address: 0x000000000043CF60

//----- (000000000043CF60) ----------------------------------------------------
__int64 sub_43CF60()
{
  unsigned __int8 v0; // w1
  _QWORD *v2; // x19

  v0 = atomic_load((unsigned __int8 *)&byte_522188);
  if ( (v0 & 1) != 0 || !(unsigned int)sub_49F4B8((unsigned __int8 *)&byte_522188) )
    return qword_522280;
  v2 = sub_49E050(0x80u);
  qword_522280 = (__int64)v2;
  *v2 = 0;
  v2[1] = 0;
  v2[2] = 0;
  v2[3] = 0;
  v2[4] = 0;
  v2[5] = 0;
  v2[6] = 0;
  v2[7] = 0;
  v2[8] = 0;
  v2[9] = 0;
  v2[10] = 0;
  v2[11] = 0;
  v2[12] = 0;
  v2[13] = 0;
  v2[14] = 0;
  *((_DWORD *)v2 + 30) = 0;
  *((_BYTE *)v2 + 124) = 0;
  sub_49F630((__int64)&byte_522188);
  return (__int64)v2;
}
// 522188: using guessed type char byte_522188;
// 522280: using guessed type __int64 qword_522280;
