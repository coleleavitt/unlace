/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_intersect
// Address: 0x00000000000C4C3C

//----- (00000000000C4C3C) ----------------------------------------------------
__int64 __fastcall rangeset_t_intersect(__int64 a1, __int64 *a2)
{
  unsigned __int64 v2; // x8
  int v5; // w9
  char v6; // w0
  unsigned int v7; // w20
  void *v8; // x0
  int v9; // w9
  char v10; // w0
  unsigned __int64 v11; // x28
  int v12; // w25
  int v13; // w27
  int v14; // w23
  __int128 *v15; // x22
  __int64 v16; // x9
  unsigned __int64 *v17; // x21
  unsigned __int64 v18; // x10
  __int128 v19; // q0
  __int128 *v20; // x28
  unsigned __int64 *v21; // x22
  unsigned __int64 v22; // x23
  unsigned __int64 *v23; // x28
  unsigned __int64 v24; // t1
  unsigned __int64 v25; // x8
  int v26; // w29
  unsigned __int64 v27; // x8
  __int128 v28; // q0
  __int128 *v29; // x21
  __int128 *v30; // x22
  __int128 *v31; // x23
  __int128 v32; // q0
  __int64 v33; // x9
  unsigned __int64 v34; // x28
  __int64 v35; // x8
  __int128 *v36; // x0
  unsigned __int64 *v37; // x21
  unsigned __int64 v38; // x20
  __int128 v39; // q0
  __int64 v40; // x8
  __int128 *v41; // x20
  __int128 *v42; // x21
  __int128 v43; // q0
  int v45; // [xsp+Ch] [xbp-A4h]
  void *ptr; // [xsp+10h] [xbp-A0h] BYREF
  __int64 v47; // [xsp+18h] [xbp-98h]
  __int64 v48; // [xsp+20h] [xbp-90h]
  int v49; // [xsp+28h] [xbp-88h]
  char v50; // [xsp+2Ch] [xbp-84h]
  __int128 v51; // [xsp+30h] [xbp-80h] BYREF
  char v52; // [xsp+40h] [xbp-70h]
  __int64 v53; // [xsp+48h] [xbp-68h]

  v53 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = *(_QWORD *)(a1 + 8);
  if ( !v2 )
    return 0;
  if ( !a2[1] )
  {
    v9 = *(_DWORD *)(a1 + 32);
    ptr = nullptr;
    v47 = 0;
    v48 = 0;
    v49 = v9;
    if ( v9 == -1 )
    {
      v10 = 0;
    }
    else
    {
      v10 = must_journal();
      v2 = *(_QWORD *)(a1 + 8);
    }
    v50 = v10 & 1;
    v41 = *(__int128 **)a1;
    if ( (v10 & 1) != 0 )
    {
      v42 = &v41[v2];
      if ( v41 < v42 )
      {
        do
        {
          v43 = *v41;
          v52 = 1;
          v51 = v43;
          sub_C5A18((char **)&ptr, (unsigned __int64)&v51);
          ++v41;
        }
        while ( v41 < v42 );
        v41 = *(__int128 **)a1;
      }
    }
    if ( v41 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      qfree(v41);
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 16) = 0;
    }
    *(_QWORD *)(a1 + 24) = 0;
    sub_C4214((__int64)&ptr);
    if ( ptr )
    {
      v47 = 0;
      qfree(ptr);
      ptr = nullptr;
      v48 = 0;
    }
    return 1;
  }
  v5 = *(_DWORD *)(a1 + 32);
  ptr = nullptr;
  v47 = 0;
  v48 = 0;
  v49 = v5;
  if ( v5 == -1 )
  {
    v50 = 0;
  }
  else
  {
    v6 = must_journal();
    v2 = *(_QWORD *)(a1 + 8);
    v50 = v6 & 1;
    if ( !v2 )
    {
      v7 = 0;
      *(_QWORD *)(a1 + 24) = 0;
      v8 = ptr;
      if ( ptr )
      {
LABEL_50:
        v47 = 0;
        qfree(v8);
        ptr = nullptr;
        v48 = 0;
      }
      return v7;
    }
  }
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  while ( 2 )
  {
    v15 = *(__int128 **)a1;
    v16 = *a2;
    v17 = (unsigned __int64 *)(*(_QWORD *)a1 + 16 * v11);
    v18 = *v17;
    while ( *(_QWORD *)(v16 + 16LL * v12 + 8) <= v18 )
    {
      if ( a2[1] == ++v12 )
      {
        v38 = (unsigned __int64)&v15[v2];
        if ( v50 && (unsigned __int64)v17 < v38 )
        {
          do
          {
            v39 = *(_OWORD *)v17;
            v52 = 1;
            v51 = v39;
            sub_C5A18((char **)&ptr, (unsigned __int64)&v51);
            v17 += 2;
          }
          while ( (unsigned __int64)v17 < v38 );
          v38 = *(_QWORD *)a1 + 16LL * *(_QWORD *)(a1 + 8);
          v17 = (unsigned __int64 *)(*(_QWORD *)a1 + 16 * v11);
        }
        v40 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)(a1 + 24) = 0;
        *(_QWORD *)(a1 + 8) = v40 - ((__int64)(v38 - (_QWORD)v17) >> 4);
        sub_C4214((__int64)&ptr);
LABEL_49:
        v7 = 1;
        v8 = ptr;
        if ( !ptr )
          return v7;
        goto LABEL_50;
      }
    }
    if ( v50 )
    {
      v19 = *(_OWORD *)v17;
      v52 = 1;
      v51 = v19;
      sub_C5A18((char **)&ptr, (unsigned __int64)&v51);
      v16 = *a2;
      v18 = *v17;
    }
    v45 = v14;
    v20 = &v15[v11];
    v21 = (unsigned __int64 *)(v16 + 16LL * v12);
    v24 = *((_QWORD *)v20 + 1);
    v23 = (unsigned __int64 *)v20 + 1;
    v22 = v24;
    v25 = *v21;
    if ( *v21 <= v18 )
      goto LABEL_21;
    v26 = v13;
    if ( v25 < v22 )
    {
      *v17 = v25;
      v45 = 1;
LABEL_21:
      v27 = v21[1];
      v26 = v13 + 1;
      if ( v27 < v22 )
      {
        *v23 = v27;
        v45 = 1;
      }
    }
    if ( v50 )
    {
      v28 = *(_OWORD *)v17;
      v52 = 0;
      v51 = v28;
      sub_C5A18((char **)&ptr, (unsigned __int64)&v51);
    }
    v29 = *(__int128 **)a1;
    do
    {
      if ( *((_QWORD *)&v29[v13] + 1) > *v21 )
        break;
      ++v13;
    }
    while ( *(_QWORD *)(a1 + 8) != v13 );
    if ( v13 <= v26 )
    {
      v34 = *v23;
      if ( v22 > v34 )
      {
        v35 = *(_QWORD *)(a1 + 8);
        if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v35 + 1) )
        {
          v36 = *(__int128 **)a1;
        }
        else
        {
          v36 = (__int128 *)qvector_reserve((pthread_mutex_t *)a1, *(void **)a1, v35 + 1, 0x10u);
          v35 = *(_QWORD *)(a1 + 8);
          *(_QWORD *)a1 = v36;
        }
        v37 = (unsigned __int64 *)&v36[(16LL * v13 + 16) >> 4];
        memmove(v37 + 2, v37, 16 * v35 - 16 * ((16LL * v13 + 16) >> 4));
        *v37 = v34;
        v37[1] = v22;
        ++*(_QWORD *)(a1 + 8);
        if ( v50 )
        {
          *(_QWORD *)&v51 = v34;
          *((_QWORD *)&v51 + 1) = v22;
          v52 = 0;
          sub_C5A18((char **)&ptr, (unsigned __int64)&v51);
        }
      }
      v2 = *(_QWORD *)(a1 + 8);
      v14 = v45;
      v26 = v13 + 1;
      v11 = v13 + 1;
    }
    else
    {
      v11 = v26;
      v30 = &v29[v26];
      v31 = &v29[v13];
      if ( v50 && v30 < v31 )
      {
        do
        {
          v32 = *v30;
          v52 = 1;
          v51 = v32;
          sub_C5A18((char **)&ptr, (unsigned __int64)&v51);
          ++v30;
        }
        while ( v30 < v31 );
        v29 = *(__int128 **)a1;
        v30 = (__int128 *)(*(_QWORD *)a1 + 16LL * v26);
        v31 = (__int128 *)(*(_QWORD *)a1 + 16LL * v13);
      }
      memmove(v30, v31, (char *)&v29[*(_QWORD *)(a1 + 8)] - (char *)v31);
      v33 = (char *)v31 - (char *)v30;
      v14 = 1;
      v2 = *(_QWORD *)(a1 + 8) - (v33 >> 4);
      *(_QWORD *)(a1 + 8) = v2;
    }
    v13 = v26;
    if ( v2 > v11 )
      continue;
    break;
  }
  *(_QWORD *)(a1 + 24) = 0;
  if ( (v14 & 1) != 0 )
  {
    sub_C4214((__int64)&ptr);
    goto LABEL_49;
  }
  v7 = 0;
  v8 = ptr;
  if ( ptr )
    goto LABEL_50;
  return v7;
}
