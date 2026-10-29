void __fastcall sub_7CD510(const char **a1, const char *a2, __int64 a3)
{
  const char *v3; // r15
  const char *v5; // r12
  __int64 v6; // r13
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rbx
  void *v11; // rax
  void *v12; // rax
  void *v13; // rax
  void *v14; // rax
  void *v15; // rax
  void *v16; // rax
  void *v17; // rax
  size_t ne; // [rsp+0h] [rbp-48h]
  size_t nf; // [rsp+0h] [rbp-48h]
  size_t nd; // [rsp+0h] [rbp-48h]
  size_t nc; // [rsp+0h] [rbp-48h]
  size_t nb; // [rsp+0h] [rbp-48h]
  size_t na; // [rsp+0h] [rbp-48h]
  size_t n; // [rsp+0h] [rbp-48h]
  __int64 v25; // [rsp+8h] [rbp-40h]

  v3 = a2;
  if ( a1[2] < a2 )
  {
    a2 = *a1;
    *a1 = (const char *)qvector_reserve(a1, *a1, v3, 216);
  }
  v5 = a1[1];
  if ( v5 < v3 )
  {
    v6 = 216LL * (_QWORD)v5;
    do
    {
      while ( 1 )
      {
        v10 = (__int64)&(*a1)[v6];
        *(_DWORD *)v10 = *(_DWORD *)a3;
        *(_QWORD *)(v10 + 8) = 0;
        *(_OWORD *)(v10 + 16) = 0;
        if ( *(_QWORD *)(a3 + 16) )
        {
          ne = *(_QWORD *)(a3 + 16);
          v11 = (void *)qalloc_or_throw(ne, a2);
          *(_QWORD *)(v10 + 8) = v11;
          *(_QWORD *)(v10 + 24) = ne;
          a2 = *(const char **)(a3 + 8);
          memcpy(v11, a2, ne);
          *(_QWORD *)(v10 + 16) = ne;
        }
        *(_QWORD *)(v10 + 32) = 0;
        *(_OWORD *)(v10 + 40) = 0;
        if ( *(_QWORD *)(a3 + 40) )
        {
          n = *(_QWORD *)(a3 + 40);
          v17 = (void *)qalloc_or_throw(n, a2);
          *(_QWORD *)(v10 + 32) = v17;
          *(_QWORD *)(v10 + 48) = n;
          a2 = *(const char **)(a3 + 32);
          memcpy(v17, a2, n);
          *(_QWORD *)(v10 + 40) = n;
        }
        *(_QWORD *)(v10 + 56) = 0;
        *(_OWORD *)(v10 + 64) = 0;
        if ( *(_QWORD *)(a3 + 64) )
        {
          na = *(_QWORD *)(a3 + 64);
          v16 = (void *)qalloc_or_throw(na, a2);
          *(_QWORD *)(v10 + 56) = v16;
          *(_QWORD *)(v10 + 72) = na;
          a2 = *(const char **)(a3 + 56);
          memcpy(v16, a2, na);
          *(_QWORD *)(v10 + 64) = na;
        }
        *(_QWORD *)(v10 + 80) = 0;
        *(_OWORD *)(v10 + 88) = 0;
        if ( *(_QWORD *)(a3 + 88) )
        {
          nb = *(_QWORD *)(a3 + 88);
          v15 = (void *)qalloc_or_throw(nb, a2);
          *(_QWORD *)(v10 + 80) = v15;
          *(_QWORD *)(v10 + 96) = nb;
          a2 = *(const char **)(a3 + 80);
          memcpy(v15, a2, nb);
          *(_QWORD *)(v10 + 88) = nb;
        }
        *(_QWORD *)(v10 + 104) = 0;
        *(_OWORD *)(v10 + 112) = 0;
        if ( *(_QWORD *)(a3 + 112) )
        {
          nc = *(_QWORD *)(a3 + 112);
          v14 = (void *)qalloc_or_throw(nc, a2);
          *(_QWORD *)(v10 + 104) = v14;
          *(_QWORD *)(v10 + 120) = nc;
          a2 = *(const char **)(a3 + 104);
          memcpy(v14, a2, nc);
          *(_QWORD *)(v10 + 112) = nc;
        }
        *(_DWORD *)(v10 + 128) = *(_DWORD *)(a3 + 128);
        *(_QWORD *)(v10 + 136) = *(_QWORD *)(a3 + 136);
        *(_DWORD *)(v10 + 144) = *(_DWORD *)(a3 + 144);
        v7 = *(_QWORD *)(a3 + 152);
        *(_QWORD *)(v10 + 160) = 0;
        *(_QWORD *)(v10 + 152) = v7;
        *(_OWORD *)(v10 + 168) = 0;
        if ( *(_QWORD *)(a3 + 168) )
        {
          nd = *(_QWORD *)(a3 + 168);
          v13 = (void *)qalloc_or_throw(nd, a2);
          *(_QWORD *)(v10 + 160) = v13;
          *(_QWORD *)(v10 + 176) = nd;
          a2 = *(const char **)(a3 + 160);
          memcpy(v13, a2, nd);
          *(_QWORD *)(v10 + 168) = nd;
        }
        v8 = *(_DWORD *)(a3 + 184);
        *(_QWORD *)(v10 + 192) = 0;
        *(_OWORD *)(v10 + 200) = 0;
        *(_DWORD *)(v10 + 184) = v8;
        v9 = *(_QWORD *)(a3 + 200);
        if ( v9 )
          break;
        ++v5;
        v6 += 216;
        if ( v3 == v5 )
          goto LABEL_20;
      }
      nf = *(_QWORD *)(a3 + 200);
      v25 = 24 * v9;
      v12 = (void *)qalloc_or_throw(24 * v9, a2);
      ++v5;
      *(_QWORD *)(v10 + 192) = v12;
      v6 += 216;
      *(_QWORD *)(v10 + 208) = nf;
      a2 = *(const char **)(a3 + 192);
      memcpy(v12, a2, v25);
      *(_QWORD *)(v10 + 200) = nf;
    }
    while ( v3 != v5 );
  }
LABEL_20:
  a1[1] = v3;
}

