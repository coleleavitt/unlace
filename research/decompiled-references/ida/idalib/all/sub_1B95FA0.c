__int64 __fastcall sub_1B95FA0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v6; // rbx
  char *v7; // rsi
  _BYTE *v8; // rcx
  char *i; // rax
  __int64 v10; // rbx
  bool v11; // r13
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r15
  __int64 v16; // rdi
  unsigned __int64 v17; // rax
  __int64 v18; // r12
  unsigned __int64 v19; // rsi
  _QWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  unsigned __int64 v32; // rcx
  __int64 v33; // rdx
  char *v34; // rdx
  int v35; // eax
  int v36; // eax
  int v37; // eax
  void **v38; // rdi
  __int64 v39; // rbx
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // r12
  __int64 v43; // rbp
  unsigned int v44; // r13d
  __int64 v45; // rax
  unsigned int v46; // esi
  __int64 v47; // r15
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 *v51; // r9
  _QWORD *v52; // [rsp+0h] [rbp-198h]
  __int64 v53; // [rsp+0h] [rbp-198h]
  __int64 v54; // [rsp+8h] [rbp-190h] BYREF
  __int64 *v55; // [rsp+10h] [rbp-188h]
  __int64 v56; // [rsp+18h] [rbp-180h]
  int v57; // [rsp+24h] [rbp-174h]
  void **p_ptr; // [rsp+28h] [rbp-170h]
  unsigned __int16 *v59[4]; // [rsp+30h] [rbp-168h] BYREF
  void *ptr; // [rsp+50h] [rbp-148h] BYREF
  __int64 v61; // [rsp+58h] [rbp-140h]
  _BYTE v62[312]; // [rsp+60h] [rbp-138h] BYREF

  v6 = *(unsigned int *)(a2 + 28);
  v7 = v62;
  p_ptr = &ptr;
  v57 = v6;
  ptr = v62;
  v61 = 0x400000000LL;
  if ( !v6 )
  {
    v38 = (void **)v62;
    goto LABEL_29;
  }
  v8 = v62;
  if ( v6 > 4 )
  {
    sub_2237220(p_ptr, v62, v6, 64);
    v8 = ptr;
    v7 = (char *)ptr + 64 * (unsigned __int64)(unsigned int)v61;
  }
  a4 = 0;
  for ( i = &v8[64 * v6]; i != v7; *((_DWORD *)v7 - 2) = 0 )
  {
    a3 = 0;
    *((_OWORD *)v7 + 1) = 0;
    v7 += 64;
    *((_OWORD *)v7 - 4) = 0;
    *((_OWORD *)v7 - 1) = 0;
    *((_DWORD *)v7 - 14) = 0;
    *((_OWORD *)v7 - 2) = 0;
  }
  LODWORD(v61) = v57;
  if ( !v57 )
  {
    v38 = (void **)ptr;
    v6 = 0;
    goto LABEL_29;
  }
  v10 = 0;
  v11 = 0;
  v56 = (unsigned int)(v57 - 1);
  v55 = (__int64 *)v59;
  while ( 1 )
  {
    v13 = sub_C03D50(a2, v10);
    v14 = *(_QWORD *)(v13 + 40);
    v15 = v13;
    v16 = v13;
    v17 = v14 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v14 & 7) != 0 )
      v17 = 0;
    v18 = v10 << 6;
    *(_QWORD *)((char *)ptr + v18) = v17;
    *(_DWORD *)((char *)ptr + v18 + 8) = *(_DWORD *)(v15 + 24);
    if ( *(_DWORD *)(v15 + 24) != (unsigned int)sub_B73090(v16) )
    {
      v19 = *(_QWORD *)(v15 + 56) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v15 + 56) & 4) != 0 )
        v19 = *(_QWORD *)(v19 + 32);
      v52 = sub_1B90E50(a1, v19, a3, (__m128)0LL);
      v20 = sub_1B90FD0(a1, *(_QWORD *)(v15 + 48), a3, (__m128)0LL);
      v21 = sub_1E61050(*a1, v20, v52, *(double *)a3.m128_u64, 0.0);
      *(_QWORD *)((char *)ptr + v18 + 16) = v21;
    }
    sub_C03D60(v55, a2, v10);
    v53 = sub_1B7CAD0(a1, v59[0], a3, (__m128)0LL, v22, v23, v24);
    v54 = sub_1B7CAD0(a1, v59[1], a3, (__m128)0LL, v25, v26, v27);
    v31 = sub_1B7CAD0(a1, v59[2], a3, (__m128)0LL, v28, v29, v30);
    if ( !v11 )
    {
      v32 = *(_QWORD *)(v15 + 56) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v15 + 56) & 4) != 0 )
        v32 = *(_QWORD *)(v32 + 32);
      if ( !v32 || (v33 = *(_QWORD *)((char *)ptr + v18 + 16)) != 0 && (v33 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v11 = v31 == 1 || v54 == 1 || v53 == 1;
        if ( !v11 )
          break;
      }
    }
    v11 = 1;
    v12 = v10 + 1;
    if ( v10 == v56 )
      goto LABEL_24;
LABEL_9:
    v10 = v12;
  }
  v34 = (char *)ptr + v18;
  a3 = (__m128)_mm_and_si128((__m128i)_mm_loadh_ps((const double *)&v54), (__m128i)xmmword_23AA750);
  *((_QWORD *)v34 + 5) = v31 & 0xFFFFFFFFFFFFFFFELL;
  *(__m128 *)(v34 + 24) = a3;
  v35 = sub_C03DA0(a2, v10);
  *(_DWORD *)((char *)ptr + v18 + 48) = v35;
  v36 = sub_C03DC0(a2, v10);
  *(_DWORD *)((char *)ptr + v18 + 52) = v36;
  v37 = sub_C03DE0(a2, v10);
  *(_DWORD *)((char *)ptr + v18 + 56) = v37;
  v12 = v10 + 1;
  if ( v10 != v56 )
    goto LABEL_9;
LABEL_24:
  v38 = (void **)ptr;
  v39 = 1;
  if ( v11 )
    goto LABEL_25;
  v6 = (unsigned int)v61;
LABEL_29:
  v41 = sub_1B45670(
          *(__int64 **)(*a1 + 760),
          nullptr,
          *(_DWORD *)(a2 + 16),
          *(_DWORD *)(a2 + 20),
          *(_DWORD *)(a2 + 24),
          a3,
          a4,
          (__int64)v38,
          (__int64)v38,
          v6);
  v39 = v41;
  if ( v41 > 1 )
  {
    v42 = v41 & 0xFFFFFFFFFFFFFFFELL;
    if ( v57 )
    {
      v43 = (__int64)(a1 + 1);
      v44 = 0;
      v55 = (__int64 *)v59;
      do
      {
        v45 = sub_C03D50(v42, v44);
        v46 = v44++;
        v47 = v45;
        v59[0] = (unsigned __int16 *)sub_C03D50(a2, v46);
        *sub_1742A40(v43, v55, v48, v49, v50, v51) = v47;
      }
      while ( v44 != v57 );
    }
  }
  v38 = (void **)ptr;
LABEL_25:
  if ( v38 != p_ptr + 2 )
    free(v38);
  return v39;
}
