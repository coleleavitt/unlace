unsigned __int64 __fastcall sub_67C540(const __m128i *a1)
{
  __int64 v1; // r12
  __int64 (__fastcall *v3)(__int64, _QWORD); // rax
  __int64 v4; // r13
  unsigned __int64 v5; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r14
  __int64 *v9; // r13
  __int64 v10; // r15
  unsigned __int64 v11; // rbx
  int v12; // eax
  unsigned __int64 v13; // rcx
  int v14; // r8d
  unsigned __int64 *v15; // rdx
  unsigned int v16; // edi
  unsigned __int64 *v17; // rax
  unsigned __int64 v18; // rsi
  __int64 v19; // r14
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  __int64 v22; // rbx
  int v23; // r15d
  unsigned int v24; // edx
  __int64 v25; // rcx
  __m128i v26; // xmm1
  __int64 v27; // rdi
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rcx
  __int32 v33; // edi
  __int64 v34; // rcx
  _QWORD *v35; // rdx
  __int64 *v36; // r9
  __int64 *i; // rax
  __int64 v38; // rdx
  __int32 v39; // r8d
  __int32 v40; // r8d
  __int64 v41; // r11
  int v42; // r15d
  _QWORD *v43; // r14
  __int64 v44; // rdi
  _QWORD *v45; // rcx
  __int64 v46; // r10
  int v47; // esi
  __int32 v48; // edi
  unsigned int v49; // ecx
  unsigned __int64 v50; // r8
  unsigned int v51; // esi
  __int64 v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // rcx
  __int32 v55; // edi
  __int64 v56; // rcx
  _QWORD *v57; // rdx
  __int64 *v58; // r8
  __int64 *v59; // rax
  __int64 v60; // rdx
  __int32 v61; // r9d
  __int32 v62; // r9d
  __int64 v63; // r11
  unsigned int v64; // edi
  _QWORD *v65; // rcx
  __int64 v66; // r10
  __int32 v67; // edi
  int v68; // r9d
  unsigned __int64 *v69; // r8
  unsigned int v70; // r14d
  unsigned __int64 v71; // rcx
  _QWORD *v72; // rcx
  _QWORD *v73; // rcx
  _QWORD *v74; // r15
  int v75; // r10d
  unsigned __int64 *v76; // r9
  int v77; // [rsp+8h] [rbp-40h]

  v1 = 0;
  v3 = *(__int64 (__fastcall **)(__int64, _QWORD))(a1[1].m128i_i64[1] + 40);
  if ( v3 )
    v1 = v3(a1[1].m128i_i64[0], 0);
  v4 = *(_QWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 2112) + 80LL);
  v5 = *(_QWORD *)(v4 + 72);
  result = v5 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v5 & 1) != 0 )
  {
LABEL_4:
    if ( !result )
      return result;
    v7 = v5 & 0xFFFFFFFFFFFFFFF8LL;
    v8 = v7;
    if ( (result & 4) == 0 )
      goto LABEL_20;
    goto LABEL_6;
  }
  if ( result <= 3 )
    return result;
  v7 = v5 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (result & 2) == 0 )
    goto LABEL_10;
  v19 = *(_QWORD *)(v7 + 18200);
  if ( !v19 )
  {
    result = v4 & 0xFFFFFFFFFFFFFFFALL;
    v5 = v4 & 0xFFFFFFFFFFFFFFFALL | 1;
    *(_QWORD *)(v4 + 72) = v5;
    goto LABEL_4;
  }
  v20 = *(_QWORD *)(v7 + 2192);
  *(_QWORD *)(v7 + 2272) += 24LL;
  v21 = (v20 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( *(_QWORD *)(v7 + 2200) >= v21 + 24 && v20 )
    *(_QWORD *)(v7 + 2192) = v21 + 24;
  else
    v21 = sub_67A630(v7 + 2192, 24, 3);
  *(_QWORD *)v21 = v19;
  *(_DWORD *)(v21 + 8) = 0;
  v22 = v21 | 5;
  *(_QWORD *)(v21 + 16) = v4;
  *(_QWORD *)(v4 + 72) = v21 | 5;
  result = v21 & 0xFFFFFFFFFFFFFFFALL | 4;
  v7 = v22 & 0xFFFFFFFFFFFFFFF8LL;
  v8 = v7;
  if ( (result & 4) == 0 )
    goto LABEL_20;
LABEL_6:
  if ( !v7 )
    return result;
  v27 = *(_QWORD *)v7;
  result = *(unsigned int *)(*(_QWORD *)v7 + 12LL);
  if ( *(_DWORD *)(v7 + 8) != (_DWORD)result )
  {
    *(_DWORD *)(v7 + 8) = result;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 144LL))(v27, v4);
  }
  v7 = *(_QWORD *)(v8 + 16);
LABEL_20:
  if ( !v7 )
    return result;
LABEL_10:
  v9 = (__int64 *)a1[4].m128i_i64[1];
  v10 = a1[5].m128i_u32[2];
  v11 = v7 + 40;
  if ( v1 )
  {
    v12 = 0;
    if ( !(_DWORD)v10 )
      goto LABEL_29;
    v13 = (unsigned int)(v10 - 1);
    v14 = 1;
    v15 = nullptr;
    v16 = v13 & (((unsigned int)v11 >> 9) ^ ((unsigned int)v11 >> 4));
    v17 = (unsigned __int64 *)&v9[2 * v16];
    v18 = *v17;
    if ( v11 == *v17 )
    {
LABEL_13:
      result = (unsigned __int64)(v17 + 1);
LABEL_14:
      *(_QWORD *)result = v1;
      return result;
    }
    while ( v18 != -4096 )
    {
      if ( v18 == -8192 && !v15 )
        v15 = v17;
      v16 = v13 & (v14 + v16);
      v17 = (unsigned __int64 *)&v9[2 * v16];
      v18 = *v17;
      if ( v11 == *v17 )
        goto LABEL_13;
      ++v14;
    }
    if ( !v15 )
      v15 = v17;
    v47 = a1[5].m128i_i32[0] + 1;
    v12 = 2 * v10;
    if ( 4 * v47 < (unsigned int)(3 * v10) )
    {
      if ( (unsigned int)v10 >> 3 < (int)v10 - a1[5].m128i_i32[1] - v47 )
      {
LABEL_46:
        a1[5].m128i_i32[0] = v47;
        if ( *v15 != -4096 )
          --a1[5].m128i_i32[1];
        *v15 = v11;
        result = (unsigned __int64)(v15 + 1);
        v15[1] = 0;
        goto LABEL_14;
      }
      v52 = (((((((((v13 | (v13 >> 1)) >> 2) | v13 | (v13 >> 1)) >> 4) | ((v13 | (v13 >> 1)) >> 2) | v13 | (v13 >> 1)) >> 8)
             | ((((v13 | (v13 >> 1)) >> 2) | v13 | (v13 >> 1)) >> 4)
             | ((v13 | (v13 >> 1)) >> 2)
             | v13
             | (v13 >> 1)) >> 16)
           | ((((((v13 | (v13 >> 1)) >> 2) | v13 | (v13 >> 1)) >> 4) | ((v13 | (v13 >> 1)) >> 2) | v13 | (v13 >> 1)) >> 8)
           | ((((v13 | (v13 >> 1)) >> 2) | v13 | (v13 >> 1)) >> 4)
           | ((v13 | (v13 >> 1)) >> 2)
           | v13
           | (v13 >> 1))
          + 1;
      if ( (unsigned int)v52 < 0x40 )
        LODWORD(v52) = 64;
      a1[5].m128i_i32[2] = v52;
      v53 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v52, 8);
      v54 = a1[5].m128i_u32[2];
      a1[4].m128i_i64[1] = (__int64)v53;
      v55 = v54;
      v56 = 16 * v54;
      v57 = &v53[(unsigned __int64)v56 / 8];
      if ( v9 )
      {
        a1[5].m128i_i64[0] = 0;
        v58 = &v9[2 * v10];
        if ( v56 )
        {
          if ( (v56 & 0x10) == 0 || (*v53 = -4096, v53 += 2, v53 != v57) )
          {
            do
            {
              *v53 = -4096;
              v53 += 4;
              *(v53 - 2) = -4096;
            }
            while ( v53 != v57 );
          }
        }
        v59 = v9;
        do
        {
          v60 = *v59;
          if ( *v59 != -8192 && v60 != -4096 )
          {
            v61 = a1[5].m128i_i32[2];
            if ( !v61 )
            {
              *(_QWORD *)&dword_0 = *v59;
              BUG();
            }
            v62 = v61 - 1;
            v63 = a1[4].m128i_i64[1];
            v64 = v62 & (((unsigned int)v60 >> 9) ^ ((unsigned int)v60 >> 4));
            v65 = (_QWORD *)(v63 + 16LL * v64);
            v66 = *v65;
            if ( v60 != *v65 )
            {
              v77 = 1;
              v74 = nullptr;
              while ( v66 != -4096 )
              {
                if ( !v74 && v66 == -8192 )
                  v74 = v65;
                v64 = v62 & (v77 + v64);
                v65 = (_QWORD *)(v63 + 16LL * v64);
                v66 = *v65;
                if ( v60 == *v65 )
                  goto LABEL_75;
                ++v77;
              }
              if ( v74 )
                v65 = v74;
            }
LABEL_75:
            *v65 = v60;
            v65[1] = v59[1];
            ++a1[5].m128i_i32[0];
          }
          v59 += 2;
        }
        while ( v58 != v59 );
        operator delete();
        v53 = (_QWORD *)a1[4].m128i_i64[1];
        v55 = a1[5].m128i_i32[2];
        v47 = a1[5].m128i_i32[0] + 1;
      }
      else
      {
        a1[5].m128i_i64[0] = 0;
        if ( v53 != v57 )
        {
          v73 = v53;
          if ( (((_BYTE)v57 - (_BYTE)v53) & 0x10) == 0 || (v73 = v53 + 2, *v53 = -4096, v53 + 2 != v57) )
          {
            do
            {
              *v73 = -4096;
              v73 += 4;
              *(v73 - 2) = -4096;
            }
            while ( v73 != v57 );
          }
        }
        v47 = 1;
      }
      if ( v55 )
      {
        v67 = v55 - 1;
        v68 = 1;
        v69 = nullptr;
        v70 = v67 & (((unsigned int)v11 >> 9) ^ ((unsigned int)v11 >> 4));
        v15 = &v53[2 * v70];
        v71 = *v15;
        if ( v11 != *v15 )
        {
          while ( v71 != -4096 )
          {
            if ( !v69 && v71 == -8192 )
              v69 = v15;
            v70 = v67 & (v68 + v70);
            v15 = &v53[2 * v70];
            v71 = *v15;
            if ( v11 == *v15 )
              goto LABEL_46;
            ++v68;
          }
          if ( v69 )
            v15 = v69;
        }
        goto LABEL_46;
      }
    }
    else
    {
LABEL_29:
      v28 = (unsigned int)(v12 - 1) | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1);
      v29 = (((v28 >> 2) | v28) >> 4) | (v28 >> 2) | v28;
      v30 = ((((v29 >> 8) | v29) >> 16) | (v29 >> 8) | v29) + 1;
      if ( (unsigned int)v30 < 0x40 )
        LODWORD(v30) = 64;
      a1[5].m128i_i32[2] = v30;
      v31 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v30, 8);
      v32 = a1[5].m128i_u32[2];
      a1[4].m128i_i64[1] = (__int64)v31;
      v33 = v32;
      v34 = 16 * v32;
      v35 = &v31[(unsigned __int64)v34 / 8];
      if ( v9 )
      {
        a1[5].m128i_i64[0] = 0;
        v36 = &v9[2 * (unsigned int)v10];
        if ( v34 )
        {
          if ( (v34 & 0x10) == 0 || (*v31 = -4096, v31 += 2, v31 != v35) )
          {
            do
            {
              *v31 = -4096;
              v31 += 4;
              *(v31 - 2) = -4096;
            }
            while ( v31 != v35 );
          }
        }
        for ( i = v9; v36 != i; i += 2 )
        {
          v38 = *i;
          if ( *i != -4096 && v38 != -8192 )
          {
            v39 = a1[5].m128i_i32[2];
            if ( !v39 )
            {
              *(_QWORD *)&dword_0 = *i;
              BUG();
            }
            v40 = v39 - 1;
            v41 = a1[4].m128i_i64[1];
            v42 = 1;
            v43 = nullptr;
            LODWORD(v44) = v40 & (((unsigned int)v38 >> 9) ^ ((unsigned int)v38 >> 4));
            v45 = (_QWORD *)(v41 + 16LL * (unsigned int)v44);
            v46 = *v45;
            if ( *v45 != v38 )
            {
              while ( v46 != -4096 )
              {
                if ( v46 == -8192 && !v43 )
                  v43 = v45;
                v44 = v40 & (unsigned int)(v44 + v42);
                v45 = (_QWORD *)(v41 + 16 * v44);
                v46 = *v45;
                if ( v38 == *v45 )
                  goto LABEL_41;
                ++v42;
              }
              if ( v43 )
                v45 = v43;
            }
LABEL_41:
            *v45 = v38;
            v45[1] = i[1];
            ++a1[5].m128i_i32[0];
          }
        }
        operator delete();
        v31 = (_QWORD *)a1[4].m128i_i64[1];
        v33 = a1[5].m128i_i32[2];
        v47 = a1[5].m128i_i32[0] + 1;
      }
      else
      {
        a1[5].m128i_i64[0] = 0;
        if ( v31 != v35 )
        {
          v72 = v31;
          if ( (((_BYTE)v35 - (_BYTE)v31) & 0x10) == 0 || (v72 = v31 + 2, *v31 = -4096, v31 + 2 != v35) )
          {
            do
            {
              *v72 = -4096;
              v72 += 4;
              *(v72 - 2) = -4096;
            }
            while ( v72 != v35 );
          }
        }
        v47 = 1;
      }
      if ( v33 )
      {
        v48 = v33 - 1;
        v49 = v48 & (((unsigned int)v11 >> 9) ^ ((unsigned int)v11 >> 4));
        v15 = &v31[2 * v49];
        v50 = *v15;
        if ( v11 != *v15 )
        {
          v75 = 1;
          v76 = nullptr;
          while ( v50 != -4096 )
          {
            if ( !v76 && v50 == -8192 )
              v76 = v15;
            v49 = v48 & (v75 + v49);
            v15 = &v31[2 * v49];
            v50 = *v15;
            if ( v11 == *v15 )
              goto LABEL_46;
            ++v75;
          }
          if ( v76 )
            v15 = v76;
        }
        goto LABEL_46;
      }
    }
    a1[5].m128i_i32[0] = v47;
    BUG();
  }
  if ( (_DWORD)v10 )
  {
    v23 = v10 - 1;
    v24 = v23 & (((unsigned int)v11 >> 9) ^ ((unsigned int)v11 >> 4));
    result = (unsigned __int64)&v9[2 * v24];
    v25 = *(_QWORD *)result;
    if ( v11 == *(_QWORD *)result )
    {
LABEL_24:
      v26 = _mm_loadl_epi64((const __m128i *)&qword_3C86F78);
      *(_QWORD *)result = -8192;
      a1[5].m128i_i64[0] = _mm_add_epi32(_mm_loadl_epi64(a1 + 5), v26).m128i_u64[0];
    }
    else
    {
      result = 1;
      while ( v25 != -4096 )
      {
        v51 = result + 1;
        v24 = v23 & (result + v24);
        result = (unsigned __int64)&v9[2 * v24];
        v25 = *(_QWORD *)result;
        if ( v11 == *(_QWORD *)result )
          goto LABEL_24;
        result = v51;
      }
    }
  }
  return result;
}

