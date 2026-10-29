__int64 __fastcall sub_D9E3C0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  __m128i *v7; // rbx
  __int32 v8; // r9d
  __int64 v9; // rcx
  __int64 *v10; // r14
  int v11; // esi
  __int64 v12; // r9
  __m128i *v13; // rdi
  __m128i *v14; // rax
  __int64 *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __m128i *v19; // r8
  __m128i v20; // xmm1
  __m128i *v21; // rbx
  __int32 v22; // r9d
  __int64 v23; // rcx
  __m128i *v24; // r14
  __int32 v25; // esi
  __int64 v26; // r9
  __m128i *v27; // rdi
  __m128i *v28; // rax
  __m128i *v29; // rcx
  __int64 v30; // rdx
  __m128i *v31; // rax
  __int64 result; // rax
  __int64 v33; // rax
  __int32 v34; // r10d
  __m128i *v35; // rdx
  __m128i *v36; // rax
  const __m128i *v37; // r15
  __m128i *v38; // r11
  __int64 v39; // rdx
  __m128i *v40; // rsi
  __m128i *v41; // rdx
  __m128i v42; // xmm0
  __m128i *v43; // rax
  __int32 v44; // r10d
  __m128i *v45; // r8
  const __m128i *v46; // r15
  __m128i *v47; // r11
  __int64 v48; // rax
  __m128i *v49; // rdx
  __m128i *v50; // rax
  __m128i v51; // xmm0
  size_t v52; // [rsp+8h] [rbp-80h]
  __m128i *v53; // [rsp+8h] [rbp-80h]
  size_t v54; // [rsp+8h] [rbp-80h]
  __int32 v55; // [rsp+8h] [rbp-80h]
  __m128i v56; // [rsp+10h] [rbp-78h] BYREF
  __m128i v57; // [rsp+20h] [rbp-68h] BYREF
  __m128i *v58; // [rsp+30h] [rbp-58h]
  size_t v59; // [rsp+38h] [rbp-50h]
  __int32 v60; // [rsp+44h] [rbp-44h]
  __m128i *v61; // [rsp+48h] [rbp-40h]

  v6 = *(unsigned int *)(a1 + 24);
  if ( 3 * (int)v6 < (unsigned int)(4 * (*(_DWORD *)(a1 + 28) + *(_DWORD *)(a1 + 32))) )
  {
    v56.m128i_i32[0] = 2 * v6;
    v54 = 16LL * (unsigned int)(2 * v6);
    v43 = (__m128i *)sub_186B270(v54);
    v9 = v54;
    v44 = v56.m128i_i32[0];
    v7 = v43;
    v45 = &v43[v54 / 0x10];
    if ( v56.m128i_i32[0] )
    {
      if ( (v54 & 0x10) == 0 || (*v43 = 0, ++v43, v45 != v43) )
      {
        do
        {
          *v43 = 0;
          v43 += 2;
          v43[-1] = 0;
        }
        while ( v45 != v43 );
      }
    }
    v46 = *(const __m128i **)(a1 + 16);
    v8 = v44 - 1;
    v10 = (__int64 *)v45;
    v47 = (__m128i *)&v46[*(unsigned int *)(a1 + 24)];
    if ( v46 != v47 )
    {
      do
      {
        while ( v46->m128i_i64[0] <= 1uLL )
        {
          if ( v47 == ++v46 )
            goto LABEL_73;
        }
        v48 = 16LL * (*(_DWORD *)(v46->m128i_i64[0] + 12) & (unsigned int)v8);
        v49 = &v7[(unsigned __int64)v48 / 0x10];
        if ( v54 == v48 )
        {
LABEL_77:
          if ( v7 == v49 )
          {
LABEL_89:
            v59 = (size_t)v45;
            v57.m128i_i32[0] = v44;
            v58 = (__m128i *)v54;
            v56.m128i_i32[0] = v44 - 1;
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v50 = v7;
          while ( v50->m128i_i64[0] )
          {
            if ( v49 == ++v50 )
              goto LABEL_89;
          }
        }
        else
        {
          v50 = &v7[(unsigned __int64)v48 / 0x10];
          while ( v50->m128i_i64[0] )
          {
            if ( v45 == ++v50 )
              goto LABEL_77;
          }
        }
        v51 = _mm_loadu_si128(v46++);
        *v50 = v51;
      }
      while ( v47 != v46 );
LABEL_73:
      v47 = *(__m128i **)(a1 + 16);
    }
    if ( v47 )
    {
      LODWORD(v58) = v44;
      v56.m128i_i64[0] = v54;
      v55 = v44 - 1;
      sub_186B220(v47);
      v44 = (int)v58;
      v9 = v56.m128i_i64[0];
      v8 = v55;
    }
    *(_QWORD *)(a1 + 16) = v7;
    *(_DWORD *)(a1 + 24) = v44;
    *(_DWORD *)(a1 + 32) = 0;
  }
  else
  {
    v7 = *(__m128i **)(a1 + 16);
    v8 = v6 - 1;
    v9 = 16 * v6;
    v10 = (__int64 *)((char *)v7->m128i_i64 + v9);
  }
  v11 = *(_DWORD *)(a2 + 12);
  v12 = 16LL * (v11 & (unsigned int)v8);
  v13 = &v7[(unsigned __int64)v12 / 0x10];
  if ( v12 != v9 )
  {
    v14 = &v7[(unsigned __int64)v12 / 0x10];
    v15 = nullptr;
    while ( 1 )
    {
      v16 = v14->m128i_i64[0];
      if ( v14->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v16 + 12) == v11 && a2 == v16 )
        {
          v14->m128i_i64[0] = a2;
          v14->m128i_i64[1] = a3;
          goto LABEL_19;
        }
      }
      else
      {
        if ( !v16 )
        {
          if ( v15 )
            goto LABEL_86;
          v15 = (__int64 *)v14;
          goto LABEL_87;
        }
        v15 = (__int64 *)v14;
      }
      if ( ++v14 == (__m128i *)v10 )
        goto LABEL_14;
    }
  }
  v15 = nullptr;
  while ( 1 )
  {
LABEL_14:
    if ( v13 == v7 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v17 = v7->m128i_i64[0];
    if ( v7->m128i_i64[0] <= 1uLL )
      break;
    if ( *(_DWORD *)(v17 + 12) == v11 && a2 == v17 )
    {
      v7->m128i_i64[0] = a2;
      v7->m128i_i64[1] = a3;
      goto LABEL_19;
    }
LABEL_13:
    ++v7;
  }
  if ( v17 )
  {
    v15 = (__int64 *)v7;
    goto LABEL_13;
  }
  if ( v15 )
LABEL_86:
    --*(_DWORD *)(a1 + 32);
  else
    v15 = (__int64 *)v7;
LABEL_87:
  *v15 = a2;
  v15[1] = a3;
  ++*(_DWORD *)(a1 + 28);
LABEL_19:
  v18 = *(unsigned int *)(a1 + 48);
  v19 = *(__m128i **)(a3 + 16);
  v20 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v19, (__m128i)a2);
  if ( 3 * (int)v18 < (unsigned int)(4 * (*(_DWORD *)(a1 + 52) + *(_DWORD *)(a1 + 56))) )
  {
    v58 = *(__m128i **)(a3 + 16);
    v56.m128i_i32[0] = 2 * v18;
    v52 = 16LL * (unsigned int)(2 * v18);
    v57 = v20;
    v33 = sub_186B270(v52);
    v34 = v56.m128i_i32[0];
    v23 = v52;
    v21 = (__m128i *)v33;
    v35 = (__m128i *)v33;
    v19 = v58;
    v20 = _mm_load_si128(&v57);
    v36 = (__m128i *)(v52 + v33);
    if ( v56.m128i_i32[0] )
    {
      if ( (((_BYTE)v36 - (_BYTE)v21) & 0x10) == 0 || (v35 = v21 + 1, *v21 = 0, v36 != &v21[1]) )
      {
        do
        {
          *v35 = 0;
          v35 += 2;
          v35[-1] = 0;
        }
        while ( v36 != v35 );
      }
    }
    v37 = *(const __m128i **)(a1 + 40);
    v22 = v34 - 1;
    v24 = v36;
    v38 = (__m128i *)&v37[*(unsigned int *)(a1 + 48)];
    if ( v37 != v38 )
    {
      do
      {
        while ( v37->m128i_i64[0] <= 1uLL )
        {
          if ( v38 == ++v37 )
            goto LABEL_51;
        }
        v39 = 16LL * (*(_DWORD *)(v37->m128i_i64[0] + 12) & (unsigned int)v22);
        v40 = &v21[(unsigned __int64)v39 / 0x10];
        if ( v52 == v39 )
        {
LABEL_55:
          if ( v21 == v40 )
          {
LABEL_88:
            v61 = v36;
            v60 = v34;
            v59 = v52;
            v57.m128i_i32[0] = v34 - 1;
            v58 = v38;
            v56 = v20;
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v41 = v21;
          while ( v41->m128i_i64[0] )
          {
            if ( v40 == ++v41 )
              goto LABEL_88;
          }
        }
        else
        {
          v41 = &v21[(unsigned __int64)v39 / 0x10];
          while ( v41->m128i_i64[0] )
          {
            if ( v36 == ++v41 )
              goto LABEL_55;
          }
        }
        v42 = _mm_loadu_si128(v37++);
        *v41 = v42;
      }
      while ( v38 != v37 );
LABEL_51:
      v38 = *(__m128i **)(a1 + 40);
    }
    if ( v38 )
    {
      LODWORD(v59) = v34;
      v57.m128i_i64[0] = v52;
      LODWORD(v58) = v34 - 1;
      v53 = v19;
      v56 = v20;
      sub_186B220(v38);
      v34 = v59;
      v23 = v57.m128i_i64[0];
      v22 = (int)v58;
      v20 = _mm_load_si128(&v56);
      v19 = v53;
    }
    *(_QWORD *)(a1 + 40) = v21;
    *(_DWORD *)(a1 + 48) = v34;
    *(_DWORD *)(a1 + 56) = 0;
  }
  else
  {
    v21 = *(__m128i **)(a1 + 40);
    v22 = v18 - 1;
    v23 = 16 * v18;
    v24 = (__m128i *)((char *)v21 + v23);
  }
  v25 = v19->m128i_i32[3];
  v26 = 16LL * (v25 & (unsigned int)v22);
  v27 = &v21[(unsigned __int64)v26 / 0x10];
  if ( v26 != v23 )
  {
    v28 = &v21[(unsigned __int64)v26 / 0x10];
    v29 = nullptr;
    while ( 1 )
    {
      v30 = v28->m128i_i64[0];
      if ( v28->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v30 + 12) == v25 && v19 == (__m128i *)v30 )
        {
          *v28 = v20;
          goto LABEL_37;
        }
      }
      else
      {
        if ( !v30 )
        {
          if ( v29 )
            goto LABEL_83;
          v29 = v28;
          goto LABEL_84;
        }
        v29 = v28;
      }
      if ( ++v28 == v24 )
        goto LABEL_32;
    }
  }
  v29 = nullptr;
LABEL_32:
  while ( 2 )
  {
    if ( v27 == v21 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v31 = (__m128i *)v21->m128i_i64[0];
    if ( v21->m128i_i64[0] > 1uLL )
    {
      if ( v31->m128i_i32[3] == v25 && v19 == v31 )
      {
        *v21 = v20;
        goto LABEL_37;
      }
      goto LABEL_31;
    }
    if ( v31 )
    {
      v29 = v21;
LABEL_31:
      ++v21;
      continue;
    }
    break;
  }
  if ( v29 )
LABEL_83:
    --*(_DWORD *)(a1 + 56);
  else
    v29 = v21;
LABEL_84:
  *v29 = v20;
  ++*(_DWORD *)(a1 + 52);
LABEL_37:
  result = sub_1692DB0(a1 + 72, a2, a3, 0, 0);
  ++*(_DWORD *)(a2 + 8);
  ++*(_DWORD *)(a3 + 8);
  return result;
}

