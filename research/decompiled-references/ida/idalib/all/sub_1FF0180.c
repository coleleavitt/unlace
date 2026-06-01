_QWORD *__fastcall sub_1FF0180(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  const char *v4; // rax
  unsigned int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r12
  unsigned int v8; // ebx
  __int64 v9; // rbp
  __m128 v11; // xmm0
  __int64 (__fastcall *v12)(__int64); // rax
  __m128i si128; // xmm0
  __int64 v14; // rsi
  _BYTE **v15; // rbp
  __m128i v16; // xmm1
  __m128i v17; // xmm2
  __m128i v18; // xmm3
  __int64 v19; // rax
  __m128i *v20; // rax
  __m128i v21; // xmm4
  __m128i v22; // xmm5
  __m128i v23; // xmm6
  __m128i *v24; // rdx
  __int64 *v25; // rdi
  volatile signed __int32 *v26; // rbx
  __int64 v27; // rdx
  __int64 *v28; // rax
  __int64 v29; // rdx
  __m128i v30; // xmm0
  int v31; // eax
  __m128i v32; // rax
  __m128i v33; // xmm0
  __m128i v34; // xmm7
  unsigned __int64 v35; // rax
  __int32 v36; // esi
  void **v37; // rbp
  void **v38; // rbx
  void **v39; // r13
  void **v40; // rbp
  void *v41; // r14
  _QWORD *v42; // rdi
  void **v43; // rbx
  int v44; // eax
  signed __int32 v45; // eax
  unsigned int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rbp
  unsigned int v49; // ebx
  __int64 v50; // r13
  __m128 v51; // [rsp+0h] [rbp-448h] BYREF
  void **v52; // [rsp+18h] [rbp-430h]
  __m128 v53; // [rsp+20h] [rbp-428h] BYREF
  __int64 v54; // [rsp+30h] [rbp-418h]
  __m128i **v55; // [rsp+38h] [rbp-410h]
  __int64 v56; // [rsp+40h] [rbp-408h]
  _QWORD *v57; // [rsp+48h] [rbp-400h]
  __int64 v58; // [rsp+50h] [rbp-3F8h]
  void **v59; // [rsp+58h] [rbp-3F0h]
  _BYTE **v60; // [rsp+60h] [rbp-3E8h]
  __m128i *v61; // [rsp+68h] [rbp-3E0h] BYREF
  __m128 *v62; // [rsp+70h] [rbp-3D8h]
  _OWORD **v63; // [rsp+78h] [rbp-3D0h]
  __m128 *v64; // [rsp+80h] [rbp-3C8h]
  __m128i *v65; // [rsp+88h] [rbp-3C0h]
  void **v66; // [rsp+90h] [rbp-3B8h] BYREF
  void *v67; // [rsp+98h] [rbp-3B0h]
  int v68; // [rsp+A4h] [rbp-3A4h] BYREF
  _OWORD *v69; // [rsp+A8h] [rbp-3A0h] BYREF
  __m128 v70; // [rsp+B0h] [rbp-398h] BYREF
  _BYTE v71[16]; // [rsp+C0h] [rbp-388h] BYREF
  __m128i v72; // [rsp+D0h] [rbp-378h] BYREF
  void *v73[2]; // [rsp+E0h] [rbp-368h] BYREF
  void *v74; // [rsp+F0h] [rbp-358h]
  void *v75; // [rsp+100h] [rbp-348h] BYREF
  __int64 v76; // [rsp+108h] [rbp-340h]
  char v77; // [rsp+110h] [rbp-338h] BYREF
  void *v78[4]; // [rsp+120h] [rbp-328h] BYREF
  void *v79[4]; // [rsp+140h] [rbp-308h] BYREF
  __m128i *v80; // [rsp+160h] [rbp-2E8h] BYREF
  __m128 v81; // [rsp+170h] [rbp-2D8h]
  __m128i v82; // [rsp+180h] [rbp-2C8h] BYREF
  __m128i v83; // [rsp+190h] [rbp-2B8h]
  _OWORD v84[2]; // [rsp+1A0h] [rbp-2A8h] BYREF
  __int64 v85; // [rsp+1C0h] [rbp-288h]
  __m128i v86; // [rsp+1D0h] [rbp-278h] BYREF
  void (__fastcall *v87)(unsigned __int64, unsigned __int64, __int64); // [rsp+1E0h] [rbp-268h]
  __int64 v88; // [rsp+1E8h] [rbp-260h]
  __int64 v89; // [rsp+1F0h] [rbp-258h]
  __m128 v90; // [rsp+200h] [rbp-248h] BYREF
  __m128i v91; // [rsp+210h] [rbp-238h] BYREF
  __m128i v92; // [rsp+220h] [rbp-228h] BYREF
  void *v93; // [rsp+230h] [rbp-218h]
  __int64 v94; // [rsp+238h] [rbp-210h]
  __m128i v95; // [rsp+240h] [rbp-208h] BYREF
  __m128i v96; // [rsp+250h] [rbp-1F8h] BYREF
  __m128i v97; // [rsp+260h] [rbp-1E8h] BYREF
  __m128i v98; // [rsp+270h] [rbp-1D8h] BYREF
  void *v99; // [rsp+280h] [rbp-1C8h]
  __int64 v100; // [rsp+288h] [rbp-1C0h]
  __m128i v101; // [rsp+290h] [rbp-1B8h] BYREF
  void **v102; // [rsp+2A0h] [rbp-1A8h] BYREF
  void *v103; // [rsp+2A8h] [rbp-1A0h]
  __int16 v104; // [rsp+2C0h] [rbp-188h]
  __int64 v105; // [rsp+300h] [rbp-148h] BYREF
  __int64 v106; // [rsp+310h] [rbp-138h]
  __int64 v107; // [rsp+320h] [rbp-128h]
  __int64 v108; // [rsp+328h] [rbp-120h]
  __int64 v109; // [rsp+330h] [rbp-118h]
  __int64 v110; // [rsp+338h] [rbp-110h]
  __int64 v111; // [rsp+348h] [rbp-100h]
  pthread_mutex_t v112; // [rsp+350h] [rbp-F8h] BYREF
  __int64 v113; // [rsp+378h] [rbp-D0h] BYREF
  int v114; // [rsp+3D8h] [rbp-70h]

  v4 = "No action to execute.";
  v57 = a1;
  v56 = a2;
  v58 = a3;
  if ( !a4 )
    goto LABEL_4;
  if ( a4 != 1 )
  {
    v4 = "Only support executing exactly 1 action at this point.";
LABEL_4:
    v102 = (void **)v4;
    v104 = 259;
    v5 = sub_2220490(a1);
    v7 = v6;
    v8 = v5;
    v9 = operator new(0x40u);
    sub_2220590(v9, &v102, v8, v7);
    *v57 = v9;
    return v57;
  }
  v76 = 0;
  v51.m128_u64[0] = (unsigned __int64)v84;
  v66 = &v75;
  v75 = &v77;
  memset(v84, 0, sizeof(v84));
  v11 = _mm_loadh_ps((const double *)&v66);
  v77 = 0;
  v70 = v11;
  v67 = v71;
  v85 = 0;
  v69 = v84;
  *(_OWORD *)v73 = 0;
  v74 = nullptr;
  sub_2233940(v71, unk_2CD9278, unk_2CD9280, 0);
  v12 = *(__int64 (__fastcall **)(__int64))(**(_QWORD **)(v56 + 80) + 24LL);
  if ( v12 == sub_1FECA50 )
    goto LABEL_7;
  v12((__int64)&v102);
  v39 = v102;
  v40 = (void **)v103;
  if ( v102 == v103 )
    goto LABEL_58;
  v41 = v67;
  do
  {
    while ( !(unsigned __int8)sub_2233DC0(v41, *v39, v39[1], 0, 0) )
    {
LABEL_50:
      v39 += 4;
      if ( v40 == v39 )
        goto LABEL_54;
    }
    v42 = v73[1];
    if ( v73[1] == v74 )
    {
      sub_10BCB90((void ***)v73, (const __m128i *)v73[1], (__int64)v39);
      goto LABEL_50;
    }
    v39 += 4;
    *(_QWORD *)v73[1] = (char *)v73[1] + 16;
    sub_1FEDCB0(v42, *(v39 - 4), (__int64)*(v39 - 3) + (_QWORD)*(v39 - 4));
    v73[1] = (char *)v73[1] + 32;
  }
  while ( v40 != v39 );
LABEL_54:
  v43 = (void **)v103;
  v40 = v102;
  if ( v103 != v102 )
  {
    do
    {
      while ( *v40 != v40 + 2 )
      {
        operator delete(*v40);
        v40 += 4;
        if ( v43 == v40 )
          goto LABEL_57;
      }
      v40 += 4;
    }
    while ( v43 != v40 );
LABEL_57:
    v40 = v102;
  }
LABEL_58:
  if ( v40 )
    operator delete(v40);
LABEL_7:
  v51.m128_u64[0] = (unsigned __int64)&v68;
  v59 = v78;
  v51 = _mm_loadh_ps((const double *)v51.m128_u64);
  sub_D8B070(
    v78,
    (__int64 (__fastcall *)(_BYTE *, __int64, __int64, __va_list_tag *))&vsnprintf,
    32,
    (__int64)"%lu",
    ((char *)v73[1] - (char *)v73[0]) >> 5);
  si128 = _mm_load_si128((const __m128i *)&v51);
  v68 = 0;
  v14 = *(unsigned int *)(v56 + 136);
  v72 = si128;
  sub_22498A0(&v102, v14 | 0x100000000LL);
  v15 = (_BYTE **)v73[0];
  v60 = (_BYTE **)v73[1];
  if ( v73[1] != v73[0] )
  {
    v63 = &v69;
    v61 = &v72;
    v52 = v79;
    v64 = &v70;
    v62 = &v90;
    v51.m128_u64[0] = (unsigned __int64)&v86;
    v55 = &v80;
    v65 = &v82;
    while ( 1 )
    {
      v79[0] = v52 + 2;
      sub_1FEDCB0(v52, *v15, (__int64)&v15[1][(_QWORD)*v15]);
      v93 = &v95;
      v91.m128i_i64[0] = (__int64)v59;
      v90 = _mm_loadh_ps((const double *)&v61);
      v91.m128i_i64[1] = v56;
      v92.m128i_i64[0] = v58;
      v92.m128i_i64[1] = (__int64)v64;
      sub_1FEDCB0((__m128 *)v62[3].m128_u64, (_BYTE *)v79[0], (__int64)v79[0] + (unsigned __int64)v79[1]);
      v16 = _mm_load_si128((const __m128i *)&v90);
      v99 = &v101;
      v17 = _mm_load_si128(&v91);
      v18 = _mm_load_si128(&v92);
      v96 = v16;
      v97 = v17;
      v98 = v18;
      if ( v93 == &v95 )
      {
        v101 = _mm_load_si128(&v95);
      }
      else
      {
        v99 = v93;
        v101.m128i_i64[0] = v95.m128i_i64[0];
      }
      v19 = v94;
      v93 = &v95;
      v94 = 0;
      v100 = v19;
      v95.m128i_i8[0] = 0;
      v81.m128_u64[0] = 0;
      v20 = (__m128i *)operator new(0x50u);
      v21 = _mm_load_si128(&v96);
      v22 = _mm_load_si128(&v97);
      v23 = _mm_load_si128(&v98);
      v20[3].m128i_i64[0] = (__int64)v20[4].m128i_i64;
      v24 = (__m128i *)v99;
      *v20 = v21;
      v20[1] = v22;
      v20[2] = v23;
      if ( v24 == &v101 )
      {
        v20[4] = _mm_load_si128(&v101);
      }
      else
      {
        v20[3].m128i_i64[0] = (__int64)v24;
        v20[4].m128i_i64[0] = v101.m128i_i64[0];
      }
      v25 = (__int64 *)v51.m128_u64[0];
      v99 = &v101;
      v101.m128i_i8[0] = 0;
      v20[3].m128i_i64[1] = v100;
      v80 = v20;
      v100 = 0;
      v81 = _mm_loadh_ps((const double *)&off_2BE4C68);
      sub_1FEFCF0(v25, 2, (__m128i *)v55);
      v26 = (volatile signed __int32 *)v86.m128i_i64[1];
      v27 = v86.m128i_i64[0];
      if ( v86.m128i_i64[1] )
      {
        if ( &_pthread_key_create )
          _InterlockedAdd((volatile signed __int32 *)(v86.m128i_i64[1] + 8), 1u);
        else
          ++*(_DWORD *)(v86.m128i_i64[1] + 8);
      }
      v54 = v27;
      v83.m128i_i64[0] = 0;
      v53 = _mm_loadh_ps((const double *)off_2C78E88);
      v28 = (__int64 *)operator new(0x10u);
      v29 = v54;
      v30 = _mm_load_si128((const __m128i *)&v53);
      v28[1] = (__int64)v26;
      *v28 = v29;
      v82.m128i_i64[0] = (__int64)v28;
      v83 = v30;
      if ( &_pthread_key_create )
      {
        v31 = pthread_mutex_lock(&v112);
        if ( v31 )
          std::__throw_system_error(v31);
        v32 = v83;
      }
      else
      {
        v32.m128i_i64[1] = (__int64)sub_1FECEA0;
        v32.m128i_i64[0] = (__int64)sub_1FEE570;
      }
      v33 = _mm_load_si128(&v82);
      v87 = (void (__fastcall *)(unsigned __int64, unsigned __int64, __int64))v32.m128i_i64[0];
      v34 = _mm_load_si128(&v86);
      v83.m128i_i64[0] = 0;
      v86 = v33;
      v82 = v34;
      v83.m128i_i64[1] = v88;
      v88 = v32.m128i_i64[1];
      v89 = 0;
      sub_1FEE880((__int64)&v105, (__m128i *)v51.m128_u64[0]);
      if ( v87 )
        v87(v51.m128_u64[0], v51.m128_u64[0], 3);
      v35 = 0xCCCCCCCCCCCCCCCDLL * ((v109 - v110) >> 3) + 4 * (3 * ((v111 - v108) >> 3) - 3);
      v36 = v114 + v35 - 858993459 * ((v107 - v106) >> 3);
      if ( &_pthread_key_create )
      {
        v53.m128_i32[0] = v114 + v35 - 858993459 * ((v107 - v106) >> 3);
        pthread_mutex_unlock(&v112);
        v36 = v53.m128_i32[0];
      }
      v53.m128_i32[0] = v36;
      std::condition_variable::notify_one((std::condition_variable *)&v113);
      sub_2248F30(&v102, v53.m128_u32[0]);
      if ( v83.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v83.m128i_i64[0])(v65, v65, 3);
      if ( v81.m128_u64[0] )
        ((void (__fastcall *)(__m128i **, __m128i **, __int64))v81.m128_u64[0])(v55, v55, 3);
      if ( v99 != &v101 )
        operator delete(v99);
      if ( v93 != &v95 )
        operator delete(v93);
      if ( !v26 )
        goto LABEL_34;
      if ( &_pthread_key_create )
      {
        if ( _InterlockedExchangeAdd(v26 + 2, 0xFFFFFFFF) == 1 )
          goto LABEL_67;
      }
      else
      {
        v44 = *((_DWORD *)v26 + 2);
        *((_DWORD *)v26 + 2) = v44 - 1;
        if ( v44 == 1 )
        {
LABEL_67:
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
          if ( &_pthread_key_create )
          {
            v45 = _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF);
          }
          else
          {
            v45 = *((_DWORD *)v26 + 3);
            *((_DWORD *)v26 + 3) = v45 - 1;
          }
          if ( v45 == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 24LL))(v26);
        }
      }
LABEL_34:
      if ( v79[0] == v52 + 2 )
      {
        v15 += 4;
        if ( v60 == v15 )
          break;
      }
      else
      {
        operator delete(v79[0]);
        v15 += 4;
        if ( v60 == v15 )
          break;
      }
    }
  }
  sub_2248C30(&v102);
  sub_22488E0(&v102);
  if ( v76 )
  {
    v104 = 260;
    v102 = v66;
    v46 = sub_2220490(&v102);
    v48 = v47;
    v49 = v46;
    v50 = operator new(0x40u);
    sub_2220590(v50, &v102, v49, v48);
    *v57 = v50;
  }
  else
  {
    *v57 = 0;
  }
  if ( v78[0] != v59 + 2 )
    operator delete(v78[0]);
  sub_22339F0(v67);
  v37 = (void **)v73[1];
  v38 = (void **)v73[0];
  if ( v73[1] != v73[0] )
  {
    do
    {
      while ( *v38 != v38 + 2 )
      {
        operator delete(*v38);
        v38 += 4;
        if ( v37 == v38 )
          goto LABEL_43;
      }
      v38 += 4;
    }
    while ( v37 != v38 );
LABEL_43:
    v38 = (void **)v73[0];
  }
  if ( v38 )
    operator delete(v38);
  if ( v75 != v66 + 2 )
    operator delete(v75);
  return v57;
}
