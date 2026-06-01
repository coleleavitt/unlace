__int64 __fastcall sub_4A10E0(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v9; // r13
  _QWORD *v12; // r12
  __int64 v13; // rcx
  unsigned __int64 v14; // rbp
  __int64 v15; // r8
  __int64 v16; // r9
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rsi
  void *v22; // r9
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rsi
  _QWORD *v26; // rdx
  _QWORD *v27; // rsi
  __int64 v28; // rdi
  char *v29; // rbx
  __int64 v30; // rdx
  int v31; // eax
  char *v32; // r12
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 i; // rcx
  unsigned __int64 v36; // r14
  char *v37; // rax
  __int64 v38; // rcx
  char *v39; // rsi
  char *v40; // rax
  int v41; // eax
  __int64 j; // r12
  _QWORD *v43; // rdx
  unsigned __int64 v44; // rax
  _QWORD *v45; // rsi
  __int64 v46; // rdi
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rax
  char *v50; // [rsp+8h] [rbp-70h]
  char *v51; // [rsp+8h] [rbp-70h]
  void *v52; // [rsp+8h] [rbp-70h]
  void *v53; // [rsp+8h] [rbp-70h]
  char *v54; // [rsp+8h] [rbp-70h]
  __int64 v55; // [rsp+10h] [rbp-68h]
  char *v56; // [rsp+10h] [rbp-68h]
  __int64 v57; // [rsp+18h] [rbp-60h]
  void *v58; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 *v59[9]; // [rsp+30h] [rbp-48h] BYREF

  v59[1] = (unsigned __int64 *)__readfsqword(0x28u);
  v9 = a1 + 2232;
  if ( (*(_BYTE *)(a1 + 2012) & 0x10) != 0 )
    return v9;
  v12 = (_QWORD *)(a1 + 2240);
  sub_49DBE0(*(_QWORD **)(a1 + 2248));
  *(_QWORD *)(a1 + 2256) = a1 + 2240;
  *(_QWORD *)(a1 + 2248) = 0;
  *(_QWORD *)(a1 + 2264) = a1 + 2240;
  *(_QWORD *)(a1 + 2272) = 0;
  *(_QWORD *)(a1 + 2216) = 0;
  *(_QWORD *)(a1 + 2336) = 0;
  v14 = (int)sub_4A0DB0(a1);
  v55 = a1 + 2208;
  if ( *(_QWORD *)(a1 + 2224) < v14 )
  {
    *(_QWORD *)(a1 + 2208) = qvector_reserve(a1 + 2208, *(_QWORD *)(a1 + 2208), v14, 8);
    v57 = a1 + 2328;
    if ( *(_QWORD *)(a1 + 2344) >= v14 )
      goto LABEL_6;
LABEL_41:
    *(_QWORD *)(a1 + 2328) = qvector_reserve(v57, *(_QWORD *)(a1 + 2328), v14, 8);
    goto LABEL_6;
  }
  v57 = a1 + 2328;
  if ( *(_QWORD *)(a1 + 2344) < v14 )
    goto LABEL_41;
  if ( v14 )
  {
LABEL_6:
    v19 = 0;
    v9 = a1 + 2232;
    do
    {
      v20 = sub_4A0A30(a1, v19, 0, a2, a3, a4, a5, v17, v18, a8, a9, v13, v15, v16);
      v21 = *(_QWORD *)(a1 + 2208);
      v58 = (void *)v20;
      v22 = (void *)v20;
      v23 = *(_QWORD *)(a1 + 2216);
      if ( *(_QWORD *)(a1 + 2224) < (unsigned __int64)(v23 + 1) )
      {
        v53 = v22;
        v49 = qvector_reserve(v55, v21, v23 + 1, 8);
        v22 = v53;
        *(_QWORD *)(a1 + 2208) = v49;
        v21 = v49;
        v23 = *(_QWORD *)(a1 + 2216);
      }
      *(_QWORD *)(v21 + 8 * v23) = v22;
      v24 = *(_QWORD *)(a1 + 2336);
      ++*(_QWORD *)(a1 + 2216);
      v16 = (__int64)v58;
      v25 = *(_QWORD *)(a1 + 2328);
      if ( *(_QWORD *)(a1 + 2344) < (unsigned __int64)(v24 + 1) )
      {
        v52 = v58;
        v48 = qvector_reserve(v57, v25, v24 + 1, 8);
        v16 = (__int64)v52;
        *(_QWORD *)(a1 + 2328) = v48;
        v25 = v48;
        v24 = *(_QWORD *)(a1 + 2336);
      }
      *(_QWORD *)(v25 + 8 * v24) = v16;
      v26 = *(_QWORD **)(a1 + 2248);
      ++*(_QWORD *)(a1 + 2336);
      if ( v26 )
      {
        v27 = (_QWORD *)(a1 + 2240);
        do
        {
          while ( 1 )
          {
            v28 = v26[2];
            v13 = v26[3];
            if ( v26[4] < (unsigned __int64)v58 )
              break;
            v27 = v26;
            v26 = (_QWORD *)v26[2];
            if ( !v28 )
              goto LABEL_16;
          }
          v26 = (_QWORD *)v26[3];
        }
        while ( v13 );
LABEL_16:
        if ( v12 != v27 && (unsigned __int64)v58 >= v27[4] )
          goto LABEL_19;
      }
      else
      {
        v27 = (_QWORD *)(a1 + 2240);
      }
      v59[0] = (unsigned __int64 *)&v58;
      v27 = sub_49B600((_QWORD *)(a1 + 2232), v27, v59);
LABEL_19:
      v27[5] = v19++;
    }
    while ( v14 != v19 );
  }
  v29 = *(char **)(a1 + 2328);
  v30 = 8LL * *(_QWORD *)(a1 + 2336);
  v31 = *(_DWORD *)(a1 + 2012) | 0x10;
  v32 = &v29[v30];
  *(_DWORD *)(a1 + 2012) = v31;
  if ( v29 == &v29[v30] )
    goto LABEL_27;
  v33 = (v30 >> 3) + 1;
  v34 = v33 / 2;
  if ( v33 <= 1 )
  {
    v39 = v29;
    v36 = 0;
    v37 = nullptr;
    if ( v34 )
    {
LABEL_46:
      v36 = 0;
      sub_49D640(v29, v32);
      v40 = nullptr;
      goto LABEL_26;
    }
  }
  else
  {
    for ( i = v33 / 2; ; i = (__int64)(v50 + 1) >> 1 )
    {
      v36 = 8 * i;
      v56 = (char *)v34;
      v50 = (char *)i;
      v37 = (char *)operator new(8 * i, (const std::nothrow_t *)&std::nothrow);
      v38 = (__int64)v50;
      v34 = (__int64)v56;
      if ( v37 )
        break;
      if ( v50 == (_BYTE *)&dword_0 + 1 )
        goto LABEL_46;
    }
    v39 = &v29[v36];
    if ( v50 != v56 )
    {
      v54 = v37;
      sub_49DB20(v29, v32, v37, v38);
      v40 = v54;
      goto LABEL_26;
    }
  }
  v51 = v37;
  sub_49D260(v29, v39, v32, v37);
  v40 = v51;
LABEL_26:
  operator delete(v40, v36);
  v31 = *(_DWORD *)(a1 + 2012);
LABEL_27:
  v41 = v31 | 0x40;
  *(_DWORD *)(a1 + 2012) = v41;
  if ( !v14 )
    goto LABEL_39;
  for ( j = 0; j != v14; ++j )
  {
    v43 = *(_QWORD **)(a1 + 2296);
    if ( !v43 )
    {
      v45 = (_QWORD *)(a1 + 2288);
LABEL_36:
      v59[0] = (unsigned __int64 *)(*(_QWORD *)(a1 + 2328) + 8 * j);
      v45 = sub_49B600((_QWORD *)(a1 + 2280), v45, v59);
      goto LABEL_37;
    }
    v44 = *(_QWORD *)(*(_QWORD *)(a1 + 2328) + 8 * j);
    v45 = (_QWORD *)(a1 + 2288);
    do
    {
      while ( 1 )
      {
        v46 = v43[2];
        v47 = v43[3];
        if ( v43[4] < v44 )
          break;
        v45 = v43;
        v43 = (_QWORD *)v43[2];
        if ( !v46 )
          goto LABEL_34;
      }
      v43 = (_QWORD *)v43[3];
    }
    while ( v47 );
LABEL_34:
    if ( (_QWORD *)(a1 + 2288) == v45 || v44 < v45[4] )
      goto LABEL_36;
LABEL_37:
    v45[5] = j;
  }
  v41 = *(_DWORD *)(a1 + 2012);
LABEL_39:
  *(_DWORD *)(a1 + 2012) = v41 | 0x20;
  return v9;
}
