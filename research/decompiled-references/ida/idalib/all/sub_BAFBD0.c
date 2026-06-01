unsigned __int64 __fastcall sub_BAFBD0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r13
  __int64 v15; // rax
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v20; // rdx
  __int64 *v21; // r12
  __int64 *v22; // rbx
  __int64 v23; // rdi
  unsigned int v24; // esi
  int v25; // r10d
  __int64 v26; // r14
  unsigned int i; // eax
  __int64 v28; // r11
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  int v31; // edi
  bool v32; // zf
  unsigned __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  const __m128i *v36; // rdx
  __m128i *v37; // rax
  unsigned __int64 v38; // r8
  __int64 v39; // rsi
  unsigned int v40; // eax
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rcx
  unsigned __int64 v45; // rdx
  __int64 v46; // rax
  unsigned __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // r15
  int v50; // eax
  int v51; // esi
  __int64 v52; // rcx
  _BOOL4 v53; // eax
  __int64 v54; // rdx
  unsigned __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rdx
  const __m128i *v58; // rdx
  __m128i *v59; // rax
  int v60; // eax
  __int64 v61; // rdi
  unsigned __int64 v62; // r8
  __int64 v64; // [rsp+18h] [rbp-90h]
  __int64 v65; // [rsp+20h] [rbp-88h]
  __int64 v66; // [rsp+28h] [rbp-80h]
  __int64 v67; // [rsp+38h] [rbp-70h] BYREF
  __int64 v68; // [rsp+40h] [rbp-68h] BYREF
  _BOOL4 v69; // [rsp+48h] [rbp-60h]
  __int64 v70; // [rsp+50h] [rbp-58h] BYREF
  _BOOL4 v71; // [rsp+58h] [rbp-50h]
  __int64 v72; // [rsp+60h] [rbp-48h]

  v2 = a2;
  v3 = sub_B8E970(a1 + 48);
  if ( !v3 )
    goto LABEL_6;
  v8 = v3;
  if ( (*(_BYTE *)(v3 + 28) & 0x7F) == 0x4B )
  {
LABEL_77:
    a2 = (__int64)&v68;
    v45 = *(_QWORD *)(v8 + 40) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v8 + 40) & 7) != 0 )
      v45 = 0;
    v69 = (*(_WORD *)(v8 + 72) & 0x4000) != 0;
    v68 = v45;
    if ( (unsigned __int8)sub_BAA060((__int64 *)v2, &v68, &v67) )
    {
      v46 = *(unsigned int *)(v67 + 16);
      goto LABEL_81;
    }
    v48 = *(unsigned int *)(v2 + 16);
    v49 = v67;
    v50 = *(_DWORD *)(v2 + 8) + 1;
    v51 = 2 * v48;
    v52 = (unsigned int)(3 * v48);
    v70 = v67;
    if ( 4 * v50 < (unsigned int)v52 )
    {
      v52 = (unsigned int)(v48 - *(_DWORD *)(v2 + 12) - v50);
      a2 = (unsigned int)v48 >> 3;
      if ( (unsigned int)v52 > (unsigned int)a2 )
        goto LABEL_87;
      v51 = v48;
    }
    sub_BAF6F0(v2, v51, v48, v52, v6, v7);
    a2 = (__int64)&v68;
    sub_BAA060((__int64 *)v2, &v68, &v70);
    v49 = v70;
    v50 = *(_DWORD *)(v2 + 8) + 1;
LABEL_87:
    v32 = *(_QWORD *)v49 == -4096;
    *(_DWORD *)(v2 + 8) = v50;
    if ( !v32 || *(_DWORD *)(v49 + 8) != -1 )
      --*(_DWORD *)(v2 + 12);
    v53 = v69;
    v54 = v68;
    *(_DWORD *)(v49 + 16) = 0;
    *(_DWORD *)(v49 + 8) = v53;
    v55 = *(unsigned int *)(v2 + 36);
    *(_QWORD *)v49 = v54;
    v72 = 0;
    v70 = v68;
    v71 = v69;
    v56 = *(unsigned int *)(v2 + 32);
    v57 = v56 + 1;
    if ( v56 + 1 > v55 )
    {
      v61 = v2 + 24;
      v62 = *(_QWORD *)(v2 + 24);
      a2 = v2 + 40;
      if ( v62 > (unsigned __int64)&v70 || (unsigned __int64)&v70 >= v62 + 24 * v56 )
      {
        sub_2237220(v61, a2, v57, 24);
        v5 = *(_QWORD *)(v2 + 24);
        v56 = *(unsigned int *)(v2 + 32);
        v58 = (const __m128i *)&v70;
      }
      else
      {
        v64 = *(_QWORD *)(v2 + 24);
        sub_2237220(v61, a2, v57, 24);
        v6 = v64;
        v5 = *(_QWORD *)(v2 + 24);
        v56 = *(unsigned int *)(v2 + 32);
        v58 = (const __m128i *)((char *)&v70 + v5 - v64);
      }
    }
    else
    {
      v5 = *(_QWORD *)(v2 + 24);
      v58 = (const __m128i *)&v70;
    }
    v59 = (__m128i *)(v5 + 24 * v56);
    *v59 = _mm_loadu_si128(v58);
    v59[1].m128i_i64[0] = v58[1].m128i_i64[0];
    v46 = *(unsigned int *)(v2 + 32);
    v4 = (unsigned int)(v46 + 1);
    *(_DWORD *)(v2 + 32) = v4;
    *(_DWORD *)(v49 + 16) = v46;
LABEL_81:
    *(_QWORD *)(*(_QWORD *)(v2 + 24) + 24 * v46 + 16) = v8;
    while ( 1 )
    {
      v47 = *(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v8 = v47;
      if ( !v47 )
        goto LABEL_6;
      if ( (*(_BYTE *)(v47 + 28) & 0x7F) == 0x4B )
        goto LABEL_77;
    }
  }
  while ( 1 )
  {
    v9 = *(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    v8 = v9;
    if ( !v9 )
      break;
    if ( (*(_BYTE *)(v9 + 28) & 0x7F) == 0x4B )
      goto LABEL_77;
  }
LABEL_6:
  v70 = sub_BAAD00(a1, a2, v4, v5, v6, v7);
  sub_BA6840(&v70);
  v14 = v70;
  if ( !v70 )
    goto LABEL_17;
LABEL_7:
  v15 = sub_B8E970(v14 + 48);
  v16 = v15;
  if ( !v15 )
    goto LABEL_12;
  if ( (*(_BYTE *)(v15 + 28) & 0x7F) != 0x4B )
  {
    do
    {
      v17 = *(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v16 = v17;
      if ( !v17 )
        goto LABEL_12;
    }
    while ( (*(_BYTE *)(v17 + 28) & 0x7F) != 0x4B );
  }
  v65 = v2 + 24;
LABEL_30:
  v24 = *(_DWORD *)(v2 + 16);
  v11 = *(_QWORD *)(v16 + 40) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v16 + 40) & 7) != 0 )
    v11 = 0;
  v10 = (*(_WORD *)(v16 + 72) & 0x4000) != 0;
  v69 = (*(_WORD *)(v16 + 72) & 0x4000) != 0;
  v68 = v11;
  if ( !v24 )
  {
    v70 = 0;
    goto LABEL_48;
  }
  v13 = v24 - 1;
  v25 = 1;
  v26 = 0;
  for ( i = v13
          & (((0xBF58476D1CE4E5B9LL
             * ((unsigned int)(37 * v10)
              | ((unsigned __int64)(((unsigned int)v11 >> 9) ^ ((unsigned int)v11 >> 4)) << 32))) >> 31)
           ^ (756364221 * v10)); ; i = v13 & v40 )
  {
    v12 = *(_QWORD *)v2 + 24LL * i;
    v28 = *(_QWORD *)v12;
    if ( v11 == *(_QWORD *)v12 && (_DWORD)v10 == *(_DWORD *)(v12 + 8) )
    {
      v29 = *(unsigned int *)(v12 + 16);
      goto LABEL_43;
    }
    if ( v28 == -4096 )
      break;
    if ( v28 == -8192 && *(_DWORD *)(v12 + 8) == -2 && !v26 )
      v26 = *(_QWORD *)v2 + 24LL * i;
LABEL_62:
    v40 = v25 + i;
    ++v25;
  }
  if ( *(_DWORD *)(v12 + 8) != -1 )
    goto LABEL_62;
  v60 = *(_DWORD *)(v2 + 8);
  if ( !v26 )
    v26 = v12;
  v31 = v60 + 1;
  v12 = (unsigned int)(4 * (v60 + 1));
  v70 = v26;
  if ( (unsigned int)v12 >= 3 * v24 )
  {
LABEL_48:
    v24 *= 2;
    goto LABEL_49;
  }
  v12 = v24 >> 3;
  if ( v24 - *(_DWORD *)(v2 + 12) - v31 <= (unsigned int)v12 )
  {
LABEL_49:
    sub_BAF6F0(v2, v24, v10, v11, v12, v13);
    sub_BAA060((__int64 *)v2, &v68, &v70);
    v11 = v68;
    LODWORD(v10) = v69;
    v26 = v70;
    v31 = *(_DWORD *)(v2 + 8) + 1;
  }
  v32 = *(_QWORD *)v26 == -4096;
  *(_DWORD *)(v2 + 8) = v31;
  if ( !v32 || *(_DWORD *)(v26 + 8) != -1 )
    --*(_DWORD *)(v2 + 12);
  *(_DWORD *)(v26 + 8) = v10;
  *(_DWORD *)(v26 + 16) = 0;
  *(_QWORD *)v26 = v11;
  v33 = *(unsigned int *)(v2 + 36);
  v72 = 0;
  v70 = v68;
  v71 = v69;
  v34 = *(unsigned int *)(v2 + 32);
  v35 = v34 + 1;
  if ( v34 + 1 > v33 )
  {
    v38 = *(_QWORD *)(v2 + 24);
    v39 = v2 + 40;
    if ( v38 > (unsigned __int64)&v70 || (v66 = *(_QWORD *)(v2 + 24), (unsigned __int64)&v70 >= v38 + 24 * v34) )
    {
      sub_2237220(v65, v39, v35, 24);
      v11 = *(_QWORD *)(v2 + 24);
      v34 = *(unsigned int *)(v2 + 32);
      v36 = (const __m128i *)&v70;
    }
    else
    {
      sub_2237220(v65, v39, v35, 24);
      v12 = v66;
      v11 = *(_QWORD *)(v2 + 24);
      v34 = *(unsigned int *)(v2 + 32);
      v36 = (const __m128i *)((char *)&v70 + v11 - v66);
    }
  }
  else
  {
    v11 = *(_QWORD *)(v2 + 24);
    v36 = (const __m128i *)&v70;
  }
  v37 = (__m128i *)(v11 + 24 * v34);
  *v37 = _mm_loadu_si128(v36);
  v37[1].m128i_i64[0] = v36[1].m128i_i64[0];
  v29 = *(unsigned int *)(v2 + 32);
  v10 = (unsigned int)(v29 + 1);
  *(_DWORD *)(v2 + 32) = v10;
  *(_DWORD *)(v26 + 16) = v29;
LABEL_43:
  *(_QWORD *)(*(_QWORD *)(v2 + 24) + 24 * v29 + 16) = v16;
  while ( 1 )
  {
    v30 = *(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    v16 = v30;
    if ( !v30 )
      break;
    if ( (*(_BYTE *)(v30 + 28) & 0x7F) == 0x4B )
      goto LABEL_30;
  }
LABEL_12:
  while ( 1 )
  {
    v14 = *(_QWORD *)(v14 + 128);
    if ( !v14 )
      break;
    while ( *(char *)(v14 + 28) >= 0 )
    {
      v18 = *(_QWORD *)(v14 + 40);
      if ( (v18 & 7) != 0 || (v18 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        goto LABEL_7;
      v14 = *(_QWORD *)(v14 + 128);
      if ( !v14 )
        goto LABEL_17;
    }
  }
LABEL_17:
  result = *(_QWORD *)(a1 + 120);
  if ( !result )
  {
    sub_A794E0((__int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96), v10, v11, v12, v13);
    result = *(_QWORD *)(a1 + 120);
    v20 = result & 0xFFFFFFFFFFFFFFF8LL;
    if ( (result & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      goto LABEL_102;
LABEL_19:
    if ( (*(_BYTE *)(v20 + 72) & 1) != 0 )
    {
      sub_BA8900(a1);
      result = *(_QWORD *)(a1 + 120);
      v20 = result & 0xFFFFFFFFFFFFFFF8LL;
      v11 = *(unsigned int *)((result & 0xFFFFFFFFFFFFFFF8LL) + 48);
      if ( (_DWORD)v11 )
      {
LABEL_21:
        v20 = *(_QWORD *)(v20 + 40);
        v21 = (__int64 *)(v20 + 8 * v11);
        if ( !result )
          goto LABEL_76;
        goto LABEL_22;
      }
      if ( result )
      {
        if ( !v20 )
          return result;
      }
      else
      {
        sub_A794E0((__int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96), v20, v11, v12, v13);
        result = *(_QWORD *)(a1 + 120);
        v20 = result & 0xFFFFFFFFFFFFFFF8LL;
        if ( (result & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          goto LABEL_102;
      }
    }
    else
    {
      v11 = *(unsigned int *)(v20 + 48);
      if ( (_DWORD)v11 )
        goto LABEL_21;
    }
    if ( (*(_BYTE *)(v20 + 72) & 1) != 0 )
    {
      sub_BA8900(a1);
      result = *(_QWORD *)(a1 + 120);
      v20 = result & 0xFFFFFFFFFFFFFFF8LL;
    }
    v11 = *(unsigned int *)(v20 + 24);
    v20 = *(_QWORD *)(v20 + 16);
    v21 = (__int64 *)(v20 + 8 * v11);
    if ( !result )
    {
LABEL_76:
      sub_A794E0((__int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96), v20, v11, v12, v13);
      result = *(_QWORD *)(a1 + 120);
    }
LABEL_22:
    result &= 0xFFFFFFFFFFFFFFF8LL;
    if ( !result )
    {
      v22 = nullptr;
LABEL_27:
      while ( v21 != v22 )
      {
        v23 = *v22++;
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 104LL))(v23, v2);
      }
      return result;
    }
    if ( (*(_BYTE *)(result + 72) & 1) != 0 )
    {
      sub_BA8900(a1);
      v43 = *(_QWORD *)(a1 + 120);
      result = v43 & 0xFFFFFFFFFFFFFFF8LL;
      v44 = *(unsigned int *)((v43 & 0xFFFFFFFFFFFFFFF8LL) + 48);
      if ( (_DWORD)v44 )
        goto LABEL_25;
      if ( !v43 )
      {
        sub_A794E0((__int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96), 0, v44, v41, v42);
        result = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
      }
      v22 = nullptr;
      if ( !result )
        goto LABEL_27;
    }
    else if ( *(_DWORD *)(result + 48) )
    {
LABEL_25:
      v22 = *(__int64 **)(result + 40);
      goto LABEL_27;
    }
    if ( (*(_BYTE *)(result + 72) & 1) != 0 )
    {
      sub_BA8900(a1);
      result = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
    }
    v22 = *(__int64 **)(result + 16);
    goto LABEL_27;
  }
  v20 = result & 0xFFFFFFFFFFFFFFF8LL;
  if ( (result & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    goto LABEL_19;
LABEL_102:
  if ( !result )
  {
    v21 = nullptr;
    goto LABEL_76;
  }
  return result;
}
