__int64 __fastcall sub_1F961C0(__int64 *a1, __int64 a2)
{
  __int64 *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r15
  __int64 v8; // rbp
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 *v11; // r15
  __int64 v12; // rbp
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 *v15; // rbp
  __int64 *v16; // r14
  __int64 v17; // rbx
  __int64 v18; // r15
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 *v22; // rbx
  __int64 *v23; // rbp
  int v24; // esi
  __int64 v25; // rsi
  __int64 v26; // r14
  __int64 v27; // rax
  unsigned int *v28; // rbx
  unsigned int *v29; // rbp
  __int64 v30; // rsi
  int v31; // ecx
  unsigned int *v32; // rbx
  unsigned int *v33; // rbp
  __int64 v34; // rsi
  __int64 result; // rax
  _QWORD *v36; // rbp
  _QWORD *i; // r14
  __int64 v38; // rbx
  __int64 v39; // rax
  unsigned __int64 v40; // r13
  __int64 v41; // rax
  __int64 v42; // rbx
  __int64 v43; // rax
  int v44; // edx

  v4 = (__int64 *)(a2 + 80);
  sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 16));
  sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 20));
  sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 24));
  sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 28));
  sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 12), *(_QWORD *)(*a1 + 16));
  v5 = *(unsigned int *)(a2 + 16);
  v6 = v5;
  v7 = a2 + 8 * v5 + 80;
  if ( v7 == a2 + 80 )
  {
    v44 = *(_DWORD *)(a2 + 16);
  }
  else
  {
    do
    {
      while ( 1 )
      {
        v8 = *a1;
        v9 = *v4;
        v10 = *(unsigned int *)(*a1 + 32);
        if ( v10 + 1 > (unsigned __int64)*(unsigned int *)(*a1 + 36) )
          break;
        ++v4;
        *(_QWORD *)(*(_QWORD *)(v8 + 24) + 8 * v10) = v9;
        ++*(_DWORD *)(v8 + 32);
        if ( (__int64 *)v7 == v4 )
          goto LABEL_6;
      }
      ++v4;
      sub_2237220(v8 + 24, v8 + 40, v10 + 1, 8);
      *(_QWORD *)(*(_QWORD *)(v8 + 24) + 8LL * (unsigned int)(*(_DWORD *)(v8 + 32))++) = v9;
    }
    while ( (__int64 *)v7 != v4 );
LABEL_6:
    v5 = *(unsigned int *)(a2 + 16);
    v6 = v5;
    v44 = *(_DWORD *)(a2 + 16);
    v4 = (__int64 *)(a2 + 8 * v5 + 80);
  }
  v11 = &v4[v6];
  if ( &v4[v6] != v4 )
  {
    do
    {
      while ( 1 )
      {
        v12 = *a1;
        v13 = *v4;
        v14 = *(unsigned int *)(*a1 + 32);
        if ( v14 + 1 > (unsigned __int64)*(unsigned int *)(*a1 + 36) )
          break;
        ++v4;
        *(_QWORD *)(*(_QWORD *)(v12 + 24) + 8 * v14) = v13;
        ++*(_DWORD *)(v12 + 32);
        if ( v11 == v4 )
          goto LABEL_12;
      }
      ++v4;
      sub_2237220(v12 + 24, v12 + 40, v14 + 1, 8);
      *(_QWORD *)(*(_QWORD *)(v12 + 24) + 8LL * (unsigned int)(*(_DWORD *)(v12 + 32))++) = v13;
    }
    while ( v11 != v4 );
LABEL_12:
    v5 = *(unsigned int *)(a2 + 16);
    v44 = *(_DWORD *)(a2 + 16);
    v6 = v5;
  }
  v15 = (__int64 *)(a2 + 16 * v5 + 80);
  v16 = &v15[v6];
  if ( v15 != &v15[v6] )
  {
    do
    {
      while ( 1 )
      {
        v17 = *a1;
        v18 = *v15;
        v19 = *(unsigned int *)(*a1 + 32);
        if ( v19 + 1 > (unsigned __int64)*(unsigned int *)(*a1 + 36) )
          break;
        ++v15;
        *(_QWORD *)(*(_QWORD *)(v17 + 24) + 8 * v19) = v18;
        ++*(_DWORD *)(v17 + 32);
        if ( v16 == v15 )
          goto LABEL_18;
      }
      ++v15;
      sub_2237220(v17 + 24, v17 + 40, v19 + 1, 8);
      *(_QWORD *)(*(_QWORD *)(v17 + 24) + 8LL * (unsigned int)(*(_DWORD *)(v17 + 32))++) = v18;
    }
    while ( v16 != v15 );
LABEL_18:
    v44 = *(_DWORD *)(a2 + 16);
  }
  v20 = *(unsigned int *)(a2 + 20);
  v21 = (unsigned int)(3 * v44);
  v22 = (__int64 *)(a2 + 8 * v21 + 80);
  v23 = &v22[v20];
  v24 = *(_DWORD *)(a2 + 20);
  if ( v22 != v23 )
  {
    do
    {
      v25 = *v22++;
      v26 = *(_QWORD *)(*a1 + 16);
      v27 = sub_1F92240(*(_QWORD *)(*a1 + 8), v25);
      sub_9B9C90(v26, v27);
    }
    while ( v23 != v22 );
    v20 = *(unsigned int *)(a2 + 20);
    v24 = *(_DWORD *)(a2 + 20);
    v21 = (unsigned int)(3 * *(_DWORD *)(a2 + 16));
  }
  v28 = (unsigned int *)(a2 + 8 * (v20 + v21) + 80);
  v29 = &v28[v20];
  if ( v28 != v29 )
  {
    do
    {
      v30 = *v28++;
      sub_9B9C90(*(_QWORD *)(*a1 + 16), v30);
    }
    while ( v29 != v28 );
    v21 = (unsigned int)(3 * *(_DWORD *)(a2 + 16));
    v20 = *(unsigned int *)(a2 + 20);
    v24 = *(_DWORD *)(a2 + 20);
  }
  v31 = *(_DWORD *)(a2 + 24);
  v32 = (unsigned int *)(a2 + 12 * v20 + 8 * v21 + 80);
  v33 = &v32[v31];
  if ( v32 != v33 )
  {
    do
    {
      v34 = *v32++;
      sub_9B9C90(*(_QWORD *)(*a1 + 16), v34);
    }
    while ( v33 != v32 );
    v31 = *(_DWORD *)(a2 + 24);
    v21 = (unsigned int)(3 * *(_DWORD *)(a2 + 16));
    v20 = *(unsigned int *)(a2 + 20);
    v24 = *(_DWORD *)(a2 + 20);
  }
  result = 4LL * (unsigned int)(v24 + v31) + 8 * (v21 + v20) + 80;
  v36 = (_QWORD *)((a2 + result + 7) & 0xFFFFFFFFFFFFFFF8LL);
  for ( i = &v36[2 * *(unsigned int *)(a2 + 28)]; i != v36; result = sub_9B9C90(v42, v43) )
  {
    v38 = *a1;
    v39 = *(unsigned int *)(*a1 + 32);
    v40 = *v36 & 0xFFFFFFFFFFFFFFFCLL;
    if ( v39 + 1 > (unsigned __int64)*(unsigned int *)(*a1 + 36) )
    {
      sub_2237220(v38 + 24, v38 + 40, v39 + 1, 8);
      v39 = *(unsigned int *)(v38 + 32);
    }
    v36 += 2;
    *(_QWORD *)(*(_QWORD *)(v38 + 24) + 8 * v39) = v40;
    v41 = *a1;
    ++*(_DWORD *)(v38 + 32);
    v42 = *(_QWORD *)(v41 + 16);
    v43 = sub_1F92240(*(_QWORD *)(v41 + 8), *(v36 - 1));
  }
  return result;
}
