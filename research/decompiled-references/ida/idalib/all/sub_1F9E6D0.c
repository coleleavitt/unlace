__int64 __fastcall sub_1F9E6D0(__int64 **a1, __int64 a2)
{
  __int64 *v3; // rbp
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 *v8; // r15
  __int64 *v9; // r12
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 *v12; // r15
  __int64 *v13; // r12
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 *v18; // rbp
  __int64 *v19; // r12
  int v20; // esi
  __int64 v21; // rsi
  __int64 v22; // r14
  __int64 v23; // rax
  unsigned int *v24; // rbp
  unsigned int *v25; // r12
  __int64 v26; // rsi
  int v27; // edi
  unsigned int *v28; // rbp
  unsigned int *v29; // r12
  __int64 v30; // rsi
  __int64 result; // rax
  _QWORD *v32; // r12
  _QWORD *i; // r13
  __int64 *v34; // rbp
  __int64 v35; // rax
  unsigned __int64 v36; // r14
  __int64 *v37; // rax
  __int64 v38; // rbp
  __int64 v39; // rax

  v3 = (__int64 *)(a2 + 104);
  sub_9B9C90((*a1)[2], *(unsigned int *)(a2 + 16));
  sub_9B9C90((*a1)[2], *(unsigned int *)(a2 + 20));
  sub_9B9C90((*a1)[2], *(unsigned int *)(a2 + 24));
  sub_9B9C90((*a1)[2], *(unsigned int *)(a2 + 28));
  sub_1F6F570((_QWORD *)(*a1)[1], *(_DWORD *)(a2 + 12), (*a1)[2]);
  sub_9B9C90((*a1)[2], *(unsigned int *)(a2 + 80));
  sub_1F6F570((_QWORD *)(*a1)[1], *(_DWORD *)(a2 + 88), (*a1)[2]);
  sub_9B9C90((*a1)[2], *(unsigned int *)(a2 + 84));
  sub_1F6F570((_QWORD *)(*a1)[1], *(_DWORD *)(a2 + 92), (*a1)[2]);
  sub_1F9A420(*a1, *(_QWORD *)(a2 + 40), *(_QWORD *)(a2 + 48));
  sub_1F9E200((__int64)*a1, a2 + 56);
  sub_1F6F570((_QWORD *)(*a1)[1], *(_DWORD *)(a2 + 96), (*a1)[2]);
  v5 = *(unsigned int *)(a2 + 16);
  v6 = 8 * v5;
  v7 = 8 * v5 + 104;
  v8 = (__int64 *)(a2 + v7);
  if ( a2 + v7 != a2 + 104 )
  {
    do
    {
      while ( 1 )
      {
        v9 = *a1;
        v10 = *v3;
        v11 = *((unsigned int *)*a1 + 8);
        if ( v11 + 1 > (unsigned __int64)*((unsigned int *)*a1 + 9) )
          break;
        ++v3;
        *(_QWORD *)(v9[3] + 8 * v11) = v10;
        ++*((_DWORD *)v9 + 8);
        if ( v8 == v3 )
          goto LABEL_6;
      }
      ++v3;
      sub_2237220(v9 + 3, v9 + 5, v11 + 1, 8);
      *(_QWORD *)(v9[3] + 8LL * (unsigned int)(*((_DWORD *)v9 + 8))++) = v10;
    }
    while ( v8 != v3 );
LABEL_6:
    v5 = *(unsigned int *)(a2 + 16);
    v6 = 8 * v5;
    v7 = 8 * v5 + 104;
    v3 = (__int64 *)(a2 + v7);
  }
  v12 = (__int64 *)(a2 + v7 + v6);
  if ( v12 != v3 )
  {
    do
    {
      while ( 1 )
      {
        v13 = *a1;
        v14 = *v3;
        v15 = *((unsigned int *)*a1 + 8);
        if ( v15 + 1 > (unsigned __int64)*((unsigned int *)*a1 + 9) )
          break;
        ++v3;
        *(_QWORD *)(v13[3] + 8 * v15) = v14;
        ++*((_DWORD *)v13 + 8);
        if ( v12 == v3 )
          goto LABEL_12;
      }
      ++v3;
      sub_2237220(v13 + 3, v13 + 5, v15 + 1, 8);
      *(_QWORD *)(v13[3] + 8LL * (unsigned int)(*((_DWORD *)v13 + 8))++) = v14;
    }
    while ( v12 != v3 );
LABEL_12:
    LODWORD(v5) = *(_DWORD *)(a2 + 16);
  }
  v16 = *(unsigned int *)(a2 + 20);
  v17 = (unsigned int)(2 * v5);
  v18 = (__int64 *)(a2 + 8 * v17 + 104);
  v19 = &v18[v16];
  v20 = *(_DWORD *)(a2 + 20);
  if ( v18 != v19 )
  {
    do
    {
      v21 = *v18++;
      v22 = (*a1)[2];
      v23 = sub_1F92240((*a1)[1], v21);
      sub_9B9C90(v22, v23);
    }
    while ( v19 != v18 );
    v16 = *(unsigned int *)(a2 + 20);
    v20 = *(_DWORD *)(a2 + 20);
    v17 = (unsigned int)(2 * *(_DWORD *)(a2 + 16));
  }
  v24 = (unsigned int *)(a2 + 8 * (v16 + v17) + 104);
  v25 = &v24[v16];
  if ( v24 != v25 )
  {
    do
    {
      v26 = *v24++;
      sub_9B9C90((*a1)[2], v26);
    }
    while ( v25 != v24 );
    v16 = *(unsigned int *)(a2 + 20);
    v17 = (unsigned int)(2 * *(_DWORD *)(a2 + 16));
    v20 = *(_DWORD *)(a2 + 20);
  }
  v27 = *(_DWORD *)(a2 + 24);
  v28 = (unsigned int *)(a2 + 12 * v16 + 8 * v17 + 104);
  v29 = &v28[v27];
  if ( v28 != v29 )
  {
    do
    {
      v30 = *v28++;
      sub_9B9C90((*a1)[2], v30);
    }
    while ( v29 != v28 );
    v16 = *(unsigned int *)(a2 + 20);
    v27 = *(_DWORD *)(a2 + 24);
    v17 = (unsigned int)(2 * *(_DWORD *)(a2 + 16));
    v20 = *(_DWORD *)(a2 + 20);
  }
  result = 4LL * (unsigned int)(v20 + v27) + 8 * (v16 + v17) + 104;
  v32 = (_QWORD *)((a2 + result + 7) & 0xFFFFFFFFFFFFFFF8LL);
  for ( i = &v32[2 * *(unsigned int *)(a2 + 28)]; i != v32; result = sub_9B9C90(v38, v39) )
  {
    v34 = *a1;
    v35 = *((unsigned int *)*a1 + 8);
    v36 = *v32 & 0xFFFFFFFFFFFFFFFCLL;
    if ( v35 + 1 > (unsigned __int64)*((unsigned int *)*a1 + 9) )
    {
      sub_2237220(v34 + 3, v34 + 5, v35 + 1, 8);
      v35 = *((unsigned int *)v34 + 8);
    }
    v32 += 2;
    *(_QWORD *)(v34[3] + 8 * v35) = v36;
    v37 = *a1;
    ++*((_DWORD *)v34 + 8);
    sub_9B9C90(v37[2], ((__int64)*(v32 - 2) >> 1) & 1);
    v38 = (*a1)[2];
    v39 = sub_1F92240((*a1)[1], *(v32 - 1));
  }
  return result;
}
