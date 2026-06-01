/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100054BB0
// Address: 0x0000000100054BB0

//----- (0000000100054BB0) ----------------------------------------------------
__n128 __fastcall sub_100054BB0(_QWORD *a1, __int64 *a2)
{
  size_t v4; // x20
  void *v5; // x21
  _QWORD *v6; // x1
  __int64 v7; // x8
  _QWORD *v8; // x8
  __int64 v10; // [xsp+0h] [xbp-A0h]
  int v11; // [xsp+8h] [xbp-98h]
  __int128 v12; // [xsp+28h] [xbp-78h]
  __int128 v13; // [xsp+38h] [xbp-68h]
  __int128 v14; // [xsp+48h] [xbp-58h]
  __int128 v15; // [xsp+58h] [xbp-48h]
  __int128 v16; // [xsp+68h] [xbp-38h]

  v10 = *a2;
  v11 = *((_DWORD *)a2 + 2);
  v4 = a2[3];
  if ( v4 )
  {
    v5 = qalloc_or_throw(a2[3]);
    memcpy(v5, (const void *)a2[2], v4);
  }
  else
  {
    v5 = nullptr;
  }
  v13 = *(_OWORD *)(a2 + 7);
  v14 = *(_OWORD *)(a2 + 9);
  v15 = *(_OWORD *)(a2 + 11);
  v16 = *(_OWORD *)(a2 + 13);
  v12 = *(_OWORD *)(a2 + 5);
  v6 = (_QWORD *)*a1;
  v7 = a1[1];
  if ( a1[2] < (unsigned __int64)(v7 + 1) )
  {
    v6 = qvector_reserve(a1, v6, v7 + 1, 0x78u);
    *a1 = v6;
    v7 = a1[1];
  }
  v8 = &v6[15 * v7];
  *((_DWORD *)v8 + 2) = v11;
  *v8 = v10;
  v8[2] = v5;
  v8[3] = v4;
  v8[4] = v4;
  *(_OWORD *)(v8 + 5) = v12;
  *(_OWORD *)(v8 + 13) = v16;
  *(_OWORD *)(v8 + 11) = v15;
  *(_OWORD *)(v8 + 9) = v14;
  *(_OWORD *)(v8 + 7) = v13;
  ++a1[1];
  return (__n128)v13;
}
