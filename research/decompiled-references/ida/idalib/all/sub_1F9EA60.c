__int64 __fastcall sub_1F9EA60(__int64 **a1, __int64 a2)
{
  char v2; // r14
  unsigned int *v4; // rbp
  __int64 *v6; // rbp
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // rdx
  __int64 *v10; // r8
  __int64 *v11; // r12
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 *v14; // r15
  __int64 *v15; // r12
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 *v21; // rbp
  __int64 *v22; // r12
  int v23; // ecx
  __int64 v24; // rsi
  __int64 v25; // r14
  __int64 v26; // rax
  unsigned int *v27; // rbp
  unsigned int *v28; // r12
  __int64 v29; // rsi
  int v30; // edi
  unsigned int *v31; // rbp
  unsigned int *v32; // r12
  __int64 v33; // rsi
  __int64 result; // rax
  _QWORD *v35; // r12
  _QWORD *i; // r14
  __int64 *v37; // rbp
  __int64 v38; // rax
  unsigned __int64 v39; // r13
  __int64 *v40; // rax
  __int64 v41; // rbp
  __int64 v42; // rax
  __int64 *v43; // [rsp+8h] [rbp-40h]
  __int64 v44; // [rsp+8h] [rbp-40h]

  v2 = 0;
  v4 = (unsigned int *)(a2 + 80);
  sub_9B9C90((*a1)[2], *(unsigned int *)(a2 + 16));
  sub_9B9C90((*a1)[2], *(unsigned int *)(a2 + 20));
  sub_9B9C90((*a1)[2], *(unsigned int *)(a2 + 24));
  sub_9B9C90((*a1)[2], *(unsigned int *)(a2 + 28));
  sub_1F6F570((_QWORD *)(*a1)[1], *(_DWORD *)(a2 + 12), (*a1)[2]);
  do
  {
    sub_9B9C90((*a1)[2], *v4);
    sub_1F6F570((_QWORD *)(*a1)[1], v4[7], (*a1)[2]);
    if ( *v4 == 10 )
      v2 = 1;
    ++v4;
  }
  while ( (unsigned int *)(a2 + 108) != v4 );
  v6 = (__int64 *)(a2 + 152);
  sub_1F9A420(*a1, *(_QWORD *)(a2 + 40), *(_QWORD *)(a2 + 48));
  sub_1F9E200((__int64)*a1, a2 + 56);
  sub_9B9C90((*a1)[2], *(unsigned int *)(a2 + 136));
  sub_1F6F570((_QWORD *)(*a1)[1], *(_DWORD *)(a2 + 144), (*a1)[2]);
  sub_1F6F570((_QWORD *)(*a1)[1], *(_DWORD *)(a2 + 148), (*a1)[2]);
  v7 = *(unsigned int *)(a2 + 16);
  v8 = 8 * v7;
  v9 = 8 * v7 + 152;
  v10 = (__int64 *)(a2 + v9);
  if ( a2 + v9 != a2 + 152 )
  {
    do
    {
      while ( 1 )
      {
        v11 = *a1;
        v12 = *v6;
        v13 = *((unsigned int *)*a1 + 8);
        if ( v13 + 1 > (unsigned __int64)*((unsigned int *)*a1 + 9) )
          break;
        ++v6;
        *(_QWORD *)(v11[3] + 8 * v13) = v12;
        ++*((_DWORD *)v11 + 8);
        if ( v10 == v6 )
          goto LABEL_10;
      }
      v43 = v10;
      sub_2237220(v11 + 3, v11 + 5, v13 + 1, 8);
      ++v6;
      v10 = v43;
      *(_QWORD *)(v11[3] + 8LL * (unsigned int)(*((_DWORD *)v11 + 8))++) = v12;
    }
    while ( v43 != v6 );
LABEL_10:
    v7 = *(unsigned int *)(a2 + 16);
    v8 = 8 * v7;
    v9 = 8 * v7 + 152;
    v6 = (__int64 *)(a2 + v9);
  }
  v14 = (__int64 *)(a2 + v9 + v8);
  if ( v14 != v6 )
  {
    do
    {
      while ( 1 )
      {
        v15 = *a1;
        v16 = *v6;
        v17 = *((unsigned int *)*a1 + 8);
        if ( v17 + 1 > (unsigned __int64)*((unsigned int *)*a1 + 9) )
          break;
        ++v6;
        *(_QWORD *)(v15[3] + 8 * v17) = v16;
        ++*((_DWORD *)v15 + 8);
        if ( v14 == v6 )
          goto LABEL_16;
      }
      v44 = *v6;
      sub_2237220(v15 + 3, v15 + 5, v17 + 1, 8);
      ++v6;
      *(_QWORD *)(v15[3] + 8LL * (unsigned int)(*((_DWORD *)v15 + 8))++) = v44;
    }
    while ( v14 != v6 );
LABEL_16:
    LODWORD(v7) = *(_DWORD *)(a2 + 16);
  }
  v18 = (unsigned int)(2 * v7);
  if ( v2 )
  {
    sub_183F100((__int64)(*a1 + 3), *(_QWORD *)(a2 + 8 * v18 + 152));
    LODWORD(v18) = 2 * *(_DWORD *)(a2 + 16);
  }
  v19 = *(unsigned int *)(a2 + 20);
  v20 = (unsigned int)(v18 + 1);
  v21 = (__int64 *)(a2 + 8 * v20 + 152);
  v22 = &v21[v19];
  v23 = *(_DWORD *)(a2 + 20);
  if ( v21 != v22 )
  {
    do
    {
      v24 = *v21++;
      v25 = (*a1)[2];
      v26 = sub_1F92240((*a1)[1], v24);
      sub_9B9C90(v25, v26);
    }
    while ( v22 != v21 );
    v19 = *(unsigned int *)(a2 + 20);
    v23 = *(_DWORD *)(a2 + 20);
    v20 = (unsigned int)(2 * *(_DWORD *)(a2 + 16) + 1);
  }
  v27 = (unsigned int *)(a2 + 8 * (v19 + v20) + 152);
  v28 = &v27[v19];
  if ( v27 != v28 )
  {
    do
    {
      v29 = *v27++;
      sub_9B9C90((*a1)[2], v29);
    }
    while ( v28 != v27 );
    v19 = *(unsigned int *)(a2 + 20);
    v20 = (unsigned int)(2 * *(_DWORD *)(a2 + 16) + 1);
    v23 = *(_DWORD *)(a2 + 20);
  }
  v30 = *(_DWORD *)(a2 + 24);
  v31 = (unsigned int *)(a2 + 12 * v19 + 8 * v20 + 152);
  v32 = &v31[v30];
  if ( v31 != v32 )
  {
    do
    {
      v33 = *v31++;
      sub_9B9C90((*a1)[2], v33);
    }
    while ( v32 != v31 );
    v19 = *(unsigned int *)(a2 + 20);
    v30 = *(_DWORD *)(a2 + 24);
    v20 = (unsigned int)(2 * *(_DWORD *)(a2 + 16) + 1);
    v23 = *(_DWORD *)(a2 + 20);
  }
  result = 4LL * (unsigned int)(v23 + v30) + 8 * (v19 + v20) + 152;
  v35 = (_QWORD *)((a2 + result + 7) & 0xFFFFFFFFFFFFFFF8LL);
  for ( i = &v35[2 * *(unsigned int *)(a2 + 28)]; i != v35; result = sub_9B9C90(v41, v42) )
  {
    v37 = *a1;
    v38 = *((unsigned int *)*a1 + 8);
    v39 = *v35 & 0xFFFFFFFFFFFFFFFCLL;
    if ( v38 + 1 > (unsigned __int64)*((unsigned int *)*a1 + 9) )
    {
      sub_2237220(v37 + 3, v37 + 5, v38 + 1, 8);
      v38 = *((unsigned int *)v37 + 8);
    }
    v35 += 2;
    *(_QWORD *)(v37[3] + 8 * v38) = v39;
    v40 = *a1;
    ++*((_DWORD *)v37 + 8);
    v41 = v40[2];
    v42 = sub_1F92240(v40[1], *(v35 - 1));
  }
  return result;
}
