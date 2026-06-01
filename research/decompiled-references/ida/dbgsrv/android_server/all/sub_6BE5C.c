/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6BE5C
// Address: 0x000000000006BE5C

//----- (000000000006BE5C) ----------------------------------------------------
void __fastcall sub_6BE5C(__int64 a1, const void *a2, const char *a3)
{
  __int64 v3; // x25
  unsigned __int64 v4; // x26
  void ***v8; // x23
  void **v9; // x20
  void **v10; // x0
  __int64 v11; // x8
  __int64 v12; // x24
  __int64 v13; // x25
  void **v14; // x26
  void **v15; // x27
  void *v16; // x8
  void *v17; // x8
  void *v18; // x8
  void *v19; // x8
  void *v20; // x8
  void *v21; // x0
  void *v22; // x0
  void **v23; // x23
  size_t v24; // x0
  void *v25; // x1
  unsigned __int64 v26; // x24
  size_t v27; // x22
  size_t v28; // x0
  unsigned __int64 v29; // x23
  size_t v30; // x21
  void **v31; // x22
  void *v32; // x0

  v3 = *(_QWORD *)(a1 + 96);
  v4 = *(_QWORD *)(a1 + 104);
  v8 = (void ***)(a1 + 88);
  if ( v4 >= v3 + 1 )
  {
    v9 = *v8;
  }
  else
  {
    v9 = (void **)qvector_reserve((pthread_mutex_t *)(a1 + 88), nullptr, v3 + 1, 0x30u);
    v10 = *(void ***)(a1 + 88);
    v11 = *(_QWORD *)(a1 + 96);
    v12 = *(_QWORD *)(a1 + 104);
    *(_QWORD *)(a1 + 104) = v4;
    v13 = v11 - 1;
    if ( v11 - 1 >= 0 )
    {
      v14 = v10 + 3;
      v15 = v9;
      do
      {
        *v15 = *(v14 - 3);
        v16 = *(v14 - 2);
        *(v14 - 3) = nullptr;
        v15[1] = v16;
        v17 = *(v14 - 1);
        *(v14 - 2) = nullptr;
        v15[2] = v17;
        v18 = *v14;
        *(v14 - 1) = nullptr;
        v15[3] = v18;
        v19 = v14[1];
        *v14 = nullptr;
        v15[4] = v19;
        v20 = v14[2];
        v14[1] = nullptr;
        v15[5] = v20;
        v21 = *v14;
        v14[2] = nullptr;
        if ( v21 )
        {
          v14[1] = nullptr;
          qfree(v21);
          *v14 = nullptr;
          v14[2] = nullptr;
        }
        v22 = *(v14 - 3);
        if ( v22 )
        {
          *(v14 - 2) = nullptr;
          qfree(v22);
          *(v14 - 3) = nullptr;
          *(v14 - 1) = nullptr;
        }
        --v13;
        v14 += 6;
        v15 += 6;
      }
      while ( v13 >= 0 );
      v10 = *v8;
    }
    qfree(v10);
    v3 = *(_QWORD *)(a1 + 96);
    *(_QWORD *)(a1 + 88) = v9;
    *(_QWORD *)(a1 + 104) = v12;
  }
  v23 = &v9[6 * v3];
  *((_OWORD *)v23 + 1) = 0u;
  *((_OWORD *)v23 + 2) = 0u;
  *(_OWORD *)v23 = 0u;
  ++*(_QWORD *)(a1 + 96);
  if ( a2 && (v24 = strlen((const char *)a2)) != 0 )
  {
    v25 = *v23;
    v26 = v24 + 1;
    v27 = v24;
    if ( (unsigned __int64)v9[6 * v3 + 2] < v24 + 1 )
    {
      v25 = qvector_reserve((pthread_mutex_t *)&v9[6 * v3], v25, v26, 1u);
      *v23 = v25;
    }
    v9[6 * v3 + 1] = (void *)v26;
    memmove(v25, a2, v27);
    *((_BYTE *)*v23 + v27) = 0;
    if ( !a3 )
      goto LABEL_22;
  }
  else
  {
    v9[6 * v3 + 1] = nullptr;
    if ( !a3 )
    {
LABEL_22:
      v9[6 * v3 + 4] = nullptr;
      return;
    }
  }
  v28 = strlen(a3);
  if ( !v28 )
    goto LABEL_22;
  v29 = v28 + 1;
  v30 = v28;
  v31 = &v9[6 * v3 + 3];
  if ( (unsigned __int64)v9[6 * v3 + 5] >= v28 + 1 )
  {
    v32 = *v31;
  }
  else
  {
    v32 = qvector_reserve((pthread_mutex_t *)&v9[6 * v3 + 3], *v31, v29, 1u);
    *v31 = v32;
  }
  v9[6 * v3 + 4] = (void *)v29;
  memmove(v32, a3, v30);
  *((_BYTE *)*v31 + v30) = 0;
}
