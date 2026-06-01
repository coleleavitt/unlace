__int64 __fastcall sub_67C280(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // r10
  int v10; // ecx
  int v11; // esi
  int v12; // edx
  __int64 *v13; // rcx
  int v14; // esi
  __int64 v15; // rax
  unsigned int v16; // edx
  __int64 *v17; // rdi
  __int64 v18; // rdx
  __int64 *v19; // r8
  __int64 *i; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned __int64 v23; // r8
  __int64 v24; // r9
  int v25; // ecx
  unsigned int v26; // edx
  __int32 v27; // r14d
  __m128i *v28; // r12
  int v29; // eax
  __int64 v30; // rcx
  __m128i *v31; // r13
  __int64 v32; // rax
  __m128i v33; // xmm0
  __m128i *v34; // rsi
  __m128i *v35; // rax
  __m128i *v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned int v41; // r10d
  unsigned __int64 v42; // rdx
  __m128i *v43; // rax
  __m128i *v44; // rdi
  const __m128i *v45; // r15
  const __m128i *v46; // r11
  __int64 v47; // rdx
  __m128i *v48; // rsi
  __m128i *v49; // rdx
  size_t v50; // [rsp+0h] [rbp-88h]
  int v51; // [rsp+0h] [rbp-88h]
  __int64 v52; // [rsp+0h] [rbp-88h]
  unsigned int v53; // [rsp+8h] [rbp-80h]
  unsigned __int64 v54; // [rsp+8h] [rbp-80h]
  __int64 v55; // [rsp+10h] [rbp-78h]
  int v56; // [rsp+10h] [rbp-78h]
  unsigned __int64 v57; // [rsp+18h] [rbp-70h]
  __int64 v58; // [rsp+18h] [rbp-70h]
  unsigned int v59; // [rsp+28h] [rbp-60h]
  __int64 v60; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v61[9]; // [rsp+40h] [rbp-48h] BYREF

  result = sub_15D2CB0(*(_QWORD *)a1, a2);
  if ( (_BYTE)result || *(_WORD *)(a2 + 4) || (*(_BYTE *)(a2 + 30) & 1) == 0 )
    return result;
  v5 = *(_QWORD *)(a1 + 40);
  v6 = sub_67B850(*(__int64 **)(*(_QWORD *)(a1 + 8) + 8LL), (unsigned int *)a2);
  sub_1374250(v61, v5, v6);
  v7 = sub_15D1F10(a2);
  v8 = v61[0];
  v9 = v7;
  v10 = *(_DWORD *)(v61[0] + 12LL);
  LODWORD(v7) = (*(_DWORD *)(v7 + 12) - v10) ^ (v10 << 8);
  v11 = (v10 - (_DWORD)v7) << 10;
  v12 = v7 ^ ((v10 - (_DWORD)v7) << 16);
  LODWORD(v7) = v7 - v10;
  v13 = *(__int64 **)(a1 + 56);
  v14 = (v12 + v7) ^ v11;
  v15 = *(unsigned int *)(a1 + 64);
  v16 = v15 - 1;
  v15 *= 32;
  v17 = (__int64 *)((char *)v13 + v15);
  v18 = 32LL * (v14 & v16);
  v19 = &v13[(unsigned __int64)v18 / 8];
  if ( v18 != v15 )
  {
    for ( i = &v13[(unsigned __int64)v18 / 8]; v17 != i; i += 4 )
    {
      v21 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *((_DWORD *)i + 6) == v14 && v61[0] == v21 && v9 == i[1] )
          return sub_675460(v8, v61[1]);
      }
      else if ( !v21 )
      {
        goto LABEL_12;
      }
    }
  }
  for ( ; v19 != v13; v13 += 4 )
  {
    v39 = *v13;
    if ( (unsigned __int64)*v13 > 1 )
    {
      if ( *((_DWORD *)v13 + 6) == v14 && v61[0] == v39 && v9 == v13[1] )
        return sub_675460(v8, v61[1]);
    }
    else if ( !v39 )
    {
      break;
    }
  }
LABEL_12:
  v22 = sub_15D1F10(a2);
  v23 = v61[0];
  v24 = v22;
  v25 = *(_DWORD *)(v61[0] + 12LL);
  LODWORD(v22) = (*(_DWORD *)(v22 + 12) - v25) ^ (v25 << 8);
  v26 = *(_DWORD *)(a1 + 64);
  v27 = ((v22 ^ ((v25 - (_DWORD)v22) << 16)) + v22 - v25) ^ ((v25 - (_DWORD)v22) << 10);
  if ( 3 * v26 < 4 * (*(_DWORD *)(a1 + 68) + *(_DWORD *)(a1 + 72)) )
  {
    v57 = v61[0];
    v55 = v24;
    v53 = 2 * v26;
    v50 = 64LL * v26;
    v40 = sub_186B270(v50);
    v41 = v53;
    v30 = v50;
    v28 = (__m128i *)v40;
    v24 = v55;
    v23 = v57;
    if ( v53 )
    {
      v51 = v53 - 1;
      if ( v53 - 1 <= 2 )
      {
        *(_DWORD *)(v40 + 24) = 0;
        *(_DWORD *)(v40 + 56) = 0;
        *(_OWORD *)v40 = 0;
        *(_OWORD *)(v40 + 32) = 0;
      }
      else
      {
        v42 = v40 + ((unsigned __int64)(v53 >> 2) << 7);
        do
        {
          *(_DWORD *)(v40 + 24) = 0;
          v40 += 128;
          *(_OWORD *)(v40 - 128) = 0;
          *(_OWORD *)(v40 - 96) = 0;
          *(_OWORD *)(v40 - 64) = 0;
          *(_OWORD *)(v40 - 32) = 0;
          *(_DWORD *)(v40 - 72) = 0;
          *(_DWORD *)(v40 - 40) = 0;
          *(_DWORD *)(v40 - 8) = 0;
        }
        while ( v40 != v42 );
        if ( (v53 & 2) != 0 )
        {
          v43 = &v28[2 * (v53 & 0xFFFFFFFC)];
          v43[1].m128i_i32[2] = 0;
          v43[3].m128i_i32[2] = 0;
          *v43 = 0;
          v43[2] = 0;
          if ( v53 - (v53 & 0xFFFFFFFC) != 2 )
          {
            v43[5].m128i_i32[2] = 0;
            v43[4] = 0;
          }
        }
      }
    }
    else
    {
      v51 = -1;
    }
    v44 = *(__m128i **)(a1 + 56);
    v31 = (__m128i *)((char *)v28 + v30);
    v29 = v51;
    v45 = v44;
    v46 = &v44[2 * *(unsigned int *)(a1 + 64)];
    if ( v44 != v46 )
    {
      do
      {
        if ( v45->m128i_i64[0] > 1uLL )
        {
          v47 = 32LL * (v45[1].m128i_i32[2] & (unsigned int)v51);
          v48 = &v28[(unsigned __int64)v47 / 0x10];
          if ( v30 == v47 )
          {
LABEL_64:
            if ( v28 == v48 )
            {
LABEL_77:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v49 = v28;
            while ( v49->m128i_i64[0] )
            {
              v49 += 2;
              if ( v48 == v49 )
                goto LABEL_77;
            }
          }
          else
          {
            v49 = &v28[(unsigned __int64)v47 / 0x10];
            while ( v49->m128i_i64[0] )
            {
              v49 += 2;
              if ( v31 == v49 )
                goto LABEL_64;
            }
          }
          *v49 = _mm_loadu_si128(v45);
          v49[1] = _mm_loadu_si128(v45 + 1);
        }
        v45 += 2;
      }
      while ( v46 != v45 );
      v44 = *(__m128i **)(a1 + 56);
    }
    if ( v44 )
    {
      v59 = v53;
      v58 = v30;
      v56 = v51;
      v54 = v23;
      v52 = v24;
      sub_186B220(v44);
      v41 = v59;
      v30 = v58;
      v29 = v56;
      v23 = v54;
      v24 = v52;
    }
    *(_QWORD *)(a1 + 56) = v28;
    *(_DWORD *)(a1 + 64) = v41;
    *(_DWORD *)(a1 + 72) = 0;
  }
  else
  {
    v28 = *(__m128i **)(a1 + 56);
    v29 = v26 - 1;
    v30 = 32LL * v26;
    v31 = (__m128i *)((char *)v28 + v30);
  }
  v32 = 32LL * (v27 & (unsigned int)v29);
  v33 = _mm_unpacklo_epi64((__m128i)v23, (__m128i)(unsigned __int64)v24);
  v34 = &v28[(unsigned __int64)v32 / 0x10];
  if ( v32 != v30 )
  {
    v35 = &v28[(unsigned __int64)v32 / 0x10];
    v36 = nullptr;
    while ( 1 )
    {
      v37 = v35->m128i_i64[0];
      if ( v35->m128i_i64[0] > 1uLL )
      {
        if ( v35[1].m128i_i32[2] == v27 && v23 == v37 && v24 == v35->m128i_i64[1] )
        {
          v35[1].m128i_i64[0] = a2;
          v35[1].m128i_i32[2] = v27;
          *v35 = v33;
          goto LABEL_43;
        }
      }
      else
      {
        if ( !v37 )
        {
          if ( v36 )
            goto LABEL_75;
          v36 = v35;
          goto LABEL_76;
        }
        v36 = v35;
      }
      v35 += 2;
      if ( v35 == v31 )
        goto LABEL_27;
    }
  }
  v36 = nullptr;
  while ( 1 )
  {
LABEL_27:
    if ( v34 == v28 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v38 = v28->m128i_i64[0];
    if ( v28->m128i_i64[0] <= 1uLL )
      break;
    if ( v28[1].m128i_i32[2] == v27 && v23 == v38 && v24 == v28->m128i_i64[1] )
    {
      v28[1].m128i_i64[0] = a2;
      v28[1].m128i_i32[2] = v27;
      *v28 = v33;
      goto LABEL_43;
    }
LABEL_26:
    v28 += 2;
  }
  if ( v38 )
  {
    v36 = v28;
    goto LABEL_26;
  }
  if ( v36 )
LABEL_75:
    --*(_DWORD *)(a1 + 72);
  else
    v36 = v28;
LABEL_76:
  v36[1].m128i_i64[0] = a2;
  v36[1].m128i_i32[2] = v27;
  *v36 = v33;
  ++*(_DWORD *)(a1 + 68);
LABEL_43:
  v60 = v61[0];
  if ( v61[0] )
    ++*(_DWORD *)(v61[0] + 8LL);
  sub_6761A0((unsigned int **)(a1 + 88), &v60);
  v8 = v61[0];
  return sub_675460(v8, v61[1]);
}

