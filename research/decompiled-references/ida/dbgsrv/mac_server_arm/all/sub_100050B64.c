/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100050B64
// Address: 0x0000000100050B64

//----- (0000000100050B64) ----------------------------------------------------
_QWORD *__fastcall sub_100050B64(_QWORD **a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // x22
  __int64 v6; // x23
  __int64 v7; // x24
  _QWORD *v8; // x8
  _QWORD *v9; // x21
  _QWORD *v10; // x0
  __int64 v11; // x9
  _QWORD *v12; // x20

  v5 = *a3;
  v6 = a3[1];
  v7 = a3[2];
  a3[1] = 0;
  a3[2] = 0;
  *a3 = 0;
  v9 = *a1;
  v8 = a1[1];
  if ( a1[2] >= (_QWORD *)((char *)v8 + 1) )
  {
    v10 = *a1;
  }
  else
  {
    v10 = qvector_reserve(a1, *a1, (unsigned __int64)v8 + 1, 0x18u);
    *a1 = v10;
    v8 = a1[1];
  }
  v11 = a2 - (_QWORD)v9;
  v12 = (_QWORD *)((char *)v10 + a2 - (_QWORD)v9);
  memmove(v12 + 3, v12, 24LL * (_QWORD)v8 - v11);
  *v12 = v5;
  v12[1] = v6;
  v12[2] = v7;
  a1[1] = (_QWORD *)((char *)a1[1] + 1);
  return v12;
}
