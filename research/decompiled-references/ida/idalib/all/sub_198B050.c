unsigned __int64 __fastcall sub_198B050(__int64 *a1, _DWORD *a2, __m128 a3)
{
  unsigned __int64 v4; // rbx
  char *v5; // rsi
  _BYTE *v7; // rcx
  char *i; // rax
  __int64 v9; // r14
  bool v10; // bp
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r12
  __int64 v15; // rdi
  unsigned __int64 v16; // rax
  __int64 v17; // rbx
  unsigned __int64 v18; // rsi
  _QWORD *v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rsi
  __int64 v23; // rdx
  char *v24; // rdx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  char *v28; // rbx
  bool v29; // zf
  unsigned __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 *v33; // rax
  void **v34; // rdi
  unsigned __int64 v35; // rbp
  __int64 v37; // rbx
  int v38; // r15d
  unsigned __int64 v39; // r12
  unsigned int v40; // ebp
  __int64 v41; // rax
  unsigned int v42; // esi
  __int64 v43; // r14
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 *v47; // r9
  _QWORD *v48; // [rsp+8h] [rbp-1C0h]
  unsigned __int16 *v49; // [rsp+8h] [rbp-1C0h]
  unsigned __int16 *v50; // [rsp+10h] [rbp-1B8h]
  unsigned __int64 v51; // [rsp+10h] [rbp-1B8h]
  unsigned __int64 v52; // [rsp+18h] [rbp-1B0h] BYREF
  unsigned __int64 v53; // [rsp+20h] [rbp-1A8h]
  __int64 v54; // [rsp+28h] [rbp-1A0h]
  unsigned __int16 **v55; // [rsp+30h] [rbp-198h]
  unsigned __int16 *v56; // [rsp+38h] [rbp-190h]
  bool v57; // [rsp+43h] [rbp-185h]
  int v58; // [rsp+44h] [rbp-184h]
  void **p_ptr; // [rsp+48h] [rbp-180h]
  __int64 v60; // [rsp+58h] [rbp-170h] BYREF
  unsigned __int16 *v61[4]; // [rsp+60h] [rbp-168h] BYREF
  void *ptr; // [rsp+80h] [rbp-148h] BYREF
  __int64 v63; // [rsp+88h] [rbp-140h]
  _BYTE v64[312]; // [rsp+90h] [rbp-138h] BYREF

  v4 = (unsigned int)a2[7];
  v5 = v64;
  p_ptr = &ptr;
  v58 = v4;
  ptr = v64;
  v63 = 0x400000000LL;
  if ( !v4 )
  {
    v34 = (void **)v64;
    goto LABEL_38;
  }
  v7 = v64;
  if ( v4 > 4 )
  {
    sub_2237220(p_ptr, v64, v4, 64);
    v7 = ptr;
    v5 = (char *)ptr + 64 * (unsigned __int64)(unsigned int)v63;
  }
  for ( i = &v7[64 * v4]; i != v5; *((_DWORD *)v5 - 2) = 0 )
  {
    a3 = 0;
    *((_OWORD *)v5 + 1) = 0;
    v5 += 64;
    *((_OWORD *)v5 - 4) = 0;
    *((_OWORD *)v5 - 1) = 0;
    *((_DWORD *)v5 - 14) = 0;
    *((_OWORD *)v5 - 2) = 0;
  }
  LODWORD(v63) = v58;
  if ( !v58 )
  {
    v34 = (void **)ptr;
    goto LABEL_38;
  }
  v9 = 0;
  v57 = 0;
  v10 = 0;
  v54 = (unsigned int)(v58 - 1);
  v55 = v61;
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
      v48 = sub_1988430(a1, v18, a3, (__m128)0LL);
      v19 = sub_19885D0(a1, *(_QWORD *)(v14 + 48), a3, (__m128)0LL);
      v20 = sub_1E61050(*a1, v19, v48, *(double *)a3.m128_u64, 0.0);
      *(_QWORD *)((char *)ptr + v17 + 16) = v20;
    }
    sub_C03D60(v55, (__int64)a2, v9);
    v50 = v61[2];
    v49 = v61[1];
    v56 = v61[0];
    v53 = sub_190CCA0(a1, v61[0], *(double *)a3.m128_u64, (__m128)0LL);
    v52 = sub_190CCA0(a1, v49, *(double *)a3.m128_u64, (__m128)0LL);
    v21 = sub_190CCA0(a1, v50, *(double *)a3.m128_u64, (__m128)0LL);
    if ( !v10 )
    {
      v22 = *(_QWORD *)(v14 + 56) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v14 + 56) & 4) != 0 )
        v22 = *(_QWORD *)(v22 + 32);
      if ( !v22 || (v10 = 1, (v23 = *(_QWORD *)((char *)ptr + v17 + 16)) != 0) && (v23 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v10 = v21 == 1 || v52 == 1 || v53 == 1;
        if ( !v10 )
          break;
      }
    }
LABEL_8:
    v11 = v9 + 1;
    if ( v9 == v54 )
      goto LABEL_32;
LABEL_9:
    v9 = v11;
  }
  v24 = (char *)ptr + v17;
  a3 = (__m128)_mm_and_si128((__m128i)_mm_loadh_ps((const double *)&v52), (__m128i)xmmword_23AA750);
  *((_QWORD *)v24 + 5) = v21 & 0xFFFFFFFFFFFFFFFELL;
  *(__m128 *)(v24 + 24) = a3;
  v25 = sub_C03DA0((__int64)a2, v9);
  *(_DWORD *)((char *)ptr + v17 + 48) = v25;
  v26 = sub_C03DC0((__int64)a2, v9);
  *(_DWORD *)((char *)ptr + v17 + 52) = v26;
  v27 = sub_C03DE0((__int64)a2, v9);
  v28 = (char *)ptr + v17;
  v29 = !v57;
  *((_DWORD *)v28 + 14) = v27;
  if ( !v29 )
    goto LABEL_31;
  v30 = *(_QWORD *)(v14 + 56) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v14 + 56) & 4) != 0 )
    v30 = *(_QWORD *)(v30 + 32);
  if ( v30 )
  {
    if ( (*((_QWORD *)v28 + 2) & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      v31 = *(_QWORD *)(*((_QWORD *)v28 + 2) & 0xFFFFFFFFFFFFFFF0LL);
      v32 = 0;
      v33 = (__int64 *)(*(_QWORD *)(v14 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      if ( !v33 )
        goto LABEL_30;
    }
    else
    {
      v33 = (__int64 *)(*(_QWORD *)(v14 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      if ( !v33 )
        goto LABEL_39;
      v31 = 0;
    }
    v32 = *v33;
LABEL_30:
    if ( v32 != v31 )
      goto LABEL_31;
  }
LABEL_39:
  if ( *((unsigned __int16 **)v28 + 3) == v56 && *((unsigned __int16 **)v28 + 4) == v49 )
  {
    v10 = 0;
    v57 = *((_QWORD *)v28 + 5) != (_QWORD)v50;
    goto LABEL_8;
  }
LABEL_31:
  v57 = 1;
  v11 = v9 + 1;
  if ( v9 != v54 )
    goto LABEL_9;
LABEL_32:
  v34 = (void **)ptr;
  if ( v10 )
  {
    v35 = 1;
    goto LABEL_34;
  }
  if ( v57 )
  {
    v35 = sub_1B45670(*(_QWORD *)(*a1 + 760), 0, a2[4], a2[5], a2[6], (_DWORD)ptr, (__int64)ptr, (unsigned int)v63);
    if ( v35 > 1 )
    {
      v37 = (__int64)(a1 + 1);
      v38 = v58;
      v39 = v35 & 0xFFFFFFFFFFFFFFFELL;
      v51 = v35;
      v40 = 0;
      do
      {
        v41 = sub_C03D50(v39, v40);
        v42 = v40++;
        v43 = v41;
        v60 = sub_C03D50((__int64)a2, v42);
        *sub_1742A40(v37, &v60, v44, v45, v46, v47) = v43;
      }
      while ( v40 != v38 );
      v35 = v51;
    }
    v34 = (void **)ptr;
  }
  else
  {
LABEL_38:
    v35 = (unsigned __int64)a2;
  }
LABEL_34:
  if ( v34 != p_ptr + 2 )
    free(v34);
  return v35;
}
