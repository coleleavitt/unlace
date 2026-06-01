/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005B6B4
// Address: 0x000000010005B6B4

//----- (000000010005B6B4) ----------------------------------------------------
_BYTE *__fastcall sub_10005B6B4(_QWORD **a1, _QWORD *a2)
{
  __int64 v4; // x21
  _BYTE *result; // x0
  __int64 v6; // x22
  __int64 v7; // x21
  __int64 v8; // x23

  v4 = a2[1];
  result = sub_10002CF84(a1, v4);
  if ( (int)v4 >= 1 )
  {
    v6 = 0;
    v7 = v4 & 0x7FFFFFFF;
    do
    {
      v8 = *a2 + v6;
      sub_1000500AC(a1, *(_QWORD *)v8 + 1LL);
      sub_1000500AC(a1, *(_QWORD *)(v8 + 8) + 1LL);
      sub_1000500AC(a1, *(_QWORD *)(v8 + 16) + 1LL);
      result = sub_10002CF84(a1, *(unsigned __int8 *)(v8 + 24));
      v6 += 32;
      --v7;
    }
    while ( v7 );
  }
  return result;
}
