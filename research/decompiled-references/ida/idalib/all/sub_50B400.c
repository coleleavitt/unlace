void __fastcall sub_50B400(__int64 a1, const __m128i *a2, _QWORD *a3, double *a4, __int64 a5, __int64 a6)
{
  struct _Unwind_Exception *v6; // rbx
  __int64 v7; // rsi
  signed __int32 v8; // eax
  volatile signed __int32 *v9; // rdx
  volatile signed __int32 *v10; // rbp
  struct _Unwind_Exception *v11; // rbp
  signed __int32 v12; // eax
  unsigned __int64 v13; // r15
  __int64 v17; // rsi
  unsigned __int64 v19; // r15
  _QWORD *v20; // rdi
  const __m128i *v21; // r8
  unsigned __int64 v22; // r14
  __int64 v23; // r9
  __int64 v24; // rax
  _QWORD *v25; // rcx
  __int64 v26; // rdx
  unsigned __int64 *v27; // r11
  __int64 v28; // rcx
  void *v29; // rax
  void *v30; // rax
  char *v31; // rax
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  __m128i v34; // xmm0
  __int64 *v35; // r14
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
  volatile signed __int32 *v49; // rbx
  std::__future_base::_Result_base *v50; // rax
  __m128 v51; // xmm0
  __m128 v52; // xmm1
  __int64 v53; // rax
  __m128i v54; // xmm0
  __m128i v55; // xmm1
  __int64 v56; // rsi
  __int64 *v57; // rsi
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
  void ***addr; // rax
  int v80; // eax
  _QWORD *v81; // rax
  bool v82; // zf
  std::__future_base::_Result_base *v83; // rbp
  void (__fastcall *v84)(std::__future_base::_Result_base *); // rdx
  void (__fastcall *v85)(std::__future_base::_Result_base *); // rax
  std::__future_base::_Result_base *v86; // rdi
  volatile signed __int32 *v87; // rbp
  int v88; // eax
  signed __int32 v89; // eax
  volatile signed __int32 *v90; // rbx
  volatile signed __int32 *v91; // rdx
  signed __int32 v92; // eax
  int v93; // eax
  int v94; // eax
  __int64 v95; // rax
  __int64 v96; // rax
  std::__future_base::_Result_base *v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  volatile signed __int32 *v100; // rdi
  __int64 v101; // rax
  volatile signed __int32 *v102; // rdi
  __int64 v103; // rax
  __m128i v104; // [rsp+0h] [rbp-258h] BYREF
  void *v105; // [rsp+18h] [rbp-240h]
  __m128i v106; // [rsp+20h] [rbp-238h] BYREF
  __m128i v107; // [rsp+30h] [rbp-228h] BYREF
  __m128i v108; // [rsp+40h] [rbp-218h] BYREF
  __m128i v109; // [rsp+50h] [rbp-208h] BYREF
  pthread_mutex_t *mutex; // [rsp+60h] [rbp-1F8h]
  unsigned __int64 v111; // [rsp+68h] [rbp-1F0h]
  __int64 v112; // [rsp+70h] [rbp-1E8h]
  char v113; // [rsp+7Fh] [rbp-1D9h]
  _QWORD *v114; // [rsp+80h] [rbp-1D8h]
  __int64 v115; // [rsp+88h] [rbp-1D0h]
  __m128i v116; // [rsp+90h] [rbp-1C8h] BYREF
  __int64 *v117; // [rsp+A0h] [rbp-1B8h]
  volatile signed __int32 *v118; // [rsp+A8h] [rbp-1B0h]
  void **v119; // [rsp+B0h] [rbp-1A8h]
  volatile signed __int32 *v120; // [rsp+B8h] [rbp-1A0h]
  char v121; // [rsp+CFh] [rbp-189h] BYREF
  __int64 v122; // [rsp+D0h] [rbp-188h] BYREF
  __m128i *v123; // [rsp+D8h] [rbp-180h] BYREF
  char *v124; // [rsp+E0h] [rbp-178h] BYREF
  std::__future_base::_Result_base *v125; // [rsp+E8h] [rbp-170h] BYREF
  __int64 v126; // [rsp+F0h] [rbp-168h] BYREF
  volatile signed __int32 *v127; // [rsp+F8h] [rbp-160h]
  _QWORD v128[2]; // [rsp+100h] [rbp-158h] BYREF
  __int128 v129; // [rsp+110h] [rbp-148h] BYREF
  _QWORD *v130; // [rsp+120h] [rbp-138h]
  __int64 v131; // [rsp+130h] [rbp-128h] BYREF
  volatile signed __int32 *v132; // [rsp+138h] [rbp-120h]
  std::__future_base::_Result_base *v133; // [rsp+140h] [rbp-118h]
  __int128 v134; // [rsp+150h] [rbp-108h] BYREF
  const char *v135; // [rsp+160h] [rbp-F8h]
  __int64 v136; // [rsp+168h] [rbp-F0h]
  void *v137[2]; // [rsp+170h] [rbp-E8h] BYREF
  __m128i v138; // [rsp+180h] [rbp-D8h]
  __m128i v139; // [rsp+190h] [rbp-C8h] BYREF
  __int128 v140; // [rsp+1A0h] [rbp-B8h]
  __m128i v141; // [rsp+1B0h] [rbp-A8h] BYREF
  __m128i v142; // [rsp+1C0h] [rbp-98h]
  char v143; // [rsp+1D0h] [rbp-88h]
  signed __int64 v144; // [rsp+1D8h] [rbp-80h]
  __m128i v145; // [rsp+1E0h] [rbp-78h] BYREF
  __m128i v146; // [rsp+1F0h] [rbp-68h] BYREF
  char v147; // [rsp+200h] [rbp-58h]
  signed __int64 v148; // [rsp+208h] [rbp-50h]
  unsigned __int64 v149; // [rsp+218h] [rbp-40h]

  v115 = a1;
  v149 = __readfsqword(0x28u);
  v13 = a3[1] - *a3 + 0x3FFFFFLL;
  if ( v13 <= (unsigned __int64)&loc_3FFFFF )
  {
    v82 = *(_QWORD *)(a5 + 16) == 0;
    v138.m128i_i64[0] = 0;
    LOBYTE(v131) = 1;
    *(_OWORD *)v137 = 0;
    if ( v82 )
    {
      v119 = v137;
      std::__throw_bad_function_call();
    }
    v119 = v137;
    (*(void (__fastcall **)(__int64, __int64 *, void **))(a5 + 24))(a5, &v131, v137);
    if ( v137[0] )
      operator delete(v137[0], v138.m128i_i64[0] - (unsigned __int64)v137[0]);
  }
  else
  {
    v104.m128i_i64[0] = a5;
    v17 = (__int64)v137;
    v137[0] = nullptr;
    v119 = v137;
    v130 = nullptr;
    v106.m128i_i64[0] = (__int64)&v129;
    v129 = 0;
    sub_4351F0((__int64)&v129, v137);
    v19 = v13 >> 22;
    v20 = *((_QWORD **)&v129 + 1);
    v21 = (const __m128i *)v104.m128i_i64[0];
    v105 = (void *)v129;
    v114 = v130;
    if ( v19 != 1 )
    {
      v22 = 0x400000;
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
            if ( v22 < *v27 )
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
        v17 = (__int64)v114;
        v137[0] = v29;
        if ( v20 == v114 )
        {
          *((_QWORD *)&v129 + 1) = v20;
          v130 = v20;
          v17 = (__int64)v119;
          v107.m128i_i64[0] = (__int64)v21;
          v104.m128i_i64[0] = v23;
          *(_QWORD *)&v129 = v105;
          sub_4351F0(v106.m128i_i64[0], v119);
          v23 = v104.m128i_i64[0];
          v22 += 0x400000LL;
          v21 = (const __m128i *)v107.m128i_i64[0];
          v20 = *((_QWORD **)&v129 + 1);
          v105 = (void *)v129;
          v114 = v130;
          if ( v22 == v104.m128i_i64[0] )
            break;
        }
        else
        {
          *v20++ = v29;
LABEL_14:
          v22 += 0x400000LL;
          if ( v22 == v23 )
            break;
        }
      }
    }
    v30 = (void *)(a3[1] - *a3);
    v137[0] = v30;
    if ( v114 == v20 )
    {
      v104.m128i_i64[0] = (__int64)v21;
      *(_QWORD *)&v129 = v105;
      *((_QWORD *)&v129 + 1) = v114;
      v130 = v114;
      sub_4351F0(v106.m128i_i64[0], v119);
      v17 = (__int64)v130;
      v21 = (const __m128i *)v104.m128i_i64[0];
      v31 = *((char **)&v129 + 1);
      v105 = (void *)v129;
      v114 = v130;
    }
    else
    {
      *v20 = v30;
      v31 = (char *)(v20 + 1);
    }
    *(_QWORD *)&v140 = 0;
    v139 = 0;
    v32 = ((v31 - (_BYTE *)v105) >> 3) - 1;
    if ( v32 <= v19 )
      v19 = v32;
    *((_QWORD *)&v140 + 1) = v21[1].m128i_i64[1];
    v33 = v21[1].m128i_i64[0];
    v111 = v19;
    if ( v33 )
    {
      v34 = _mm_loadu_si128(v21);
      *(_QWORD *)&v140 = v33;
      v139 = v34;
      v21[1] = 0;
    }
    sub_982660(&v126);
    v35 = (__int64 *)operator new(0x90u);
    v120 = (volatile signed __int32 *)(v35 + 1);
    v142.m128i_i64[0] = 0;
    v35[1] = 0x100000001LL;
    *v35 = (__int64)off_2B2D6C0;
    v117 = v35 + 2;
    v142.m128i_i64[1] = 0;
    v141 = 0;
    v36 = operator new(0x20u);
    v37 = *((_QWORD *)&v140 + 1);
    *(_QWORD *)(v36 + 16) = 0;
    *(_OWORD *)v36 = 0;
    *(_QWORD *)(v36 + 24) = v37;
    if ( (_QWORD)v140 )
    {
      v38 = _mm_load_si128(&v139);
      *(_QWORD *)(v36 + 16) = v140;
      *(__m128i *)v36 = v38;
      v140 = 0;
    }
    v141.m128i_i64[0] = v36;
    v39 = _mm_loadh_ps((const double *)(a6 + 8));
    v142 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_2B2D7B0), (__m128i)(unsigned __int64)sub_50A4D0);
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
      v43 = v142;
    }
    else
    {
      v43.m128i_i64[0] = (__int64)sub_509420;
      v43.m128i_i64[1] = (__int64)sub_50A4D0;
    }
    *((__m128 *)v35 + 2) = v40;
    v146.m128i_i64[0] = 0;
    v146.m128i_i64[1] = v43.m128i_i64[1];
    *((__m128i *)v35 + 1) = v42;
    *((__m128 *)v35 + 3) = v39;
    v145 = 0;
    if ( v43.m128i_i64[0] )
    {
      v44 = _mm_load_si128(&v141);
      v146.m128i_i64[0] = v43.m128i_i64[0];
      *((_OWORD *)v35 + 4) = 0;
      v17 = (__int64)&v145;
      v145 = v44;
      v35[10] = 0;
      v35[11] = 0;
      v142 = 0;
      ((void (__fastcall *)(__int64 *, __m128i *, __int64))v43.m128i_i64[0])(v35 + 8, &v145, 2);
      *((__m128i *)v35 + 5) = _mm_load_si128(&v146);
    }
    else
    {
      v35[10] = 0;
      v35[11] = 0;
      *((_OWORD *)v35 + 4) = 0;
    }
    v45 = v111;
    *((_BYTE *)v35 + 104) = 0;
    v35[16] = 0;
    v35[12] = v45;
    *((_OWORD *)v35 + 7) = 0;
    if ( v45 )
    {
      v17 = v111;
      sub_444A40((__m128i **)v35 + 14, v111);
    }
    if ( v146.m128i_i64[0] )
    {
      v17 = (__int64)&v145;
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v146.m128i_i64[0])(&v145, &v145, 3);
    }
    v35[17] = *(_QWORD *)(v35[2] + 56);
    if ( v142.m128i_i64[0] )
    {
      v17 = (__int64)&v141;
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v142.m128i_i64[0])(&v141, &v141, 3);
    }
    if ( v111 )
    {
      v46 = 0;
      v116 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B2D7B8), (__m128i)(unsigned __int64)sub_5094F0);
      while ( 1 )
      {
        v108.m128i_i64[0] = v46;
        v67 = v126;
        v68 = *((void (__fastcall *****)(_QWORD))v105 + v46++);
        v69 = *((_QWORD *)v105 + v46);
        v106.m128i_i64[0] = (__int64)v68;
        v107.m128i_i64[0] = v69;
        if ( v35 )
        {
          if ( &_pthread_key_create )
            _InterlockedAdd(v120, 1u);
          else
            ++*((_DWORD *)v35 + 2);
        }
        mutex = (pthread_mutex_t *)(v67 + 48);
        if ( &_pthread_key_create )
        {
          v70 = pthread_mutex_lock((pthread_mutex_t *)(v67 + 48));
          if ( v70 )
            std::__throw_system_error(v70);
        }
        v113 = *(_BYTE *)(v67 + 24);
        if ( !v113 )
          break;
        v131 = 0;
        v71 = operator new(0x30u);
        *(_BYTE *)(v71 + 36) = 0;
        *(_QWORD *)(v71 + 24) = 0;
        *(_QWORD *)(v71 + 8) = 0x100000001LL;
        *(_QWORD *)v71 = off_2B28920;
        *(_DWORD *)(v71 + 32) = 0;
        *(_DWORD *)(v71 + 40) = 0;
        *(_QWORD *)(v71 + 16) = &off_2B287B8;
        v132 = (volatile signed __int32 *)v71;
        v131 = v71 + 16;
        v72 = (std::__future_base::_Result_base *)operator new(0x38u);
        v107 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v128, (__m128i)(unsigned __int64)&v122);
        v108.m128i_i64[0] = (__int64)&v131;
        v106 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v123, (__m128i)(unsigned __int64)&v124);
        v104 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v131, (__m128i)(unsigned __int64)&v134);
        std::__future_base::_Result_base::_Result_base(v72);
        *((_BYTE *)v72 + 48) = 0;
        v133 = v72;
        v73 = v131;
        v74 = _mm_load_si128(&v104);
        v75 = _mm_load_si128(&v106);
        *(_QWORD *)v72 = &off_2B2D698;
        v49 = v132;
        v76 = _mm_load_si128(&v107);
        if ( v132 )
        {
          if ( &_pthread_key_create )
            _InterlockedAdd(v132 + 2, 1u);
          else
            ++*((_DWORD *)v132 + 2);
        }
        if ( !v73 )
        {
          std::__throw_future_error(3);
LABEL_171:
          v11 = (struct _Unwind_Exception *)std::__throw_future_error(1);
          if ( v49 )
            sub_4343A0(v49);
          v6 = v11;
          sub_50B230((__int64 *)v108.m128i_i64[0], v68);
          v10 = (volatile signed __int32 *)v35;
LABEL_161:
          if ( &_pthread_key_create )
            pthread_mutex_unlock(mutex);
LABEL_163:
          if ( v10 )
            sub_4343A0(v10);
          if ( v35 )
            sub_4343A0((volatile signed __int32 *)v35);
          if ( v127 )
            sub_4343A0(v127);
          sub_377BA0((__int64)&v139);
          if ( v105 )
            operator delete(v105, (char *)v114 - (_BYTE *)v105);
          _Unwind_Resume(v6);
        }
        v77 = *(_BYTE *)(v73 + 20);
        *(_BYTE *)(v73 + 20) = 1;
        if ( v77 )
          goto LABEL_171;
        v78 = v131;
        v134 = 0;
        v136 = 0;
        DWORD2(v134) = -2147483646;
        v135 = "shutting down";
        if ( !v131 )
        {
          std::__throw_future_error(3);
LABEL_175:
          v80 = -1;
LABEL_176:
          std::__throw_system_error(v80);
        }
        v145 = v74;
        *(__m128i *)v137 = v76;
        v124 = &v121;
        v146 = _mm_unpacklo_epi64(_mm_loadl_epi64(&off_2B2D7C0), (__m128i)(unsigned __int64)sub_509180);
        v138 = v75;
        v121 = 0;
        v123 = &v145;
        v122 = v131;
        v128[0] = sub_439930;
        v128[1] = 0;
        addr = (void ***)__tls_get_addr(&std::__once_callable);
        *addr = v119;
        *(_QWORD *)__tls_get_addr(&std::__once_call) = sub_438D10;
        if ( !&_pthread_key_create )
          goto LABEL_175;
        v17 = (__int64)&_once_proxy;
        v80 = pthread_once((pthread_once_t *)(v78 + 24), (void (*)(void))&_once_proxy);
        if ( v80 )
          goto LABEL_176;
        *(_QWORD *)__tls_get_addr(&std::__once_callable) = 0;
        v81 = (_QWORD *)__tls_get_addr(&std::__once_call);
        v82 = v121 == 0;
        *v81 = 0;
        if ( v82 )
        {
          std::__throw_future_error(2);
          BUG();
        }
        if ( _InterlockedExchange((volatile __int32 *)(v78 + 16), 1) < 0 )
          std::__atomic_futex_unsigned_base::_M_futex_notify_all(
            (std::__atomic_futex_unsigned_base *)(v78 + 16),
            (unsigned int *)&_once_proxy);
        if ( v146.m128i_i64[0] )
        {
          v17 = (__int64)&v145;
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v146.m128i_i64[0])(&v145, &v145, 3);
        }
        if ( v131 && (!v132 || *((_DWORD *)v132 + 2) != 1) )
        {
          v97 = v133;
          v17 = (__int64)&v125;
          v133 = nullptr;
          v125 = v97;
          sub_5096D0(v131, &v125);
          if ( v125 )
            (**(void (__fastcall ***)(std::__future_base::_Result_base *))v125)(v125);
        }
        v83 = v133;
        if ( v133 )
        {
          v84 = **(void (__fastcall ***)(std::__future_base::_Result_base *))v133;
          if ( v84 == sub_509220 )
          {
            v85 = *(void (__fastcall **)(std::__future_base::_Result_base *))(*(_QWORD *)v133 + 16LL);
            if ( v85 == sub_509090 )
            {
              v86 = v133;
              *(_QWORD *)v133 = &off_2B2D698;
              std::__future_base::_Result_base::~_Result_base(v86);
              v17 = 56;
              operator delete(v83, 0x38u);
            }
            else
            {
              v85(v133);
            }
          }
          else
          {
            v84(v133);
          }
        }
        v87 = v132;
        if ( v132 )
        {
          if ( *((_QWORD *)v132 + 1) == 0x100000001LL )
          {
            v99 = *(_QWORD *)v132;
            v100 = v132;
            *((_QWORD *)v132 + 1) = 0;
            (*(void (__fastcall **)(volatile signed __int32 *))(v99 + 16))(v100);
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v87 + 24LL))(v87);
          }
          else if ( !_InterlockedSub(v132 + 2, 1u) )
          {
            sub_434350(v87);
          }
        }
        v65 = (volatile signed __int32 *)v35;
        pthread_mutex_unlock(mutex);
        if ( !v49 )
          goto LABEL_60;
        v104.m128i_i64[0] = (__int64)(v49 + 2);
LABEL_57:
        v17 = 0x100000001LL;
        if ( *(_QWORD *)v104.m128i_i64[0] == 0x100000001LL )
        {
          v95 = *(_QWORD *)v49;
          *((_QWORD *)v49 + 1) = 0;
          (*(void (__fastcall **)(volatile signed __int32 *))(v95 + 16))(v49);
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 24LL))(v49);
          goto LABEL_60;
        }
        if ( &_pthread_key_create )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v104.m128i_i64[0], 0xFFFFFFFF) == 1 )
            goto LABEL_117;
        }
        else
        {
          v93 = *((_DWORD *)v49 + 2);
          *((_DWORD *)v49 + 2) = v93 - 1;
          if ( v93 == 1 )
LABEL_117:
            sub_434350(v49);
        }
LABEL_60:
        if ( v65 )
        {
          v66 = v65 + 2;
          if ( *((_QWORD *)v65 + 1) == 0x100000001LL )
          {
            v96 = *(_QWORD *)v65;
            *((_QWORD *)v65 + 1) = 0;
            (*(void (__fastcall **)(volatile signed __int32 *, __int64, volatile signed __int32 *))(v96 + 16))(
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
            v88 = *((_DWORD *)v65 + 2);
            *((_DWORD *)v65 + 2) = v88 - 1;
            if ( v88 != 1 )
              goto LABEL_64;
          }
          sub_434350(v65);
          if ( v111 == v46 )
            goto LABEL_100;
        }
        else
        {
LABEL_64:
          if ( v111 == v46 )
            goto LABEL_100;
        }
      }
      v112 = *(_QWORD *)(v67 + 8);
      v47 = *(_QWORD *)(v67 + 16);
      v109.m128i_i64[0] = v47;
      if ( v47 )
      {
        if ( &_pthread_key_create )
          _InterlockedAdd((volatile signed __int32 *)(v109.m128i_i64[0] + 12), 1u);
        else
          ++*(_DWORD *)(v47 + 12);
      }
      v48 = (_QWORD *)operator new(0x20u);
      v48[1] = 0x100000001LL;
      *v48 = off_2B2D6F8;
      v104.m128i_i64[0] = (__int64)(v48 + 2);
      v49 = (volatile signed __int32 *)operator new(0x78u);
      v104.m128i_i64[0] = (__int64)(v49 + 2);
      *((_QWORD *)v49 + 3) = 0;
      *((_QWORD *)v49 + 1) = 0x100000001LL;
      *(_QWORD *)v49 = off_2B2D778;
      v118 = v49 + 4;
      *((_QWORD *)v49 + 4) = 0;
      *((_QWORD *)v49 + 5) = 0;
      *((_QWORD *)v49 + 2) = &unk_2BFAEF0;
      v50 = (std::__future_base::_Result_base *)operator new(0x38u);
      v51 = _mm_loadh_ps((const double *)v106.m128i_i64);
      v52 = _mm_loadh_ps((const double *)v109.m128i_i64);
      v106.m128i_i64[0] = (__int64)v50;
      v109 = (__m128i)v52;
      v108 = (__m128i)v51;
      std::__future_base::_Result_base::_Result_base(v50);
      v53 = v106.m128i_i64[0];
      v54 = _mm_load_si128(&v108);
      v55 = _mm_load_si128(&v109);
      *((_QWORD *)v49 + 2) = &off_2B2D730;
      v56 = v115;
      *(_BYTE *)(v53 + 48) = 0;
      *(_QWORD *)v53 = &off_2B2D698;
      *((_QWORD *)v49 + 7) = v56;
      v57 = v117;
      *((_QWORD *)v49 + 6) = v53;
      *((_QWORD *)v49 + 8) = v57;
      v58 = v107.m128i_i64[0];
      *((_QWORD *)v49 + 9) = v35;
      *((_QWORD *)v49 + 12) = v58;
      v48[2] = v49 + 4;
      v48[3] = v49;
      *((__m128i *)v49 + 5) = v54;
      *(__m128i *)(v49 + 26) = v55;
      if ( v49 )
      {
        if ( &_pthread_key_create )
        {
          _InterlockedAdd(v49 + 2, 1u);
          _InterlockedAdd(v49 + 2, 1u);
        }
        else
        {
          ++*((_DWORD *)v49 + 2);
          ++*((_DWORD *)v49 + 2);
        }
      }
      v59 = *((_BYTE *)v49 + 36);
      *((_BYTE *)v49 + 36) = 1;
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
        if ( v109.m128i_i64[0] )
        {
          if ( &_pthread_key_create )
          {
            v8 = _InterlockedExchangeAdd((volatile signed __int32 *)(v109.m128i_i64[0] + 12), 0xFFFFFFFF);
          }
          else
          {
            v7 = v109.m128i_i64[0];
            v8 = *(_DWORD *)(v109.m128i_i64[0] + 12);
            *(_DWORD *)(v109.m128i_i64[0] + 12) = v8 - 1;
          }
          if ( v8 == 1 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v109.m128i_i64[0] + 24LL))(v109.m128i_i64[0]);
        }
        v113 = 1;
        if ( v35 )
        {
          v9 = (volatile signed __int32 *)(v35 + 1);
          if ( v35[1] == 0x100000001LL )
          {
            v35[1] = 0;
            (*(void (__fastcall **)(__int64 *, __int64, volatile signed __int32 *))(*v35 + 16))(v35, v7, v9);
            (*(void (__fastcall **)(__int64 *))(*v35 + 24))(v35);
          }
          else
          {
            if ( &_pthread_key_create )
            {
              v12 = _InterlockedExchangeAdd(v9, 0xFFFFFFFF);
            }
            else
            {
              v12 = *((_DWORD *)v35 + 2);
              *((_DWORD *)v35 + 2) = v12 - 1;
            }
            if ( v12 == 1 )
              sub_434350((volatile signed __int32 *)v35);
          }
        }
        v10 = nullptr;
        if ( v113 )
          goto LABEL_161;
        goto LABEL_163;
      }
      if ( *(_QWORD *)v104.m128i_i64[0] == 0x100000001LL )
      {
        v98 = *(_QWORD *)v49;
        *((_QWORD *)v49 + 1) = 0;
        (*(void (__fastcall **)(volatile signed __int32 *))(v98 + 16))(v49);
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 24LL))(v49);
      }
      else
      {
        if ( &_pthread_key_create )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v104.m128i_i64[0], 0xFFFFFFFF) != 1 )
            goto LABEL_48;
        }
        else
        {
          v94 = *((_DWORD *)v49 + 2);
          *((_DWORD *)v49 + 2) = v94 - 1;
          if ( v94 != 1 )
            goto LABEL_48;
        }
        sub_434350(v49);
      }
LABEL_48:
      v142 = 0u;
      v141 = 0;
      v60 = (_QWORD *)operator new(0x10u);
      v60[1] = v48;
      v61 = _mm_load_si128(&v116);
      *v60 = v48 + 2;
      v141.m128i_i64[0] = (__int64)v60;
      v143 = 1;
      v142 = v61;
      v62 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v67 + 176), 1u);
      v144 = v62;
      if ( &_pthread_key_create )
      {
        pthread_mutex_unlock(mutex);
        v62 = v144;
      }
      v63 = *(void (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v67 + 16LL);
      v146.m128i_i64[0] = 0;
      v145 = 0;
      v146.m128i_i64[1] = v142.m128i_i64[1];
      if ( v142.m128i_i64[0] )
      {
        v64 = _mm_load_si128(&v141);
        v146.m128i_i64[0] = v142.m128i_i64[0];
        v145 = v64;
        v142 = 0;
      }
      v148 = v62;
      v17 = (__int64)&v145;
      v147 = v143;
      v63(v67, &v145);
      if ( v146.m128i_i64[0] )
      {
        v17 = (__int64)&v145;
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v146.m128i_i64[0])(&v145, &v145, 3);
      }
      if ( v142.m128i_i64[0] )
      {
        v17 = (__int64)&v141;
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v142.m128i_i64[0])(&v141, &v141, 3);
      }
      v65 = nullptr;
      if ( !v49 )
        goto LABEL_64;
      goto LABEL_57;
    }
LABEL_100:
    if ( v35 )
    {
      if ( v35[1] == 0x100000001LL )
      {
        v103 = *v35;
        v35[1] = 0;
        (*(void (__fastcall **)(__int64 *))(v103 + 16))(v35);
        (*(void (__fastcall **)(__int64 *))(*v35 + 24))(v35);
      }
      else
      {
        if ( &_pthread_key_create )
        {
          v89 = _InterlockedExchangeAdd(v120, 0xFFFFFFFF);
        }
        else
        {
          v89 = *((_DWORD *)v35 + 2);
          *((_DWORD *)v35 + 2) = v89 - 1;
        }
        if ( v89 == 1 )
          sub_434350((volatile signed __int32 *)v35);
      }
    }
    v90 = v127;
    if ( v127 )
    {
      v91 = v127 + 2;
      if ( *((_QWORD *)v127 + 1) == 0x100000001LL )
      {
        v101 = *(_QWORD *)v127;
        v102 = v127;
        *((_QWORD *)v127 + 1) = 0;
        (*(void (__fastcall **)(volatile signed __int32 *, __int64, volatile signed __int32 *))(v101 + 16))(
          v102,
          v17,
          v91);
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v90 + 24LL))(v90);
      }
      else
      {
        if ( &_pthread_key_create )
        {
          v92 = _InterlockedExchangeAdd(v91, 0xFFFFFFFF);
        }
        else
        {
          v92 = *((_DWORD *)v127 + 2);
          *((_DWORD *)v127 + 2) = v92 - 1;
        }
        if ( v92 == 1 )
          sub_434350(v90);
      }
    }
    if ( (_QWORD)v140 )
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v140)(&v139, &v139, 3);
    if ( v105 )
      operator delete(v105, (char *)v114 - (_BYTE *)v105);
  }
}
