__int64 *__fastcall sub_69AF80(__int64 *a1, __int64 a2, __int64 a3, double a4, __m128 a5, double a6, __m128 a7)
{
  __int64 v7; // r12
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // r14
  __int64 v14; // r13
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // rdi
  __m128 v19; // xmm0
  unsigned __int64 v20; // xmm1_8
  void (__fastcall *v21)(__int64, void **); // rdx
  volatile signed __int32 *v22; // r14
  volatile signed __int32 *v23; // rdx
  signed __int32 v24; // eax
  __int64 v25; // r14
  _QWORD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rdi
  unsigned __int64 v29; // r15
  __int64 v30; // rax
  __m128i v31; // xmm0
  __int64 v32; // r14
  int v33; // eax
  unsigned int v34; // eax
  _QWORD *v35; // rbp
  _QWORD *v36; // rdi
  __int64 v37; // rbp
  __int64 v38; // rax
  __int64 v39; // r14
  __int64 *v40; // rax
  __m128 v41; // xmm4
  __m128i v42; // xmm0
  __int64 *v43; // rbp
  __m128 v44; // xmm0
  unsigned __int64 v45; // xmm3_8
  __m128 v46; // xmm0
  unsigned __int64 v47; // xmm4_8
  _QWORD *v48; // rbx
  __int64 v49; // rax
  __int64 v50; // rax
  volatile signed __int32 *v51; // rbp
  volatile signed __int32 *v52; // rdx
  signed __int32 v53; // eax
  volatile signed __int32 *v54; // rbp
  volatile signed __int32 *v55; // rdx
  signed __int32 v56; // eax
  __int64 v57; // rax
  __int64 v58; // rbp
  __int64 *v59; // r12
  __int64 *v60; // rbx
  __int64 v61; // rdi
  __int64 *result; // rax
  __m128i si128; // xmm0
  void *v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rdi
  __int64 v68; // rax
  unsigned __int64 v69; // rdi
  __int64 v70; // rax
  void *v71; // rdi
  _QWORD *v72; // r14
  _QWORD *v73; // rbp
  _QWORD *v74; // r15
  int *v75; // r13
  _QWORD *v76; // r12
  int *v77; // rsi
  char v78; // al
  unsigned __int8 (__fastcall *v79)(_QWORD *, char *); // rcx
  __int64 *v80; // rbx
  __int64 *v81; // r14
  __int64 *v82; // rax
  __int64 *v83; // rcx
  __int64 *v84; // r9
  __int64 v85; // rax
  __int64 v86; // r14
  __int64 v87; // rax
  char *v88; // r14
  __int64 v89; // rbx
  __int64 v90; // rdx
  __int64 v91; // rdi
  __int64 v92; // rdi
  int *v93; // rax
  __int64 *v94; // rsi
  __int64 v95; // r14
  int *v96; // rbx
  int *v97; // r13
  _QWORD *v98; // rcx
  _QWORD *v99; // rax
  __int64 v100; // r14
  __int64 v101; // rax
  __int64 v102; // rsi
  bool v103; // cf
  unsigned __int64 v104; // rax
  unsigned __int64 v105; // r14
  _QWORD *v106; // rax
  char *v107; // rcx
  char *v108; // r9
  _QWORD *v109; // rbx
  _QWORD *v110; // r13
  _QWORD *v111; // rsi
  char *v112; // rax
  __int64 v113; // rdx
  __m128i v114; // [rsp+0h] [rbp-E8h] BYREF
  __int64 *v115; // [rsp+10h] [rbp-D8h]
  _QWORD *v116; // [rsp+18h] [rbp-D0h]
  __int64 v117; // [rsp+20h] [rbp-C8h]
  __int64 v118; // [rsp+28h] [rbp-C0h]
  void *v119; // [rsp+30h] [rbp-B8h]
  char *v120; // [rsp+38h] [rbp-B0h]
  __int64 v121; // [rsp+40h] [rbp-A8h] BYREF
  int *v122; // [rsp+48h] [rbp-A0h] BYREF
  _QWORD *v123; // [rsp+50h] [rbp-98h] BYREF
  _QWORD *v124; // [rsp+58h] [rbp-90h] BYREF
  __m128 v125; // [rsp+60h] [rbp-88h] BYREF
  _OWORD v126[2]; // [rsp+70h] [rbp-78h] BYREF
  void *v127[2]; // [rsp+90h] [rbp-58h] BYREF
  __m128i v128; // [rsp+A0h] [rbp-48h]

  v7 = a3;
  v8 = a2;
  v9 = *(_QWORD *)(a3 + 16);
  v115 = a1;
  v10 = *(_QWORD *)(v9 + 56);
  v11 = *(_QWORD *)(v10 + 120);
  if ( !v11 )
    goto LABEL_2;
  sub_C7CB00((unsigned int)v126, *(_QWORD *)(a3 + 56), *(_QWORD *)(v10 + 112), v11, 0, 1, 1);
  if ( (BYTE8(v126[0]) & 1) == 0 )
  {
    LOBYTE(v127[1]) = 1;
    v127[0] = *(void **)&v126[0];
    si128 = _mm_load_si128((const __m128i *)v127);
    v126[1] = si128;
    if ( si128.m128i_i64[0] )
      sub_67C4E0(*(_QWORD *)(a2 + 104), si128.m128i_i64[0]);
    goto LABEL_2;
  }
  v72 = *(_QWORD **)&v126[0];
  *(_QWORD *)&v126[0] = 0;
  if ( !v72 )
    goto LABEL_2;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, char *))(*v72 + 48LL))(v72, &byte_4AE4FBB) )
  {
    v73 = (_QWORD *)v72[1];
    v74 = (_QWORD *)v72[2];
    if ( v73 == v74 )
      goto LABEL_92;
    v116 = v72;
    v75 = nullptr;
    v114.m128i_i64[0] = (__int64)&v122;
    v117 = a2;
    v118 = v7;
    while ( 1 )
    {
      v76 = (_QWORD *)*v73;
      *v73 = 0;
      v77 = &dword_4AE4FBC;
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, int *))(*v76 + 48LL))(v76, &dword_4AE4FBC) )
      {
        if ( !v75 )
          goto LABEL_106;
        v78 = (*(__int64 (__fastcall **)(int *, char *))(*(_QWORD *)v75 + 48LL))(v75, &byte_4AE4FBB);
        v79 = *(unsigned __int8 (__fastcall **)(_QWORD *, char *))(*v76 + 48LL);
        if ( !v78 )
        {
          if ( !v79(v76, &byte_4AE4FBB) )
          {
            v93 = (int *)operator new(0x20u);
            v94 = (__int64 *)v114.m128i_i64[0];
            v122 = v75;
            *((_QWORD *)v93 + 1) = 0;
            v95 = (__int64)(v93 + 2);
            v96 = v93;
            *((_QWORD *)v93 + 2) = 0;
            *(_QWORD *)v93 = &off_49D93B0;
            *((_QWORD *)v93 + 3) = 0;
            sub_6255A0((__int64)(v93 + 2), v94);
            v97 = v122;
            v98 = *((_QWORD **)v96 + 2);
            if ( *((_QWORD **)v96 + 3) == v98 )
            {
              v123 = v76;
              sub_6255A0(v95, (__int64 *)&v123);
              v100 = (__int64)v123;
              if ( v97 )
                (*(void (__fastcall **)(int *))(*(_QWORD *)v97 + 8LL))(v97);
              if ( v100 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v100 + 8LL))(v100);
            }
            else
            {
              *v98 = v76;
              *((_QWORD *)v96 + 2) += 8LL;
              if ( v97 )
                (*(void (__fastcall **)(int *))(*(_QWORD *)v97 + 8LL))(v97);
            }
            v75 = v96;
            goto LABEL_90;
          }
          v83 = (__int64 *)v76[1];
          v84 = (__int64 *)v76[2];
          if ( v84 == (__int64 *)v76[3] )
          {
            v101 = v84 - v83;
            if ( v101 == 0xFFFFFFFFFFFFFFFLL )
              std::__throw_length_error("vector::_M_realloc_insert");
            v102 = 1;
            if ( v101 )
              v102 = v84 - v83;
            v103 = __CFADD__(v102, v101);
            v104 = v102 + v101;
            if ( v103 )
            {
              v105 = 0xFFFFFFFFFFFFFFFLL;
            }
            else
            {
              if ( v104 > 0xFFFFFFFFFFFFFFFLL )
                v104 = 0xFFFFFFFFFFFFFFFLL;
              v105 = v104;
            }
            v120 = (char *)v76[2];
            v119 = v83;
            v106 = (_QWORD *)operator new(v105 * 8);
            v107 = (char *)v119;
            v108 = v120;
            *v106 = v75;
            v109 = v106;
            v110 = v106 + 1;
            if ( v107 != v108 )
            {
              v111 = v106 + 1;
              v112 = v107;
              do
              {
                v113 = *(_QWORD *)v112;
                v112 += 8;
                *v111++ = v113;
                *((_QWORD *)v112 - 1) = 0;
              }
              while ( v108 != v112 );
              v110 = (_QWORD *)((char *)v110 + v108 - v107);
            }
            if ( v107 )
              operator delete(v107, v76[3] - (_QWORD)v107);
            v76[1] = v109;
            v76[2] = v110;
            v76[3] = &v109[v105];
          }
          else if ( v83 == v84 )
          {
            *v83 = (__int64)v75;
            v76[2] += 8LL;
          }
          else
          {
            v85 = *(v84 - 1);
            *(v84 - 1) = 0;
            *v84 = v85;
            v86 = v76[2];
            v87 = v86 + 8;
            v88 = (char *)(v86 - 8);
            v76[2] = v87;
            v89 = (v88 - (char *)v83) >> 3;
            if ( v88 - (char *)v83 > 0 )
            {
              v119 = v83;
              do
              {
                v90 = *((_QWORD *)v88 - 1);
                v91 = *(_QWORD *)v88;
                v88 -= 8;
                *(_QWORD *)v88 = 0;
                *((_QWORD *)v88 + 1) = v90;
                if ( v91 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v91 + 8LL))(v91);
                --v89;
              }
              while ( v89 );
              v83 = (__int64 *)v119;
            }
            v92 = *v83;
            *v83 = (__int64)v75;
            if ( v92 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v92 + 8LL))(v92);
          }
LABEL_106:
          v75 = (int *)v76;
          goto LABEL_90;
        }
        if ( !v79(v76, &byte_4AE4FBB) )
        {
          v99 = *((_QWORD **)v75 + 2);
          if ( v99 == *((_QWORD **)v75 + 3) )
          {
            v124 = v76;
            sub_6255A0((__int64)(v75 + 2), (__int64 *)&v124);
            if ( v124 )
              (*(void (__fastcall **)(_QWORD *))(*v124 + 8LL))(v124);
          }
          else
          {
            *v99 = v76;
            *((_QWORD *)v75 + 2) += 8LL;
          }
          goto LABEL_90;
        }
        v80 = (__int64 *)v76[2];
        v81 = (__int64 *)v76[1];
        v77 = v75 + 2;
        if ( v81 != v80 )
        {
          v119 = v73;
          do
          {
            v82 = *((__int64 **)v75 + 2);
            if ( v82 == *((__int64 **)v75 + 3) )
            {
              v77 = (int *)v81;
              sub_6255A0((__int64)(v75 + 2), v81);
            }
            else
            {
              *v82 = *v81;
              *v81 = 0;
              *((_QWORD *)v75 + 2) += 8LL;
            }
            ++v81;
          }
          while ( v80 != v81 );
          v73 = v119;
        }
      }
      (*(void (__fastcall **)(_QWORD *, int *))(*v76 + 8LL))(v76, v77);
LABEL_90:
      if ( v74 == ++v73 )
      {
        v72 = v116;
        v8 = v117;
        v7 = v118;
        goto LABEL_92;
      }
    }
  }
  (*(void (__fastcall **)(_QWORD *, int *))(*v72 + 48LL))(v72, &dword_4AE4FBC);
LABEL_92:
  (*(void (__fastcall **)(_QWORD *))(*v72 + 8LL))(v72);
  if ( (BYTE8(v126[0]) & 1) != 0 && *(_QWORD *)&v126[0] )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v126[0] + 8LL))(*(_QWORD *)&v126[0]);
LABEL_2:
  sub_67B3D0(*(_QWORD *)(v8 + 104), *(int **)(v7 + 96));
  v12 = *(_QWORD *)(v7 + 80);
  v13 = *(_QWORD *)(v8 + 104);
  v14 = operator new(0x20u);
  *(_QWORD *)v14 = &off_49F4DC8;
  *(_QWORD *)(v14 + 8) = v12;
  *(_QWORD *)(v14 + 16) = v13;
  *(_BYTE *)(v14 + 24) = 0;
  if ( *(_QWORD *)(v12 + 1176) )
  {
    v15 = (_QWORD *)operator new(0x18u);
    v16 = *(_QWORD *)(v12 + 1176);
    *(_QWORD *)(v12 + 1176) = 0;
    v15[1] = v14;
    v15[2] = v16;
    *v15 = &off_4996D50;
    v17 = *(_QWORD *)(v12 + 1176);
    *(_QWORD *)(v12 + 1176) = v15;
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
  }
  else
  {
    *(_QWORD *)(v12 + 1176) = v14;
  }
  v18 = *(_QWORD *)(v8 + 104);
  v19 = (__m128)_mm_loadu_si128((const __m128i *)(v7 + 80));
  v20 = _mm_movehl_ps(a5, v19).m128_u64[0];
  v21 = *(void (__fastcall **)(__int64, void **))(*(_QWORD *)v18 + 24LL);
  *(__m128 *)v127 = v19;
  if ( v20 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)(v20 + 8), 1u);
    else
      ++*(_DWORD *)(v20 + 8);
  }
  v21(v18, v127);
  v22 = (volatile signed __int32 *)v127[1];
  if ( v127[1] )
  {
    v23 = (volatile signed __int32 *)((char *)v127[1] + 8);
    if ( *((_QWORD *)v127[1] + 1) == 0x100000001LL )
    {
      v70 = *(_QWORD *)v127[1];
      v71 = v127[1];
      *((_QWORD *)v127[1] + 1) = 0;
      (*(void (__fastcall **)(void *, void **, volatile signed __int32 *))(v70 + 16))(v71, v127, v23);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 24LL))(v22);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v24 = _InterlockedExchangeAdd(v23, 0xFFFFFFFF);
      }
      else
      {
        v24 = *((_DWORD *)v127[1] + 2);
        *((_DWORD *)v127[1] + 2) = v24 - 1;
      }
      if ( v24 == 1 )
        sub_6111C0(v22);
    }
  }
  if ( *(_QWORD *)(v8 + 168) )
  {
    v25 = operator new(0x50u);
    sub_11A12A0(v25, *(_QWORD *)(v12 + 88));
    if ( *(_QWORD *)(v12 + 1176) )
    {
      v26 = (_QWORD *)operator new(0x18u);
      v27 = *(_QWORD *)(v12 + 1176);
      *(_QWORD *)(v12 + 1176) = 0;
      v26[1] = v25;
      v26[2] = v27;
      *v26 = &off_4996D50;
      v28 = *(_QWORD *)(v12 + 1176);
      *(_QWORD *)(v12 + 1176) = v26;
      if ( v28 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
    }
    else
    {
      *(_QWORD *)(v12 + 1176) = v25;
    }
    v29 = *(_QWORD *)(v8 + 168);
    v114 = _mm_unpacklo_epi64((__m128i)v29, (__m128i)(unsigned __int64)v25);
    v30 = operator new(0x468u);
    v31 = _mm_load_si128(&v114);
    *(_QWORD *)(v30 + 16) = v12;
    v32 = v30;
    *(__m128i *)v30 = v31;
    if ( &_pthread_key_create )
    {
      v33 = pthread_mutex_lock((pthread_mutex_t *)v29);
      if ( v33 )
        std::__throw_system_error(v33);
    }
    *(_DWORD *)(v32 + 40) = 0;
    *(_QWORD *)(v32 + 24) = 0;
    *(_QWORD *)(v32 + 32) = 0;
    operator delete();
    v34 = *(_DWORD *)(v29 + 56);
    *(_DWORD *)(v32 + 40) = v34;
    if ( v34 )
    {
      v64 = (void *)sub_25CC9C0(32LL * v34, 8);
      v65 = *(unsigned int *)(v32 + 40);
      *(_QWORD *)(v32 + 24) = v64;
      *(_DWORD *)(v32 + 32) = *(_DWORD *)(v29 + 48);
      *(_DWORD *)(v32 + 36) = *(_DWORD *)(v29 + 52);
      memcpy(v64, *(const void **)(v29 + 40), 32 * v65);
    }
    else
    {
      *(_QWORD *)(v32 + 24) = 0;
      *(_QWORD *)(v32 + 32) = 0;
    }
    if ( &_pthread_key_create )
      pthread_mutex_unlock((pthread_mutex_t *)v29);
    v35 = *(_QWORD **)(v8 + 176);
    *(_QWORD *)(v32 + 1104) = 0;
    *(_QWORD *)(v32 + 48) = v32 + 64;
    *(_DWORD *)(v32 + 1112) = 0;
    *(_QWORD *)(v32 + 56) = 0x2000000000LL;
    *(_QWORD *)(v8 + 176) = v32;
    *(_OWORD *)(v32 + 1088) = 0;
    if ( v35 )
    {
      v36 = (_QWORD *)v35[6];
      if ( v36 != v35 + 8 )
        free(v36);
      operator delete();
      operator delete(v35, 0x468u);
    }
  }
  v37 = *(_QWORD *)(v8 + 104);
  v38 = operator new(0x18u);
  *(_BYTE *)(v38 + 8) = 0;
  v39 = v38;
  *(_QWORD *)(v38 + 16) = v37;
  *(_QWORD *)v38 = off_49F4F58;
  v40 = (__int64 *)operator new(8u);
  v127[0] = (void *)v8;
  v42 = _mm_loadl_epi64((const __m128i *)&off_47D0408);
  *v40 = v39;
  v43 = v40;
  v127[1] = nullptr;
  v128 = _mm_unpacklo_epi64(v42, (__m128i)(unsigned __int64)sub_69A020);
  v44 = (__m128)_mm_loadu_si128((const __m128i *)(v7 + 80));
  v45 = _mm_movehl_ps(a7, v44).m128_u64[0];
  v125 = v44;
  if ( v45 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)(v45 + 8), 1u);
    else
      ++*(_DWORD *)(v45 + 8);
  }
  v46 = (__m128)_mm_loadu_si128((const __m128i *)(v8 + 104));
  v47 = _mm_movehl_ps(v41, v46).m128_u64[0];
  v126[0] = v46;
  if ( v47 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)(v47 + 8), 1u);
    else
      ++*(_DWORD *)(v47 + 8);
  }
  sub_1113E70(&v121, v126, v8 + 120, &v125, v127);
  v48 = (_QWORD *)operator new(0x10u);
  v49 = v121;
  v121 = 0;
  v48[1] = v49;
  v50 = *v43;
  *v43 = 0;
  *v48 = v50;
  operator delete(v43, 8u);
  if ( v121 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v121 + 8LL))(v121);
  v121 = 0;
  v51 = *((volatile signed __int32 **)&v126[0] + 1);
  if ( *((_QWORD *)&v126[0] + 1) )
  {
    v52 = (volatile signed __int32 *)(*((_QWORD *)&v126[0] + 1) + 8LL);
    if ( *(_QWORD *)(*((_QWORD *)&v126[0] + 1) + 8LL) == 0x100000001LL )
    {
      v66 = **((_QWORD **)&v126[0] + 1);
      v67 = *((_QWORD *)&v126[0] + 1);
      *(_QWORD *)(*((_QWORD *)&v126[0] + 1) + 8LL) = 0;
      (*(void (__fastcall **)(__int64, __int64, volatile signed __int32 *))(v66 + 16))(v67, 8, v52);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 24LL))(v51);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v53 = _InterlockedExchangeAdd(v52, 0xFFFFFFFF);
      }
      else
      {
        v53 = *(_DWORD *)(*((_QWORD *)&v126[0] + 1) + 8LL);
        *(_DWORD *)(*((_QWORD *)&v126[0] + 1) + 8LL) = v53 - 1;
      }
      if ( v53 == 1 )
        sub_6111C0(v51);
    }
  }
  v54 = (volatile signed __int32 *)v125.m128_u64[1];
  if ( v125.m128_u64[1] )
  {
    v55 = (volatile signed __int32 *)(v125.m128_u64[1] + 8);
    if ( *(_QWORD *)(v125.m128_u64[1] + 8) == 0x100000001LL )
    {
      v68 = *(_QWORD *)v125.m128_u64[1];
      v69 = v125.m128_u64[1];
      *(_QWORD *)(v125.m128_u64[1] + 8) = 0;
      (*(void (__fastcall **)(unsigned __int64, __int64, volatile signed __int32 *))(v68 + 16))(v69, 8, v55);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v54 + 24LL))(v54);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v56 = _InterlockedExchangeAdd(v55, 0xFFFFFFFF);
      }
      else
      {
        v56 = *(_DWORD *)(v125.m128_u64[1] + 8);
        *(_DWORD *)(v125.m128_u64[1] + 8) = v56 - 1;
      }
      if ( v56 == 1 )
        sub_6111C0(v54);
    }
  }
  if ( v128.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v128.m128i_i64[0])(v127, v127, 3);
  v57 = operator new(0x38u);
  v127[0] = v48;
  v127[1] = v48 + 2;
  v58 = v57;
  v128.m128i_i64[0] = (__int64)(v48 + 2);
  sub_10C5040(v57, v127);
  v59 = (__int64 *)v127[1];
  v60 = (__int64 *)v127[0];
  if ( v127[1] != v127[0] )
  {
    do
    {
      while ( 1 )
      {
        v61 = *v60;
        if ( !*v60 )
          break;
        ++v60;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 8LL))(v61);
        *(v60 - 1) = 0;
        if ( v60 == v59 )
          goto LABEL_53;
      }
      ++v60;
    }
    while ( v59 != v60 );
LABEL_53:
    v60 = (__int64 *)v127[0];
  }
  if ( v60 )
    operator delete(v60, v128.m128i_i64[0] - (_QWORD)v60);
  result = v115;
  *v115 = v58;
  return result;
}

