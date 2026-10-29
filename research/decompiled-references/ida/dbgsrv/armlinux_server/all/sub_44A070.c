/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44A070
// Address: 0x000000000044A070

//----- (000000000044A070) ----------------------------------------------------
_QWORD *__fastcall sub_44A070(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v8; // x0
  size_t v9; // x20
  _QWORD *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x20
  _QWORD *v13; // x24
  _QWORD *v14; // x0
  _QWORD *v15; // x23
  _QWORD *v16; // x19
  size_t v17; // x22
  __int64 v18; // x1
  void *v20; // x0
  void *v21; // x0
  const void *v22; // x1

  v8 = sub_49E050(0x58u);
  v9 = *(_QWORD *)(a2 + 40);
  v10 = v8;
  v8[4] = 0;
  v8[5] = 0;
  v8[6] = 0;
  if ( v9 )
  {
    v21 = sub_491248(v9);
    v22 = *(const void **)(a2 + 32);
    v10[4] = v21;
    v10[6] = v9;
    memcpy(v21, v22, v9);
    v10[5] = v9;
  }
  v10[8] = 0;
  v10[9] = 0;
  *((_BYTE *)v10 + 56) = 2;
  v10[10] = 0;
  sub_4488B8(v10 + 7, (__int64 *)(a2 + 56));
  v11 = *(_QWORD *)(a2 + 24);
  *(_DWORD *)v10 = *(_DWORD *)a2;
  v10[1] = a3;
  v10[2] = 0;
  v10[3] = 0;
  if ( v11 )
    v10[3] = sub_44A070(a1, v11, v10, a4);
  v12 = *(_QWORD *)(a2 + 16);
  if ( v12 )
  {
    v13 = v10;
    do
    {
      v14 = sub_49E050(0x58u);
      v15 = v14 + 4;
      v14[4] = 0;
      v16 = v14;
      v14[5] = 0;
      v14[6] = 0;
      v17 = *(_QWORD *)(v12 + 40);
      if ( v17 )
      {
        v20 = sub_491248(*(_QWORD *)(v12 + 40));
        v16[4] = v20;
        v15[2] = v17;
        memcpy(v20, *(const void **)(v12 + 32), v17);
        v16[5] = v17;
      }
      *((_BYTE *)v16 + 56) = 2;
      v16[8] = 0;
      v16[9] = 0;
      v16[10] = 0;
      sub_4488B8(v16 + 7, (__int64 *)(v12 + 56));
      *(_DWORD *)v16 = *(_DWORD *)v12;
      v16[2] = 0;
      v16[3] = 0;
      v13[2] = v16;
      v16[1] = v13;
      v18 = *(_QWORD *)(v12 + 24);
      if ( v18 )
        v16[3] = sub_44A070(a1, v18, v16, a4);
      v12 = *(_QWORD *)(v12 + 16);
      v13 = v16;
    }
    while ( v12 );
  }
  return v10;
}
