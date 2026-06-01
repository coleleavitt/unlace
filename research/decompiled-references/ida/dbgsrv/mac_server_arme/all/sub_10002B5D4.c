/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002B5D4
// Address: 0x000000010002B5D4

//----- (000000010002B5D4) ----------------------------------------------------
void __fastcall sub_10002B5D4(_QWORD *a1, unsigned __int8 *a2)
{
  _QWORD *v3; // x1
  __int64 v4; // x8
  unsigned __int8 *v5; // x0
  unsigned __int8 v6[8]; // [xsp+8h] [xbp-38h] BYREF
  __int64 v7; // [xsp+10h] [xbp-30h]
  __int64 v8; // [xsp+18h] [xbp-28h]
  __int64 v9; // [xsp+20h] [xbp-20h]

  v6[0] = 2;
  v8 = 0;
  v9 = 0;
  v7 = 0;
  copy_idcv(v6, a2);
  v3 = (_QWORD *)*a1;
  v4 = a1[1];
  if ( a1[2] < (unsigned __int64)(v4 + 1) )
  {
    v3 = qvector_reserve(a1, v3, v4 + 1, 0x20u);
    *a1 = v3;
    v4 = a1[1];
  }
  v5 = (unsigned __int8 *)&v3[4 * v4];
  *v5 = 2;
  *((_QWORD *)v5 + 2) = 0;
  *((_QWORD *)v5 + 3) = 0;
  *((_QWORD *)v5 + 1) = 0;
  copy_idcv(v5, v6);
  ++a1[1];
  free_idcv(v6);
}
