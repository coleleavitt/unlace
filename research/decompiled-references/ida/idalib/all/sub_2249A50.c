__int64 __fastcall sub_2249A50(__int64 a1, __int64 a2)
{
  pthread_mutex_t *v2; // r15
  int v4; // eax
  bool v5; // zf
  std::condition_variable *v6; // rbp
  __m128i *v7; // rax
  __m128i v8; // xmm0
  __int64 v9; // rsi
  __m128i v10; // xmm2
  void (__fastcall *v11)(_QWORD, _QWORD, _QWORD); // rcx
  void (__fastcall *v12)(_QWORD); // rdx
  void (__fastcall *v13)(_QWORD, _QWORD, _QWORD); // rax
  __m128i si128; // xmm0
  __int64 v15; // rdi
  __int64 v16; // r12
  unsigned __int32 v17; // edx
  __int64 v18; // rcx
  unsigned __int64 v19; // rsi
  unsigned int v20; // r9d
  __int64 *v21; // rax
  __int64 v22; // r8
  int *v23; // rdx
  int v24; // eax
  void (__fastcall *v25)(__int64, __int64, __int64); // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  unsigned int v29; // edi
  __int64 *v30; // rsi
  __int64 v31; // r9
  unsigned __int64 v32; // rdx
  __int64 result; // rax
  __int64 v34; // rax
  bool v35; // bp
  __int64 v36; // rax
  __m128i v37; // xmm0
  int v38; // esi
  int v39; // r9d
  __int64 v40; // r10
  __int32 v41; // r11d
  __int64 *v42; // r10
  int v43; // r8d
  __int64 v44; // rdx
  unsigned __int64 v45; // rax
  __int64 v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rdx
  _QWORD *v50; // r10
  __int64 v51; // r11
  __int64 v52; // r9
  _QWORD *k; // rdx
  __int64 v54; // rax
  __int64 v55; // rsi
  unsigned __int32 v56; // ecx
  _QWORD *v57; // rdx
  __int64 v58; // rdi
  int v59; // ecx
  int v60; // r11d
  int v61; // r11d
  unsigned int v62; // ecx
  __int32 v63; // r9d
  __int64 *v64; // rsi
  unsigned int v65; // eax
  _QWORD *v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rdx
  _QWORD *v69; // r10
  __int64 v70; // r9
  __int64 v71; // r8
  _QWORD *i; // rdx
  __int64 v73; // rax
  __int64 v74; // r11
  unsigned __int32 v75; // ecx
  _QWORD *v76; // rdx
  __int64 v77; // rsi
  int v78; // ecx
  int v79; // r11d
  unsigned int v80; // r11d
  unsigned __int32 v81; // ecx
  __int32 v82; // r9d
  __int64 v83; // rdx
  _QWORD *m; // rdx
  __int64 v85; // rdx
  _QWORD *j; // rdx
  int v87; // ebp
  _QWORD *v88; // r8
  int v89; // ebp
  _QWORD *v90; // rdi
  __m128i v92; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v93; // [rsp+30h] [rbp-A8h]
  __int64 v94; // [rsp+38h] [rbp-A0h]
  __int64 v95; // [rsp+40h] [rbp-98h]
  __int64 v96; // [rsp+48h] [rbp-90h]
  pthread_mutex_t *mutex; // [rsp+50h] [rbp-88h] BYREF
  char v98; // [rsp+58h] [rbp-80h]
  __m128i v99; // [rsp+60h] [rbp-78h] BYREF
  void (__fastcall *v100)(_QWORD, _QWORD, _QWORD); // [rsp+70h] [rbp-68h]
  void (__fastcall *v101)(_QWORD); // [rsp+78h] [rbp-60h]
  __m128 v102; // [rsp+80h] [rbp-58h] BYREF
  void (__fastcall *v103)(_QWORD, _QWORD, _QWORD); // [rsp+90h] [rbp-48h]
  void (__fastcall *v104)(_QWORD); // [rsp+98h] [rbp-40h]

  v2 = (pthread_mutex_t *)(a1 + 176);
  while ( 1 )
  {
    v100 = nullptr;
    mutex = v2;
    v98 = 0;
    if ( &_pthread_key_create )
    {
      v4 = pthread_mutex_lock(v2);
      if ( v4 )
LABEL_151:
        std::__throw_system_error(v4);
    }
    v5 = *(_BYTE *)(a1 + 344) == 0;
    v98 = 1;
    v6 = (std::condition_variable *)(a1 + 216);
    if ( v5 )
    {
      if ( *(_QWORD *)(a1 + 144) == *(_QWORD *)(a1 + 112) )
        goto LABEL_36;
      goto LABEL_6;
    }
    if ( *(_QWORD *)(a1 + 112) != *(_QWORD *)(a1 + 144) )
      goto LABEL_6;
    if ( a2 )
      break;
    while ( 1 )
    {
      std::condition_variable::wait(a1 + 216, &mutex);
      v34 = *(_QWORD *)(a1 + 144);
      if ( !*(_BYTE *)(a1 + 344) )
        break;
      if ( *(_QWORD *)(a1 + 112) != v34 )
        goto LABEL_6;
    }
    if ( *(_QWORD *)(a1 + 112) == v34 )
    {
LABEL_36:
      if ( !v98 )
        goto LABEL_37;
      goto LABEL_46;
    }
LABEL_6:
    v7 = *(__m128i **)(a1 + 112);
    ++*(_DWORD *)(a1 + 312);
    v8 = _mm_loadu_si128(v7);
    *v7 = _mm_load_si128((const __m128i *)&v102);
    v9 = (__int64)v104;
    v10 = _mm_load_si128(&v99);
    v102 = (__m128)v8;
    v11 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))v7[1].m128i_i64[0];
    v12 = (void (__fastcall *)(_QWORD))v7[1].m128i_i64[1];
    v7[1].m128i_i64[0] = 0;
    v7[1].m128i_i64[1] = v9;
    v13 = v100;
    si128 = _mm_load_si128((const __m128i *)&v102);
    v100 = v11;
    v102 = (__m128)v10;
    v99 = si128;
    v103 = v13;
    v104 = v101;
    v101 = v12;
    if ( v13 )
      v13(&v102, &v102, 3);
    v15 = *(_QWORD *)(a1 + 112);
    v16 = *(_QWORD *)(v15 + 32);
    if ( v16 )
    {
      v17 = *(_DWORD *)(a1 + 336);
      v18 = *(_QWORD *)(a1 + 320);
      if ( !v17 )
        goto LABEL_76;
      v92.m128i_i32[0] = ((unsigned int)v16 >> 9) ^ ((unsigned int)v16 >> 4);
      v19 = v17 - 1;
      v20 = v19 & v92.m128i_i32[0];
      v21 = (__int64 *)(v18 + 16LL * ((unsigned int)v19 & v92.m128i_i32[0]));
      v22 = *v21;
      if ( v16 == *v21 )
      {
LABEL_11:
        v23 = (int *)(v21 + 1);
        v24 = *((_DWORD *)v21 + 2) + 1;
LABEL_12:
        *v23 = v24;
        goto LABEL_13;
      }
      v41 = 1;
      v42 = nullptr;
      if ( v22 != -4096 )
      {
        while ( 1 )
        {
          if ( v22 == -8192 && !v42 )
            v42 = v21;
          v20 = v19 & (v41 + v20);
          v92.m128i_i32[2] = v41 + 1;
          v21 = (__int64 *)(v18 + 16LL * v20);
          v22 = *v21;
          if ( v16 == *v21 )
            goto LABEL_11;
          if ( v22 == -4096 )
            break;
          v41 = v92.m128i_i32[2];
        }
        if ( v42 )
          v21 = v42;
      }
      v43 = *(_DWORD *)(a1 + 328) + 1;
      if ( 4 * v43 < 3 * v17 )
      {
        if ( v17 - *(_DWORD *)(a1 + 332) - v43 > v17 >> 3 )
        {
          v44 = *v21;
LABEL_73:
          *(_DWORD *)(a1 + 328) = v43;
          if ( v44 != -4096 )
            --*(_DWORD *)(a1 + 332);
          goto LABEL_75;
        }
        LODWORD(v93) = v17;
        v92.m128i_i64[1] = v18;
        v65 = ((((((((v19 >> 1) | v19 | (((v19 >> 1) | v19) >> 2)) >> 4) | (v19 >> 1) | v19 | (((v19 >> 1) | v19) >> 2)) >> 8)
               | (((v19 >> 1) | v19 | (((v19 >> 1) | v19) >> 2)) >> 4)
               | (v19 >> 1)
               | v19
               | (((v19 >> 1) | v19) >> 2)) >> 16)
             | (((((v19 >> 1) | v19 | (((v19 >> 1) | v19) >> 2)) >> 4) | (v19 >> 1) | v19 | (((v19 >> 1) | v19) >> 2)) >> 8)
             | (((v19 >> 1) | v19 | (((v19 >> 1) | v19) >> 2)) >> 4)
             | (v19 >> 1)
             | v19
             | (((v19 >> 1) | v19) >> 2))
            + 1;
        if ( v65 < 0x40 )
          v65 = 64;
        *(_DWORD *)(a1 + 336) = v65;
        v66 = (_QWORD *)sub_22300B0(16LL * v65, 8);
        v67 = v92.m128i_i64[1];
        v68 = (unsigned int)v93;
        v69 = v66;
        *(_QWORD *)(a1 + 320) = v66;
        if ( v67 )
        {
          *(_QWORD *)(a1 + 328) = 0;
          v93 = 16 * v68;
          v70 = v67 + 16 * v68;
          v71 = *(unsigned int *)(a1 + 336);
          for ( i = &v66[2 * v71]; i != v66; v66 += 2 )
            *v66 = -4096;
          v96 = v67;
          v73 = v67;
          v92.m128i_i32[2] = v71 - 1;
          v95 = v16;
          do
          {
            v74 = *(_QWORD *)v73;
            if ( *(_QWORD *)v73 != -4096 && v74 != -8192 )
            {
              if ( !(_DWORD)v71 )
              {
                *(_QWORD *)&dword_0 = *(_QWORD *)v73;
                BUG();
              }
              v75 = v92.m128i_i32[2] & (((unsigned int)v74 >> 9) ^ ((unsigned int)v74 >> 4));
              v76 = &v69[2 * v75];
              v77 = *v76;
              if ( *v76 != v74 )
              {
                v89 = 1;
                v90 = nullptr;
                if ( v77 != -4096 )
                {
                  while ( 1 )
                  {
                    if ( v77 == -8192 && !v90 )
                      v90 = v76;
                    v75 = v92.m128i_i32[2] & (v89 + v75);
                    LODWORD(v94) = v89 + 1;
                    v76 = &v69[2 * v75];
                    v77 = *v76;
                    if ( v74 == *v76 )
                      break;
                    if ( v77 == -4096 )
                    {
                      if ( v90 )
                        v76 = v90;
                      break;
                    }
                    v89 = v94;
                  }
                }
              }
              v78 = *(_DWORD *)(v73 + 8);
              ++*(_DWORD *)(a1 + 328);
              *v76 = v74;
              *((_DWORD *)v76 + 2) = v78;
            }
            v73 += 16;
          }
          while ( v70 != v73 );
          v6 = (std::condition_variable *)(a1 + 216);
          v16 = v95;
          operator delete(v96, v93, 8);
          v69 = *(_QWORD **)(a1 + 320);
          v79 = *(_DWORD *)(a1 + 336);
          v43 = *(_DWORD *)(a1 + 328) + 1;
        }
        else
        {
          v85 = *(unsigned int *)(a1 + 336);
          *(_QWORD *)(a1 + 328) = 0;
          v79 = v85;
          for ( j = &v66[2 * v85]; j != v66; v66 += 2 )
            *v66 = -4096;
          v43 = 1;
        }
        if ( !v79 )
          goto LABEL_162;
        v80 = v79 - 1;
        v15 = *(_QWORD *)(a1 + 112);
        v81 = v80 & v92.m128i_i32[0];
        v21 = &v69[2 * (v80 & v92.m128i_i32[0])];
        v44 = *v21;
        if ( v16 == *v21 )
          goto LABEL_73;
        v82 = 1;
        v64 = nullptr;
        if ( v44 != -4096 )
        {
          while ( 1 )
          {
            if ( v44 == -8192 && !v64 )
              v64 = v21;
            v81 = v80 & (v82 + v81);
            v92.m128i_i32[0] = v82 + 1;
            v21 = &v69[2 * v81];
            v44 = *v21;
            if ( v16 == *v21 )
              goto LABEL_73;
            if ( v44 == -4096 )
              goto LABEL_116;
            v82 = v92.m128i_i32[0];
          }
        }
      }
      else
      {
LABEL_76:
        v92.m128i_i64[1] = v18;
        v92.m128i_i32[0] = v17;
        v45 = (((((((2 * v17 - 1) | ((unsigned __int64)(2 * v17 - 1) >> 1)) >> 2)
                | (2 * v17 - 1)
                | ((unsigned __int64)(2 * v17 - 1) >> 1)) >> 4)
              | (((2 * v17 - 1) | ((unsigned __int64)(2 * v17 - 1) >> 1)) >> 2)
              | (2 * v17 - 1)
              | ((unsigned __int64)(2 * v17 - 1) >> 1)) >> 8)
            | (((((2 * v17 - 1) | ((unsigned __int64)(2 * v17 - 1) >> 1)) >> 2)
              | (2 * v17 - 1)
              | ((unsigned __int64)(2 * v17 - 1) >> 1)) >> 4)
            | (((2 * v17 - 1) | ((unsigned __int64)(2 * v17 - 1) >> 1)) >> 2)
            | (2 * v17 - 1)
            | ((unsigned __int64)(2 * v17 - 1) >> 1);
        v46 = ((v45 >> 16) | v45) + 1;
        if ( (unsigned int)v46 < 0x40 )
          LODWORD(v46) = 64;
        *(_DWORD *)(a1 + 336) = v46;
        v47 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v46, 8);
        v48 = v92.m128i_i64[1];
        v49 = v92.m128i_u32[0];
        v50 = v47;
        *(_QWORD *)(a1 + 320) = v47;
        if ( v48 )
        {
          *(_QWORD *)(a1 + 328) = 0;
          v92.m128i_i64[1] = 16 * v49;
          v51 = v48 + 16 * v49;
          v52 = *(unsigned int *)(a1 + 336);
          for ( k = &v47[2 * v52]; k != v47; v47 += 2 )
            *v47 = -4096;
          v54 = v48;
          v92.m128i_i32[0] = v52 - 1;
          if ( v48 != v51 )
          {
            v95 = v48;
            v94 = v16;
            do
            {
              v55 = *(_QWORD *)v54;
              if ( *(_QWORD *)v54 != -4096 && v55 != -8192 )
              {
                if ( !(_DWORD)v52 )
                {
                  *(_QWORD *)&dword_0 = *(_QWORD *)v54;
                  BUG();
                }
                v56 = v92.m128i_i32[0] & (((unsigned int)v55 >> 9) ^ ((unsigned int)v55 >> 4));
                v57 = &v50[2 * v56];
                v58 = *v57;
                if ( *v57 != v55 )
                {
                  v87 = 1;
                  v88 = nullptr;
                  if ( v58 != -4096 )
                  {
                    while ( 1 )
                    {
                      if ( v58 == -8192 && !v88 )
                        v88 = v57;
                      v56 = v92.m128i_i32[0] & (v87 + v56);
                      LODWORD(v93) = v87 + 1;
                      v57 = &v50[2 * v56];
                      v58 = *v57;
                      if ( v55 == *v57 )
                        break;
                      if ( v58 == -4096 )
                      {
                        if ( v88 )
                          v57 = v88;
                        break;
                      }
                      v87 = v93;
                    }
                  }
                }
                v59 = *(_DWORD *)(v54 + 8);
                ++*(_DWORD *)(a1 + 328);
                *v57 = v55;
                *((_DWORD *)v57 + 2) = v59;
              }
              v54 += 16;
            }
            while ( v51 != v54 );
            v6 = (std::condition_variable *)(a1 + 216);
            v48 = v95;
            v16 = v94;
          }
          operator delete(v48, v92.m128i_i64[1], 8);
          v50 = *(_QWORD **)(a1 + 320);
          v60 = *(_DWORD *)(a1 + 336);
          v43 = *(_DWORD *)(a1 + 328) + 1;
        }
        else
        {
          v83 = *(unsigned int *)(a1 + 336);
          *(_QWORD *)(a1 + 328) = 0;
          v60 = v83;
          for ( m = &v47[2 * v83]; m != v47; v47 += 2 )
            *v47 = -4096;
          v43 = 1;
        }
        if ( !v60 )
        {
LABEL_162:
          ++*(_DWORD *)(a1 + 328);
          BUG();
        }
        v61 = v60 - 1;
        v15 = *(_QWORD *)(a1 + 112);
        v62 = v61 & (((unsigned int)v16 >> 9) ^ ((unsigned int)v16 >> 4));
        v21 = &v50[2 * v62];
        v44 = *v21;
        if ( v16 == *v21 )
          goto LABEL_73;
        v63 = 1;
        v64 = nullptr;
        if ( v44 != -4096 )
        {
          while ( 1 )
          {
            if ( !v64 && v44 == -8192 )
              v64 = v21;
            v62 = v61 & (v63 + v62);
            v92.m128i_i32[0] = v63 + 1;
            v21 = &v50[2 * v62];
            v44 = *v21;
            if ( v16 == *v21 )
              goto LABEL_73;
            if ( v44 == -4096 )
            {
LABEL_116:
              if ( !v64 )
                break;
              v44 = *v64;
              v21 = v64;
              goto LABEL_73;
            }
            v63 = v92.m128i_i32[0];
          }
        }
      }
      *(_DWORD *)(a1 + 328) = v43;
LABEL_75:
      *v21 = v16;
      v23 = (int *)(v21 + 1);
      *((_DWORD *)v21 + 2) = 0;
      v24 = 1;
      goto LABEL_12;
    }
LABEL_13:
    v25 = *(void (__fastcall **)(__int64, __int64, __int64))(v15 + 16);
    if ( v15 == *(_QWORD *)(a1 + 128) - 40LL )
    {
      if ( v25 )
        v25(v15, v15, 3);
      operator delete(*(void **)(a1 + 120));
      v36 = *(_QWORD *)(a1 + 136);
      v92.m128i_i64[0] = *(_QWORD *)(v36 + 8);
      v37 = _mm_loadl_epi64(&v92);
      *(__m128i *)(a1 + 112) = _mm_unpacklo_epi64(v37, v37);
      v92.m128i_i64[0] = v36 + 8;
      *(__m128 *)(a1 + 128) = _mm_loadh_ps((const double *)v92.m128i_i64);
    }
    else
    {
      if ( v25 )
        v25(v15, v15, 3);
      *(_QWORD *)(a1 + 112) += 40LL;
    }
    if ( v98 && mutex && &_pthread_key_create )
      pthread_mutex_unlock(mutex);
    if ( !v100 )
      std::__throw_bad_function_call();
    v101(&v99);
    if ( &_pthread_key_create )
    {
      v4 = pthread_mutex_lock(v2);
      if ( v4 )
        goto LABEL_151;
    }
    --*(_DWORD *)(a1 + 312);
    if ( v16 )
    {
      v26 = *(unsigned int *)(a1 + 336);
      v27 = a1 + 320;
      v28 = *(_QWORD *)(a1 + 320);
      if ( !(_DWORD)v26 )
        goto LABEL_68;
      v29 = (v26 - 1) & (((unsigned int)v16 >> 9) ^ ((unsigned int)v16 >> 4));
      v30 = (__int64 *)(v28 + 16LL * v29);
      v31 = *v30;
      if ( v16 == *v30 )
        goto LABEL_24;
      v38 = 1;
      if ( v31 == -4096 )
      {
LABEL_68:
        sub_22499E0(
          &v102,
          (_QWORD *)(v28 + 16LL * (unsigned int)v26),
          (_QWORD *)(v28 + 16LL * (unsigned int)v26),
          v27,
          1);
        v32 = v102.m128_u64[0];
      }
      else
      {
        while ( 1 )
        {
          v39 = v38 + 1;
          v29 = (v26 - 1) & (v38 + v29);
          v30 = (__int64 *)(v28 + 16LL * v29);
          v40 = *v30;
          if ( v16 == *v30 )
            break;
          v38 = v39;
          if ( v40 == -4096 )
            goto LABEL_68;
        }
LABEL_24:
        sub_22499E0(&v102, v30, (_QWORD *)(16 * v26 + v28), v27, 1);
        v32 = v102.m128_u64[0];
      }
      v5 = (*(_DWORD *)(v32 + 8))-- == 1;
      if ( v5 )
      {
        *(_QWORD *)v32 = -8192;
        --*(_DWORD *)(a1 + 328);
        ++*(_DWORD *)(a1 + 332);
      }
      if ( sub_2249650((const __m128i *)a1, v16) )
      {
        if ( &_pthread_key_create )
          pthread_mutex_unlock(v2);
        std::condition_variable::notify_all((std::condition_variable *)(a1 + 264));
        std::condition_variable::notify_all(v6);
      }
      else if ( &_pthread_key_create )
      {
        pthread_mutex_unlock(v2);
      }
      goto LABEL_31;
    }
    v35 = sub_2249650((const __m128i *)a1, 0);
    if ( &_pthread_key_create )
      pthread_mutex_unlock(v2);
    if ( v35 )
      std::condition_variable::notify_all((std::condition_variable *)(a1 + 264));
LABEL_31:
    if ( v100 )
      v100(&v99, &v99, 3);
  }
  while ( 1 )
  {
    if ( sub_2249650((const __m128i *)a1, a2) )
      goto LABEL_36;
    std::condition_variable::wait(a1 + 216, &mutex);
    if ( !*(_BYTE *)(a1 + 344) )
      break;
    if ( *(_QWORD *)(a1 + 144) != *(_QWORD *)(a1 + 112) )
      goto LABEL_6;
  }
  if ( *(_QWORD *)(a1 + 112) != *(_QWORD *)(a1 + 144) )
    goto LABEL_6;
  if ( !v98 )
    goto LABEL_37;
LABEL_46:
  if ( mutex && &_pthread_key_create )
    pthread_mutex_unlock(mutex);
LABEL_37:
  result = (__int64)v100;
  if ( v100 )
    return ((__int64 (__fastcall *)(__m128i *, __m128i *, __int64))v100)(&v99, &v99, 3);
  return result;
}
