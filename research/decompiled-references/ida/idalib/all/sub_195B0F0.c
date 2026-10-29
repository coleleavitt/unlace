__int64 __fastcall sub_195B0F0(__int64 *a1, _DWORD *a2, __m128 a3)
{
  unsigned __int64 v5; // rbx
  char *v6; // rsi
  _BYTE *v7; // rcx
  char *i; // rax
  __int64 v9; // rbx
  bool v10; // r13
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r15
  __int64 v15; // rdi
  unsigned __int64 v16; // rax
  __int64 v17; // r12
  unsigned __int64 v18; // rsi
  void **v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  __int64 v23; // rdx
  char *v24; // rdx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  void **v28; // rdi
  __int64 v29; // rbx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // r12
  __int64 v33; // rbp
  unsigned int v34; // r13d
  __int64 v35; // rax
  unsigned int v36; // esi
  __int64 v37; // r15
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 *v41; // r9
  void **v42; // [rsp+0h] [rbp-198h]
  __int64 v43; // [rsp+0h] [rbp-198h]
  __int64 v44; // [rsp+8h] [rbp-190h] BYREF
  __int64 *v45; // [rsp+10h] [rbp-188h]
  __int64 v46; // [rsp+18h] [rbp-180h]
  int v47; // [rsp+24h] [rbp-174h]
  void **p_ptr; // [rsp+28h] [rbp-170h]
  unsigned __int16 *v49[4]; // [rsp+30h] [rbp-168h] BYREF
  void *ptr; // [rsp+50h] [rbp-148h] BYREF
  __int64 v51; // [rsp+58h] [rbp-140h]
  _BYTE v52[312]; // [rsp+60h] [rbp-138h] BYREF

  v5 = (unsigned int)a2[7];
  v6 = v52;
  p_ptr = &ptr;
  v47 = v5;
  ptr = v52;
  v51 = 0x400000000LL;
  if ( !v5 )
  {
    v28 = (void **)v52;
    goto LABEL_29;
  }
  v7 = v52;
  if ( v5 > 4 )
  {
    sub_2237220(p_ptr, v52, v5, 64);
    v7 = ptr;
    v6 = (char *)ptr + 64 * (unsigned __int64)(unsigned int)v51;
  }
  for ( i = &v7[64 * v5]; i != v6; *((_DWORD *)v6 - 2) = 0 )
  {
    a3 = 0;
    *((_OWORD *)v6 + 1) = 0;
    v6 += 64;
    *((_OWORD *)v6 - 4) = 0;
    *((_OWORD *)v6 - 1) = 0;
    *((_DWORD *)v6 - 14) = 0;
    *((_OWORD *)v6 - 2) = 0;
  }
  LODWORD(v51) = v47;
  if ( !v47 )
  {
    v28 = (void **)ptr;
    v5 = 0;
    goto LABEL_29;
  }
  v9 = 0;
  v10 = 0;
  v46 = (unsigned int)(v47 - 1);
  v45 = (__int64 *)v49;
  while ( 1 )
  {
    v12 = sub_C03D50((__int64)a2, v9);
    v13 = *(_QWORD *)(v12 + 40);
    v14 = v12;
    v15 = v12;
    v16 = v13 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v13 & 7) != 0 )
      v16 = 0;
    v17 = v9 << 6;
    *(_QWORD *)((char *)ptr + v17) = v16;
    *(_DWORD *)((char *)ptr + v17 + 8) = *(_DWORD *)(v14 + 24);
    if ( *(_DWORD *)(v14 + 24) != (unsigned int)sub_B73090(v15) )
    {
      v18 = *(_QWORD *)(v14 + 56) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v14 + 56) & 4) != 0 )
        v18 = *(_QWORD *)(v18 + 32);
      v42 = sub_1946B40(a1, (void **)v18, a3, (__m128)0LL);
      v19 = sub_1946CC0(a1, *(_QWORD *)(v14 + 48), a3, (__m128)0LL);
      v20 = sub_1E61050(*a1, v19, v42, *(double *)a3.m128_u64, 0.0);
      *(_QWORD *)((char *)ptr + v17 + 16) = v20;
    }
    sub_C03D60(v45, (__int64)a2, v9);
    v43 = sub_1944E10(a1, v49[0], a3, (__m128)0LL);
    v44 = sub_1944E10(a1, v49[1], a3, (__m128)0LL);
    v21 = sub_1944E10(a1, v49[2], a3, (__m128)0LL);
    if ( !v10 )
    {
      v22 = *(_QWORD *)(v14 + 56) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v14 + 56) & 4) != 0 )
        v22 = *(_QWORD *)(v22 + 32);
      if ( !v22 || (v23 = *(_QWORD *)((char *)ptr + v17 + 16)) != 0 && (v23 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v10 = v21 == 1 || v44 == 1 || v43 == 1;
        if ( !v10 )
          break;
      }
    }
    v10 = 1;
    v11 = v9 + 1;
    if ( v9 == v46 )
      goto LABEL_24;
LABEL_9:
    v9 = v11;
  }
  v24 = (char *)ptr + v17;
  a3 = (__m128)_mm_and_si128((__m128i)_mm_loadh_ps((const double *)&v44), (__m128i)xmmword_23AA750);
  *((_QWORD *)v24 + 5) = v21 & 0xFFFFFFFFFFFFFFFELL;
  *(__m128 *)(v24 + 24) = a3;
  v25 = sub_C03DA0((__int64)a2, v9);
  *(_DWORD *)((char *)ptr + v17 + 48) = v25;
  v26 = sub_C03DC0((__int64)a2, v9);
  *(_DWORD *)((char *)ptr + v17 + 52) = v26;
  v27 = sub_C03DE0((__int64)a2, v9);
  *(_DWORD *)((char *)ptr + v17 + 56) = v27;
  v11 = v9 + 1;
  if ( v9 != v46 )
    goto LABEL_9;
LABEL_24:
  v28 = (void **)ptr;
  v29 = 1;
  if ( v10 )
    goto LABEL_25;
  v5 = (unsigned int)v51;
LABEL_29:
  v31 = sub_1B45670(*(_QWORD *)(*a1 + 760), 0, a2[4], a2[5], a2[6], (_DWORD)v28, (__int64)v28, v5);
  v29 = v31;
  if ( v31 > 1 )
  {
    v32 = v31 & 0xFFFFFFFFFFFFFFFELL;
    if ( v47 )
    {
      v33 = (__int64)(a1 + 1);
      v34 = 0;
      v45 = (__int64 *)v49;
      do
      {
        v35 = sub_C03D50(v32, v34);
        v36 = v34++;
        v37 = v35;
        v49[0] = (unsigned __int16 *)sub_C03D50((__int64)a2, v36);
        *sub_1742A40(v33, v45, v38, v39, v40, v41) = v37;
      }
      while ( v34 != v47 );
    }
  }
  v28 = (void **)ptr;
LABEL_25:
  if ( v28 != p_ptr + 2 )
    free(v28);
  return v29;
}
