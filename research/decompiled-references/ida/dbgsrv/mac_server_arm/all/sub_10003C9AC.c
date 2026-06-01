/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003C9AC
// Address: 0x000000010003C9AC

//----- (000000010003C9AC) ----------------------------------------------------
__int64 __usercall sub_10003C9AC@<X0>(__int64 a1@<X0>, __int64 a2@<X1>, __int64 a3@<X8>)
{
  __int64 v5; // x21
  _QWORD *v6; // x22
  size_t v7; // x23
  void *v8; // x0
  char *v9; // x22
  __int64 result; // x0

  v5 = a1 + 8;
  v6 = operator new(0x58u);
  *(_QWORD *)a3 = v6;
  *(_QWORD *)(a3 + 8) = v5;
  *(_BYTE *)(a3 + 16) = 0;
  v6[4] = 0;
  v6[5] = 0;
  v6[6] = 0;
  v7 = *(_QWORD *)(a2 + 8);
  if ( v7 )
  {
    v8 = qalloc_or_throw(*(_QWORD *)(a2 + 8));
    v6[4] = v8;
    v6[6] = v7;
    memcpy(v8, *(const void **)a2, v7);
    v6[5] = v7;
  }
  *((_BYTE *)v6 + 56) = 2;
  v9 = (char *)(v6 + 7);
  *((_QWORD *)v9 + 2) = 0;
  *((_QWORD *)v9 + 3) = 0;
  *((_QWORD *)v9 + 1) = 0;
  result = copy_idcv((unsigned __int8 *)v9, (unsigned __int8 *)(a2 + 24));
  *(_BYTE *)(a3 + 16) = 1;
  return result;
}
