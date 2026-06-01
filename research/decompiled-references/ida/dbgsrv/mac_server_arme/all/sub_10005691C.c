/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005691C
// Address: 0x000000010005691C

//----- (000000010005691C) ----------------------------------------------------
_BYTE *__fastcall sub_10005691C(_QWORD **a1, unsigned int a2)
{
  _BYTE *result; // x0
  size_t v4; // x20
  _QWORD *v5; // x22
  unsigned __int64 v6; // x21
  _QWORD *v7; // x8
  char v8; // [xsp+4h] [xbp-2Ch] BYREF
  _BYTE __src[3]; // [xsp+5h] [xbp-2Bh] BYREF
  __int64 v10; // [xsp+8h] [xbp-28h] BYREF

  result = pack_dw(__src, (unsigned __int64)&v10, a2);
  v4 = result - __src;
  if ( result != __src )
  {
    v5 = a1[1];
    if ( __CFADD__(v5, v4) )
      v6 = 0x7FFFFFFFFFFFFFFFLL;
    else
      v6 = (unsigned __int64)v5 + v4;
    if ( (unsigned __int64)v5 >= v6 )
    {
      if ( v5 != (_QWORD *)v6 )
      {
        v8 = 0;
        sub_10001B764(a1, v6, &v8);
      }
    }
    else
    {
      v7 = *a1;
      if ( (unsigned __int64)a1[2] < v6 )
      {
        v7 = qvector_reserve(a1, *a1, v6, 1u);
        *a1 = v7;
      }
      bzero((char *)a1[1] + (_QWORD)v7, v6 - (_QWORD)a1[1]);
      a1[1] = (_QWORD *)v6;
    }
    return memcpy((char *)v5 + (_QWORD)*a1, __src, v4);
  }
  return result;
}
