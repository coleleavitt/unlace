/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5A9CC
// Address: 0x000000000005A9CC

//----- (000000000005A9CC) ----------------------------------------------------
void __fastcall sub_5A9CC(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 *v3; // x8
  __int64 v7; // x25
  __int64 v8; // x26
  __int64 v9; // x24
  unsigned __int64 *v10; // x24
  unsigned __int64 v11; // x27
  unsigned __int64 v12; // t1
  unsigned __int64 v13; // x2
  void **v14; // x23
  void *v15; // x0
  _QWORD *v16; // x21
  __int64 v17; // x22
  __int64 v18; // x8
  pthread_mutex_t *v19; // x0
  char *align; // x0
  char *v21; // x1
  int v22; // w8
  pthread_mutex_t *v23; // x0
  __int64 *p_next; // x2
  char *v25; // x21
  __int64 *v26; // x21
  __int64 v27; // x22
  __int64 v28; // x8
  pthread_mutex_t *v29; // x0
  char *v30; // x0
  char *v31; // x1
  int v32; // w8
  __int64 *p_align; // x2
  __int64 v34; // x8
  unsigned int v35; // w23
  __int64 v36; // x22
  __int64 **v37; // x24
  __int64 *v38; // x25
  unsigned int v39; // w8
  __int64 *v40; // x20
  _WORD *v41; // x0
  __int64 v42; // x8
  __int64 *v43; // x1

  v3 = *(__int64 **)(a1 + 16);
  v7 = *v3;
  v8 = v3[1] - 1;
  v9 = *v3 + 40 * v8;
  v12 = *(_QWORD *)(v9 + 16);
  v10 = (unsigned __int64 *)(v9 + 16);
  v11 = v12;
  v13 = v12 + 1;
  v14 = (void **)(v10 - 1);
  if ( v10[1] >= v12 + 1 )
  {
    v16 = *v14;
  }
  else
  {
    v15 = qvector_reserve((pthread_mutex_t *)(v10 - 1), *v14, v13, 0x10u);
    *v14 = v15;
    v11 = *v10;
    v16 = v15;
    v13 = *v10 + 1;
  }
  *v10 = v13;
  v16[2 * v11] = a3;
  if ( (*(_BYTE *)(v7 + 40 * v8 + 32) & 1) != 0 )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL) = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 88LL);
    v17 = *(_QWORD *)(a1 + 16);
    v18 = *(_QWORD *)(v17 + 88);
    v19 = (pthread_mutex_t *)(v17 + 80);
    if ( *(_QWORD *)(v17 + 96) >= (unsigned __int64)(v18 + 1) )
    {
      align = (char *)v19->__align;
    }
    else
    {
      align = (char *)qvector_reserve(v19, *(void **)(v17 + 80), v18 + 1, 0x18u);
      v18 = *(_QWORD *)(v17 + 88);
      *(_QWORD *)(v17 + 80) = align;
    }
    v21 = &align[24 * v18];
    *((_QWORD *)v21 + 1) = 0;
    *((_QWORD *)v21 + 2) = 0;
    *(_QWORD *)v21 = 0;
    ++*(_QWORD *)(v17 + 88);
    v22 = *(_DWORD *)(a1 + 24);
    v23 = *(pthread_mutex_t **)(a1 + 8);
    if ( v22 == 2 )
    {
      p_next = (__int64 *)&v23[8].__list.__next;
    }
    else
    {
      if ( v22 != 1 )
        goto LABEL_41;
      p_next = &v23[8].__align;
    }
    sub_55D60((__int64)v23, (__int64)v21, p_next, *a2);
  }
  v25 = (char *)&v16[2 * v11];
  *((_QWORD *)v25 + 1) = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL);
  v26 = (__int64 *)(v25 + 8);
  v27 = *(_QWORD *)(a1 + 16);
  v28 = *(_QWORD *)(v27 + 112);
  v29 = (pthread_mutex_t *)(v27 + 104);
  if ( *(_QWORD *)(v27 + 120) >= (unsigned __int64)(v28 + 1) )
  {
    v30 = (char *)v29->__align;
  }
  else
  {
    v30 = (char *)qvector_reserve(v29, *(void **)(v27 + 104), v28 + 1, 0x18u);
    v28 = *(_QWORD *)(v27 + 112);
    *(_QWORD *)(v27 + 104) = v30;
  }
  v31 = &v30[24 * v28];
  *((_QWORD *)v31 + 1) = 0;
  *((_QWORD *)v31 + 2) = 0;
  *(_QWORD *)v31 = 0;
  ++*(_QWORD *)(v27 + 112);
  v32 = *(_DWORD *)(a1 + 24);
  v23 = *(pthread_mutex_t **)(a1 + 8);
  if ( v32 == 2 )
  {
    p_align = (__int64 *)&v23[8].__list.__next;
    goto LABEL_20;
  }
  if ( v32 != 1 )
  {
LABEL_41:
    if ( !under_debugger )
      v23 = interr(20086);
    __break(1u);
    sub_5AC98((__int64)v23);
    return;
  }
  p_align = &v23[8].__align;
LABEL_20:
  sub_55D60((__int64)v23, (__int64)v31, p_align, *a2);
  v34 = v7 + 40 * v8;
  v35 = *(unsigned __int16 *)(v34 + 34);
  if ( *(_WORD *)(v34 + 34) && *v10 == 1 )
  {
    v36 = *(_QWORD *)(a1 + 16);
    v37 = (__int64 **)(v36 + 136);
    v38 = *(__int64 **)(v36 + 136);
    if ( v38 )
    {
      v37 = (__int64 **)(v36 + 136);
      while ( 1 )
      {
        while ( 1 )
        {
          v39 = *((unsigned __int16 *)v38 + 16);
          if ( v35 < v39 )
            break;
          if ( v39 >= v35 )
            goto LABEL_32;
          v37 = (__int64 **)(v38 + 1);
          if ( !v38[1] )
            goto LABEL_32;
          v38 = (__int64 *)v38[1];
        }
        if ( !*v38 )
          break;
        v37 = (__int64 **)v38;
        v38 = (__int64 *)*v38;
      }
      v37 = (__int64 **)v38;
      v40 = (__int64 *)*v38;
      if ( *v38 )
        goto LABEL_39;
    }
    else
    {
      v38 = (__int64 *)(v36 + 136);
LABEL_32:
      v40 = *v37;
      if ( *v37 )
        goto LABEL_39;
    }
    v41 = operator new(0x38u);
    v41[16] = v35;
    *((_QWORD *)v41 + 5) = 0;
    *((_QWORD *)v41 + 6) = 0;
    *(_QWORD *)v41 = 0;
    *((_QWORD *)v41 + 1) = 0;
    *((_QWORD *)v41 + 2) = v38;
    *v37 = (__int64 *)v41;
    v40 = (__int64 *)v41;
    v42 = **(_QWORD **)(v36 + 128);
    if ( v42 )
    {
      *(_QWORD *)(v36 + 128) = v42;
      v43 = *v37;
    }
    else
    {
      v43 = (__int64 *)v41;
    }
    sub_48ED8(*(__int64 **)(v36 + 136), v43);
    ++*(_QWORD *)(v36 + 144);
    v36 = *(_QWORD *)(a1 + 16);
LABEL_39:
    v40[5] = *(_QWORD *)(v36 + 72);
    v40[6] = *v26;
  }
}
// 168DF0: using guessed type char under_debugger;
