void __fastcall sub_41A7B0(__int64 a1)
{
  char *v1; // rcx
  __int64 v2; // rbx
  unsigned int *v3; // r12
  __int64 v4; // rsi
  unsigned __int64 v5; // rdx
  int v6; // r8d
  int v7; // r9d
  _QWORD **v8; // rcx
  unsigned int *v9; // r15
  __int64 v10; // r14
  _DWORD *v11; // rbx
  __int64 v12; // rdx
  unsigned int *i; // rbx
  __int64 v14; // rbp
  unsigned int v15; // eax
  unsigned int *v16; // r13
  __int64 v17; // r14
  _QWORD *v18; // rbx
  __int64 v19; // rdx
  unsigned int *j; // rbx
  __int64 v21; // rbp
  unsigned int v22; // eax
  __int64 v23; // r14
  unsigned int *v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rbp
  unsigned int v27; // eax
  unsigned int *v28; // rbp
  __int64 v29; // rdx
  int v30; // ecx
  int v31; // r8d
  int v32; // r9d
  __int64 v33; // rbp
  unsigned int *v34; // rbx
  __int64 v35; // rdx
  int v36; // ecx
  int v37; // r8d
  int v38; // r9d
  _DWORD *v39; // rax
  unsigned int *v40; // rbp
  __int64 v41; // rdx
  int v42; // ecx
  int v43; // r8d
  int v44; // r9d
  __int64 v45; // rbp
  unsigned int *v46; // rbx
  __int64 v47; // rdx
  int v48; // ecx
  int v49; // r8d
  int v50; // r9d
  _DWORD *v51; // rax
  unsigned int *v52; // rbp
  __int64 v53; // rdx
  int v54; // ecx
  int v55; // r8d
  int v56; // r9d
  __int64 v57; // rbp
  char *src; // [rsp+0h] [rbp-40h]
  _QWORD **srca; // [rsp+0h] [rbp-40h]
  _QWORD **srcb; // [rsp+0h] [rbp-40h]
  _QWORD **srcc; // [rsp+0h] [rbp-40h]
  _QWORD **srcd; // [rsp+0h] [rbp-40h]
  _QWORD **srce; // [rsp+0h] [rbp-40h]
  _QWORD **srcf; // [rsp+0h] [rbp-40h]

  v1 = *(char **)(a1 + 16);
  *(_BYTE *)(a1 + 36) = 1;
  if ( !v1 )
    return;
  v2 = 8LL * *((unsigned int *)v1 - 1);
  v3 = (unsigned int *)&v1[v2];
  if ( v1 == &v1[v2] )
    return;
  v4 = (__int64)&v1[v2];
  src = v1;
  _BitScanReverse64(&v5, v2 >> 3);
  sub_4204C0(v1, &v1[v2], 2LL * (int)v5);
  v8 = (_QWORD **)src;
  v9 = (unsigned int *)(src + 8);
  if ( (unsigned __int64)v2 <= 0x80 )
  {
    if ( v2 == 8 )
      return;
    while ( 1 )
    {
      v10 = *(_QWORD *)v9;
      v11 = *v8;
      v12 = *(unsigned int *)(*(_QWORD *)v9 + 96LL);
      if ( (unsigned int)v12 < *((_DWORD *)*v8 + 24) )
        break;
      if ( (_DWORD)v12 == *((_DWORD *)*v8 + 24) )
      {
        srcd = v8;
        sub_407990(*v8, v4, v12, (int)v8, v6, v7);
        v46 = *((unsigned int **)v11 + 2);
        sub_407990((_QWORD *)v10, v4, v47, v48, v49, v50);
        v51 = *(_DWORD **)(v10 + 16);
        v8 = srcd;
        v4 = *v46;
        v10 = *(_QWORD *)v9;
        if ( *v51 < (unsigned int)v4 )
          break;
        v12 = *(unsigned int *)(v10 + 96);
      }
      for ( i = v9; ; *((_QWORD *)i + 1) = v57 )
      {
        while ( 1 )
        {
          v14 = *((_QWORD *)i - 1);
          v15 = *(_DWORD *)(v14 + 96);
          if ( (unsigned int)v12 >= v15 )
            break;
          *(_QWORD *)i = v14;
          i -= 2;
        }
        if ( v15 != (_DWORD)v12 )
          break;
        srcf = v8;
        sub_407990(*((_QWORD **)i - 1), v4, v12, (int)v8, v6, v7);
        v52 = *(unsigned int **)(v14 + 16);
        sub_407990((_QWORD *)v10, v4, v53, v54, v55, v56);
        v8 = srcf;
        v4 = *v52;
        if ( **(_DWORD **)(v10 + 16) >= (unsigned int)v4 )
          break;
        v57 = *((_QWORD *)i - 1);
        v12 = *(unsigned int *)(v10 + 96);
        i -= 2;
      }
      *(_QWORD *)i = v10;
LABEL_8:
      v9 += 2;
      if ( v3 == v9 )
        return;
    }
    if ( (char *)v9 - (char *)v8 <= 8 )
    {
      if ( (char *)v9 - (char *)v8 == 8 )
        *(_QWORD *)v9 = *v8;
    }
    else
    {
      v4 = (__int64)v8;
      srce = v8;
      memmove(v8 + 1, v8, (char *)v9 - (char *)v8);
      v8 = srce;
    }
    *v8 = (_QWORD *)v10;
    goto LABEL_8;
  }
  v16 = (unsigned int *)(src + 128);
  do
  {
    v17 = *(_QWORD *)v9;
    v18 = *v8;
    v19 = *(unsigned int *)(*(_QWORD *)v9 + 96LL);
    if ( (unsigned int)v19 >= *((_DWORD *)*v8 + 24) )
    {
      if ( (_DWORD)v19 != *((_DWORD *)*v8 + 24) )
        goto LABEL_21;
      srca = v8;
      sub_407990(*v8, v4, v19, (int)v8, v6, v7);
      v34 = (unsigned int *)v18[2];
      sub_407990((_QWORD *)v17, v4, v35, v36, v37, v38);
      v39 = *(_DWORD **)(v17 + 16);
      v8 = srca;
      v4 = *v34;
      v17 = *(_QWORD *)v9;
      if ( *v39 >= (unsigned int)v4 )
      {
        v19 = *(unsigned int *)(v17 + 96);
LABEL_21:
        for ( j = v9; ; *((_QWORD *)j + 1) = v45 )
        {
          while ( 1 )
          {
            v21 = *((_QWORD *)j - 1);
            v22 = *(_DWORD *)(v21 + 96);
            if ( (unsigned int)v19 >= v22 )
              break;
            *(_QWORD *)j = v21;
            j -= 2;
          }
          if ( v22 != (_DWORD)v19 )
            break;
          srcc = v8;
          sub_407990(*((_QWORD **)j - 1), v4, v19, (int)v8, v6, v7);
          v40 = *(unsigned int **)(v21 + 16);
          sub_407990((_QWORD *)v17, v4, v41, v42, v43, v44);
          v8 = srcc;
          v4 = *v40;
          if ( **(_DWORD **)(v17 + 16) >= (unsigned int)v4 )
            break;
          v45 = *((_QWORD *)j - 1);
          v19 = *(unsigned int *)(v17 + 96);
          j -= 2;
        }
        *(_QWORD *)j = v17;
        goto LABEL_18;
      }
    }
    if ( (char *)v9 - (char *)v8 <= 8 )
    {
      if ( (char *)v9 - (char *)v8 == 8 )
        *(_QWORD *)v9 = *v8;
    }
    else
    {
      v4 = (__int64)v8;
      srcb = v8;
      memmove(v8 + 1, v8, (char *)v9 - (char *)v8);
      v8 = srcb;
    }
    *v8 = (_QWORD *)v17;
LABEL_18:
    v9 += 2;
  }
  while ( v16 != v9 );
  do
  {
    v23 = *(_QWORD *)v16;
    v24 = v16;
    v25 = *(unsigned int *)(*(_QWORD *)v16 + 96LL);
    while ( 1 )
    {
      while ( 1 )
      {
        v26 = *((_QWORD *)v24 - 1);
        v27 = *(_DWORD *)(v26 + 96);
        if ( (unsigned int)v25 >= v27 )
          break;
        *(_QWORD *)v24 = v26;
        v24 -= 2;
      }
      if ( v27 != (_DWORD)v25 )
        break;
      sub_407990(*((_QWORD **)v24 - 1), v4, v25, (int)v8, v6, v7);
      v28 = *(unsigned int **)(v26 + 16);
      sub_407990((_QWORD *)v23, v4, v29, v30, v31, v32);
      v4 = *v28;
      if ( **(_DWORD **)(v23 + 16) >= (unsigned int)v4 )
        break;
      v33 = *((_QWORD *)v24 - 1);
      v25 = *(unsigned int *)(v23 + 96);
      v24 -= 2;
      *((_QWORD *)v24 + 1) = v33;
    }
    v16 += 2;
    *(_QWORD *)v24 = v23;
  }
  while ( v3 != v16 );
}

