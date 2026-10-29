/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005BC84
// Address: 0x000000010005BC84

//----- (000000010005BC84) ----------------------------------------------------
_BYTE *__fastcall sub_10005BC84(_BYTE *result, __int64 a2, int a3, __int64 a4)
{
  _QWORD **v6; // x21
  __int64 v7; // x22
  __int64 v8; // x23

  if ( a3 >= 1 )
  {
    v6 = (_QWORD **)result;
    v7 = 0;
    v8 = (unsigned int)a3;
    do
    {
      if ( !a4 || ((*(unsigned __int8 *)(a4 + ((unsigned int)v7 >> 3)) >> (v7 & 7)) & 1) != 0 )
        result = sub_10005BD04(v6, a2);
      ++v7;
      a2 += 32;
    }
    while ( v8 != v7 );
  }
  return result;
}
