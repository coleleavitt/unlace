/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43D268
// Address: 0x000000000043D268

//----- (000000000043D268) ----------------------------------------------------
void *__fastcall sub_43D268(_QWORD *a1, __int64 a2, void *a3, signed __int64 a4)
{
  if ( a1[3] - a2 < a4 )
    sub_406900();
  return memcpy(a3, (const void *)(*a1 + a2), a4);
}
