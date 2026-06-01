/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100058D1C
// Address: 0x0000000100058D1C

//----- (0000000100058D1C) ----------------------------------------------------
__n128 __fastcall sub_100058D1C(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // x23
  size_t v5; // x20
  void *v6; // x21
  _QWORD *v7; // x1
  __int64 v8; // x8
  _QWORD *v9; // x8
  __int128 v11; // [xsp+20h] [xbp-50h]
  int v12; // [xsp+30h] [xbp-40h]

  v4 = *a2;
  v5 = a2[2];
  if ( v5 )
  {
    v6 = qalloc_or_throw(a2[2]);
    memcpy(v6, (const void *)a2[1], v5);
  }
  else
  {
    v6 = nullptr;
  }
  v11 = *((_OWORD *)a2 + 2);
  v12 = *((_DWORD *)a2 + 12);
  v7 = (_QWORD *)*a1;
  v8 = a1[1];
  if ( a1[2] < (unsigned __int64)(v8 + 1) )
  {
    v7 = qvector_reserve(a1, v7, v8 + 1, 0x38u);
    *a1 = v7;
    v8 = a1[1];
  }
  v9 = &v7[7 * v8];
  *v9 = v4;
  v9[1] = v6;
  v9[2] = v5;
  v9[3] = v5;
  *((_DWORD *)v9 + 12) = v12;
  *((_OWORD *)v9 + 2) = v11;
  ++a1[1];
  return (__n128)v11;
}
