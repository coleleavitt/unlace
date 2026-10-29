__int64 __fastcall sub_DB0920(__int64 *a1, __int64 **a2, __int64 a3)
{
  __int64 *v3; // r13
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 *v7; // rcx
  __int64 v8; // r10
  unsigned int v9; // edx
  __int64 *v10; // rdi
  int v11; // r8d
  __int64 v12; // rdx
  __int64 *v13; // r9
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // r8d
  __int64 *v20; // rcx
  __int64 v21; // r10
  __int64 v22; // rdx
  __int64 *v23; // r9
  __int64 *v24; // rdi
  __int64 *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned int v29; // ebp
  __int64 v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // r15
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // r15
  unsigned int v36; // edx
  unsigned int v37; // r12d
  __int64 v38; // rcx
  __int64 v39; // r12
  _QWORD *v40; // rdi
  __int64 v41; // rax
  __int64 i; // rax
  __int64 *v43; // [rsp+8h] [rbp-60h]
  unsigned __int8 v45; // [rsp+18h] [rbp-50h]
  __int64 v46; // [rsp+18h] [rbp-50h]
  int v47[2]; // [rsp+28h] [rbp-40h] BYREF

  v3 = *a2;
  if ( !*a2 )
    return 0;
  v43 = &v3[*((unsigned int *)v3 - 1)];
  if ( v3 == v43 )
    return 0;
  v45 = 0;
  while ( 1 )
  {
LABEL_4:
    v5 = *v3;
    v6 = *((unsigned int *)a1 + 10);
    v7 = (__int64 *)a1[4];
    v8 = *(_QWORD *)(*v3 + 16);
    v9 = v6 - 1;
    v6 *= 8;
    v10 = (__int64 *)((char *)v7 + v6);
    v11 = *(_DWORD *)(v8 + 12);
    v12 = 8LL * (v11 & v9);
    v13 = &v7[(unsigned __int64)v12 / 8];
    if ( v12 == v6 )
    {
LABEL_13:
      if ( v7 != v13 )
      {
        while ( 1 )
        {
          v17 = *v7;
          if ( (unsigned __int64)*v7 > 1 )
          {
            if ( *(_DWORD *)(v17 + 12) == v11 && v8 == v17 )
              goto LABEL_22;
          }
          else if ( !v17 )
          {
            if ( v43 == ++v3 )
              return v45;
            goto LABEL_4;
          }
          if ( v13 == ++v7 )
            goto LABEL_11;
        }
      }
      goto LABEL_11;
    }
    v14 = &v7[(unsigned __int64)v12 / 8];
    while ( 1 )
    {
      v15 = *v14;
      if ( (unsigned __int64)*v14 > 1 )
        break;
      if ( !v15 )
        goto LABEL_11;
LABEL_8:
      if ( v10 == ++v14 )
        goto LABEL_13;
    }
    if ( *(_DWORD *)(v15 + 12) != v11 || v8 != v15 )
      goto LABEL_8;
LABEL_22:
    v18 = *((unsigned int *)a1 + 32);
    v19 = *(_DWORD *)(v5 + 12);
    v20 = (__int64 *)a1[15];
    v21 = 24LL * (v19 & (unsigned int)(v18 - 1));
    v22 = 24 * v18;
    v23 = &v20[(unsigned __int64)v21 / 8];
    v24 = &v20[3 * v18];
    v25 = &v20[(unsigned __int64)v21 / 8];
    if ( v21 == v22 )
    {
LABEL_30:
      while ( v23 != v20 )
      {
        v27 = *v20;
        if ( (unsigned __int64)*v20 > 1 )
        {
          if ( *(_DWORD *)(v27 + 12) == v19 && v5 == v27 )
          {
            v25 = v20;
            goto LABEL_39;
          }
        }
        else if ( !v27 )
        {
          break;
        }
        v20 += 3;
      }
LABEL_66:
      BUG();
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v26 = *v25;
        if ( (unsigned __int64)*v25 > 1 )
          break;
        if ( !v26 )
          goto LABEL_66;
        v25 += 3;
        if ( v24 == v25 )
          goto LABEL_30;
      }
      if ( *(_DWORD *)(v26 + 12) == v19 && v5 == v26 )
        break;
      v25 += 3;
      if ( v24 == v25 )
        goto LABEL_30;
    }
LABEL_39:
    v28 = v25[1];
    if ( v28 )
    {
      v29 = *(_DWORD *)(v28 - 4);
      if ( v29 )
      {
        v30 = v29;
        v31 = v25[1];
        v29 = 0;
        v32 = v28 + 4 * v30;
        do
        {
          v31 += 4;
          v29 += __popcountdi2();
        }
        while ( v31 != v32 );
      }
    }
    else
    {
      v29 = 0;
    }
    if ( *((_DWORD *)a1 + 24) == v29 )
      break;
LABEL_11:
    if ( v43 == ++v3 )
      return v45;
  }
  v33 = *a1;
  *(_QWORD *)v47 = v5;
  v34 = sub_15E1EC0(v33, 1, (int)v47);
  v35 = v34;
  if ( v34 )
    ++*(_DWORD *)(v34 + 8);
  v36 = *(_DWORD *)(a3 + 16);
  v37 = *(_DWORD *)(a3 + 20);
  if ( v36 >= v37 )
  {
    v39 = 2 * v37;
    v38 = sub_186B270(8 * v39);
    v36 = *(_DWORD *)(a3 + 16);
    v40 = *(_QWORD **)(a3 + 8);
    if ( v36 )
    {
      if ( v36 - 1 <= 2 || (_QWORD *)v38 == v40 + 1 )
      {
        for ( i = 0; i != v36; ++i )
          *(_QWORD *)(v38 + i * 8) = v40[i];
      }
      else
      {
        v41 = 0;
        do
        {
          *(__m128i *)(v38 + v41 * 8) = _mm_loadu_si128((const __m128i *)&v40[v41]);
          v41 += 2;
        }
        while ( v41 != 2LL * (v36 >> 1) );
        if ( (v36 & 1) != 0 )
          *(_QWORD *)(v38 + 8LL * (v36 & 0xFFFFFFFE)) = v40[v36 & 0xFFFFFFFE];
      }
    }
    if ( v40 != (_QWORD *)(a3 + 24) && v40 )
    {
      v46 = v38;
      sub_186B220(v40);
      v38 = v46;
      v36 = *(_DWORD *)(a3 + 16);
    }
    *(_QWORD *)(a3 + 8) = v38;
    *(_DWORD *)(a3 + 20) = v39;
  }
  else
  {
    v38 = *(_QWORD *)(a3 + 8);
  }
  v45 = 1;
  ++v3;
  *(_QWORD *)(v38 + 8LL * v36) = v35;
  *(_DWORD *)(a3 + 16) = v36 + 1;
  if ( v43 != v3 )
    goto LABEL_4;
  return v45;
}

