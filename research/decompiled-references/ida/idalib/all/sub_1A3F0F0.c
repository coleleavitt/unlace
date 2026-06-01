__m128i *__fastcall sub_1A3F0F0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rdi
  __int64 v10; // r14
  const __m128i *v11; // r12
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rbp
  __int64 v16; // r15
  __int64 i; // rbp
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // rax
  bool v21; // zf
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rbp
  __int64 v25; // rsi
  __int64 (__fastcall **v26)(); // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // rbx
  unsigned __int64 v34; // rdx
  __m128i *result; // rax
  __int64 v36; // rax
  __int64 v37; // rsi
  void *v38; // r13
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // r15
  _BOOL8 v42; // rdi
  void *v43; // rdi
  void *v44; // rdi
  __int64 v45; // rdi
  __int64 v46; // rsi
  __int64 v47; // rax
  __int64 v48; // [rsp+0h] [rbp-88h]
  unsigned __int64 v49; // [rsp+8h] [rbp-80h]
  __int64 (__fastcall **v50)(); // [rsp+10h] [rbp-78h] BYREF
  _QWORD *v51; // [rsp+18h] [rbp-70h]
  __int128 v52; // [rsp+20h] [rbp-68h]
  __int64 v53; // [rsp+30h] [rbp-58h]
  char v54; // [rsp+38h] [rbp-50h]
  int v55; // [rsp+3Ch] [rbp-4Ch]
  __int64 v56; // [rsp+40h] [rbp-48h]

  v9 = a1 + 8;
  v10 = a1 + 192;
  *(_QWORD *)(v9 - 8) = a2;
  v11 = (const __m128i *)&v50;
  sub_1A39CB0(v9, a3, a3, a4, a5, a6);
  v13 = a1 + 104;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 56) = a1 + 72;
  v14 = a1 + 152;
  *(_BYTE *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 88) = a1 + 104;
  *(_QWORD *)(a1 + 96) = 0x400000000LL;
  *(_QWORD *)(a1 + 136) = a1 + 152;
  *(_QWORD *)(a1 + 144) = 0x400000000LL;
  *(_DWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 208) = a1 + 192;
  *(_QWORD *)(a1 + 216) = a1 + 192;
  *(_QWORD *)(a1 + 224) = 0;
  if ( a4 )
  {
    v15 = *(_QWORD *)(a4 + 8);
    v11 = (const __m128i *)&v50;
    if ( v15 )
    {
      v56 = a1 + 56;
      v52 = 0;
      LODWORD(v51) = 0;
      v54 = 0;
      v55 = 1;
      v53 = 0;
      v50 = &off_2BEBE68;
      sub_227B8B0(&v50, 0, 0, 0);
      sub_E90250(v15, (__int64)&v50, (const __m128i *)(a2 + 17464), 0, 1);
      sub_1A37EE0(v15, a1 + 136);
      v50 = &off_2BEBE68;
      sub_227B7A0(&v50);
      v13 = a1 + 104;
    }
  }
  v16 = *(_QWORD *)(a1 + 8);
  for ( i = v16 + 8LL * *(unsigned int *)(a1 + 16); v16 != i; i -= 8 )
  {
    v18 = *(_QWORD *)(i - 8);
    if ( v18 )
    {
      v14 = *(_BYTE *)(v18 + 8) & 0x7F;
      if ( (_BYTE)v14 == 24 && v18 != 48 )
      {
        v19 = *(_QWORD *)(v18 - 8);
        v12 = *(unsigned int *)(a1 + 96);
        v20 = v19 & 0xFFFFFFFFFFFFFFF8LL;
        v21 = (v19 & 7) == 0;
        v22 = v12 + 1;
        if ( !v21 )
          v20 = 0;
        if ( v22 > *(unsigned int *)(a1 + 100) )
        {
          v48 = v13;
          v49 = v20;
          sub_2237220(a1 + 88, v13, v22, 8);
          v12 = *(unsigned int *)(a1 + 96);
          v20 = v49;
          v13 = v48;
        }
        v14 = *(_QWORD *)(a1 + 88);
        *(_QWORD *)(v14 + 8 * v12) = v20;
        ++*(_DWORD *)(a1 + 96);
      }
    }
  }
  v23 = *(_QWORD *)(a2 + 2264);
  v24 = a1 + 192;
  *(_QWORD *)&v52 = 1;
  v25 = *(_QWORD *)(v23 + 80);
  v26 = (__int64 (__fastcall **)())sub_704780((__int64 *)(v25 + 72), v25, v14, v12, 0, v13);
  v30 = (__int64)(v26 + 5);
  if ( v26 )
    v26 += 5;
  v50 = v26;
  v51 = sub_E91110((_QWORD *)a2, v25, v30, v27, v28, v29);
  v31 = *(_QWORD *)(a1 + 200);
  if ( !v31 )
    goto LABEL_25;
  do
  {
    while ( *(_DWORD *)(v31 + 32) )
    {
      v24 = v31;
      v31 = *(_QWORD *)(v31 + 16);
      if ( !v31 )
        goto LABEL_21;
    }
    v31 = *(_QWORD *)(v31 + 24);
  }
  while ( v31 );
LABEL_21:
  if ( v10 == v24 || *(_DWORD *)(v24 + 32) > 1u )
  {
LABEL_25:
    v36 = operator new(0x1B8u);
    v37 = v24;
    v38 = (void *)(v36 + 56);
    v24 = v36;
    *(_DWORD *)(v36 + 32) = 1;
    *(_QWORD *)(v36 + 40) = v36 + 56;
    *(_QWORD *)(v36 + 48) = 0x1000000000LL;
    v39 = sub_1A3E7E0((_QWORD *)(a1 + 184), v37, (unsigned int *)(v36 + 32));
    v41 = v39;
    if ( v40 )
    {
      v42 = v39 || v10 == v40 || *(_DWORD *)(v24 + 32) < *(_DWORD *)(v40 + 32);
      std::_Rb_tree_insert_and_rebalance(v42, v24, v40, a1 + 192);
      ++*(_QWORD *)(a1 + 224);
    }
    else
    {
      v43 = *(void **)(v24 + 40);
      if ( v38 != v43 )
        free(v43);
      v44 = (void *)v24;
      v24 = v41;
      operator delete(v44);
    }
  }
  v32 = *(unsigned int *)(v24 + 48);
  v33 = *(_QWORD *)(v24 + 40);
  v34 = v32 + 1;
  result = (__m128i *)(v33 + 24 * v32);
  if ( v34 > *(unsigned int *)(v24 + 52) )
  {
    v45 = v24 + 40;
    v46 = v24 + 56;
    if ( v33 > (unsigned __int64)&v50 || result <= (__m128i *)&v50 )
    {
      sub_2237220(v45, v46, v34, 24);
      result = (__m128i *)(*(_QWORD *)(v24 + 40) + 24LL * *(unsigned int *)(v24 + 48));
    }
    else
    {
      sub_2237220(v45, v46, v34, 24);
      v47 = *(_QWORD *)(v24 + 40);
      v11 = (const __m128i *)((char *)&v50 + v47 - v33);
      result = (__m128i *)(v47 + 24LL * *(unsigned int *)(v24 + 48));
    }
  }
  *result = _mm_loadu_si128(v11);
  result[1].m128i_i64[0] = v11[1].m128i_i64[0];
  ++*(_DWORD *)(v24 + 48);
  return result;
}
