__int64 __fastcall sub_1F9E240(__int64 *a1, __int64 a2)
{
  __int64 *v3; // r14
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 *v7; // r13
  __int64 v8; // rbp
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 *v11; // r15
  __int64 v12; // rbp
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 *v15; // r13
  __int64 *v16; // r15
  __int64 v17; // rbp
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 *v20; // r13
  __int64 *v21; // r15
  __int64 v22; // rbp
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 *v25; // r13
  __int64 *v26; // r14
  __int64 v27; // rbp
  __int64 v28; // r15
  __int64 v29; // rax
  int v30; // eax
  unsigned __int8 *v31; // rbp
  unsigned __int8 *v32; // r12
  __int64 result; // rax
  __int64 v34; // rsi
  __int64 v35; // r13
  __int64 *v36; // rbp
  __int64 *v37; // r14
  __int64 v38; // rsi
  __int64 *v39; // rbp
  __int64 *v40; // r14
  __int64 v41; // rsi
  __int64 *v42; // rbp
  __int64 *v43; // r13
  __int64 v44; // rsi
  int v45; // edx

  v3 = (__int64 *)(a2 + 104);
  sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 16));
  sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 48));
  sub_1F6F3D0(a1, (__int64 *)(a2 + 24));
  sub_183F100(*a1 + 24, *(_QWORD *)(a2 + 40));
  sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 12), *(_QWORD *)(*a1 + 16));
  sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 56), *(_QWORD *)(*a1 + 16));
  sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 60), *(_QWORD *)(*a1 + 16));
  sub_1F9A420((__int64 *)*a1, *(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 72));
  sub_1F9E200(*a1, a2 + 80);
  v5 = *(unsigned int *)(a2 + 16);
  v6 = v5;
  v7 = (__int64 *)(a2 + 8 * v5 + 104);
  if ( v7 == v3 )
  {
    v45 = *(_DWORD *)(a2 + 16);
  }
  else
  {
    do
    {
      while ( 1 )
      {
        v8 = *a1;
        v9 = *v3;
        v10 = *(unsigned int *)(*a1 + 32);
        if ( v10 + 1 > (unsigned __int64)*(unsigned int *)(*a1 + 36) )
          break;
        ++v3;
        *(_QWORD *)(*(_QWORD *)(v8 + 24) + 8 * v10) = v9;
        ++*(_DWORD *)(v8 + 32);
        if ( v7 == v3 )
          goto LABEL_6;
      }
      ++v3;
      sub_2237220(v8 + 24, v8 + 40, v10 + 1, 8);
      *(_QWORD *)(*(_QWORD *)(v8 + 24) + 8LL * (unsigned int)(*(_DWORD *)(v8 + 32))++) = v9;
    }
    while ( v7 != v3 );
LABEL_6:
    v5 = *(unsigned int *)(a2 + 16);
    v6 = v5;
    v45 = *(_DWORD *)(a2 + 16);
    v7 = (__int64 *)(a2 + 8 * v5 + 104);
  }
  v11 = &v7[v6];
  if ( &v7[v6] != v7 )
  {
    do
    {
      while ( 1 )
      {
        v12 = *a1;
        v13 = *v7;
        v14 = *(unsigned int *)(*a1 + 32);
        if ( v14 + 1 > (unsigned __int64)*(unsigned int *)(*a1 + 36) )
          break;
        ++v7;
        *(_QWORD *)(*(_QWORD *)(v12 + 24) + 8 * v14) = v13;
        ++*(_DWORD *)(v12 + 32);
        if ( v11 == v7 )
          goto LABEL_12;
      }
      ++v7;
      sub_2237220(v12 + 24, v12 + 40, v14 + 1, 8);
      *(_QWORD *)(*(_QWORD *)(v12 + 24) + 8LL * (unsigned int)(*(_DWORD *)(v12 + 32))++) = v13;
    }
    while ( v11 != v7 );
LABEL_12:
    v5 = *(unsigned int *)(a2 + 16);
    v45 = *(_DWORD *)(a2 + 16);
    v6 = v5;
  }
  v15 = (__int64 *)(a2 + 16 * v5 + 104);
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
    v5 = *(unsigned int *)(a2 + 16);
    v45 = *(_DWORD *)(a2 + 16);
    v6 = v5;
  }
  v20 = (__int64 *)(a2 + 24 * v5 + 104);
  v21 = &v20[v6];
  if ( v20 != &v20[v6] )
  {
    do
    {
      while ( 1 )
      {
        v22 = *a1;
        v23 = *v20;
        v24 = *(unsigned int *)(*a1 + 32);
        if ( v24 + 1 > (unsigned __int64)*(unsigned int *)(*a1 + 36) )
          break;
        ++v20;
        *(_QWORD *)(*(_QWORD *)(v22 + 24) + 8 * v24) = v23;
        ++*(_DWORD *)(v22 + 32);
        if ( v21 == v20 )
          goto LABEL_24;
      }
      ++v20;
      sub_2237220(v22 + 24, v22 + 40, v24 + 1, 8);
      *(_QWORD *)(*(_QWORD *)(v22 + 24) + 8LL * (unsigned int)(*(_DWORD *)(v22 + 32))++) = v23;
    }
    while ( v21 != v20 );
LABEL_24:
    v5 = *(unsigned int *)(a2 + 16);
    v45 = *(_DWORD *)(a2 + 16);
    v6 = v5;
  }
  v25 = (__int64 *)(a2 + 32 * v5 + 104);
  v26 = &v25[v6];
  if ( v25 != &v25[v6] )
  {
    do
    {
      while ( 1 )
      {
        v27 = *a1;
        v28 = *v25;
        v29 = *(unsigned int *)(*a1 + 32);
        if ( v29 + 1 > (unsigned __int64)*(unsigned int *)(*a1 + 36) )
          break;
        ++v25;
        *(_QWORD *)(*(_QWORD *)(v27 + 24) + 8 * v29) = v28;
        ++*(_DWORD *)(v27 + 32);
        if ( v26 == v25 )
          goto LABEL_30;
      }
      ++v25;
      sub_2237220(v27 + 24, v27 + 40, v29 + 1, 8);
      *(_QWORD *)(*(_QWORD *)(v27 + 24) + 8LL * (unsigned int)(*(_DWORD *)(v27 + 32))++) = v28;
    }
    while ( v26 != v25 );
LABEL_30:
    v5 = *(unsigned int *)(a2 + 16);
    v45 = *(_DWORD *)(a2 + 16);
  }
  v30 = 5;
  if ( *(_DWORD *)(a2 + 48) == 1 )
  {
    v35 = v5;
    v36 = (__int64 *)(a2 + 40 * v5 + 104);
    v37 = &v36[v5];
    if ( v36 != v37 )
    {
      do
      {
        v38 = *v36++;
        sub_183F100(*a1 + 24, v38);
      }
      while ( v37 != v36 );
      v5 = *(unsigned int *)(a2 + 16);
      v45 = *(_DWORD *)(a2 + 16);
      v35 = v5;
    }
    v39 = (__int64 *)(a2 + 48 * v5 + 104);
    v40 = &v39[v35];
    if ( v39 != &v39[v35] )
    {
      do
      {
        v41 = *v39++;
        sub_183F100(*a1 + 24, v41);
      }
      while ( v40 != v39 );
      v5 = *(unsigned int *)(a2 + 16);
      v45 = *(_DWORD *)(a2 + 16);
      v35 = v5;
    }
    v42 = (__int64 *)(a2 + 56 * v5 + 104);
    v43 = &v42[v35];
    if ( v42 != v43 )
    {
      do
      {
        v44 = *v42++;
        sub_183F100(*a1 + 24, v44);
      }
      while ( v43 != v42 );
      v5 = *(unsigned int *)(a2 + 16);
      v45 = *(_DWORD *)(a2 + 16);
    }
    v30 = 3 * (*(_DWORD *)(a2 + 48) == 1) + 5;
  }
  v31 = (unsigned __int8 *)(a2 + 8LL * (unsigned int)(v45 * v30) + 104);
  v32 = &v31[v5];
  for ( result = sub_9B9C90(*(_QWORD *)(*a1 + 16), v5); v31 != v32; result = sub_9B9C90(*(_QWORD *)(*a1 + 16), v34) )
    v34 = *v31++;
  return result;
}
