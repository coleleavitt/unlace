// write access to const memory has been detected, the output may be wrong!
void __fastcall sub_1F40C50(__int64 a1, unsigned __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // rbp
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 v14; // r13
  unsigned __int64 v15; // rax
  __int64 v16; // r12
  unsigned int v17; // eax
  __int64 v18; // rcx
  char v19; // r8
  int v20; // r8d
  __int64 v21; // rdx
  int v22; // r10d
  __int64 v23; // rax
  unsigned int v24; // edi
  __int64 *v25; // rsi
  __int64 v26; // rax
  char v27; // bp
  __int64 v28; // rax
  __int64 v29; // r9
  char v30; // bp
  char v31; // dl
  char v32; // r8
  __int64 v33; // rcx
  __int64 v34; // rax
  int v35; // r8d
  __int64 v36; // rdx
  int v37; // r10d
  __int64 v38; // rax
  unsigned int v39; // edi
  __int64 *v40; // rsi
  __int64 v41; // rax
  unsigned int v42; // edi
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r8
  __int64 v46; // rdx
  unsigned __int64 v47; // rsi
  __int64 v48; // rdx
  __int64 v49; // rax
  unsigned int v50; // edx
  unsigned __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rax
  unsigned int v54; // edi
  __int64 v55; // rdx
  unsigned int v56; // esi
  __int64 v57; // r8
  __int64 v58; // rdx
  unsigned __int64 v59; // rsi
  __int64 v60; // rdx
  __int64 v61; // rax
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // rcx
  int v64; // eax
  __int64 *v65; // r11
  int v66; // eax
  __int64 *v67; // r11
  __m128i v68; // kr00_16
  __int64 v69; // rdx
  __m128i v70; // xmm0
  __m128i v71; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int64 *v72; // [rsp+10h] [rbp-68h]
  __int64 v73; // [rsp+18h] [rbp-60h]
  __m128i v74; // [rsp+20h] [rbp-58h] BYREF
  __m128 v75[4]; // [rsp+30h] [rbp-48h] BYREF

  if ( !a2 )
  {
    qword_68 = 0;
    BUG();
  }
  v6 = a4;
  v7 = a3;
  *a2 = a3 & 0xFFFFFFFFFFFFFFFCLL;
  v9 = *(_QWORD *)(a3 + 112);
  v73 = a3;
  a2[1] = v9;
  v10 = *(a2 - 3);
  v11 = *(_QWORD *)(a3 + 80);
  v72 = a2 - 13;
  v12 = (v11 >> 16) & 1;
  if ( (_BYTE)v12 != (BYTE2(v10) & 1) )
    *((_BYTE *)a2 - 22) |= 1u;
  v13 = *(a2 - 7) & 0xFFFFFFFFFFFFFFF0LL;
  v14 = *(_QWORD *)v13;
  if ( *(_BYTE *)(*(_QWORD *)v13 + 16LL) != 26 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26 )
      v14 = sub_F63050(v14, a2, v12, a4);
    else
      v14 = 0;
  }
  v15 = *(_QWORD *)(v7 + 48) & 0xFFFFFFFFFFFFFFF0LL;
  v16 = *(_QWORD *)v15;
  if ( *(_BYTE *)(*(_QWORD *)v15 + 16LL) != 26 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26 )
      return;
    v16 = sub_F63050(v16, a2, v12, a4);
  }
  if ( v14 && v16 )
  {
    v17 = ((*(_BYTE *)(v14 + 19) >> 1) & 0xF) - 9;
    if ( ((*(_BYTE *)(v16 + 19) >> 1) & 0xFu) - 9 <= 1 == v17 <= 1 )
      goto LABEL_14;
    v71.m128i_i64[0] = v6;
    v18 = a1 + 3248;
    if ( v17 >= 2 )
      v7 = (__int64)(a2 - 13);
    v19 = *(_BYTE *)(a1 + 3248);
    v71.m128i_i64[0] = v7;
    v74 = (__m128i)_mm_loadh_ps((const double *)v71.m128i_i64);
    v20 = v19 & 1;
    if ( v20 )
    {
      v21 = a1 + 3256;
      v22 = 3;
      v23 = 64;
      v24 = ((unsigned __int8)((unsigned int)v6 >> 9) ^ (unsigned __int8)((unsigned int)v6 >> 4)) & 3;
      v25 = (__int64 *)(a1
                      + 3256
                      + 16LL
                      * (((unsigned __int8)((unsigned int)v6 >> 9) ^ (unsigned __int8)((unsigned int)v6 >> 4)) & 3));
      a6 = *v25;
      if ( v6 == *v25 )
      {
LABEL_13:
        sub_1F35DD0(v75, v25, (_QWORD *)(v23 + v21), v18, 1);
        goto LABEL_14;
      }
    }
    else
    {
      v41 = *(unsigned int *)(a1 + 3264);
      if ( !(_DWORD)v41 )
      {
        v75[0].m128_u64[0] = 0;
        v42 = *(_DWORD *)(a1 + 3248);
        v43 = (unsigned int)((*(_DWORD *)(a1 + 3248) >> 1) + 1);
        goto LABEL_37;
      }
      v22 = v41 - 1;
      v21 = *(_QWORD *)(a1 + 3256);
      v24 = (v41 - 1) & (((unsigned int)v6 >> 9) ^ ((unsigned int)v6 >> 4));
      v25 = (__int64 *)(v21 + 16LL * v24);
      a6 = *v25;
      if ( v6 == *v25 )
      {
LABEL_30:
        v23 = 16 * v41;
        goto LABEL_13;
      }
    }
    v66 = 1;
    v67 = nullptr;
    if ( a6 != -4096 )
    {
      while ( 1 )
      {
        if ( !v67 && a6 == -8192 )
          v67 = v25;
        v24 = v22 & (v66 + v24);
        v25 = (__int64 *)(v21 + 16LL * v24);
        a6 = *v25;
        if ( v6 == *v25 )
          break;
        if ( a6 == -4096 )
        {
          if ( v67 )
            v25 = v67;
          goto LABEL_65;
        }
        ++v66;
      }
      if ( !(_BYTE)v20 )
      {
        v41 = *(unsigned int *)(a1 + 3264);
        goto LABEL_30;
      }
      v23 = 64;
      goto LABEL_13;
    }
LABEL_65:
    v42 = *(_DWORD *)(a1 + 3248);
    v75[0].m128_u64[0] = (unsigned __int64)v25;
    v43 = (v42 >> 1) + 1;
    if ( (_BYTE)v20 )
    {
      v44 = 12;
      LODWORD(v41) = 4;
LABEL_38:
      if ( (unsigned int)v44 <= 4 * (int)v43 )
      {
        v71.m128i_i64[0] = a1 + 3248;
        sub_1F3A3A0(a1 + 3248, 2 * v41, v43, v18, v44, a6);
      }
      else
      {
        v45 = v6;
        v46 = (unsigned int)(v41 - *(_DWORD *)(a1 + 3252) - v43);
        if ( (unsigned int)v46 > (unsigned int)v41 >> 3 )
        {
LABEL_40:
          v47 = v75[0].m128_u64[0];
          *(_DWORD *)(a1 + 3248) = (2 * (v42 >> 1) + 2) | v42 & 1;
          if ( *(_QWORD *)v47 != -4096 )
            --*(_DWORD *)(a1 + 3252);
          *(_QWORD *)v47 = v45;
          *(_DWORD *)(v47 + 8) = 0;
          if ( (*(_BYTE *)(a1 + 3248) & 1) != 0 )
          {
            v48 = a1 + 3256;
            v49 = 64;
          }
          else
          {
            v48 = *(_QWORD *)(a1 + 3256);
            v49 = 16LL * *(unsigned int *)(a1 + 3264);
          }
          sub_1F35DD0(v75, (_QWORD *)v47, (_QWORD *)(v49 + v48), v18, 1);
          v50 = *(_DWORD *)(a1 + 3328);
          *(_DWORD *)(v75[0].m128_u64[0] + 8) = v50;
          v51 = *(unsigned int *)(a1 + 3332);
          v52 = v50;
          if ( v50 >= v51 )
          {
            v69 = v50 + 1LL;
            v70 = _mm_load_si128(&v74);
            if ( v51 < v52 + 1 )
            {
              v71 = v70;
              sub_2237220(a1 + 3320, a1 + 3336, v69, 16);
              v70 = _mm_load_si128(&v71);
            }
            *(__m128i *)(*(_QWORD *)(a1 + 3320) + 16LL * (unsigned int)(*(_DWORD *)(a1 + 3328))++) = v70;
          }
          else
          {
            *(__m128i *)(*(_QWORD *)(a1 + 3320) + 16LL * v50) = _mm_load_si128(&v74);
            *(_DWORD *)(a1 + 3328) = v50 + 1;
          }
LABEL_14:
          v26 = sub_F57E80(*(_QWORD *)(*(_QWORD *)(v14 + 24) & 0xFFFFFFFFFFFFFFF0LL));
          if ( !v26 || (*(_QWORD *)(v26 + 24) & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          {
            v28 = sub_F57E80(*(_QWORD *)(*(_QWORD *)(v16 + 24) & 0xFFFFFFFFFFFFFFF0LL));
            if ( !v28 )
              return;
            v30 = 0;
            if ( (*(_QWORD *)(v28 + 24) & 0xFFFFFFFFFFFFFFF0LL) != 0 )
              return;
          }
          else
          {
            v27 = ((unsigned __int8)(*(_BYTE *)(v26 + 17) & 0x1F) >> 2) ^ 1;
            v28 = sub_F57E80(*(_QWORD *)(*(_QWORD *)(v16 + 24) & 0xFFFFFFFFFFFFFFF0LL));
            v30 = v27 & 1;
            v31 = 0;
            if ( !v28 || (*(_QWORD *)(v28 + 24) & 0xFFFFFFFFFFFFFFF0LL) != 0 )
            {
LABEL_18:
              if ( v31 == v30 )
                return;
              v32 = *(_BYTE *)(a1 + 3400);
              v33 = a1 + 3400;
              if ( !v30 )
                v16 = v14;
              v34 = *(_QWORD *)(v16 + 24);
              v74.m128i_i64[0] = v6;
              v74.m128i_i64[1] = v34;
              v35 = v32 & 1;
              if ( v35 )
              {
                v36 = a1 + 3408;
                v37 = 3;
                v38 = 64;
                v39 = ((unsigned __int8)((unsigned int)v6 >> 9) ^ (unsigned __int8)((unsigned int)v6 >> 4)) & 3;
                v40 = (__int64 *)(a1
                                + 3408
                                + 16LL
                                * (((unsigned __int8)((unsigned int)v6 >> 9)
                                  ^ (unsigned __int8)((unsigned int)v6 >> 4))
                                 & 3));
                v29 = *v40;
                if ( v6 == *v40 )
                {
LABEL_23:
                  sub_1EDE440(v75, v40, (_QWORD *)(v38 + v36), v33, 1);
                  return;
                }
              }
              else
              {
                v53 = *(unsigned int *)(a1 + 3416);
                if ( !(_DWORD)v53 )
                {
                  v75[0].m128_u64[0] = 0;
                  v54 = *(_DWORD *)(a1 + 3400);
                  v55 = (v54 >> 1) + 1;
                  goto LABEL_50;
                }
                v37 = v53 - 1;
                v36 = *(_QWORD *)(a1 + 3408);
                v39 = (v53 - 1) & (((unsigned int)v6 >> 4) ^ ((unsigned int)v6 >> 9));
                v40 = (__int64 *)(v36 + 16LL * v39);
                v29 = *v40;
                if ( v6 == *v40 )
                {
LABEL_48:
                  v38 = 16 * v53;
                  goto LABEL_23;
                }
              }
              v64 = 1;
              v65 = nullptr;
              if ( v29 != -4096 )
              {
                while ( 1 )
                {
                  if ( !v65 && v29 == -8192 )
                    v65 = v40;
                  v39 = v37 & (v64 + v39);
                  v40 = (__int64 *)(v36 + 16LL * v39);
                  v29 = *v40;
                  if ( v6 == *v40 )
                    break;
                  if ( v29 == -4096 )
                  {
                    if ( v65 )
                      v40 = v65;
                    goto LABEL_62;
                  }
                  ++v64;
                }
                if ( !(_BYTE)v35 )
                {
                  v53 = *(unsigned int *)(a1 + 3416);
                  goto LABEL_48;
                }
                v38 = 64;
                goto LABEL_23;
              }
LABEL_62:
              v54 = *(_DWORD *)(a1 + 3400);
              v75[0].m128_u64[0] = (unsigned __int64)v40;
              v55 = (v54 >> 1) + 1;
              if ( (_BYTE)v35 )
              {
                v56 = 12;
                LODWORD(v53) = 4;
LABEL_51:
                v57 = (unsigned int)(4 * v55);
                if ( (unsigned int)v57 >= v56 )
                {
                  v71.m128i_i64[0] = a1 + 3400;
                  sub_1EFFC00(a1 + 3400, 2 * v53, v55, v33, v57, v29);
                }
                else
                {
                  v58 = (unsigned int)(v53 - *(_DWORD *)(a1 + 3404) - v55);
                  if ( (unsigned int)v58 > (unsigned int)v53 >> 3 )
                  {
LABEL_53:
                    v59 = v75[0].m128_u64[0];
                    *(_DWORD *)(a1 + 3400) = (2 * (v54 >> 1) + 2) | v54 & 1;
                    if ( *(_QWORD *)v59 != -4096 )
                      --*(_DWORD *)(a1 + 3404);
                    *(_QWORD *)v59 = v6;
                    *(_DWORD *)(v59 + 8) = 0;
                    if ( (*(_BYTE *)(a1 + 3400) & 1) != 0 )
                    {
                      v60 = a1 + 3408;
                      v61 = 64;
                    }
                    else
                    {
                      v60 = *(_QWORD *)(a1 + 3408);
                      v61 = 16LL * *(unsigned int *)(a1 + 3416);
                    }
                    sub_1EDE440(v75, (_QWORD *)v59, (_QWORD *)(v61 + v60), v33, 1);
                    v62 = *(unsigned int *)(a1 + 3480);
                    *(_DWORD *)(v75[0].m128_u64[0] + 8) = v62;
                    v63 = *(unsigned int *)(a1 + 3484);
                    if ( v62 >= v63 )
                    {
                      v68 = v74;
                      if ( v63 < v62 + 1 )
                        sub_2237220(a1 + 3472, a1 + 3488, v62 + 1, 16);
                      *(__m128i *)(*(_QWORD *)(a1 + 3472) + 16LL * (unsigned int)(*(_DWORD *)(a1 + 3480))++) = v68;
                    }
                    else
                    {
                      *(__m128i *)(*(_QWORD *)(a1 + 3472) + 16 * v62) = v74;
                      ++*(_DWORD *)(a1 + 3480);
                    }
                    return;
                  }
                  v71.m128i_i64[0] = a1 + 3400;
                  sub_1EFFC00(a1 + 3400, v53, v58, v33, v57, v29);
                }
                sub_1ED20E0(v71.m128i_i64[0], v74.m128i_i64, v75);
                v6 = v74.m128i_i64[0];
                v54 = *(_DWORD *)(a1 + 3400);
                v33 = v71.m128i_i64[0];
                goto LABEL_53;
              }
              LODWORD(v53) = *(_DWORD *)(a1 + 3416);
LABEL_50:
              v56 = 3 * v53;
              goto LABEL_51;
            }
          }
          v31 = (((unsigned __int8)(*(_BYTE *)(v28 + 17) & 0x1F) >> 2) ^ 1) & 1;
          goto LABEL_18;
        }
        v71.m128i_i64[0] = a1 + 3248;
        sub_1F3A3A0(a1 + 3248, v41, v46, v18, v6, a6);
      }
      sub_1F21BF0(v71.m128i_i64[0], v74.m128i_i64, v75);
      v45 = v74.m128i_i64[0];
      v42 = *(_DWORD *)(a1 + 3248);
      v18 = v71.m128i_i64[0];
      goto LABEL_40;
    }
    LODWORD(v41) = *(_DWORD *)(a1 + 3264);
LABEL_37:
    v44 = (unsigned int)(3 * v41);
    goto LABEL_38;
  }
}
