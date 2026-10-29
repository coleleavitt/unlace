/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43DEC8
// Address: 0x000000000043DEC8

//----- (000000000043DEC8) ----------------------------------------------------
__int64 __fastcall sub_43DEC8(__int64 *a1, char *a2)
{
  __int64 v4; // x0
  __int64 v5; // x22
  __int64 v6; // x19
  void *v7; // x0
  char *v8; // x0
  __int64 v9; // x21
  __int64 i; // x20
  char *v11; // x1
  void *v12; // x0
  void *v13; // x0
  char *v14; // x0
  __int64 v15; // x21
  __int64 j; // x20
  __int64 *v17; // x0
  _QWORD *v19; // x0
  size_t v20; // x0
  size_t v21; // x22
  __int64 v22; // x0
  __int64 v23; // x3
  void *v24; // x0

  v4 = sub_43DE50(a1, a2);
  if ( v4 == -1 )
  {
    v19 = sub_49E050(0x90u);
    *v19 = 0;
    v19[1] = 0;
    v6 = (__int64)v19;
    v19[2] = 0;
    v19[4] = 0;
    v19[5] = 0;
    v19[6] = 0;
    v19[8] = 0;
    v19[9] = 0;
    v19[10] = 0;
    v19[11] = 0;
    v19[12] = 0;
    v19[13] = 0;
    v19[14] = 0;
    v19[15] = 0;
    v19[16] = 0;
    if ( a2 )
    {
      v20 = strlen(a2);
      v21 = v20;
      if ( v20 )
      {
        v24 = sub_491288(v6, nullptr, v20 + 1, 1u);
        *(_QWORD *)v6 = v24;
        *(_QWORD *)(v6 + 8) = v21 + 1;
        memmove(v24, a2, v21);
        *(_BYTE *)(*(_QWORD *)v6 + v21) = 0;
      }
    }
    v22 = *a1;
    v23 = a1[1];
    v5 = v23;
    if ( v23 + 1 > (unsigned __int64)a1[2] )
    {
      v22 = (__int64)sub_491288((__int64)a1, (void *)*a1, v23 + 1, 8u);
      v23 = a1[1];
      *a1 = v22;
    }
    *(_QWORD *)(v22 + 8 * v23) = v6;
    ++a1[1];
  }
  else
  {
    v5 = v4;
    v6 = *(_QWORD *)(*a1 + 8 * v4);
    if ( *(_DWORD *)(v6 + 136) )
      return -1;
    v7 = *(void **)(v6 + 32);
    if ( v7 )
    {
      *(_QWORD *)(v6 + 40) = 0;
      j__free(v7);
      *(_QWORD *)(v6 + 32) = 0;
      *(_QWORD *)(v6 + 48) = 0;
    }
    v8 = *(char **)(v6 + 88);
    if ( v8 )
    {
      v9 = *(_QWORD *)(v6 + 96);
      if ( v9 )
      {
        for ( i = 0; i != v9; ++i )
        {
          v11 = &v8[32 * i];
          v12 = *((void **)v11 + 1);
          if ( v12 )
          {
            *((_QWORD *)v11 + 2) = 0;
            j__free(v12);
          }
          v8 = *(char **)(v6 + 88);
        }
      }
      *(_QWORD *)(v6 + 96) = 0;
      j__free(v8);
      *(_QWORD *)(v6 + 88) = 0;
      *(_QWORD *)(v6 + 104) = 0;
    }
    v13 = *(void **)(v6 + 112);
    if ( v13 )
    {
      *(_QWORD *)(v6 + 120) = 0;
      j__free(v13);
      *(_QWORD *)(v6 + 112) = 0;
      *(_QWORD *)(v6 + 128) = 0;
    }
    v14 = *(char **)(v6 + 64);
    if ( v14 )
    {
      v15 = *(_QWORD *)(v6 + 72);
      if ( v15 )
      {
        for ( j = 0; j != v15; ++j )
        {
          v17 = (__int64 *)&v14[32 * j];
          sub_448310(v17);
          v14 = *(char **)(v6 + 64);
        }
      }
      *(_QWORD *)(v6 + 72) = 0;
      j__free(v14);
      *(_QWORD *)(v6 + 64) = 0;
      *(_QWORD *)(v6 + 80) = 0;
    }
    *(_DWORD *)(v6 + 24) = 0;
  }
  *(_DWORD *)(v6 + 24) = 0;
  *(_DWORD *)(v6 + 136) = -1;
  return v5;
}
