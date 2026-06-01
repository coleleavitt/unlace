__int64 __fastcall sub_1F6FEA0(__int64 *a1, __int64 a2)
{
  __int64 *v2; // r12
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rbp
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 *v10; // r15
  __int64 *v11; // r12
  __int64 v12; // rbp
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 *v15; // r12
  __int64 *v16; // r14
  __int64 v17; // rbp
  __int64 v18; // r15
  __int64 v19; // rax
  __int64 *v20; // r12
  __int64 *v21; // r14
  __int64 v22; // rbp
  __int64 v23; // r15
  __int64 v24; // rax
  __int64 *v25; // r12
  __int64 *v26; // r14
  __int64 v27; // rbp
  __int64 v28; // r15
  __int64 v29; // rax
  __int64 *v30; // r12
  __int64 result; // rax
  __int64 *i; // r14
  __int64 v33; // rbp
  __int64 v34; // r13

  v2 = (__int64 *)(a2 + 64);
  sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 16));
  sub_1F6F3D0(a1, (__int64 *)(a2 + 24));
  sub_183F100(*a1 + 24, *(_QWORD *)(a2 + 40));
  sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 12), *(_QWORD *)(*a1 + 16));
  sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 56), *(_QWORD *)(*a1 + 16));
  sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 48));
  sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 52), *(_QWORD *)(*a1 + 16));
  v4 = *(unsigned int *)(a2 + 16);
  v5 = v4;
  v6 = a2 + 8 * v4 + 64;
  if ( v6 != a2 + 64 )
  {
    do
    {
      while ( 1 )
      {
        v7 = *a1;
        v8 = *v2;
        v9 = *(unsigned int *)(*a1 + 32);
        if ( v9 + 1 > (unsigned __int64)*(unsigned int *)(*a1 + 36) )
          break;
        ++v2;
        *(_QWORD *)(*(_QWORD *)(v7 + 24) + 8 * v9) = v8;
        ++*(_DWORD *)(v7 + 32);
        if ( (__int64 *)v6 == v2 )
          goto LABEL_6;
      }
      ++v2;
      sub_2237220(v7 + 24, v7 + 40, v9 + 1, 8);
      *(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL * (unsigned int)(*(_DWORD *)(v7 + 32))++) = v8;
    }
    while ( (__int64 *)v6 != v2 );
LABEL_6:
    v4 = *(unsigned int *)(a2 + 16);
    v5 = v4;
    v6 = a2 + 8 * v4 + 64;
  }
  v10 = (__int64 *)(v6 + v5 * 8);
  if ( v6 + v5 * 8 != v6 )
  {
    v11 = (__int64 *)v6;
    do
    {
      while ( 1 )
      {
        v12 = *a1;
        v13 = *v11;
        v14 = *(unsigned int *)(*a1 + 32);
        if ( v14 + 1 > (unsigned __int64)*(unsigned int *)(*a1 + 36) )
          break;
        ++v11;
        *(_QWORD *)(*(_QWORD *)(v12 + 24) + 8 * v14) = v13;
        ++*(_DWORD *)(v12 + 32);
        if ( v10 == v11 )
          goto LABEL_12;
      }
      ++v11;
      sub_2237220(v12 + 24, v12 + 40, v14 + 1, 8);
      *(_QWORD *)(*(_QWORD *)(v12 + 24) + 8LL * (unsigned int)(*(_DWORD *)(v12 + 32))++) = v13;
    }
    while ( v10 != v11 );
LABEL_12:
    v4 = *(unsigned int *)(a2 + 16);
    v5 = v4;
  }
  v15 = (__int64 *)(a2 + 16 * v4 + 64);
  v16 = &v15[v5];
  if ( v15 != &v15[v5] )
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
    v4 = *(unsigned int *)(a2 + 16);
    v5 = v4;
  }
  v20 = (__int64 *)(a2 + 24 * v4 + 64);
  v21 = &v20[v5];
  if ( v20 != &v20[v5] )
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
    v4 = *(unsigned int *)(a2 + 16);
    v5 = v4;
  }
  v25 = (__int64 *)(a2 + 32 * v4 + 64);
  v26 = &v25[v5];
  if ( v25 != &v25[v5] )
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
    v4 = *(unsigned int *)(a2 + 16);
  }
  sub_183F100(*a1 + 24, *(_QWORD *)(a2 + 40 * v4 + 64));
  sub_183F100(*a1 + 24, *(_QWORD *)(a2 + 40LL * *(unsigned int *)(a2 + 16) + 72));
  v30 = (__int64 *)(a2 + 40LL * *(unsigned int *)(a2 + 16) + 80);
  result = (unsigned int)(*(_DWORD *)(a2 + 16) + 1);
  for ( i = &v30[result]; i != v30; ++*(_DWORD *)(v33 + 32) )
  {
    while ( 1 )
    {
      v33 = *a1;
      v34 = *v30;
      result = *(unsigned int *)(*a1 + 32);
      if ( result + 1 > (unsigned __int64)*(unsigned int *)(*a1 + 36) )
        break;
      ++v30;
      *(_QWORD *)(*(_QWORD *)(v33 + 24) + 8 * result) = v34;
      ++*(_DWORD *)(v33 + 32);
      if ( i == v30 )
        return result;
    }
    ++v30;
    sub_2237220(v33 + 24, v33 + 40, result + 1, 8);
    result = *(_QWORD *)(v33 + 24);
    *(_QWORD *)(result + 8LL * *(unsigned int *)(v33 + 32)) = v34;
  }
  return result;
}
