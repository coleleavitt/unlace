/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003CC80
// Address: 0x000000010003CC80

//----- (000000010003CC80) ----------------------------------------------------
__int64 __fastcall sub_10003CC80(_QWORD **a1, unsigned __int8 *a2)
{
  _QWORD *v3; // x8
  _QWORD *v4; // x9
  unsigned __int8 *v5; // x20
  _QWORD *v6; // x0
  unsigned __int8 *v7; // x0

  v3 = *a1;
  v4 = a1[1];
  if ( a1[2] < (_QWORD *)((char *)v4 + 1) )
  {
    v5 = a2;
    v6 = qvector_reserve(a1, *a1, (unsigned __int64)v4 + 1, 0x20u);
    a2 = v5;
    v3 = v6;
    *a1 = v6;
    v4 = a1[1];
  }
  v7 = (unsigned __int8 *)&v3[4 * (_QWORD)v4];
  *v7 = 2;
  *((_QWORD *)v7 + 2) = 0;
  *((_QWORD *)v7 + 3) = 0;
  *((_QWORD *)v7 + 1) = 0;
  a1[1] = (_QWORD *)((char *)a1[1] + 1);
  return move_idcv(v7, a2);
}
