/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002CAD4
// Address: 0x000000010002CAD4

//----- (000000010002CAD4) ----------------------------------------------------
_QWORD *__fastcall sub_10002CAD4(_QWORD *result, const void *a2, size_t a3)
{
  __int64 v4; // x22
  _QWORD *v6; // x21
  char v7; // [xsp+7h] [xbp-29h] BYREF

  if ( a3 )
  {
    v4 = result[1];
    v7 = 0;
    v6 = result;
    sub_100019CE4((_QWORD **)result, v4 + a3, &v7);
    return memcpy((void *)(*v6 + v4), a2, a3);
  }
  return result;
}
