void __fastcall clang_index_setClientContainer(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rbp
  const __m128i *v4; // rbx
  __int64 *v5; // r13
  __int64 v6; // r15
  int v7; // eax
  unsigned __int64 v8; // rcx
  int v9; // r8d
  __int64 *v10; // rdx
  unsigned int v11; // r14d
  unsigned int v12; // edi
  __int64 *v13; // rax
  __int64 v14; // rsi
  _QWORD *v15; // rax
  int v16; // r15d
  unsigned int v17; // edx
  __int64 *v18; // rax
  __int64 v19; // rcx
  __m128i v20; // xmm1
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rcx
  __int32 v26; // edi
  __int64 v27; // rcx
  _QWORD *v28; // rdx
  __int64 *v29; // r9
  __int64 *i; // rax
  __int64 v31; // rdx
  __int32 v32; // edi
  __int32 v33; // edi
  __int64 v34; // r11
  int v35; // r15d
  _QWORD *v36; // r14
  __int64 v37; // r8
  _QWORD *v38; // rcx
  __int64 v39; // r10
  int v40; // esi
  __int32 v41; // edi
  unsigned int v42; // ecx
  __int64 v43; // r8
  int v44; // eax
  int v45; // esi
  __int64 v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rcx
  __int32 v49; // edi
  __int64 v50; // rcx
  _QWORD *v51; // rdx
  __int64 *v52; // r8
  __int64 *v53; // rax
  __int64 v54; // rdx
  __int32 v55; // r9d
  __int32 v56; // r9d
  __int64 v57; // r11
  unsigned int v58; // edi
  _QWORD *v59; // rcx
  __int64 v60; // r10
  __int32 v61; // edi
  int v62; // r9d
  __int64 *v63; // r8
  unsigned int v64; // r14d
  __int64 v65; // rcx
  _QWORD *v66; // rcx
  _QWORD *v67; // rcx
  _QWORD *v68; // r15
  int v69; // r10d
  __int64 *v70; // r9
  __int64 v72; // rsi
  const __m128i *v73; // rdi
  int v74; // [rsp+0h] [rbp-40h]

  if ( a1 )
  {
    v72 = *(_QWORD *)(a1 + 32);
    v73 = *(const __m128i **)(a1 + 40);
    if ( !v72 )
    {
      nullsub_701();
      return;
    }
    v2 = a2;
    v3 = v72;
    v4 = v73;
    v5 = (__int64 *)v73[4].m128i_i64[1];
    v6 = v73[5].m128i_u32[2];
    if ( a2 )
    {
      v7 = 0;
      if ( !(_DWORD)v6 )
        goto LABEL_17;
      v8 = (unsigned int)(v6 - 1);
      v9 = 1;
      v10 = nullptr;
      v11 = ((unsigned int)v72 >> 9) ^ ((unsigned int)v72 >> 4);
      v12 = v8 & v11;
      v13 = &v5[2 * ((unsigned int)v8 & v11)];
      v14 = *v13;
      if ( *v13 == v3 )
      {
LABEL_11:
        v15 = v13 + 1;
LABEL_12:
        *v15 = v2;
        return;
      }
      while ( v14 != -4096 )
      {
        if ( !v10 && v14 == -8192 )
          v10 = v13;
        v12 = v8 & (v9 + v12);
        v13 = &v5[2 * v12];
        v14 = *v13;
        if ( *v13 == v3 )
          goto LABEL_11;
        ++v9;
      }
      if ( !v10 )
        v10 = v13;
      v40 = v4[5].m128i_i32[0] + 1;
      v7 = 2 * v6;
      if ( 4 * v40 < (unsigned int)(3 * v6) )
      {
        if ( (unsigned int)v6 >> 3 < (int)v6 - v4[5].m128i_i32[1] - v40 )
        {
LABEL_34:
          v4[5].m128i_i32[0] = v40;
          if ( *v10 != -4096 )
            --v4[5].m128i_i32[1];
          *v10 = v3;
          v15 = v10 + 1;
          v10[1] = 0;
          goto LABEL_12;
        }
        v46 = (((((((((v8 | (v8 >> 1)) >> 2) | v8 | (v8 >> 1)) >> 4) | ((v8 | (v8 >> 1)) >> 2) | v8 | (v8 >> 1)) >> 8)
               | ((((v8 | (v8 >> 1)) >> 2) | v8 | (v8 >> 1)) >> 4)
               | ((v8 | (v8 >> 1)) >> 2)
               | v8
               | (v8 >> 1)) >> 16)
             | ((((((v8 | (v8 >> 1)) >> 2) | v8 | (v8 >> 1)) >> 4) | ((v8 | (v8 >> 1)) >> 2) | v8 | (v8 >> 1)) >> 8)
             | ((((v8 | (v8 >> 1)) >> 2) | v8 | (v8 >> 1)) >> 4)
             | ((v8 | (v8 >> 1)) >> 2)
             | v8
             | (v8 >> 1))
            + 1;
        if ( (unsigned int)v46 < 0x40 )
          LODWORD(v46) = 64;
        v4[5].m128i_i32[2] = v46;
        v47 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v46, 8);
        v48 = v4[5].m128i_u32[2];
        v4[4].m128i_i64[1] = (__int64)v47;
        v49 = v48;
        v50 = 16 * v48;
        v51 = &v47[(unsigned __int64)v50 / 8];
        if ( v5 )
        {
          v4[5].m128i_i64[0] = 0;
          v52 = &v5[2 * v6];
          if ( v50 )
          {
            if ( (v50 & 0x10) == 0 || (*v47 = -4096, v47 += 2, v47 != v51) )
            {
              do
              {
                *v47 = -4096;
                v47 += 4;
                *(v47 - 2) = -4096;
              }
              while ( v47 != v51 );
            }
          }
          v53 = v5;
          do
          {
            v54 = *v53;
            if ( *v53 != -8192 && v54 != -4096 )
            {
              v55 = v4[5].m128i_i32[2];
              if ( !v55 )
              {
                *(_QWORD *)&dword_0 = *v53;
                BUG();
              }
              v56 = v55 - 1;
              v57 = v4[4].m128i_i64[1];
              v58 = v56 & (((unsigned int)v54 >> 9) ^ ((unsigned int)v54 >> 4));
              v59 = (_QWORD *)(v57 + 16LL * v58);
              v60 = *v59;
              if ( *v59 != v54 )
              {
                v74 = 1;
                v68 = nullptr;
                while ( v60 != -4096 )
                {
                  if ( v60 == -8192 && !v68 )
                    v68 = v59;
                  v58 = v56 & (v74 + v58);
                  v59 = (_QWORD *)(v57 + 16LL * v58);
                  v60 = *v59;
                  if ( v54 == *v59 )
                    goto LABEL_63;
                  ++v74;
                }
                if ( v68 )
                  v59 = v68;
              }
LABEL_63:
              *v59 = v54;
              v59[1] = v53[1];
              ++v4[5].m128i_i32[0];
            }
            v53 += 2;
          }
          while ( v52 != v53 );
          operator delete();
          v47 = (_QWORD *)v4[4].m128i_i64[1];
          v49 = v4[5].m128i_i32[2];
          v40 = v4[5].m128i_i32[0] + 1;
        }
        else
        {
          v4[5].m128i_i64[0] = 0;
          if ( v47 != v51 )
          {
            v67 = v47;
            if ( (((_BYTE)v51 - (_BYTE)v47) & 0x10) == 0 || (v67 = v47 + 2, *v47 = -4096, v47 + 2 != v51) )
            {
              do
              {
                *v67 = -4096;
                v67 += 4;
                *(v67 - 2) = -4096;
              }
              while ( v67 != v51 );
            }
          }
          v40 = 1;
        }
        if ( v49 )
        {
          v61 = v49 - 1;
          v62 = 1;
          v63 = nullptr;
          v64 = v61 & v11;
          v10 = &v47[2 * v64];
          v65 = *v10;
          if ( *v10 != v3 )
          {
            while ( v65 != -4096 )
            {
              if ( !v63 && v65 == -8192 )
                v63 = v10;
              v64 = v61 & (v62 + v64);
              v10 = &v47[2 * v64];
              v65 = *v10;
              if ( *v10 == v3 )
                goto LABEL_34;
              ++v62;
            }
            if ( v63 )
              v10 = v63;
          }
          goto LABEL_34;
        }
      }
      else
      {
LABEL_17:
        v21 = (unsigned int)(v7 - 1) | ((unsigned __int64)(unsigned int)(v7 - 1) >> 1);
        v22 = (((v21 >> 2) | v21) >> 4) | (v21 >> 2) | v21;
        v23 = ((((v22 >> 8) | v22) >> 16) | (v22 >> 8) | v22) + 1;
        if ( (unsigned int)v23 < 0x40 )
          LODWORD(v23) = 64;
        v4[5].m128i_i32[2] = v23;
        v24 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v23, 8);
        v25 = v4[5].m128i_u32[2];
        v4[4].m128i_i64[1] = (__int64)v24;
        v26 = v25;
        v27 = 16 * v25;
        v28 = &v24[(unsigned __int64)v27 / 8];
        if ( v5 )
        {
          v4[5].m128i_i64[0] = 0;
          v29 = &v5[2 * (unsigned int)v6];
          if ( v27 )
          {
            if ( (v27 & 0x10) == 0 || (*v24 = -4096, v24 += 2, v24 != v28) )
            {
              do
              {
                *v24 = -4096;
                v24 += 4;
                *(v24 - 2) = -4096;
              }
              while ( v24 != v28 );
            }
          }
          for ( i = v5; v29 != i; i += 2 )
          {
            v31 = *i;
            if ( *i != -4096 && v31 != -8192 )
            {
              v32 = v4[5].m128i_i32[2];
              if ( !v32 )
              {
                *(_QWORD *)&dword_0 = *i;
                BUG();
              }
              v33 = v32 - 1;
              v34 = v4[4].m128i_i64[1];
              v35 = 1;
              v36 = nullptr;
              LODWORD(v37) = v33 & (((unsigned int)v31 >> 9) ^ ((unsigned int)v31 >> 4));
              v38 = (_QWORD *)(v34 + 16LL * (unsigned int)v37);
              v39 = *v38;
              if ( *v38 != v31 )
              {
                while ( v39 != -4096 )
                {
                  if ( v39 == -8192 && !v36 )
                    v36 = v38;
                  v37 = v33 & (unsigned int)(v37 + v35);
                  v38 = (_QWORD *)(v34 + 16 * v37);
                  v39 = *v38;
                  if ( v31 == *v38 )
                    goto LABEL_29;
                  ++v35;
                }
                if ( v36 )
                  v38 = v36;
              }
LABEL_29:
              *v38 = v31;
              v38[1] = i[1];
              ++v4[5].m128i_i32[0];
            }
          }
          operator delete();
          v24 = (_QWORD *)v4[4].m128i_i64[1];
          v26 = v4[5].m128i_i32[2];
          v40 = v4[5].m128i_i32[0] + 1;
        }
        else
        {
          v4[5].m128i_i64[0] = 0;
          if ( v24 != v28 )
          {
            v66 = v24;
            if ( (((_BYTE)v28 - (_BYTE)v24) & 0x10) == 0 || (v66 = v24 + 2, *v24 = -4096, v24 + 2 != v28) )
            {
              do
              {
                *v66 = -4096;
                v66 += 4;
                *(v66 - 2) = -4096;
              }
              while ( v66 != v28 );
            }
          }
          v40 = 1;
        }
        if ( v26 )
        {
          v41 = v26 - 1;
          v42 = v41 & (((unsigned int)v3 >> 9) ^ ((unsigned int)v3 >> 4));
          v10 = &v24[2 * v42];
          v43 = *v10;
          if ( *v10 != v3 )
          {
            v69 = 1;
            v70 = nullptr;
            while ( v43 != -4096 )
            {
              if ( v43 == -8192 && !v70 )
                v70 = v10;
              v42 = v41 & (v69 + v42);
              v10 = &v24[2 * v42];
              v43 = *v10;
              if ( *v10 == v3 )
                goto LABEL_34;
              ++v69;
            }
            if ( v70 )
              v10 = v70;
          }
          goto LABEL_34;
        }
      }
      v4[5].m128i_i32[0] = v40;
      BUG();
    }
    if ( (_DWORD)v6 )
    {
      v16 = v6 - 1;
      v17 = v16 & (((unsigned int)v72 >> 9) ^ ((unsigned int)v72 >> 4));
      v18 = &v5[2 * v17];
      v19 = *v18;
      if ( *v18 == v72 )
      {
LABEL_16:
        v20 = _mm_loadl_epi64((const __m128i *)&qword_3C86F78);
        *v18 = -8192;
        v73[5].m128i_i64[0] = _mm_add_epi32(_mm_loadl_epi64(v73 + 5), v20).m128i_u64[0];
      }
      else
      {
        v44 = 1;
        while ( v19 != -4096 )
        {
          v45 = v44 + 1;
          v17 = v16 & (v44 + v17);
          v18 = &v5[2 * v17];
          v19 = *v18;
          if ( *v18 == v3 )
            goto LABEL_16;
          v44 = v45;
        }
      }
    }
  }
}

