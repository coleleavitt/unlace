/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49080
// Address: 0x0000000000049080

//----- (0000000000049080) ----------------------------------------------------
__int64 __fastcall sub_49080(__int64 a1, __int64 a2, char *a3)
{
  __int64 v3; // x21
  __int64 v6; // x8
  unsigned __int64 v7; // x22
  _QWORD *v8; // x0
  _QWORD *v9; // x23
  pthread_mutex_t *v10; // x21
  pthread_mutex_t *v11; // x0
  char *v12; // x1
  __int64 v13; // x8
  unsigned __int64 v14; // x9
  unsigned __int64 v15; // x2
  char *v16; // x0
  char *v17; // x0
  __int64 v18; // x23
  __int64 **v19; // x24
  __int64 *v20; // x25
  unsigned __int64 v21; // x8
  __int64 *v22; // x21
  __int64 *v23; // x0
  __int64 v24; // x8
  __int64 *v25; // x1
  size_t v26; // x0
  unsigned __int64 v27; // x23
  size_t v28; // x22
  void **v29; // x24
  void *v30; // x0
  pthread_mutex_t *v32; // [xsp+8h] [xbp-48h] BYREF

  v3 = *(_QWORD *)(a1 + 32);
  v6 = *(_QWORD *)(v3 + 8);
  v7 = **(_QWORD **)(a1 + 24) + a2;
  if ( *(_QWORD *)(v3 + 16) >= (unsigned __int64)(v6 + 1) )
  {
    v8 = *(_QWORD **)v3;
  }
  else
  {
    v8 = qvector_reserve(*(pthread_mutex_t **)(a1 + 32), *(void **)v3, v6 + 1, 8u);
    v6 = *(_QWORD *)(v3 + 8);
    *(_QWORD *)v3 = v8;
  }
  v8[v6] = v7;
  ++*(_QWORD *)(v3 + 8);
  v9 = *(_QWORD **)(a1 + 32);
  v10 = qstrdup(a3);
  v32 = v10;
  v11 = (pthread_mutex_t *)(v9 + 3);
  v12 = (char *)v9[3];
  v13 = v9[4];
  v14 = v9[5];
  v15 = v13 + 1;
  if ( v12 > (char *)&v32 || &v12[8 * v14] <= (char *)&v32 )
  {
    if ( v14 < v15 )
    {
      v17 = (char *)qvector_reserve(v11, v12, v15, 8u);
      v9[3] = v17;
      v13 = v9[4];
      v10 = v32;
      v12 = v17;
    }
  }
  else if ( v14 < v15 )
  {
    v16 = (char *)qvector_reserve(v11, v12, v15, 8u);
    v13 = v9[4];
    v12 = v16;
    v9[3] = v16;
  }
  *(_QWORD *)&v12[8 * v13] = v10;
  ++v9[4];
  v18 = *(_QWORD *)(a1 + 24);
  v19 = (__int64 **)(v18 + 72);
  v20 = *(__int64 **)(v18 + 72);
  if ( !v20 )
  {
    v20 = (__int64 *)(v18 + 72);
LABEL_20:
    v22 = *v19;
    if ( !*v19 )
      goto LABEL_24;
LABEL_21:
    if ( !a3 )
      goto LABEL_31;
    goto LABEL_28;
  }
  v19 = (__int64 **)(v18 + 72);
  while ( 1 )
  {
    while ( 1 )
    {
      v21 = v20[4];
      if ( v7 < v21 )
        break;
      if ( v21 >= v7 )
        goto LABEL_20;
      v19 = (__int64 **)(v20 + 1);
      if ( !v20[1] )
        goto LABEL_20;
      v20 = (__int64 *)v20[1];
    }
    if ( !*v20 )
      break;
    v19 = (__int64 **)v20;
    v20 = (__int64 *)*v20;
  }
  v19 = (__int64 **)v20;
  v22 = (__int64 *)*v20;
  if ( *v20 )
    goto LABEL_21;
LABEL_24:
  v23 = (__int64 *)operator new(0x40u);
  v23[6] = 0;
  v23[7] = 0;
  v23[4] = v7;
  v23[5] = 0;
  *v23 = 0;
  v23[1] = 0;
  v23[2] = (__int64)v20;
  *v19 = v23;
  v22 = v23;
  v24 = **(_QWORD **)(v18 + 64);
  if ( v24 )
  {
    *(_QWORD *)(v18 + 64) = v24;
    v25 = *v19;
  }
  else
  {
    v25 = v23;
  }
  sub_48ED8(*(__int64 **)(v18 + 72), v25);
  ++*(_QWORD *)(v18 + 80);
  if ( !a3 )
    goto LABEL_31;
LABEL_28:
  v26 = strlen(a3);
  if ( v26 )
  {
    v27 = v26 + 1;
    v28 = v26;
    v29 = (void **)(v22 + 5);
    if ( v22[7] >= v26 + 1 )
    {
      v30 = *v29;
    }
    else
    {
      v30 = qvector_reserve((pthread_mutex_t *)v22 + 1, *v29, v27, 1u);
      *v29 = v30;
    }
    v22[6] = v27;
    memmove(v30, a3, v28);
    *(_BYTE *)(v22[5] + v28) = 0;
    goto LABEL_34;
  }
LABEL_31:
  v22[6] = 0;
LABEL_34:
  if ( !(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) % 0x2710uLL) )
    sub_3A0D8(*(_QWORD *)(a1 + 16), "");
  return 0;
}
