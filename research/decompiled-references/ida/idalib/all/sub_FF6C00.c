unsigned __int64 __fastcall sub_FF6C00(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 *a5,
        __int64 a6)
{
  int v7; // edx
  __int64 v8; // rbp
  unsigned __int64 result; // rax
  __int64 v10; // rcx
  __int64 *v11; // r8
  __int64 v12; // r9
  unsigned __int64 *v13; // r11
  __int64 v14; // r13
  __int64 *v15; // r12
  unsigned __int64 *v16; // rbp
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  __m128i *v19; // rax
  __int64 v20; // rcx
  unsigned __int64 *v21; // rsi
  int v22; // edi
  __int64 v23; // rcx
  __m128i *v24; // rdx
  unsigned __int64 v25; // r8
  __m128i si128; // xmm0
  unsigned __int64 *v27; // rdx
  int v28; // r11d
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // r8
  __int64 v31; // r9
  int v32; // r9d
  unsigned int v33; // r14d
  unsigned __int64 *v34; // r9
  unsigned __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // rcx
  unsigned __int64 v38; // rax
  __int64 v39; // rax
  unsigned __int64 v40; // rcx
  int v41; // eax
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rdi
  int v44; // r11d
  unsigned __int64 *v45; // rdi
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // r8
  __int64 v48; // r10
  __int64 v49; // r10
  __int64 v50; // rdx
  unsigned __int64 v51; // r12
  unsigned __int64 *v52; // rbp
  unsigned __int64 *v53; // r12
  unsigned int v54; // esi
  unsigned __int64 *v55; // rdi
  bool v56; // zf
  unsigned __int64 v57; // rcx
  __int64 v58; // rdx
  unsigned __int64 v59; // rcx
  unsigned __int64 v60; // rbp
  unsigned __int64 v61; // rax
  __int64 v62; // rax
  unsigned __int64 v63; // rcx
  int v64; // eax
  int v65; // r11d
  __int64 v66; // r15
  __int64 v67; // r15
  unsigned __int64 v68; // rcx
  unsigned __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // rcx
  __m128i *v73; // rdx
  unsigned __int64 v74; // rsi
  __m128i v75; // xmm0
  unsigned __int64 v76; // r8
  unsigned __int64 v77; // r9
  unsigned __int64 *v78; // [rsp+8h] [rbp-70h]
  __int64 *v79; // [rsp+8h] [rbp-70h]
  int v80; // [rsp+10h] [rbp-68h]
  unsigned __int64 v81; // [rsp+18h] [rbp-60h]
  unsigned __int64 v82; // [rsp+18h] [rbp-60h]
  unsigned __int64 v83[2]; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 *v84[8]; // [rsp+38h] [rbp-40h] BYREF

  v7 = *(_DWORD *)(a1 + 320);
  v83[0] = a2;
  if ( v7 )
  {
    v14 = *(unsigned int *)(a1 + 328);
    v15 = (__int64 *)(a1 + 312);
    v16 = *(unsigned __int64 **)(a1 + 312);
    if ( !(_DWORD)v14 )
    {
      v84[0] = nullptr;
      goto LABEL_6;
    }
    v38 = v83[0];
    do
    {
      v39 = *(_QWORD *)(v38 + 8);
      if ( !v39 )
        break;
      v40 = v39 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v39 & 4) == 0 )
      {
        v42 = HIDWORD(v40);
        v43 = 0x9DDFEA08EB382D69LL * (v42 ^ (((8 * v39) & 0x7FFFFFFC0LL) - 0xAE502812AA7333LL));
        v41 = -348639895
            * ((-348639895 * (v43 ^ v42 ^ (v43 >> 47)))
             ^ ((unsigned int)((0x9DDFEA08EB382D69LL * (v43 ^ v42 ^ (v43 >> 47))) >> 32) >> 15));
        goto LABEL_45;
      }
      v38 = v39 & 0xFFFFFFFFFFFFFFF8LL;
    }
    while ( v40 );
    v41 = -1916529075;
LABEL_45:
    a6 = (unsigned int)(v14 - 1);
    v44 = 1;
    v45 = nullptr;
    result = (unsigned int)a6 & v41;
    a5 = &v16[(unsigned int)result];
    v46 = *a5;
    if ( v83[0] == *a5 )
      return result;
    while ( 1 )
    {
      if ( v83[0] == -4096 || v83[0] == -8192 )
      {
        if ( v46 == -4096 )
        {
LABEL_113:
          if ( !v45 )
            v45 = a5;
          v58 = (unsigned int)(v7 + 1);
          a4 = (unsigned int)(4 * v58);
          v84[0] = v45;
          if ( (unsigned int)a4 < 3 * (int)v14 )
          {
            v70 = (unsigned int)v14 >> 3;
            if ( (int)v14 - *(_DWORD *)(a1 + 324) - (int)v58 <= (unsigned int)v70 )
            {
              sub_FF6850((__int64)v15, v14, v58, v70, (__int64)a5, a6);
              goto LABEL_83;
            }
LABEL_84:
            v56 = *v45 == -4096;
            *(_DWORD *)(a1 + 320) = v58;
            if ( !v56 )
              --*(_DWORD *)(a1 + 324);
            v59 = *(unsigned int *)(a1 + 348);
            *v45 = v83[0];
            result = *(unsigned int *)(a1 + 344);
            v60 = v83[0];
            if ( result + 1 > v59 )
            {
              sub_2237220(a1 + 336, a1 + 352, result + 1, 8);
              result = *(unsigned int *)(a1 + 344);
            }
            *(_QWORD *)(*(_QWORD *)(a1 + 336) + 8 * result) = v60;
            ++*(_DWORD *)(a1 + 344);
            return result;
          }
LABEL_6:
          v17 = (((((((unsigned int)(2 * v14 - 1) | ((unsigned __int64)(unsigned int)(2 * v14 - 1) >> 1)) >> 2)
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
          v18 = ((v17 >> 16) | v17) + 1;
          if ( (unsigned int)v18 < 0x40 )
            LODWORD(v18) = 64;
          *(_DWORD *)(a1 + 328) = v18;
          v19 = (__m128i *)sub_22300B0(8LL * (unsigned int)v18, 8, 64, a4, a5, a6);
          *(_QWORD *)(a1 + 312) = v19;
          if ( v16 )
          {
            v20 = *(unsigned int *)(a1 + 328);
            *(_QWORD *)(a1 + 320) = 0;
            v21 = &v16[v14];
            v22 = v20;
            v23 = 8 * v20;
            if ( v19 != (__m128i *)&v19->m128i_i8[v23] )
            {
              v24 = v19;
              v25 = ((unsigned __int64)(v23 - 8) >> 3) + 1;
              if ( v23 == 8 )
                goto LABEL_14;
              si128 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
              do
                *v24++ = si128;
              while ( &v19[v25 >> 1] != v24 );
              v24 = (__m128i *)((char *)v19 + 8 * (v25 & 0xFFFFFFFFFFFFFFFELL));
              if ( (v25 & 0xFFFFFFFFFFFFFFFELL) != v25 )
LABEL_14:
                v24->m128i_i64[0] = -4096;
            }
            if ( v16 != v21 )
            {
              v27 = v16;
              v28 = v22 - 1;
              do
              {
                v29 = *v27;
                if ( *v27 != -4096 && v29 != -8192 )
                {
                  if ( !v22 )
                  {
                    *(_QWORD *)&dword_0 = *v27;
                    BUG();
                  }
                  v30 = *v27;
                  while ( 1 )
                  {
                    v31 = *(_QWORD *)(v30 + 8);
                    if ( !v31 )
                    {
LABEL_24:
                      v32 = -1916529075;
                      goto LABEL_25;
                    }
                    v30 = v31 & 0xFFFFFFFFFFFFFFF8LL;
                    if ( (v31 & 4) == 0 )
                      break;
                    if ( !v30 )
                      goto LABEL_24;
                  }
                  v76 = HIDWORD(v30);
                  v77 = 0x9DDFEA08EB382D69LL * (v76 ^ (((8 * v31) & 0x7FFFFFFC0LL) - 0xAE502812AA7333LL));
                  v32 = -348639895
                      * (((unsigned int)((0x9DDFEA08EB382D69LL * (v77 ^ v76 ^ (v77 >> 47))) >> 32) >> 15)
                       ^ (-348639895 * (v77 ^ v76 ^ (v77 >> 47))));
LABEL_25:
                  v80 = 1;
                  v78 = nullptr;
                  v33 = v28 & v32;
                  v34 = (unsigned __int64 *)v19 + (v28 & (unsigned int)v32);
                  v35 = *v34;
                  if ( *v34 != v29 )
                  {
                    while ( v35 != -4096 )
                    {
                      if ( v35 == -8192 )
                      {
                        if ( v78 )
                          v34 = v78;
                        v78 = v34;
                      }
                      else
                      {
                        v81 = *v27;
                        do
                        {
                          v36 = *(_QWORD *)(v81 + 8);
                          if ( !v36 )
                            break;
                          v81 = v36 & 0xFFFFFFFFFFFFFFF8LL;
                          if ( (v36 & 4) == 0 )
                            break;
                        }
                        while ( (v36 & 0xFFFFFFFFFFFFFFF8LL) != 0 );
                        v82 = v36 & 0xFFFFFFFFFFFFFFF8LL;
                        do
                        {
                          v37 = *(_QWORD *)(v35 + 8);
                          if ( !v37 )
                            break;
                          v35 = v37 & 0xFFFFFFFFFFFFFFF8LL;
                          if ( (v37 & 4) == 0 )
                            break;
                        }
                        while ( v35 );
                        if ( v82 == (v37 & 0xFFFFFFFFFFFFFFF8LL) )
                          goto LABEL_80;
                      }
                      v33 = v28 & (v80 + v33);
                      v34 = (unsigned __int64 *)v19 + v33;
                      v35 = *v34;
                      if ( *v34 == *v27 )
                        goto LABEL_80;
                      ++v80;
                    }
                    if ( v78 )
                      v34 = v78;
                  }
LABEL_80:
                  v57 = *v27;
                  ++*(_DWORD *)(a1 + 320);
                  *v34 = v57;
                }
                ++v27;
              }
              while ( v21 != v27 );
            }
            operator delete(v16, 8 * v14, 8);
          }
          else
          {
            v71 = *(unsigned int *)(a1 + 328);
            *(_QWORD *)(a1 + 320) = 0;
            v72 = 8 * v71;
            if ( v19 != (__m128i *)&v19->m128i_i8[v72] )
            {
              v73 = v19;
              v74 = ((unsigned __int64)(v72 - 8) >> 3) + 1;
              if ( v72 == 8 )
                goto LABEL_130;
              v75 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
              do
                *v73++ = v75;
              while ( v73 != &v19[v74 >> 1] );
              v19 = (__m128i *)((char *)v19 + 8 * (v74 & 0xFFFFFFFFFFFFFFFELL));
              if ( v74 != (v74 & 0xFFFFFFFFFFFFFFFELL) )
LABEL_130:
                v19->m128i_i64[0] = -4096;
            }
          }
LABEL_83:
          sub_FF2870(v15, v83, v84);
          v45 = v84[0];
          LODWORD(v58) = *(_DWORD *)(a1 + 320) + 1;
          goto LABEL_84;
        }
        if ( v46 == -8192 )
        {
LABEL_74:
          if ( !v45 )
            v45 = a5;
        }
      }
      else
      {
        if ( v46 == -4096 )
          goto LABEL_113;
        if ( v46 == -8192 )
          goto LABEL_74;
        v47 = v83[0];
        do
        {
          v48 = *(_QWORD *)(v47 + 8);
          if ( !v48 )
          {
            v47 = 0;
            break;
          }
          v47 = v48 & 0xFFFFFFFFFFFFFFF8LL;
        }
        while ( (v48 & 4) != 0 && v47 );
        while ( 1 )
        {
          v49 = *(_QWORD *)(v46 + 8);
          if ( !v49 )
            break;
          v46 = v49 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v49 & 4) == 0 || !v46 )
            goto LABEL_57;
        }
        v46 = 0;
LABEL_57:
        if ( v47 == v46 )
          return result;
      }
      result = (unsigned int)a6 & (v44 + (_DWORD)result);
      a5 = &v16[(unsigned int)result];
      v46 = *a5;
      if ( *a5 == v83[0] )
        return result;
      ++v44;
    }
  }
  v8 = *(unsigned int *)(a1 + 344);
  result = (unsigned __int64)sub_FEE0D0(*(unsigned __int64 **)(a1 + 336), *(_QWORD *)(a1 + 336) + 8 * v8, v83);
  if ( v13 != (unsigned __int64 *)result )
    return result;
  v50 = v8 + 1;
  v51 = v83[0];
  if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 348) )
  {
    sub_2237220(a1 + 336, a1 + 352, v50, 8);
    v50 = *(unsigned int *)(a1 + 344);
    v13 = (unsigned __int64 *)(*(_QWORD *)(a1 + 336) + 8 * v50);
  }
  *v13 = v51;
  result = (unsigned int)(*(_DWORD *)(a1 + 344) + 1);
  *(_DWORD *)(a1 + 344) = result;
  if ( (unsigned int)result <= 2 )
    return result;
  v52 = *(unsigned __int64 **)(a1 + 336);
  v53 = &v52[result];
  v79 = (__int64 *)(a1 + 312);
  do
  {
    v54 = *(_DWORD *)(a1 + 328);
    if ( !v54 )
    {
      v84[0] = nullptr;
LABEL_65:
      v54 *= 2;
      goto LABEL_66;
    }
    v50 = *v52;
    v61 = *v52;
    while ( 1 )
    {
      v62 = *(_QWORD *)(v61 + 8);
      if ( !v62 )
      {
LABEL_93:
        v64 = -1916529075;
        goto LABEL_94;
      }
      v63 = v62 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v62 & 4) == 0 )
        break;
      v61 = v62 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v63 )
        goto LABEL_93;
    }
    v68 = HIDWORD(v63);
    v69 = 0x9DDFEA08EB382D69LL * (v68 ^ (((8 * v62) & 0x7FFFFFFC0LL) - 0xAE502812AA7333LL));
    v64 = -348639895
        * (((unsigned int)((0x9DDFEA08EB382D69LL * (v69 ^ v68 ^ (v69 >> 47))) >> 32) >> 15)
         ^ (-348639895 * (v69 ^ v68 ^ (v69 >> 47))));
LABEL_94:
    v12 = *(_QWORD *)(a1 + 312);
    result = (v54 - 1) & v64;
    v11 = (__int64 *)(v12 + 8LL * (unsigned int)result);
    v10 = *v11;
    if ( *v11 == v50 )
      goto LABEL_70;
    v65 = 1;
    v55 = nullptr;
    while ( v50 != -4096 && v50 != -8192 )
    {
      if ( v10 == -4096 )
        goto LABEL_120;
      if ( v10 == -8192 )
        goto LABEL_133;
      v11 = (__int64 *)*v52;
      do
      {
        v66 = v11[1];
        if ( !v66 )
        {
          v11 = nullptr;
          break;
        }
        v11 = (__int64 *)(v66 & 0xFFFFFFFFFFFFFFF8LL);
      }
      while ( (v66 & 4) != 0 && v11 );
      while ( 1 )
      {
        v67 = *(_QWORD *)(v10 + 8);
        if ( !v67 )
          break;
        v10 = v67 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v67 & 4) == 0 || !v10 )
          goto LABEL_107;
      }
      v10 = 0;
LABEL_107:
      if ( (__int64 *)v10 == v11 )
        goto LABEL_70;
LABEL_108:
      result = (v54 - 1) & (v65 + (_DWORD)result);
      v11 = (__int64 *)(v12 + 8LL * (unsigned int)result);
      v10 = *v11;
      if ( v50 == *v11 )
        goto LABEL_70;
      ++v65;
    }
    if ( v10 != -4096 )
    {
      if ( v10 != -8192 )
        goto LABEL_108;
LABEL_133:
      if ( !v55 )
        v55 = (unsigned __int64 *)v11;
      goto LABEL_108;
    }
LABEL_120:
    if ( !v55 )
      v55 = (unsigned __int64 *)v11;
    v50 = (unsigned int)(*(_DWORD *)(a1 + 320) + 1);
    v10 = (unsigned int)(4 * v50);
    v84[0] = v55;
    if ( (unsigned int)v10 >= 3 * v54 )
      goto LABEL_65;
    v10 = v54 >> 3;
    if ( v54 - *(_DWORD *)(a1 + 324) - (unsigned int)v50 <= (unsigned int)v10 )
    {
LABEL_66:
      sub_FF6850((__int64)v79, v54, v50, v10, (__int64)v11, v12);
      sub_FF2870(v79, v52, v84);
      v55 = v84[0];
      v50 = (unsigned int)(*(_DWORD *)(a1 + 320) + 1);
    }
    v56 = *v55 == -4096;
    *(_DWORD *)(a1 + 320) = v50;
    if ( !v56 )
      --*(_DWORD *)(a1 + 324);
    result = *v52;
    *v55 = *v52;
LABEL_70:
    ++v52;
  }
  while ( v53 != v52 );
  return result;
}
