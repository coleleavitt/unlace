/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_60FF0
// Address: 0x0000000000060FF0

//----- (0000000000060FF0) ----------------------------------------------------
__int64 __fastcall sub_60FF0(__int64 a1)
{
  _DWORD *v1; // x1
  __int64 v2; // x8
  __int64 v4; // x19
  __int64 v5; // x10
  int v6; // w24
  int v7; // w22
  _QWORD *v8; // x21
  int v9; // w23
  _DWORD *v10; // x0
  __int64 v11; // x9
  unsigned __int64 v12; // x10
  __int64 v13; // x8
  _DWORD *v14; // x0
  __int64 v15; // x21
  _QWORD *v16; // x24
  __int64 v17; // x8
  _BYTE *v18; // x0
  _DWORD *v19; // x25
  int v20; // w8
  int v21; // w21

  v1 = *(_DWORD **)(a1 + 296);
  v2 = *(_QWORD *)(a1 + 304);
  v4 = (unsigned int)v1[v2 - 1];
  if ( v2 )
  {
    *(_QWORD *)(a1 + 304) = v2 - 1;
    v5 = v2 - 2;
    v6 = v1[v2 - 2];
    if ( v2 == 1 )
    {
      v2 = 0;
      v7 = v6;
    }
    else
    {
      *(_QWORD *)(a1 + 304) = v5;
      v2 -= 3;
      v7 = v1[v2];
      if ( !v5 )
        v2 = 0;
      *(_QWORD *)(a1 + 304) = v2;
    }
  }
  else
  {
    v7 = *(v1 - 1);
    v6 = v7;
  }
  v8 = (_QWORD *)(a1 + 296);
  v9 = v4 + 4;
  if ( *(_QWORD *)(a1 + 312) < (unsigned __int64)(v2 + 1) )
  {
    v10 = qvector_reserve((pthread_mutex_t *)(a1 + 296), v1, v2 + 1, 4u);
    v2 = *(_QWORD *)(a1 + 304);
    v1 = v10;
    *(_QWORD *)(a1 + 296) = v10;
  }
  v1[v2] = v9;
  v11 = *(_QWORD *)(a1 + 304);
  v12 = *(_QWORD *)(a1 + 312);
  v13 = v11 + 1;
  *(_QWORD *)(a1 + 304) = v11 + 1;
  if ( v12 >= v11 + 2 )
  {
    v14 = (_DWORD *)*v8;
  }
  else
  {
    v14 = qvector_reserve((pthread_mutex_t *)(a1 + 296), *(void **)(a1 + 296), v11 + 2, 4u);
    v13 = *(_QWORD *)(a1 + 304);
    *(_QWORD *)(a1 + 296) = v14;
  }
  v14[v13] = v6;
  ++*(_QWORD *)(a1 + 304);
  if ( v6 )
  {
    v16 = (_QWORD *)(a1 + 200);
    v15 = *(_QWORD *)(a1 + 200);
    *(_BYTE *)(a1 + 212) = -85;
    v17 = *(_QWORD *)(v15 + 8);
    if ( *(_QWORD *)(v15 + 16) >= (unsigned __int64)(v17 + 1) )
    {
      v18 = *(_BYTE **)v15;
    }
    else
    {
      v18 = qvector_reserve((pthread_mutex_t *)v15, *(void **)v15, v17 + 1, 1u);
      v17 = *(_QWORD *)(v15 + 8);
      *(_QWORD *)v15 = v18;
    }
    v18[v17] = -85;
    ++*(_QWORD *)(v15 + 8);
    v19 = (_DWORD *)(a1 + 208);
    v20 = *(_DWORD *)(a1 + 208);
    v21 = v7 - 5 - v20;
    *(_DWORD *)(a1 + 208) = v20 + 1;
    sub_5EB14(a1, v7 - 5 - v20);
    sub_5EB14(a1, SHIWORD(v21));
  }
  else
  {
    v19 = (_DWORD *)(a1 + 208);
    v16 = (_QWORD *)(a1 + 200);
  }
  ((void (__fastcall *)(_QWORD, __int64, _QWORD))loc_68E54)(*v16, v4, (unsigned int)(*v19 - v9));
  return 0;
}
