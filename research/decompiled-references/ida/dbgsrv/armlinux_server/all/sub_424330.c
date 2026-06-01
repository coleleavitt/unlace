/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_424330
// Address: 0x0000000000424330

//----- (0000000000424330) ----------------------------------------------------
__int64 __fastcall sub_424330(__int64 *a1, _QWORD *a2)
{
  unsigned __int64 v3; // x1
  __int64 v4; // x0
  _QWORD *v5; // x21
  char v6; // w25
  _QWORD *v7; // x22
  _QWORD *v8; // x0
  __int64 v9; // x1
  unsigned __int64 v10; // x19
  _QWORD *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x27
  _QWORD *v14; // x19
  __int64 v15; // x28
  _QWORD *v16; // x20
  void *v17; // x0
  void *v18; // x0
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x21
  __int64 v22; // x19
  _QWORD *v23; // x20
  void *v24; // x0
  void *v25; // x0
  __int64 v28[2]; // [xsp+70h] [xbp-10h] BYREF

  v3 = 0;
  v5 = a1 + 1;
  v4 = *a1;
  v28[0] = 0;
  v6 = *(_BYTE *)(v4 + 616);
  while ( v3 < a2[1] )
  {
    v9 = v5[1];
    v10 = v5[2];
    if ( v9 + 1 <= v10 )
    {
      v7 = (_QWORD *)*v5;
    }
    else
    {
      v11 = sub_491288((__int64)v5, nullptr, v9 + 1, 0x38u);
      v12 = v5[1];
      v13 = v5[2];
      v5[2] = v10;
      v7 = v11;
      v14 = (_QWORD *)*v5;
      v15 = v12 - 1;
      if ( v12 - 1 >= 0 )
      {
        v16 = v11;
        do
        {
          *v16 = *v14;
          *v14 = 0;
          v16[1] = v14[1];
          v14[1] = 0;
          v16[2] = v14[2];
          v14[2] = 0;
          v16[3] = v14[3];
          v14[3] = 0;
          v16[4] = v14[4];
          v14[4] = 0;
          v16[5] = v14[5];
          v14[5] = 0;
          *((_DWORD *)v16 + 12) = *((_DWORD *)v14 + 12);
          v17 = (void *)v14[3];
          if ( v17 )
          {
            v14[4] = 0;
            j__free(v17);
          }
          v18 = (void *)*v14;
          if ( *v14 )
          {
            v14[1] = 0;
            j__free(v18);
          }
          --v15;
          v14 += 7;
          v16 += 7;
        }
        while ( v15 != -1 );
        v14 = (_QWORD *)*v5;
      }
      j__free(v14);
      v9 = v5[1];
      *v5 = v7;
      v5[2] = v13;
    }
    v7[7 * v9] = 0;
    v8 = &v7[7 * v9];
    v8[1] = 0;
    v8[2] = 0;
    v8[3] = 0;
    v8[4] = 0;
    v8[5] = 0;
    ++v5[1];
    if ( !(unsigned __int8)sub_4240A8((__int64)v8, v28, a2, v6) )
    {
      v19 = a1[2];
      if ( v19 )
      {
        v20 = v19 - 1;
        a1[2] = v20;
        v21 = a1[1];
        v22 = 56 * v20;
        v23 = (_QWORD *)(v21 + 56 * v20);
        v24 = (void *)v23[3];
        if ( v24 )
        {
          v23[4] = 0;
          j__free(v24);
        }
        v25 = *(void **)(v21 + v22);
        if ( v25 )
        {
          v23[1] = 0;
          j__free(v25);
        }
      }
      return v28[1] ^ _stack_chk_guard;
    }
    v3 = v28[0];
  }
  return v28[1] ^ _stack_chk_guard;
}
