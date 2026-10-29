/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003E1D0
// Address: 0x000000010003E1D0

//----- (000000010003E1D0) ----------------------------------------------------
_QWORD *__fastcall sub_10003E1D0(_QWORD **a1, __int64 a2, unsigned __int8 *a3)
{
  _QWORD *v5; // x8
  _QWORD *v6; // x21
  _QWORD *v7; // x0
  __int64 v8; // x9
  _QWORD *v9; // x20
  unsigned __int8 v11[8]; // [xsp+8h] [xbp-48h] BYREF
  void *v12; // [xsp+10h] [xbp-40h]
  __int64 v13; // [xsp+18h] [xbp-38h]
  __int64 v14; // [xsp+20h] [xbp-30h]

  v11[0] = 2;
  v13 = 0;
  v14 = 0;
  v12 = nullptr;
  copy_idcv(v11, a3);
  v6 = *a1;
  v5 = a1[1];
  if ( a1[2] >= (_QWORD *)((char *)v5 + 1) )
  {
    v7 = *a1;
  }
  else
  {
    v7 = qvector_reserve(a1, *a1, (unsigned __int64)v5 + 1, 0x20u);
    *a1 = v7;
    v5 = a1[1];
  }
  v8 = a2 - (_QWORD)v6;
  v9 = (_QWORD *)((char *)v7 + a2 - (_QWORD)v6);
  memmove(v9 + 4, v9, 32LL * (_QWORD)v5 - v8);
  *(_BYTE *)v9 = 2;
  v9[2] = 0;
  v9[3] = 0;
  v9[1] = 0;
  copy_idcv((unsigned __int8 *)v9, v11);
  a1[1] = (_QWORD *)((char *)a1[1] + 1);
  if ( v11[0] == 5 )
  {
    sub_10003307C((__int64)v12, v11);
  }
  else if ( v11[0] == 7 && v12 )
  {
    v13 = 0;
    qfree(v12);
  }
  return v9;
}
