__int64 __fastcall sub_6D8E10(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 v5; // rcx
  unsigned int v6; // esi
  __int64 v7; // r8
  char *v8; // r14
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  char *v11; // rbx
  __int64 v12; // r12
  char *v13; // r13
  int v14; // edx
  __int64 *v15; // r14
  unsigned __int64 v16; // r15
  __int64 v17; // r15
  __m128i *v18; // rax
  __m128i *v19; // rbp
  unsigned __int64 v20; // rcx
  __int64 *v21; // rdi
  __m128i *v22; // rdx
  __m128i v23; // xmm0
  int v24; // r11d
  __int64 *v25; // rax
  int v26; // ecx
  __int64 v27; // rdx
  __int64 *v28; // r9
  __int64 v29; // r10
  int v30; // ecx
  int v31; // r11d
  int v32; // ecx
  __int64 *v33; // rdi
  unsigned int v34; // edx
  __int64 *v35; // r9
  __int64 v36; // rsi
  __int64 v37; // rax
  unsigned __int64 v38; // r10
  int v39; // r11d
  __int64 v40; // rax
  __int64 *v41; // r8
  __int64 v42; // rdx
  unsigned __int64 v43; // rcx
  __m128i *v44; // rdx
  __m128i v45; // xmm0
  __int64 v46; // r14
  __m128i *v47; // rax
  __m128i *v48; // r8
  unsigned __int64 v49; // rcx
  __m128i v50; // xmm0
  __m128i *v51; // r9
  __int64 *v52; // rsi
  int v53; // r11d
  __int64 *v54; // rax
  int v55; // r15d
  __int64 v56; // rdx
  __int64 *v57; // r9
  __int64 v58; // r10
  int v59; // r11d
  unsigned int v60; // eax
  __m128i *v61; // rax
  int v62; // r8d
  __m128i *v63; // r14
  unsigned __int64 v64; // rcx
  __m128i v65; // xmm0
  __m128i *v66; // rsi
  unsigned int v67; // r10d
  int v68; // eax
  int v69; // edi
  __int64 *v70; // rdx
  __m128i *v71; // rax
  int v72; // r8d
  __m128i *v73; // r14
  unsigned int v74; // r10d
  int v75; // r10d
  int v76; // ebp
  unsigned int v77; // eax
  int v78; // [rsp+8h] [rbp-50h]
  __int64 *v79; // [rsp+8h] [rbp-50h]
  __int64 *v80; // [rsp+8h] [rbp-50h]
  int v81; // [rsp+10h] [rbp-48h]
  __m128i *v82; // [rsp+10h] [rbp-48h]
  int v83; // [rsp+10h] [rbp-48h]
  int v84; // [rsp+10h] [rbp-48h]
  unsigned int v85; // [rsp+1Ch] [rbp-3Ch]
  unsigned int v86; // [rsp+1Ch] [rbp-3Ch]

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
  v3 = *(unsigned int *)(a1 + 1688);
  v4 = *(_QWORD *)(a1 + 1672);
  if ( (_DWORD)v3 )
  {
    v5 = result;
    v6 = (v3 - 1) & (((unsigned int)result >> 9) ^ ((unsigned int)result >> 4));
    result = v4 + 16LL * v6;
    v7 = *(_QWORD *)result;
    if ( v5 == *(_QWORD *)result )
    {
LABEL_3:
      if ( result != v4 + 16 * v3 )
      {
        v8 = (char *)(result + 8);
        v9 = *(_QWORD *)(result + 8);
        if ( (v9 & 4) != 0 )
        {
          v10 = v9 & 0xFFFFFFFFFFFFFFF8LL;
          v11 = *(char **)v10;
          v12 = *(_QWORD *)v10 + 8LL * *(unsigned int *)(v10 + 8);
        }
        else
        {
          v11 = v8;
          v12 = (__int64)&v8[8 * (v9 > 7)];
        }
        if ( (char *)v12 != v11 )
        {
          v13 = v8;
          v14 = 0;
          v15 = nullptr;
LABEL_8:
          v81 = v14;
          v16 = (((((((unsigned int)(2 * v14 - 1) | ((unsigned __int64)(unsigned int)(2 * v14 - 1) >> 1)) >> 2)
                  | (unsigned int)(2 * v14 - 1)
                  | ((unsigned __int64)(unsigned int)(2 * v14 - 1) >> 1)) >> 4)
                | (((unsigned int)(2 * v14 - 1) | ((unsigned __int64)(unsigned int)(2 * v14 - 1) >> 1)) >> 2)
                | (unsigned int)(2 * v14 - 1)
                | ((unsigned __int64)(unsigned int)(2 * v14 - 1) >> 1)) >> 8)
              | (((((unsigned int)(2 * v14 - 1) | ((unsigned __int64)(unsigned int)(2 * v14 - 1) >> 1)) >> 2)
                | (unsigned int)(2 * v14 - 1)
                | ((unsigned __int64)(unsigned int)(2 * v14 - 1) >> 1)) >> 4)
              | (((unsigned int)(2 * v14 - 1) | ((unsigned __int64)(unsigned int)(2 * v14 - 1) >> 1)) >> 2)
              | (unsigned int)(2 * v14 - 1)
              | ((unsigned __int64)(unsigned int)(2 * v14 - 1) >> 1);
          v17 = ((v16 >> 16) | v16) + 1;
          if ( (unsigned int)v17 < 0x40 )
            LODWORD(v17) = 64;
          v18 = (__m128i *)sub_25CC9C0(8LL * (unsigned int)v17, 8);
          v19 = v18;
          if ( v15 )
          {
            v20 = (unsigned __int64)(unsigned int)v17 >> 1;
            v21 = &v15[v81];
            v22 = &v18[v20];
            v23 = _mm_unpacklo_epi64((__m128i)0xFFFFFFFFFFFFF000LL, (__m128i)0xFFFFFFFFFFFFF000LL);
            if ( ((v20 * 16) & 0x10) == 0 || (*v18 = v23, ++v18, v18 != v22) )
            {
              do
              {
                *v18 = v23;
                v18 += 2;
                v18[-1] = v23;
              }
              while ( v18 != v22 );
            }
            v24 = v17 - 1;
            if ( v21 == v15 )
            {
              v30 = 1;
            }
            else
            {
              v25 = v15;
              v26 = 0;
              do
              {
                v27 = *v25;
                if ( *v25 != -8192 && v27 != -4096 )
                {
                  v28 = &v19->m128i_i64[v24 & (((unsigned int)v27 >> 9) ^ ((unsigned int)v27 >> 4))];
                  v29 = *v28;
                  if ( v27 != *v28 )
                  {
                    v83 = 1;
                    v79 = nullptr;
                    v85 = v24 & (((unsigned int)v27 >> 9) ^ ((unsigned int)v27 >> 4));
                    while ( v29 != -4096 )
                    {
                      if ( v29 == -8192 )
                      {
                        if ( v79 )
                          v28 = v79;
                        v79 = v28;
                      }
                      v74 = v83 + v85;
                      ++v83;
                      v85 = v24 & v74;
                      v28 = &v19->m128i_i64[v24 & v74];
                      v29 = *v28;
                      if ( v27 == *v28 )
                        goto LABEL_19;
                    }
                    if ( v79 )
                      v28 = v79;
                  }
LABEL_19:
                  *v28 = v27;
                  ++v26;
                }
                ++v25;
              }
              while ( v21 != v25 );
              v30 = v26 + 1;
            }
            v78 = v30;
            operator delete();
            v31 = v17 - 1;
            v32 = v78;
          }
          else
          {
            v43 = (unsigned __int64)(unsigned int)v17 >> 1;
            v44 = &v18[v43];
            v45 = _mm_unpacklo_epi64((__m128i)0xFFFFFFFFFFFFF000LL, (__m128i)0xFFFFFFFFFFFFF000LL);
            if ( ((v43 * 16) & 0x10) == 0 || (*v18 = v45, ++v18, v18 != v44) )
            {
              do
              {
                *v18 = v45;
                v18 += 2;
                v18[-1] = v45;
              }
              while ( v18 != v44 );
            }
            v31 = v17 - 1;
            v32 = 1;
          }
          LODWORD(v33) = 0;
          v34 = v31 & (((unsigned int)*(_QWORD *)v11 >> 9) ^ ((unsigned int)*(_QWORD *)v11 >> 4));
          v35 = &v19->m128i_i64[v34];
          v36 = *v35;
          v37 = *v35;
          if ( *(_QWORD *)v11 == *v35 )
            goto LABEL_24;
          v68 = 1;
          v33 = nullptr;
          while ( v36 != -4096 )
          {
            if ( v36 == -8192 && !v33 )
              v33 = v35;
            v34 = v31 & (v68 + v34);
            v35 = &v19->m128i_i64[v34];
            v36 = *v35;
            if ( *(_QWORD *)v11 == *v35 )
            {
              v37 = *v35;
              LODWORD(v33) = 0;
              goto LABEL_24;
            }
            ++v68;
          }
          v36 = *(_QWORD *)v11;
          if ( v33 )
          {
            v37 = *v33;
            v35 = v33;
            LODWORD(v33) = 0;
            goto LABEL_24;
          }
          while ( 1 )
          {
            v11 += 8;
            *v35 = v36;
            v38 = (unsigned int)(v17 - 1);
            if ( (char *)v12 == v11 )
              break;
            while ( 1 )
            {
              v36 = *(_QWORD *)v11;
              v39 = 1;
              v35 = nullptr;
              LODWORD(v40) = v38 & (((unsigned int)*(_QWORD *)v11 >> 9) ^ ((unsigned int)*(_QWORD *)v11 >> 4));
              v41 = &v19->m128i_i64[(unsigned int)v40];
              v42 = *v41;
              if ( *(_QWORD *)v11 != *v41 )
                break;
LABEL_27:
              *(_QWORD *)v11 = 0;
              v11 += 8;
              if ( (char *)v12 == v11 )
                goto LABEL_28;
            }
            while ( v42 != -4096 )
            {
              if ( v42 == -8192 && !v35 )
                v35 = v41;
              v40 = (unsigned int)v38 & ((_DWORD)v40 + v39);
              v41 = &v19->m128i_i64[v40];
              v42 = *v41;
              if ( v36 == *v41 )
                goto LABEL_27;
              ++v39;
            }
            if ( !v35 )
              v35 = v41;
            ++v32;
            if ( 4 * v32 >= (unsigned int)(3 * v17) )
            {
              v14 = v17;
              v15 = (__int64 *)v19;
              goto LABEL_8;
            }
            if ( (unsigned int)v17 >> 3 < (int)v17 - (int)v33 - v32 )
            {
              v37 = *v35;
LABEL_24:
              LODWORD(v33) = (_DWORD)v33 - (v37 != -4096);
              continue;
            }
            v46 = (((((((((v38 | (v38 >> 1)) >> 2) | v38 | (v38 >> 1)) >> 4)
                     | ((v38 | (v38 >> 1)) >> 2)
                     | v38
                     | (v38 >> 1)) >> 8)
                   | ((((v38 | (v38 >> 1)) >> 2) | v38 | (v38 >> 1)) >> 4)
                   | ((v38 | (v38 >> 1)) >> 2)
                   | v38
                   | (v38 >> 1)) >> 16)
                 | ((((((v38 | (v38 >> 1)) >> 2) | v38 | (v38 >> 1)) >> 4) | ((v38 | (v38 >> 1)) >> 2)
                                                                           | v38
                                                                           | (v38 >> 1)) >> 8)
                 | ((((v38 | (v38 >> 1)) >> 2) | v38 | (v38 >> 1)) >> 4)
                 | ((v38 | (v38 >> 1)) >> 2)
                 | v38
                 | (v38 >> 1))
                + 1;
            if ( (unsigned int)v46 < 0x40 )
              LODWORD(v46) = 64;
            v47 = (__m128i *)sub_25CC9C0(8LL * (unsigned int)v46, 8);
            v48 = v47;
            if ( v19 )
            {
              v49 = (unsigned __int64)(unsigned int)v46 >> 1;
              v50 = _mm_unpacklo_epi64((__m128i)0xFFFFFFFFFFFFF000LL, (__m128i)0xFFFFFFFFFFFFF000LL);
              v51 = &v47[v49];
              v52 = &v19->m128i_i64[(unsigned int)v17];
              if ( ((v49 * 16) & 0x10) == 0 || (*v47 = v50, ++v47, v47 != v51) )
              {
                do
                {
                  *v47 = v50;
                  v47 += 2;
                  v47[-1] = v50;
                }
                while ( v47 != v51 );
              }
              v53 = v46 - 1;
              v54 = (__int64 *)v19;
              v55 = 0;
              do
              {
                v56 = *v54;
                if ( *v54 != -8192 && v56 != -4096 )
                {
                  v57 = &v48->m128i_i64[v53 & (((unsigned int)v56 >> 9) ^ ((unsigned int)v56 >> 4))];
                  v58 = *v57;
                  if ( v56 != *v57 )
                  {
                    v84 = 1;
                    v80 = nullptr;
                    v86 = v53 & (((unsigned int)v56 >> 9) ^ ((unsigned int)v56 >> 4));
                    while ( v58 != -4096 )
                    {
                      if ( v58 == -8192 )
                      {
                        if ( v80 )
                          v57 = v80;
                        v80 = v57;
                      }
                      v75 = v84++;
                      v86 = v53 & (v75 + v86);
                      v57 = &v48->m128i_i64[v86];
                      v58 = *v57;
                      if ( v56 == *v57 )
                        goto LABEL_59;
                    }
                    if ( v80 )
                      v57 = v80;
                  }
LABEL_59:
                  *v57 = v56;
                  ++v55;
                }
                ++v54;
              }
              while ( v52 != v54 );
              v82 = v48;
              operator delete();
              v48 = v82;
              v59 = v46 - 1;
              v32 = v55 + 1;
            }
            else
            {
              v64 = (unsigned __int64)(unsigned int)v46 >> 1;
              v65 = _mm_unpacklo_epi64((__m128i)0xFFFFFFFFFFFFF000LL, (__m128i)0xFFFFFFFFFFFFF000LL);
              v66 = &v47[v64];
              if ( ((v64 * 16) & 0x10) == 0 || (*v47 = v65, ++v47, v47 != v66) )
              {
                do
                {
                  *v47 = v65;
                  v47 += 2;
                  v47[-1] = v65;
                }
                while ( v47 != v66 );
              }
              v59 = v46 - 1;
              v32 = 1;
            }
            LODWORD(v33) = 0;
            v60 = v59 & (((unsigned int)*(_QWORD *)v11 >> 9) ^ ((unsigned int)*(_QWORD *)v11 >> 4));
            v35 = &v48->m128i_i64[v60];
            v36 = *v35;
            if ( *(_QWORD *)v11 == *v35 )
            {
LABEL_63:
              v61 = v48;
              v62 = v46;
              v63 = v61;
              LODWORD(v17) = v62;
              v37 = v36;
              v19 = v63;
              goto LABEL_24;
            }
            v69 = 1;
            v70 = nullptr;
            while ( v36 != -4096 )
            {
              if ( v36 == -8192 && !v70 )
                v70 = v35;
              v76 = v69 + 1;
              v77 = v60 + v69;
              LODWORD(v33) = 0;
              v60 = v59 & v77;
              v35 = &v48->m128i_i64[v60];
              v36 = *v35;
              if ( *(_QWORD *)v11 == *v35 )
                goto LABEL_63;
              v69 = v76;
            }
            LODWORD(v33) = 0;
            if ( v70 )
            {
              v71 = v48;
              v72 = v46;
              v36 = *(_QWORD *)v11;
              v35 = v70;
              v73 = v71;
              LODWORD(v17) = v72;
              v37 = *v70;
              v19 = v73;
              goto LABEL_24;
            }
            v36 = *(_QWORD *)v11;
            v19 = v48;
            LODWORD(v17) = v46;
          }
LABEL_28:
          v8 = v13;
        }
        sub_6D8C00(v8);
        return operator delete();
      }
    }
    else
    {
      result = 1;
      while ( v7 != -4096 )
      {
        v67 = result + 1;
        v6 = (v3 - 1) & (result + v6);
        result = v4 + 16LL * v6;
        v7 = *(_QWORD *)result;
        if ( v5 == *(_QWORD *)result )
          goto LABEL_3;
        result = v67;
      }
    }
  }
  return result;
}

