/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4485B8
// Address: 0x00000000004485B8

//----- (00000000004485B8) ----------------------------------------------------
_QWORD *__fastcall sub_4485B8(_QWORD *a1, _QWORD *a2, __int64 *a3)
{
  _QWORD *v6; // x0
  const char **v7; // x20
  __int64 v8; // x23
  _QWORD *v9; // x19
  size_t v10; // x21
  _QWORD *v11; // x0
  _QWORD *v12; // x1
  _QWORD *v13; // x20
  void *v15; // x0
  void *v16; // x0

  v6 = sub_49E050(0x58u);
  v7 = (const char **)(v6 + 4);
  v6[4] = 0;
  v8 = *a3;
  v9 = v6;
  v6[5] = 0;
  v6[6] = 0;
  v10 = *(_QWORD *)(v8 + 8);
  if ( v10 )
  {
    v15 = sub_491248(*(_QWORD *)(v8 + 8));
    v9[4] = v15;
    v7[2] = (const char *)v10;
    memcpy(v15, *(const void **)v8, v10);
    v9[5] = v10;
  }
  v9[9] = 0;
  v9[10] = 0;
  *((_BYTE *)v9 + 56) = 2;
  v9[8] = 0;
  v11 = sub_445280(a1, a2, v7);
  v13 = v11;
  if ( v12 )
    return (_QWORD *)sub_444DE8((__int64)a1, (__int64)v11, v12, (__int64)v9);
  sub_448310(v9 + 7);
  v16 = (void *)v9[4];
  if ( v16 )
  {
    v9[5] = 0;
    j__free(v16);
  }
  j__free_0(v9);
  return v13;
}
// 448620: variable 'v12' is possibly undefined
