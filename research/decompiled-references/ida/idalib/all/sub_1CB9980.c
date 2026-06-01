void __fastcall sub_1CB9980(__int64 a1, __int64 a2, void *a3, __int64 a4)
{
  void **v8; // rbx
  unsigned __int64 v9; // r8
  _QWORD *v10; // r9
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rcx
  int v13; // edi
  const void *v14; // rsi
  int v15; // eax
  unsigned int v16; // r15d
  __int64 v17; // rcx
  _QWORD *v18; // r13
  unsigned __int64 v19; // rdi
  unsigned int v20; // edx
  _QWORD *v21; // rsi
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rax
  __m128i *v25; // rsi
  __m128i *v26; // rdx
  char *v27; // rsi
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rdx
  __int64 v32; // r15
  _QWORD *v33; // r9
  __int64 v34; // r10
  _QWORD *v35; // rsi
  _QWORD *v36; // rdx
  int i; // r14d
  __int64 v38; // rsi
  unsigned int v39; // r8d
  __int64 v40; // rdi
  __int64 v41; // r11
  int v42; // esi
  int v43; // esi
  int v44; // eax
  int v45; // r8d
  unsigned int v46; // edi
  __int64 v47; // rdx
  unsigned int v48; // eax
  _QWORD *v49; // rdx
  int v50; // r8d
  _QWORD *v51; // r10
  __int64 v52; // r8
  unsigned __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  _QWORD *v56; // rdx
  __int64 v57; // r11
  _QWORD *v58; // rsi
  _QWORD *v59; // rdx
  int v60; // r15d
  __int64 v61; // rsi
  unsigned int v62; // r10d
  __int64 v63; // rdi
  __int64 v64; // r8
  int v65; // esi
  int v66; // esi
  int v67; // edi
  unsigned int v68; // r14d
  unsigned __int64 v69; // r14
  __int64 v70; // rsi
  _QWORD *v71; // rax
  unsigned __int64 v72; // rcx
  __int64 *v73; // rbx
  __int64 *v74; // rax
  unsigned __int64 v75; // r8
  unsigned __int64 v76; // rax
  unsigned __int64 v77; // rdx
  __m128i v78; // xmm1
  __m128i v79; // xmm0
  unsigned __int64 v80; // rdx
  _QWORD *v81; // rax
  _QWORD *v82; // rdx
  __int64 v83; // rcx
  __int64 *v84; // r15
  void **v85; // r13
  __int32 v86; // r15d
  __int64 v87; // r13
  _QWORD *v88; // rdx
  __int64 v89; // r13
  _QWORD *v90; // rdx
  unsigned __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rcx
  _QWORD *v94; // r9
  int v95; // r10d
  _QWORD *v96; // r8
  int v97; // r9d
  unsigned __int64 v98; // [rsp+0h] [rbp-78h]
  _QWORD *v99; // [rsp+0h] [rbp-78h]
  unsigned __int64 v100; // [rsp+0h] [rbp-78h]
  __int64 v101; // [rsp+0h] [rbp-78h]
  __int64 v102; // [rsp+0h] [rbp-78h]
  _QWORD *v103; // [rsp+8h] [rbp-70h]
  _QWORD *v104; // [rsp+8h] [rbp-70h]
  int v105; // [rsp+8h] [rbp-70h]
  __int64 v106; // [rsp+8h] [rbp-70h]
  int v107; // [rsp+10h] [rbp-68h]
  int v108; // [rsp+10h] [rbp-68h]
  int v109; // [rsp+10h] [rbp-68h]
  __m128i v110; // [rsp+20h] [rbp-58h] BYREF
  __int64 v111; // [rsp+30h] [rbp-48h]

  if ( a2 )
  {
    v8 = (void **)operator new(0x80u);
    v10 = v8 + 2;
    memset(v8, 0, 0x80u);
    *v8 = v8 + 2;
    v8[1] = (void *)0x400000000LL;
    *((_DWORD *)v8 + 30) = 248;
    if ( (void **)a4 != v8 )
    {
      v11 = *(unsigned int *)(a4 + 8);
      v9 = 0;
      v12 = 0;
      if ( v11 <= 4 )
        goto LABEL_4;
      sub_2237220(v8, v8 + 2, *(unsigned int *)(a4 + 8), 24);
      v9 = *((unsigned int *)v8 + 2);
      v10 = v8 + 2;
      v23 = *((_DWORD *)v8 + 2);
      if ( *(_DWORD *)(a4 + 12) < (unsigned int)v9 )
      {
        sub_2237220(a4, a4 + 16, *((unsigned int *)v8 + 2), 24);
        v9 = *((unsigned int *)v8 + 2);
        v10 = v8 + 2;
        v23 = *((_DWORD *)v8 + 2);
      }
      v11 = *(unsigned int *)(a4 + 8);
      v12 = v9;
      if ( v11 <= v9 )
        v12 = *(unsigned int *)(a4 + 8);
      if ( v12 )
      {
        v24 = 0;
        do
        {
          v25 = (__m128i *)((char *)*v8 + v24);
          v26 = (__m128i *)(v24 + *(_QWORD *)a4);
          v24 += 24;
          v110 = _mm_loadu_si128(v25);
          v111 = v25[1].m128i_i64[0];
          *v25 = _mm_loadu_si128(v26);
          v25[1].m128i_i32[0] = v26[1].m128i_i32[0];
          *v26 = _mm_load_si128(&v110);
          v26[1].m128i_i32[0] = v111;
        }
        while ( 24 * v12 != v24 );
        v9 = *((unsigned int *)v8 + 2);
        v11 = *(unsigned int *)(a4 + 8);
        v23 = *((_DWORD *)v8 + 2);
      }
      if ( v9 <= v11 )
      {
LABEL_4:
        if ( v9 < v11 )
        {
          v13 = v9;
          v14 = (const void *)(*(_QWORD *)a4 + 24 * v12);
          if ( v14 != (const void *)(24 * v11 + *(_QWORD *)a4) )
          {
            v107 = v12;
            v103 = v10;
            v98 = v9;
            memcpy((char *)*v8 + 24 * v9, v14, 24 * v11 - 24 * v12);
            v13 = *((_DWORD *)v8 + 2);
            LODWORD(v12) = v107;
            v10 = v103;
            v9 = v98;
          }
          *(_DWORD *)(a4 + 8) = v12;
          *((_DWORD *)v8 + 2) = v13 + v11 - v9;
        }
      }
      else
      {
        v100 = v9;
        v27 = (char *)*v8 + 24 * v12;
        if ( v27 != (char *)*v8 + 24 * v9 )
        {
          v108 = v12;
          v104 = v10;
          memcpy((void *)(*(_QWORD *)a4 + 24 * v11), v27, 24 * v9 - 24 * v12);
          v9 = v100;
          LODWORD(v12) = v108;
          v10 = v104;
          v23 = v100 + *(_DWORD *)(a4 + 8) - v11;
        }
        *(_DWORD *)(a4 + 8) = v23;
        *((_DWORD *)v8 + 2) = v12;
      }
    }
    v15 = *(_DWORD *)(a1 + 224);
    v16 = *(_DWORD *)(a1 + 11224);
    v8[14] = a3;
    v17 = a1 + 11208;
    v18 = *(_QWORD **)(a1 + 11208);
    *((_DWORD *)v8 + 30) = v15;
    if ( !v16 )
      goto LABEL_27;
    v19 = v16 - 1;
    v20 = v19 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v21 = &v18[2 * v20];
    v22 = *v21;
    if ( a2 == *v21 )
    {
LABEL_10:
      v99 = v10;
      sub_13BE860((__m128 *)&v110, v21, &v18[2 * v16], v17, 1);
      if ( v99 != *v8 )
        free(*v8);
      operator delete(v8, 0x80u);
LABEL_13:
      *(_BYTE *)(a2 + 83) |= 0x40u;
      return;
    }
    v50 = 1;
    v51 = nullptr;
    if ( v22 != -4096 )
    {
      while ( 1 )
      {
        if ( v22 == -8192 && !v51 )
          v51 = v21;
        v20 = v19 & (v50 + v20);
        v21 = &v18[2 * v20];
        v22 = *v21;
        if ( a2 == *v21 )
          goto LABEL_10;
        if ( v22 == -4096 )
          break;
        ++v50;
      }
      if ( v51 )
        v21 = v51;
    }
    v44 = *(_DWORD *)(a1 + 11216) + 1;
    v9 = (unsigned int)(4 * v44);
    if ( (unsigned int)v9 < 3 * v16 )
    {
      v52 = v16 >> 3;
      if ( v16 - *(_DWORD *)(a1 + 11220) - v44 > (unsigned int)v52 )
      {
LABEL_49:
        v47 = *v21;
        goto LABEL_42;
      }
      v53 = (v19 >> 1) | v19 | (((v19 >> 1) | v19) >> 2);
      v54 = ((((((v53 >> 4) | v53) >> 8) | (v53 >> 4) | v53) >> 16) | (((v53 >> 4) | v53) >> 8) | (v53 >> 4) | v53) + 1;
      if ( (unsigned int)v54 < 0x40 )
        LODWORD(v54) = 64;
      *(_DWORD *)(a1 + 11224) = v54;
      v55 = sub_22300B0(16LL * (unsigned int)v54, 8, 64, v17, v52, v10);
      v17 = a1 + 11208;
      *(_QWORD *)(a1 + 11208) = v55;
      if ( v18 )
      {
        v56 = (_QWORD *)v55;
        *(_QWORD *)(a1 + 11216) = 0;
        v101 = 2LL * v16;
        v57 = *(unsigned int *)(a1 + 11224);
        v58 = (_QWORD *)(v55 + 16 * v57);
        if ( (_QWORD *)v55 != v58 )
        {
          do
          {
            *v56 = -4096;
            v56 += 2;
          }
          while ( v58 != v56 );
        }
        v59 = v18;
        v60 = v57 - 1;
        do
        {
          v61 = *v59;
          if ( *v59 != -8192 && v61 != -4096 )
          {
            if ( !(_DWORD)v57 )
            {
              *(_QWORD *)&dword_0 = *v59;
              BUG();
            }
            v62 = v60 & (((unsigned int)v61 >> 9) ^ ((unsigned int)v61 >> 4));
            v63 = v55 + 16LL * v62;
            v64 = *(_QWORD *)v63;
            if ( *(_QWORD *)v63 != v61 && v64 != -4096 )
            {
              v109 = 1;
              v106 = 0;
              while ( 1 )
              {
                if ( v64 == -8192 )
                {
                  if ( v106 )
                    v63 = v106;
                  v106 = v63;
                }
                v62 = v60 & (v109 + v62);
                v63 = v55 + 16LL * v62;
                v64 = *(_QWORD *)v63;
                if ( v61 == *(_QWORD *)v63 )
                  break;
                if ( v64 == -4096 )
                {
                  if ( v106 )
                    v63 = v106;
                  break;
                }
                ++v109;
              }
            }
            *(_QWORD *)v63 = v61;
            v65 = *((_DWORD *)v59 + 2);
            ++*(_DWORD *)(a1 + 11216);
            *(_DWORD *)(v63 + 8) = v65;
          }
          v59 += 2;
        }
        while ( &v18[v101] != v59 );
        operator delete(v18, v101 * 8, 8);
        v66 = *(_DWORD *)(a1 + 11224);
        v18 = *(_QWORD **)(a1 + 11208);
        v17 = a1 + 11208;
        v44 = *(_DWORD *)(a1 + 11216) + 1;
      }
      else
      {
        v89 = *(unsigned int *)(a1 + 11224);
        *(_QWORD *)(a1 + 11216) = 0;
        v66 = v89;
        v18 = (_QWORD *)(v55 + 16 * v89);
        if ( (_QWORD *)v55 != v18 )
        {
          v90 = (_QWORD *)v55;
          do
          {
            *v90 = -4096;
            v90 += 2;
          }
          while ( v18 != v90 );
          v18 = (_QWORD *)v55;
        }
        v44 = 1;
      }
      if ( v66 )
      {
        v67 = v66 - 1;
        v68 = (v66 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
        v21 = &v18[2 * v68];
        v47 = *v21;
        if ( a2 == *v21 )
        {
LABEL_42:
          *(_DWORD *)(a1 + 11216) = v44;
          if ( v47 != -4096 )
            --*(_DWORD *)(a1 + 11220);
          goto LABEL_44;
        }
        if ( v47 != -4096 )
        {
          v96 = &v18[2 * v68];
          v97 = 1;
          v21 = nullptr;
          while ( 1 )
          {
            if ( v47 == -8192 && !v21 )
              v21 = v96;
            v68 = v67 & (v97 + v68);
            v96 = &v18[2 * v68];
            v47 = *v96;
            if ( a2 == *v96 )
            {
              v21 = &v18[2 * v68];
              goto LABEL_42;
            }
            if ( v47 == -4096 )
              break;
            ++v97;
          }
          if ( v21 )
            goto LABEL_49;
          v21 = &v18[2 * v68];
        }
LABEL_66:
        *(_DWORD *)(a1 + 11216) = v44;
LABEL_44:
        *v21 = a2;
        *((_DWORD *)v21 + 2) = 0;
        sub_13BE860((__m128 *)&v110, v21, &v18[2 * *(unsigned int *)(a1 + 11224)], v17, 1);
        v48 = *(_DWORD *)(a1 + 11240);
        *(_DWORD *)(v110.m128i_i64[0] + 8) = v48;
        if ( *(_DWORD *)(a1 + 11244) <= v48 )
        {
          v69 = sub_2237400(a1 + 11232, a1 + 11248, 0, 16, &v110);
          v70 = 16LL * *(unsigned int *)(a1 + 11240);
          v71 = (_QWORD *)(v69 + v70);
          v71[1] = v8;
          *v71 = a2;
          v72 = *(_QWORD *)(a1 + 11232);
          v73 = (__int64 *)(v72 + v70);
          if ( v72 != v72 + v70 )
          {
            v74 = *(__int64 **)(a1 + 11232);
            if ( (v72 >= v69 + 32 || v69 >= v72 + 32) && (unsigned __int64)(v70 - 16) > 0x20 )
            {
              v75 = ((unsigned __int64)(v70 - 16) >> 4) + 1;
              v76 = v72 + 8;
              v77 = v69;
              do
              {
                v78 = _mm_loadu_si128((const __m128i *)(v76 - 8));
                v79 = _mm_loadu_si128((const __m128i *)(v76 + 8));
                v77 += 32LL;
                v76 += 32LL;
                *(_QWORD *)(v76 - 32) = 0;
                *(_QWORD *)(v76 - 16) = 0;
                *(__m128i *)(v77 - 32) = v78;
                *(__m128i *)(v77 - 16) = v79;
              }
              while ( v69 + 32 * (v75 >> 1) != v77 );
              v80 = 16 * (v75 & 0xFFFFFFFFFFFFFFFELL);
              v81 = (_QWORD *)(v72 + v80);
              v82 = (_QWORD *)(v69 + v80);
              if ( (v75 & 0xFFFFFFFFFFFFFFFELL) != v75 )
              {
                *v82 = *v81;
                v83 = v81[1];
                v81[1] = 0;
                v82[1] = v83;
              }
            }
            else
            {
              v91 = v69;
              do
              {
                v92 = *v74;
                v74 += 2;
                v91 += 16LL;
                *(_QWORD *)(v91 - 16) = v92;
                v93 = *(v74 - 1);
                *(v74 - 1) = 0;
                *(_QWORD *)(v91 - 8) = v93;
              }
              while ( v73 != v74 );
            }
            v84 = *(__int64 **)(a1 + 11232);
            v73 = &v84[(unsigned __int64)v70 / 8];
            if ( v84 != &v84[(unsigned __int64)v70 / 8] )
            {
              do
              {
                v73 -= 2;
                v85 = (void **)v73[1];
                if ( v85 )
                {
                  if ( *v85 != v85 + 2 )
                    free(*v85);
                  operator delete(v85, 0x80u);
                }
              }
              while ( v84 != v73 );
              v73 = *(__int64 **)(a1 + 11232);
            }
          }
          v86 = v110.m128i_i32[0];
          if ( v73 != (__int64 *)(a1 + 11248) )
            free(v73);
          *(_QWORD *)(a1 + 11232) = v69;
          *(_DWORD *)(a1 + 11244) = v86;
          ++*(_DWORD *)(a1 + 11240);
        }
        else
        {
          v49 = (_QWORD *)(*(_QWORD *)(a1 + 11232) + 16LL * v48);
          *v49 = a2;
          v49[1] = v8;
          *(_DWORD *)(a1 + 11240) = v48 + 1;
        }
        goto LABEL_13;
      }
    }
    else
    {
LABEL_27:
      v28 = (((((((2 * v16 - 1) | ((unsigned __int64)(2 * v16 - 1) >> 1)) >> 2)
              | (2 * v16 - 1)
              | ((unsigned __int64)(2 * v16 - 1) >> 1)) >> 4)
            | (((2 * v16 - 1) | ((unsigned __int64)(2 * v16 - 1) >> 1)) >> 2)
            | (2 * v16 - 1)
            | ((unsigned __int64)(2 * v16 - 1) >> 1)) >> 8)
          | (((((2 * v16 - 1) | ((unsigned __int64)(2 * v16 - 1) >> 1)) >> 2)
            | (2 * v16 - 1)
            | ((unsigned __int64)(2 * v16 - 1) >> 1)) >> 4)
          | (((2 * v16 - 1) | ((unsigned __int64)(2 * v16 - 1) >> 1)) >> 2)
          | (2 * v16 - 1)
          | ((unsigned __int64)(2 * v16 - 1) >> 1);
      v29 = ((v28 >> 16) | v28) + 1;
      if ( (unsigned int)v29 < 0x40 )
        LODWORD(v29) = 64;
      *(_DWORD *)(a1 + 11224) = v29;
      v30 = sub_22300B0(16LL * (unsigned int)v29, 8, 64, v17, v9, v10);
      v17 = a1 + 11208;
      *(_QWORD *)(a1 + 11208) = v30;
      if ( v18 )
      {
        v31 = (_QWORD *)v30;
        *(_QWORD *)(a1 + 11216) = 0;
        v32 = 2LL * v16;
        v33 = &v18[v32];
        v34 = *(unsigned int *)(a1 + 11224);
        v35 = (_QWORD *)(v30 + 16 * v34);
        if ( (_QWORD *)v30 != v35 )
        {
          do
          {
            *v31 = -4096;
            v31 += 2;
          }
          while ( v35 != v31 );
        }
        v36 = v18;
        for ( i = v34 - 1; v33 != v36; v36 += 2 )
        {
          v38 = *v36;
          if ( *v36 != -8192 && v38 != -4096 )
          {
            if ( !(_DWORD)v34 )
            {
              *(_QWORD *)&dword_0 = *v36;
              BUG();
            }
            v39 = i & (((unsigned int)v38 >> 9) ^ ((unsigned int)v38 >> 4));
            v40 = v30 + 16LL * v39;
            v41 = *(_QWORD *)v40;
            if ( *(_QWORD *)v40 != v38 && v41 != -4096 )
            {
              v105 = 1;
              v102 = 0;
              while ( 1 )
              {
                if ( !v102 )
                {
                  if ( v41 != -8192 )
                    v40 = 0;
                  v102 = v40;
                }
                v39 = i & (v105 + v39);
                v40 = v30 + 16LL * v39;
                v41 = *(_QWORD *)v40;
                if ( v38 == *(_QWORD *)v40 )
                  break;
                if ( v41 == -4096 )
                {
                  if ( v102 )
                    v40 = v102;
                  break;
                }
                ++v105;
              }
            }
            *(_QWORD *)v40 = v38;
            v42 = *((_DWORD *)v36 + 2);
            ++*(_DWORD *)(a1 + 11216);
            *(_DWORD *)(v40 + 8) = v42;
          }
        }
        operator delete(v18, v32 * 8, 8);
        v18 = *(_QWORD **)(a1 + 11208);
        v43 = *(_DWORD *)(a1 + 11224);
        v17 = a1 + 11208;
        v44 = *(_DWORD *)(a1 + 11216) + 1;
      }
      else
      {
        v87 = *(unsigned int *)(a1 + 11224);
        *(_QWORD *)(a1 + 11216) = 0;
        v43 = v87;
        v18 = (_QWORD *)(v30 + 16 * v87);
        if ( (_QWORD *)v30 != v18 )
        {
          v88 = (_QWORD *)v30;
          do
          {
            *v88 = -4096;
            v88 += 2;
          }
          while ( v18 != v88 );
          v18 = (_QWORD *)v30;
        }
        v44 = 1;
      }
      if ( v43 )
      {
        v45 = v43 - 1;
        v46 = (v43 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
        v21 = &v18[2 * v46];
        v47 = *v21;
        if ( a2 == *v21 )
          goto LABEL_42;
        if ( v47 != -4096 )
        {
          v94 = &v18[2 * (v45 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4)))];
          v95 = 1;
          v21 = nullptr;
          while ( 1 )
          {
            if ( !v21 && v47 == -8192 )
              v21 = v94;
            v46 = v45 & (v95 + v46);
            v94 = &v18[2 * v46];
            v47 = *v94;
            if ( a2 == *v94 )
            {
              v21 = &v18[2 * v46];
              goto LABEL_42;
            }
            if ( v47 == -4096 )
              break;
            ++v95;
          }
          if ( v21 )
            goto LABEL_49;
          v21 = &v18[2 * v46];
        }
        goto LABEL_66;
      }
    }
    ++*(_DWORD *)(a1 + 11216);
    BUG();
  }
}
