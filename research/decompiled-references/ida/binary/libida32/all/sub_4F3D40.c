void __fastcall sub_4F3D40(__int64 a1, const __m128i *a2, _QWORD *a3, double *a4, __int64 a5, __int64 a6)
{
  struct _Unwind_Exception *v6; // rbx
  __int64 v7; // rsi
  signed __int32 v8; // eax
  volatile signed __int32 *v9; // rdx
  volatile signed __int32 *v10; // rbp
  __int64 v11; // rbp
  signed __int32 v12; // eax
  unsigned __int64 v13; // r15
  __int64 v17; // rsi
  unsigned __int64 v19; // r15
  _QWORD *v20; // rdi
  const __m128i *v21; // r8
  char *v22; // r14
  __int64 v23; // r9
  __int64 v24; // rax
  _QWORD *v25; // rcx
  __int64 v26; // rdx
  _QWORD *v27; // r11
  __int64 v28; // rcx
  void *v29; // rax
  void *v30; // rax
  char *v31; // rax
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  __m128i v34; // xmm0
  __int64 v35; // r14
  __int64 v36; // rax
  __int64 v37; // rdx
  __m128i v38; // xmm0
  __m128 v39; // xmm1
  __m128 v40; // xmm0
  __int64 v41; // rax
  __m128i v42; // xmm2
  __m128i v43; // rax
  __m128i v44; // xmm1
  unsigned __int64 v45; // rax
  __int64 v46; // r13
  __int64 v47; // rax
  _QWORD *v48; // r12
  __int64 v49; // rbx
  std::__future_base::_Result_base *v50; // rax
  __m128 v51; // xmm0
  __m128 v52; // xmm1
  __int64 v53; // rax
  __m128i v54; // xmm0
  __m128i v55; // xmm1
  __int64 v56; // rsi
  __int64 v57; // rsi
  __int64 v58; // rsi
  char v59; // al
  _QWORD *v60; // rax
  __m128i v61; // xmm4
  signed __int64 v62; // rax
  void (__fastcall *v63)(__int64, __m128i *); // rcx
  __m128i v64; // xmm0
  volatile signed __int32 *v65; // rbp
  volatile signed __int32 *v66; // rdx
  __int64 v67; // rbp
  void (__fastcall ****v68)(_QWORD); // rsi
  __int64 v69; // rax
  int v70; // eax
  __int64 v71; // rax
  std::__future_base::_Result_base *v72; // rbx
  __int64 v73; // rdx
  __m128i v74; // xmm3
  __m128i v75; // xmm0
  __m128i v76; // xmm1
  char v77; // al
  __int64 v78; // rbp
  int v79; // eax
  _QWORD *addr; // rax
  bool v81; // zf
  std::__future_base::_Result_base *v82; // rbp
  void (__fastcall *v83)(std::__future_base::_Result_base *); // rdx
  void (__fastcall *v84)(std::__future_base::_Result_base *); // rax
  std::__future_base::_Result_base *v85; // rdi
  volatile signed __int32 *v86; // rbp
  int v87; // eax
  signed __int32 v88; // eax
  volatile signed __int32 *v89; // rbx
  volatile signed __int32 *v90; // rdx
  signed __int32 v91; // eax
  int v92; // eax
  int v93; // eax
  __int64 v94; // rax
  __int64 v95; // rax
  std::__future_base::_Result_base *v96; // rax
  __int64 v97; // rax
  __int64 v98; // rax
  volatile signed __int32 *v99; // rdi
  __int64 v100; // rax
  volatile signed __int32 *v101; // rdi
  __int64 v102; // rax
  __m128i v103; // [rsp+0h] [rbp-258h] BYREF
  void *v104; // [rsp+18h] [rbp-240h]
  __m128i v105; // [rsp+20h] [rbp-238h] BYREF
  __m128i v106; // [rsp+30h] [rbp-228h] BYREF
  __m128i v107; // [rsp+40h] [rbp-218h] BYREF
  __m128i v108; // [rsp+50h] [rbp-208h] BYREF
  pthread_mutex_t *mutex; // [rsp+60h] [rbp-1F8h]
  unsigned __int64 v110; // [rsp+68h] [rbp-1F0h]
  __int64 v111; // [rsp+70h] [rbp-1E8h]
  char v112; // [rsp+7Fh] [rbp-1D9h]
  _QWORD *v113; // [rsp+80h] [rbp-1D8h]
  __int64 v114; // [rsp+88h] [rbp-1D0h]
  __m128i v115; // [rsp+90h] [rbp-1C8h] BYREF
  __int64 v116; // [rsp+A0h] [rbp-1B8h]
  __int64 v117; // [rsp+A8h] [rbp-1B0h]
  void **v118; // [rsp+B0h] [rbp-1A8h]
  volatile signed __int32 *v119; // [rsp+B8h] [rbp-1A0h]
  char v120; // [rsp+CFh] [rbp-189h] BYREF
  __int64 v121; // [rsp+D0h] [rbp-188h] BYREF
  __m128i *v122; // [rsp+D8h] [rbp-180h] BYREF
  char *v123; // [rsp+E0h] [rbp-178h] BYREF
  std::__future_base::_Result_base *v124; // [rsp+E8h] [rbp-170h] BYREF
  __int64 v125; // [rsp+F0h] [rbp-168h] BYREF
  volatile signed __int32 *v126; // [rsp+F8h] [rbp-160h]
  _QWORD v127[2]; // [rsp+100h] [rbp-158h] BYREF
  __int128 v128; // [rsp+110h] [rbp-148h] BYREF
  _QWORD *v129; // [rsp+120h] [rbp-138h]
  __int64 v130; // [rsp+130h] [rbp-128h] BYREF
  volatile signed __int32 *v131; // [rsp+138h] [rbp-120h]
  std::__future_base::_Result_base *v132; // [rsp+140h] [rbp-118h]
  __int128 v133; // [rsp+150h] [rbp-108h] BYREF
  const char *v134; // [rsp+160h] [rbp-F8h]
  __int64 v135; // [rsp+168h] [rbp-F0h]
  void *v136[2]; // [rsp+170h] [rbp-E8h] BYREF
  __m128i v137; // [rsp+180h] [rbp-D8h]
  __m128i v138; // [rsp+190h] [rbp-C8h] BYREF
  __int128 v139; // [rsp+1A0h] [rbp-B8h]
  __m128i v140; // [rsp+1B0h] [rbp-A8h] BYREF
  __m128i v141; // [rsp+1C0h] [rbp-98h]
  char v142; // [rsp+1D0h] [rbp-88h]
  signed __int64 v143; // [rsp+1D8h] [rbp-80h]
  __m128i v144; // [rsp+1E0h] [rbp-78h] BYREF
  __m128i v145; // [rsp+1F0h] [rbp-68h] BYREF
  char v146; // [rsp+200h] [rbp-58h]
  signed __int64 v147; // [rsp+208h] [rbp-50h]
  unsigned __int64 v148; // [rsp+218h] [rbp-40h]

  v114 = a1;
  v148 = __readfsqword(0x28u);
  v13 = a3[1] - *a3 + 0x3FFFFFLL;
  if ( v13 <= (unsigned __int64)&algn_3FFFFB[4] )
  {
    v81 = *(_QWORD *)(a5 + 16) == 0;
    v137.m128i_i64[0] = 0;
    LOBYTE(v130) = 1;
    *(_OWORD *)v136 = 0;
    if ( v81 )
    {
      v118 = v136;
      std::__throw_bad_function_call();
    }
    v118 = v136;
    (*(void (__fastcall **)(__int64, __int64 *, void **))(a5 + 24))(a5, &v130, v136);
    if ( v136[0] )
      operator delete(v136[0], v137.m128i_i64[0] - (unsigned __int64)v136[0]);
  }
  else
  {
    v103.m128i_i64[0] = a5;
    v17 = (__int64)v136;
    v136[0] = nullptr;
    v118 = v136;
    v129 = nullptr;
    v105.m128i_i64[0] = (__int64)&v128;
    v128 = 0;
    sub_421320((__int64)&v128, v136);
    v19 = v13 >> 22;
    v20 = *((_QWORD **)&v128 + 1);
    v21 = (const __m128i *)v103.m128i_i64[0];
    v104 = (void *)v128;
    v113 = v129;
    if ( v19 != 1 )
    {
      v22 = (char *)&loc_400000;
      v23 = v19 << 22;
      while ( 1 )
      {
        v17 = a3[6];
        v24 = (a3[7] - v17) >> 3;
        if ( a3[7] - v17 <= 0 )
          goto LABEL_14;
        v25 = (_QWORD *)a3[6];
        do
        {
          while ( 1 )
          {
            v26 = v24 >> 1;
            v27 = &v25[v24 >> 1];
            if ( (unsigned __int64)v22 < *v27 )
              break;
            v25 = v27 + 1;
            v24 = v24 - 1 - v26;
            if ( v24 <= 0 )
              goto LABEL_9;
          }
          v24 >>= 1;
        }
        while ( v26 > 0 );
LABEL_9:
        if ( (_QWORD *)a3[7] == v25 )
          goto LABEL_14;
        if ( (_QWORD *)v17 == v25 )
          goto LABEL_14;
        v28 = ((__int64)v25 - v17 - 8) >> 3;
        if ( (_DWORD)v28 == -1 )
          goto LABEL_14;
        v29 = *(void **)(v17 + 8LL * (unsigned int)(v28 + 1));
        v17 = (__int64)v113;
        v136[0] = v29;
        if ( v20 == v113 )
        {
          *((_QWORD *)&v128 + 1) = v20;
          v129 = v20;
          v17 = (__int64)v118;
          v106.m128i_i64[0] = (__int64)v21;
          v103.m128i_i64[0] = v23;
          *(_QWORD *)&v128 = v104;
          sub_421320(v105.m128i_i64[0], v118);
          v23 = v103.m128i_i64[0];
          v22 += 0x400000;
          v21 = (const __m128i *)v106.m128i_i64[0];
          v20 = *((_QWORD **)&v128 + 1);
          v104 = (void *)v128;
          v113 = v129;
          if ( v22 == (char *)v103.m128i_i64[0] )
            break;
        }
        else
        {
          *v20++ = v29;
LABEL_14:
          v22 += 0x400000;
          if ( v22 == (char *)v23 )
            break;
        }
      }
    }
    v30 = (void *)(a3[1] - *a3);
    v136[0] = v30;
    if ( v113 == v20 )
    {
      v103.m128i_i64[0] = (__int64)v21;
      *(_QWORD *)&v128 = v104;
      *((_QWORD *)&v128 + 1) = v113;
      v129 = v113;
      sub_421320(v105.m128i_i64[0], v118);
      v17 = (__int64)v129;
      v21 = (const __m128i *)v103.m128i_i64[0];
      v31 = *((char **)&v128 + 1);
      v104 = (void *)v128;
      v113 = v129;
    }
    else
    {
      *v20 = v30;
      v31 = (char *)(v20 + 1);
    }
    *(_QWORD *)&v139 = 0;
    v138 = 0;
    v32 = ((v31 - (_BYTE *)v104) >> 3) - 1;
    if ( v32 <= v19 )
      v19 = v32;
    *((_QWORD *)&v139 + 1) = v21[1].m128i_i64[1];
    v33 = v21[1].m128i_i64[0];
    v110 = v19;
    if ( v33 )
    {
      v34 = _mm_loadu_si128(v21);
      *(_QWORD *)&v139 = v33;
      v138 = v34;
      v21[1] = 0;
    }
    sub_95E920(&v125);
    v35 = operator new(0x90u);
    v119 = (volatile signed __int32 *)(v35 + 8);
    v141.m128i_i64[0] = 0;
    *(_QWORD *)(v35 + 8) = 0x100000001LL;
    *(_QWORD *)v35 = off_2B03700;
    v116 = v35 + 16;
    v141.m128i_i64[1] = 0;
    v140 = 0;
    v36 = operator new(0x20u);
    v37 = *((_QWORD *)&v139 + 1);
    *(_QWORD *)(v36 + 16) = 0;
    *(_OWORD *)v36 = 0;
    *(_QWORD *)(v36 + 24) = v37;
    if ( (_QWORD)v139 )
    {
      v38 = _mm_load_si128(&v138);
      *(_QWORD *)(v36 + 16) = v139;
      *(__m128i *)v36 = v38;
      v139 = 0;
    }
    v140.m128i_i64[0] = v36;
    v39 = _mm_loadh_ps((const double *)(a6 + 8));
    v141 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_2B037F0), (__m128i)(unsigned __int64)sub_4F2E10);
    *(_OWORD *)a6 = 0;
    v40 = _mm_loadh_ps(a4);
    *(_QWORD *)a4 = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
    v41 = a2->m128i_i64[1];
    v42 = _mm_unpacklo_epi64(_mm_loadl_epi64(a2), (__m128i)(unsigned __int64)v41);
    if ( v41 )
    {
      if ( &_pthread_key_create )
        _InterlockedAdd((volatile signed __int32 *)(v41 + 8), 1u);
      else
        ++*(_DWORD *)(v41 + 8);
      v43 = v141;
    }
    else
    {
      v43.m128i_i64[0] = (__int64)sub_4F1D60;
      v43.m128i_i64[1] = (__int64)sub_4F2E10;
    }
    *(__m128 *)(v35 + 32) = v40;
    v145.m128i_i64[0] = 0;
    v145.m128i_i64[1] = v43.m128i_i64[1];
    *(__m128i *)(v35 + 16) = v42;
    *(__m128 *)(v35 + 48) = v39;
    v144 = 0;
    if ( v43.m128i_i64[0] )
    {
      v44 = _mm_load_si128(&v140);
      v145.m128i_i64[0] = v43.m128i_i64[0];
      *(_OWORD *)(v35 + 64) = 0;
      v17 = (__int64)&v144;
      v144 = v44;
      *(_QWORD *)(v35 + 80) = 0;
      *(_QWORD *)(v35 + 88) = 0;
      v141 = 0;
      ((void (__fastcall *)(__int64, __m128i *, __int64))v43.m128i_i64[0])(v35 + 64, &v144, 2);
      *(__m128i *)(v35 + 80) = _mm_load_si128(&v145);
    }
    else
    {
      *(_QWORD *)(v35 + 80) = 0;
      *(_QWORD *)(v35 + 88) = 0;
      *(_OWORD *)(v35 + 64) = 0;
    }
    v45 = v110;
    *(_BYTE *)(v35 + 104) = 0;
    *(_QWORD *)(v35 + 128) = 0;
    *(_QWORD *)(v35 + 96) = v45;
    *(_OWORD *)(v35 + 112) = 0;
    if ( v45 )
    {
      v17 = v110;
      sub_430C60((__int64 *)(v35 + 112), v110);
    }
    if ( v145.m128i_i64[0] )
    {
      v17 = (__int64)&v144;
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v145.m128i_i64[0])(&v144, &v144, 3);
    }
    *(_QWORD *)(v35 + 136) = *(_QWORD *)(*(_QWORD *)(v35 + 16) + 56LL);
    if ( v141.m128i_i64[0] )
    {
      v17 = (__int64)&v140;
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v141.m128i_i64[0])(&v140, &v140, 3);
    }
    if ( v110 )
    {
      v46 = 0;
      v115 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B037F8), (__m128i)(unsigned __int64)sub_4F1E30);
      while ( 1 )
      {
        v107.m128i_i64[0] = v46;
        v67 = v125;
        v68 = *((void (__fastcall *****)(_QWORD))v104 + v46++);
        v69 = *((_QWORD *)v104 + v46);
        v105.m128i_i64[0] = (__int64)v68;
        v106.m128i_i64[0] = v69;
        if ( v35 )
        {
          if ( &_pthread_key_create )
            _InterlockedAdd(v119, 1u);
          else
            ++*(_DWORD *)(v35 + 8);
        }
        mutex = (pthread_mutex_t *)(v67 + 48);
        if ( &_pthread_key_create )
        {
          v70 = pthread_mutex_lock((pthread_mutex_t *)(v67 + 48));
          if ( v70 )
            std::__throw_system_error(v70);
        }
        v112 = *(_BYTE *)(v67 + 24);
        if ( !v112 )
          break;
        v130 = 0;
        v71 = operator new(0x30u);
        *(_BYTE *)(v71 + 36) = 0;
        *(_QWORD *)(v71 + 24) = 0;
        *(_QWORD *)(v71 + 8) = 0x100000001LL;
        *(_QWORD *)v71 = off_2AFE960;
        *(_DWORD *)(v71 + 32) = 0;
        *(_DWORD *)(v71 + 40) = 0;
        *(_QWORD *)(v71 + 16) = &off_2AFE7F8;
        v131 = (volatile signed __int32 *)v71;
        v130 = v71 + 16;
        v72 = (std::__future_base::_Result_base *)operator new(0x38u);
        v106 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v127, (__m128i)(unsigned __int64)&v121);
        v107.m128i_i64[0] = (__int64)&v130;
        v105 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v122, (__m128i)(unsigned __int64)&v123);
        v103 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v130, (__m128i)(unsigned __int64)&v133);
        std::__future_base::_Result_base::_Result_base(v72);
        *((_BYTE *)v72 + 48) = 0;
        v132 = v72;
        v73 = v130;
        v74 = _mm_load_si128(&v103);
        v75 = _mm_load_si128(&v105);
        *(_QWORD *)v72 = &off_2B036D8;
        v49 = (__int64)v131;
        v76 = _mm_load_si128(&v106);
        if ( v131 )
        {
          if ( &_pthread_key_create )
            _InterlockedAdd(v131 + 2, 1u);
          else
            ++*((_DWORD *)v131 + 2);
        }
        if ( !v73 )
        {
          std::__throw_future_error(3);
LABEL_171:
          v11 = std::__throw_future_error(1);
          if ( v49 )
            sub_4204D0((volatile signed __int32 *)v49);
          v6 = (struct _Unwind_Exception *)v11;
          sub_4F3B70((__int64 *)v107.m128i_i64[0], v68);
          v10 = (volatile signed __int32 *)v35;
LABEL_161:
          if ( &_pthread_key_create )
            pthread_mutex_unlock(mutex);
LABEL_163:
          if ( v10 )
            sub_4204D0(v10);
          if ( v35 )
            sub_4204D0((volatile signed __int32 *)v35);
          if ( v126 )
            sub_4204D0(v126);
          sub_374250((__int64)&v138);
          if ( v104 )
            operator delete(v104, (char *)v113 - (_BYTE *)v104);
          _Unwind_Resume(v6);
        }
        v77 = *(_BYTE *)(v73 + 20);
        *(_BYTE *)(v73 + 20) = 1;
        if ( v77 )
          goto LABEL_171;
        v78 = v130;
        v133 = 0;
        v135 = 0;
        DWORD2(v133) = -2147483646;
        v134 = "shutting down";
        if ( !v130 )
        {
          std::__throw_future_error(3);
LABEL_175:
          v79 = -1;
LABEL_176:
          std::__throw_system_error(v79);
        }
        v144 = v74;
        *(__m128i *)v136 = v76;
        v123 = &v120;
        v145 = _mm_unpacklo_epi64(_mm_loadl_epi64(&off_2B03800), (__m128i)(unsigned __int64)sub_4F1AC0);
        v137 = v75;
        v120 = 0;
        v122 = &v144;
        v121 = v130;
        v127[0] = sub_425A10;
        v127[1] = 0;
        *(_QWORD *)__tls_get_addr() = v118;
        *(_QWORD *)__tls_get_addr() = sub_424DE0;
        if ( !&_pthread_key_create )
          goto LABEL_175;
        v17 = (__int64)&_once_proxy;
        v79 = pthread_once((pthread_once_t *)(v78 + 24), (void (*)(void))&_once_proxy);
        if ( v79 )
          goto LABEL_176;
        *(_QWORD *)__tls_get_addr() = 0;
        addr = (_QWORD *)__tls_get_addr();
        v81 = v120 == 0;
        *addr = 0;
        if ( v81 )
        {
          std::__throw_future_error(2);
          BUG();
        }
        if ( _InterlockedExchange((volatile __int32 *)(v78 + 16), 1) < 0 )
          std::__atomic_futex_unsigned_base::_M_futex_notify_all(
            (std::__atomic_futex_unsigned_base *)(v78 + 16),
            (unsigned int *)&_once_proxy);
        if ( v145.m128i_i64[0] )
        {
          v17 = (__int64)&v144;
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v145.m128i_i64[0])(&v144, &v144, 3);
        }
        if ( v130 && (!v131 || *((_DWORD *)v131 + 2) != 1) )
        {
          v96 = v132;
          v17 = (__int64)&v124;
          v132 = nullptr;
          v124 = v96;
          sub_4F2010(v130, &v124);
          if ( v124 )
            (**(void (__fastcall ***)(std::__future_base::_Result_base *))v124)(v124);
        }
        v82 = v132;
        if ( v132 )
        {
          v83 = **(void (__fastcall ***)(std::__future_base::_Result_base *))v132;
          if ( v83 == sub_4F1B60 )
          {
            v84 = *(void (__fastcall **)(std::__future_base::_Result_base *))(*(_QWORD *)v132 + 16LL);
            if ( v84 == sub_4F19D0 )
            {
              v85 = v132;
              *(_QWORD *)v132 = &off_2B036D8;
              std::__future_base::_Result_base::~_Result_base(v85);
              v17 = 56;
              operator delete(v82, 0x38u);
            }
            else
            {
              v84(v132);
            }
          }
          else
          {
            v83(v132);
          }
        }
        v86 = v131;
        if ( v131 )
        {
          if ( *((_QWORD *)v131 + 1) == 0x100000001LL )
          {
            v98 = *(_QWORD *)v131;
            v99 = v131;
            *((_QWORD *)v131 + 1) = 0;
            (*(void (__fastcall **)(volatile signed __int32 *))(v98 + 16))(v99);
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v86 + 24LL))(v86);
          }
          else if ( !_InterlockedSub(v131 + 2, 1u) )
          {
            sub_420480(v86);
          }
        }
        v65 = (volatile signed __int32 *)v35;
        pthread_mutex_unlock(mutex);
        if ( !v49 )
          goto LABEL_60;
        v103.m128i_i64[0] = v49 + 8;
LABEL_57:
        v17 = 0x100000001LL;
        if ( *(_QWORD *)v103.m128i_i64[0] == 0x100000001LL )
        {
          v94 = *(_QWORD *)v49;
          *(_QWORD *)(v49 + 8) = 0;
          (*(void (__fastcall **)(__int64))(v94 + 16))(v49);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 24LL))(v49);
          goto LABEL_60;
        }
        if ( &_pthread_key_create )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v103.m128i_i64[0], 0xFFFFFFFF) == 1 )
            goto LABEL_117;
        }
        else
        {
          v92 = *(_DWORD *)(v49 + 8);
          *(_DWORD *)(v49 + 8) = v92 - 1;
          if ( v92 == 1 )
LABEL_117:
            sub_420480((volatile signed __int32 *)v49);
        }
LABEL_60:
        if ( v65 )
        {
          v66 = v65 + 2;
          if ( *((_QWORD *)v65 + 1) == 0x100000001LL )
          {
            v95 = *(_QWORD *)v65;
            *((_QWORD *)v65 + 1) = 0;
            (*(void (__fastcall **)(volatile signed __int32 *, __int64, volatile signed __int32 *))(v95 + 16))(
              v65,
              v17,
              v66);
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v65 + 24LL))(v65);
            goto LABEL_64;
          }
          if ( &_pthread_key_create )
          {
            if ( _InterlockedExchangeAdd(v66, 0xFFFFFFFF) != 1 )
              goto LABEL_64;
          }
          else
          {
            v87 = *((_DWORD *)v65 + 2);
            *((_DWORD *)v65 + 2) = v87 - 1;
            if ( v87 != 1 )
              goto LABEL_64;
          }
          sub_420480(v65);
          if ( v110 == v46 )
            goto LABEL_100;
        }
        else
        {
LABEL_64:
          if ( v110 == v46 )
            goto LABEL_100;
        }
      }
      v111 = *(_QWORD *)(v67 + 8);
      v47 = *(_QWORD *)(v67 + 16);
      v108.m128i_i64[0] = v47;
      if ( v47 )
      {
        if ( &_pthread_key_create )
          _InterlockedAdd((volatile signed __int32 *)(v108.m128i_i64[0] + 12), 1u);
        else
          ++*(_DWORD *)(v47 + 12);
      }
      v48 = (_QWORD *)operator new(0x20u);
      v48[1] = 0x100000001LL;
      *v48 = off_2B03738;
      v103.m128i_i64[0] = (__int64)(v48 + 2);
      v49 = operator new(0x78u);
      v103.m128i_i64[0] = v49 + 8;
      *(_QWORD *)(v49 + 24) = 0;
      *(_QWORD *)(v49 + 8) = 0x100000001LL;
      *(_QWORD *)v49 = off_2B037B8;
      v117 = v49 + 16;
      *(_QWORD *)(v49 + 32) = 0;
      *(_QWORD *)(v49 + 40) = 0;
      *(_QWORD *)(v49 + 16) = &unk_2BD0EF0;
      v50 = (std::__future_base::_Result_base *)operator new(0x38u);
      v51 = _mm_loadh_ps((const double *)v105.m128i_i64);
      v52 = _mm_loadh_ps((const double *)v108.m128i_i64);
      v105.m128i_i64[0] = (__int64)v50;
      v108 = (__m128i)v52;
      v107 = (__m128i)v51;
      std::__future_base::_Result_base::_Result_base(v50);
      v53 = v105.m128i_i64[0];
      v54 = _mm_load_si128(&v107);
      v55 = _mm_load_si128(&v108);
      *(_QWORD *)(v49 + 16) = &off_2B03770;
      v56 = v114;
      *(_BYTE *)(v53 + 48) = 0;
      *(_QWORD *)v53 = &off_2B036D8;
      *(_QWORD *)(v49 + 56) = v56;
      v57 = v116;
      *(_QWORD *)(v49 + 48) = v53;
      *(_QWORD *)(v49 + 64) = v57;
      v58 = v106.m128i_i64[0];
      *(_QWORD *)(v49 + 72) = v35;
      *(_QWORD *)(v49 + 96) = v58;
      v48[2] = v49 + 16;
      v48[3] = v49;
      *(__m128i *)(v49 + 80) = v54;
      *(__m128i *)(v49 + 104) = v55;
      if ( v49 )
      {
        if ( &_pthread_key_create )
        {
          _InterlockedAdd((volatile signed __int32 *)(v49 + 8), 1u);
          _InterlockedAdd((volatile signed __int32 *)(v49 + 8), 1u);
        }
        else
        {
          ++*(_DWORD *)(v49 + 8);
          ++*(_DWORD *)(v49 + 8);
        }
      }
      v59 = *(_BYTE *)(v49 + 36);
      *(_BYTE *)(v49 + 36) = 1;
      if ( v59 )
      {
        std::__throw_future_error(1);
        v7 = 120;
        operator delete((void *)v49, 0x78u);
        v6 = (struct _Unwind_Exception *)v67;
        if ( v48 )
        {
          v7 = 32;
          operator delete(v48, 0x20u);
        }
        if ( v108.m128i_i64[0] )
        {
          if ( &_pthread_key_create )
          {
            v8 = _InterlockedExchangeAdd((volatile signed __int32 *)(v108.m128i_i64[0] + 12), 0xFFFFFFFF);
          }
          else
          {
            v7 = v108.m128i_i64[0];
            v8 = *(_DWORD *)(v108.m128i_i64[0] + 12);
            *(_DWORD *)(v108.m128i_i64[0] + 12) = v8 - 1;
          }
          if ( v8 == 1 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v108.m128i_i64[0] + 24LL))(v108.m128i_i64[0]);
        }
        v112 = 1;
        if ( v35 )
        {
          v9 = (volatile signed __int32 *)(v35 + 8);
          if ( *(_QWORD *)(v35 + 8) == 0x100000001LL )
          {
            *(_QWORD *)(v35 + 8) = 0;
            (*(void (__fastcall **)(__int64, __int64, volatile signed __int32 *))(*(_QWORD *)v35 + 16LL))(v35, v7, v9);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 24LL))(v35);
          }
          else
          {
            if ( &_pthread_key_create )
            {
              v12 = _InterlockedExchangeAdd(v9, 0xFFFFFFFF);
            }
            else
            {
              v12 = *(_DWORD *)(v35 + 8);
              *(_DWORD *)(v35 + 8) = v12 - 1;
            }
            if ( v12 == 1 )
              sub_420480((volatile signed __int32 *)v35);
          }
        }
        v10 = nullptr;
        if ( v112 )
          goto LABEL_161;
        goto LABEL_163;
      }
      if ( *(_QWORD *)v103.m128i_i64[0] == 0x100000001LL )
      {
        v97 = *(_QWORD *)v49;
        *(_QWORD *)(v49 + 8) = 0;
        (*(void (__fastcall **)(__int64))(v97 + 16))(v49);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 24LL))(v49);
      }
      else
      {
        if ( &_pthread_key_create )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v103.m128i_i64[0], 0xFFFFFFFF) != 1 )
            goto LABEL_48;
        }
        else
        {
          v93 = *(_DWORD *)(v49 + 8);
          *(_DWORD *)(v49 + 8) = v93 - 1;
          if ( v93 != 1 )
            goto LABEL_48;
        }
        sub_420480((volatile signed __int32 *)v49);
      }
LABEL_48:
      v141 = 0u;
      v140 = 0;
      v60 = (_QWORD *)operator new(0x10u);
      v60[1] = v48;
      v61 = _mm_load_si128(&v115);
      *v60 = v48 + 2;
      v140.m128i_i64[0] = (__int64)v60;
      v142 = 1;
      v141 = v61;
      v62 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v67 + 176), 1u);
      v143 = v62;
      if ( &_pthread_key_create )
      {
        pthread_mutex_unlock(mutex);
        v62 = v143;
      }
      v63 = *(void (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v67 + 16LL);
      v145.m128i_i64[0] = 0;
      v144 = 0;
      v145.m128i_i64[1] = v141.m128i_i64[1];
      if ( v141.m128i_i64[0] )
      {
        v64 = _mm_load_si128(&v140);
        v145.m128i_i64[0] = v141.m128i_i64[0];
        v144 = v64;
        v141 = 0;
      }
      v147 = v62;
      v17 = (__int64)&v144;
      v146 = v142;
      v63(v67, &v144);
      if ( v145.m128i_i64[0] )
      {
        v17 = (__int64)&v144;
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v145.m128i_i64[0])(&v144, &v144, 3);
      }
      if ( v141.m128i_i64[0] )
      {
        v17 = (__int64)&v140;
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v141.m128i_i64[0])(&v140, &v140, 3);
      }
      v65 = nullptr;
      if ( !v49 )
        goto LABEL_64;
      goto LABEL_57;
    }
LABEL_100:
    if ( v35 )
    {
      if ( *(_QWORD *)(v35 + 8) == 0x100000001LL )
      {
        v102 = *(_QWORD *)v35;
        *(_QWORD *)(v35 + 8) = 0;
        (*(void (__fastcall **)(__int64))(v102 + 16))(v35);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 24LL))(v35);
      }
      else
      {
        if ( &_pthread_key_create )
        {
          v88 = _InterlockedExchangeAdd(v119, 0xFFFFFFFF);
        }
        else
        {
          v88 = *(_DWORD *)(v35 + 8);
          *(_DWORD *)(v35 + 8) = v88 - 1;
        }
        if ( v88 == 1 )
          sub_420480((volatile signed __int32 *)v35);
      }
    }
    v89 = v126;
    if ( v126 )
    {
      v90 = v126 + 2;
      if ( *((_QWORD *)v126 + 1) == 0x100000001LL )
      {
        v100 = *(_QWORD *)v126;
        v101 = v126;
        *((_QWORD *)v126 + 1) = 0;
        (*(void (__fastcall **)(volatile signed __int32 *, __int64, volatile signed __int32 *))(v100 + 16))(
          v101,
          v17,
          v90);
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v89 + 24LL))(v89);
      }
      else
      {
        if ( &_pthread_key_create )
        {
          v91 = _InterlockedExchangeAdd(v90, 0xFFFFFFFF);
        }
        else
        {
          v91 = *((_DWORD *)v126 + 2);
          *((_DWORD *)v126 + 2) = v91 - 1;
        }
        if ( v91 == 1 )
          sub_420480(v89);
      }
    }
    if ( (_QWORD)v139 )
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v139)(&v138, &v138, 3);
    if ( v104 )
      operator delete(v104, (char *)v113 - (_BYTE *)v104);
  }
}

