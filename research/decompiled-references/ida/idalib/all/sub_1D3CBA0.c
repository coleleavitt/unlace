__int64 __fastcall sub_1D3CBA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int *v6; // r14
  unsigned int *v7; // rbx
  __m128i *v9; // rax
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 i; // rdx
  __int64 v16; // rdx
  __m128i *v17; // rbp
  __int32 v18; // edx
  __int64 v19; // rcx
  __m128i v20; // xmm6
  __int64 v21; // rcx
  __m128i v22; // xmm6
  __int64 v23; // rsi
  char v24; // cl
  int v25; // eax
  unsigned __int64 v26; // rsi
  unsigned __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // rcx
  __m128i v30; // xmm2
  __m128i v32; // xmm7
  __m128i v33; // xmm5
  int v34; // edi
  __m128i v35; // xmm4
  __int8 v36; // dl
  char v37; // al
  unsigned __int64 v38; // rsi
  char v39; // al
  __m128i v40; // xmm2
  __int64 v41; // rax
  __m128i v42; // xmm3
  __int64 v43; // rdx
  __m128i *v44; // rax
  __int64 v45; // rbp
  _QWORD *v46; // rdi
  __int64 v47; // rdx
  __int64 v48; // rax
  _QWORD *v49; // rdx
  const __m128i *v50; // rdx
  __int64 v51; // rcx
  const __m128i *v52; // rdi
  __int64 v53; // rcx
  __m128i v54; // xmm1
  __int8 v55; // dl
  unsigned __int64 v56; // rcx
  __int64 v57; // rcx
  unsigned int v58; // [rsp+1Ch] [rbp-BCh]
  __m128i v59; // [rsp+20h] [rbp-B8h] BYREF
  __m128i v60; // [rsp+30h] [rbp-A8h] BYREF
  __m128i v61; // [rsp+40h] [rbp-98h] BYREF
  __m128i v62; // [rsp+50h] [rbp-88h]
  __m128i v63; // [rsp+60h] [rbp-78h] BYREF
  __m128i v64; // [rsp+70h] [rbp-68h]
  __m128i v65; // [rsp+80h] [rbp-58h] BYREF
  __int64 v66; // [rsp+90h] [rbp-48h]
  __int8 v67; // [rsp+98h] [rbp-40h]

  v6 = *(unsigned int **)(a1 + 48);
  v7 = &v6[56 * *(unsigned int *)(a1 + 56)];
  if ( v6 == v7 )
    return 0;
  while ( 1 )
  {
    if ( !*(_BYTE *)(a1 + 39) )
    {
      v9 = (__m128i *)(**(_QWORD **)(a1 + 16) + 32LL * *v6);
      *v9 = _mm_loadu_si128((const __m128i *)(v6 + 2));
      v9[1].m128i_i64[0] = *((_QWORD *)v6 + 3);
      v9[1].m128i_i8[8] = *((_BYTE *)v6 + 32);
    }
    v10 = *(unsigned int *)(a1 + 32);
    v11 = v6[20];
    v12 = v10;
    if ( v10 == v11 )
    {
      v12 = (unsigned int)v11;
    }
    else
    {
      if ( v10 >= v11 )
      {
        if ( v10 > v6[21] )
        {
          v58 = *(_DWORD *)(a1 + 32);
          sub_2237220(v6 + 18, v6 + 22, v58, 32);
          v11 = v6[20];
          v12 = v58;
        }
        v13 = *((_QWORD *)v6 + 9);
        v14 = v13 + 32 * v11;
        for ( i = 32 * v10 + v13; i != v14; *(_QWORD *)(v14 - 24) = 0 )
        {
          *(_BYTE *)(v14 + 24) = 0;
          *(_QWORD *)v14 &= 0xFFFFFFFE00000000LL;
          v14 += 32;
        }
      }
      v6[20] = v12;
    }
    v59 = 0;
    v60 = 0;
    if ( (_DWORD)v12 )
    {
      v45 = 24 * v10;
      v46 = *(_QWORD **)(*(_QWORD *)a1 + 248LL);
      v47 = v46[294];
      v46[304] += v45;
      v48 = (v47 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v46[295] >= (unsigned __int64)(v45 + v48) && v47 )
        v46[294] = v45 + v48;
      else
        v48 = sub_986170((__int64)(v46 + 294), v45, v45, 3, v12, a6);
      v49 = (_QWORD *)v48;
      do
      {
        *v49 &= 0xFFFFFFFE00000000LL;
        v49 += 3;
        *(v49 - 2) = 0;
      }
      while ( (_QWORD *)(v48 + v45) != v49 );
      v50 = *((const __m128i **)v6 + 9);
      v51 = v6[20];
      if ( 32 * v51 )
      {
        v52 = &v50[2 * v51];
        v53 = v48;
        do
        {
          v54 = _mm_loadu_si128(v50);
          v50 += 2;
          v53 += 24;
          *(__m128i *)(v53 - 24) = v54;
          *(_QWORD *)(v53 - 8) = v50[-1].m128i_i64[0];
        }
        while ( v50 != v52 );
        v50 = *((const __m128i **)v6 + 9);
        LODWORD(v51) = v6[20];
      }
      v55 = v50[1].m128i_i8[8];
      v59.m128i_i32[0] = 9;
      v59.m128i_i32[1] = v51;
      v59.m128i_i64[1] = v48;
      v60.m128i_i8[8] = v55;
    }
    else
    {
      v59.m128i_i32[0] = v59.m128i_i32[0] & 0x80000000 | 9;
    }
    v16 = *((_QWORD *)v6 + 27);
    if ( v16 )
    {
      v17 = (__m128i *)(v16 + 40);
      if ( (*(_DWORD *)(v16 + 40) & 0x7FFFFFFF) == 0 )
      {
        *(__m128i *)(v16 + 40) = _mm_load_si128(&v59);
        *(_QWORD *)(v16 + 56) = v60.m128i_i64[0];
        *(_BYTE *)(v16 + 64) = v60.m128i_i8[8];
        goto LABEL_37;
      }
    }
    else
    {
      v17 = (__m128i *)(**(_QWORD **)(a1 + 16) + 32LL * *v6);
    }
    v61 = _mm_loadu_si128(v17);
    v62 = _mm_loadu_si128(v17 + 1);
    if ( (v61.m128i_i32[0] & 0x7FFFFFFF) == 0 )
    {
      v32 = _mm_load_si128(&v59);
      v33 = _mm_load_si128(&v60);
      *(_BYTE *)(*(_QWORD *)(a1 + 24) + 236LL) = 0;
      v18 = 9;
      v63 = v32;
      v64 = v33;
      goto LABEL_32;
    }
    sub_1D3B740(&v63, *(_QWORD **)(*(_QWORD *)a1 + 248LL), &v61, &v59, *(unsigned __int8 *)(a1 + 37), a6);
    v18 = v63.m128i_i32[0] & 0x7FFFFFFF;
    v19 = *(_QWORD *)(a1 + 24);
    if ( (v61.m128i_i32[0] & 0x7FFFFFFF) == 9
      && (v59.m128i_i32[0] & 0x7FFFFFFF) == 9
      && v61.m128i_i32[1] != v59.m128i_i32[1] )
    {
      break;
    }
    *(_BYTE *)(v19 + 236) = 0;
    if ( !v18 )
      goto LABEL_40;
LABEL_32:
    if ( (v6[10] & 0x7FFFFFFF) == 0 )
    {
LABEL_33:
      v23 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * *v6 + 24);
      v24 = *(_BYTE *)(v23 + 28) & 0x7F;
      if ( v24 == 67 )
        goto LABEL_34;
      goto LABEL_23;
    }
LABEL_21:
    v63.m128i_i32[0] = v63.m128i_i32[0] & 0x80000000 | v18;
    v20 = _mm_load_si128(&v63);
    v62.m128i_i64[0] = v64.m128i_i64[0];
    v61 = v20;
    v62.m128i_i8[8] = v64.m128i_i8[8];
    v59 = _mm_loadu_si128((const __m128i *)(v6 + 10));
    v60.m128i_i64[0] = *((_QWORD *)v6 + 7);
    v60.m128i_i8[8] = *((_BYTE *)v6 + 64);
    sub_1D3B740(&v65, *(_QWORD **)(*(_QWORD *)a1 + 248LL), &v61, &v59, 0, a6);
    v21 = *v6;
    v22 = _mm_load_si128(&v65);
    v64.m128i_i64[0] = v66;
    v63 = v22;
    v64.m128i_i8[8] = v67;
    v23 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v21 + 24);
    v18 = v65.m128i_i32[0] & 0x7FFFFFFF;
    if ( (v65.m128i_i32[0] & 0x7FFFFFFF) == 0 )
      goto LABEL_41;
    v24 = *(_BYTE *)(v23 + 28) & 0x7F;
    if ( v24 == 67 )
    {
LABEL_34:
      v34 = *(_DWORD *)(v23 + 64);
      if ( v34 && v34 - 1 != *(_DWORD *)(a1 + 32) )
      {
LABEL_27:
        v26 = v23 & 0xFFFFFFFFFFFFFFF9LL;
        if ( v24 != 67 )
        {
          v27 = v26;
          v26 |= 4u;
          v28 = v27 | 2;
          if ( v24 == 47 )
            v26 = v28;
        }
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 176LL) = v26;
        v29 = *(_QWORD *)(a1 + 24);
        v63.m128i_i32[0] = v63.m128i_i32[0] & 0x80000000 | v18;
        v30 = _mm_load_si128(&v63);
        *(_QWORD *)(v29 + 200) = v64.m128i_i64[0];
        *(__m128i *)(v29 + 184) = v30;
        return 4;
      }
      goto LABEL_36;
    }
LABEL_23:
    if ( v24 == 47 )
    {
      if ( *(_BYTE *)(v23 + 81) )
        goto LABEL_25;
    }
    else if ( v24 == 68 && (*(_BYTE *)(v23 + 80) & 4) != 0 )
    {
LABEL_25:
      v25 = *(_DWORD *)(v23 + 84);
      if ( v25 != -1 && v25 != *(_DWORD *)(a1 + 32) )
        goto LABEL_27;
    }
LABEL_36:
    v63.m128i_i32[0] = v63.m128i_i32[0] & 0x80000000 | v18;
    v35 = _mm_load_si128(&v63);
    v17[1].m128i_i64[0] = v64.m128i_i64[0];
    v36 = v64.m128i_i8[8];
    *v17 = v35;
    v17[1].m128i_i8[8] = v36;
LABEL_37:
    v6 += 56;
    if ( v7 == v6 )
      return 0;
  }
  if ( v18 )
  {
    *(_BYTE *)(v19 + 236) = 1;
    if ( (v6[10] & 0x7FFFFFFF) == 0 )
      goto LABEL_33;
    goto LABEL_21;
  }
  *(_BYTE *)(v19 + 236) = 0;
LABEL_40:
  v23 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * *v6 + 24);
LABEL_41:
  v37 = *(_BYTE *)(v23 + 28);
  v38 = v23 & 0xFFFFFFFFFFFFFFF9LL;
  v39 = v37 & 0x7F;
  if ( v39 != 67 )
  {
    v56 = v38;
    v38 |= 4u;
    v57 = v56 | 2;
    if ( v39 == 47 )
      v38 = v57;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 24) + 176LL) = v38;
  v40 = _mm_load_si128(&v61);
  v41 = *(_QWORD *)(a1 + 24);
  v42 = _mm_load_si128(&v59);
  *(_QWORD *)(v41 + 200) = v62.m128i_i64[0];
  v43 = v60.m128i_i64[0];
  *(__m128i *)(v41 + 184) = v40;
  v44 = *(__m128i **)(a1 + 24);
  v44[13] = v42;
  v44[14].m128i_i64[0] = v43;
  return 5;
}
