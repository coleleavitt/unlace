bool __fastcall sub_364D90(
        const __m128i *a1,
        __int64 a2,
        const char *a3,
        unsigned __int64 **a4,
        int a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9,
        double a10,
        double a11,
        __m128 a12)
{
  __int64 ***v13; // r12
  __int64 *v14; // rbx
  __int64 v15; // rax
  __m128 si128; // xmm0
  __m128i v18; // xmm1
  double v19; // xmm2_8
  unsigned __int64 v20; // r15
  void **v21; // rbp
  void *v22; // rdi
  _QWORD *v23; // rbp
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdi
  int v37; // eax
  __int64 encoding_helper; // r15
  char v39; // al
  __int64 v40; // rbp
  __int64 v41; // rax
  double v42; // xmm4_8
  double v43; // xmm5_8
  int v44; // r13d
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rsi
  __int64 v50; // rax
  unsigned __int64 v52; // rdi
  int v53; // eax
  __int64 v54; // rax
  __int64 path; // rax
  __int64 v56; // r8
  int v57; // eax
  __int64 **v58; // rcx
  unsigned __int64 v59; // rbp
  __int64 v60; // rdx
  __int64 v61; // rbp
  bool v62; // zf
  __int64 v63; // rcx
  __int64 v64; // rsi
  __int64 i; // r14
  __int64 *v66; // rax
  __int64 v67; // rdi
  __int64 v68; // rdi
  __int64 v69; // rcx
  __int64 v70; // rsi
  __int64 j; // r15
  __int64 *v72; // rax
  __int64 v73; // rdi
  unsigned __int64 v74; // rax
  __int64 v75; // rax
  __int64 **v76; // r15
  __int64 **v77; // rsi
  __int64 v78; // r8
  __int64 v79; // r15
  __int64 **v80; // rbp
  _QWORD *v81; // rbx
  __int64 v82; // r12
  __int64 *v83; // rax
  __int64 *v84; // rdx
  __int64 *v85; // r13
  __int64 v86; // r8
  __int64 v87; // r14
  __int64 k; // r15
  __int64 *v89; // rax
  __int64 v90; // rdi
  __int64 v91; // rdi
  __int64 v92; // r8
  __int64 v93; // r14
  __int64 m; // r15
  __int64 *v95; // rax
  __int64 v96; // rdi
  __int64 **v98; // rdx
  __int64 **v99; // rax
  __int64 **v100; // rax
  const char *v101; // rax
  __m128 v102; // [rsp+0h] [rbp-C8h] BYREF
  __m128i v103; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v104; // [rsp+20h] [rbp-A8h]
  __int64 v105; // [rsp+28h] [rbp-A0h]
  __int64 v106; // [rsp+30h] [rbp-98h]
  __int64 **v107; // [rsp+38h] [rbp-90h]
  __int64 v108; // [rsp+40h] [rbp-88h]
  __int64 v109; // [rsp+48h] [rbp-80h]
  __int64 *v110; // [rsp+50h] [rbp-78h]
  __int64 ***v111; // [rsp+58h] [rbp-70h]
  _QWORD v112[2]; // [rsp+60h] [rbp-68h] BYREF
  char v113; // [rsp+70h] [rbp-58h]
  _BYTE v114[3]; // [rsp+85h] [rbp-43h] BYREF
  unsigned __int64 v115; // [rsp+88h] [rbp-40h]

  v13 = (__int64 ***)a2;
  v14 = (__int64 *)a1;
  v15 = a1->m128i_i64[0];
  v115 = __readfsqword(0x28u);
  *(_DWORD *)(v15 + 1336) = a5;
  si128 = (__m128)_mm_loadu_si128(a1 + 18);
  v18 = _mm_loadu_si128(a1 + 17);
  *(_QWORD *)&v19 = _mm_movehl_ps(a8, si128).m128_u64[0];
  v20 = a1[20].m128i_i64[1] + 8;
  v21 = (void **)(*(_QWORD *)&v19 + 8LL);
  if ( *(_QWORD *)&v19 + 8LL < v20 )
  {
    v102 = si128;
    v103 = v18;
    do
    {
      v22 = *v21;
      a2 = 512;
      ++v21;
      operator delete(v22, 0x200u);
    }
    while ( (unsigned __int64)v21 < v20 );
    si128 = (__m128)_mm_load_si128((const __m128i *)&v102);
    v18 = _mm_load_si128(&v103);
  }
  v14[42] = 0;
  *((__m128i *)v14 + 19) = v18;
  *((__m128 *)v14 + 20) = si128;
  *(__int64 *)((char *)v14 + 468) = 0;
  memset(
    (void *)((unsigned __int64)(v14 + 43) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v14 - (((_DWORD)v14 + 344) & 0xFFFFFFF8) + 476) >> 3));
  v23 = (_QWORD *)*v14;
  v24 = *(_QWORD *)(*v14 + 928);
  if ( v24 )
  {
    v23[117] = 0;
    qfree(v24);
    v23[116] = 0;
    v23[118] = 0;
  }
  sub_35D280(v14);
  if ( (*(_BYTE *)(*v14 + 1336) & 0x20) != 0 )
  {
    v112[0] = &off_4D3218;
    v112[1] = 0;
    v113 = 0;
    hook_event_listener(3, v112, 0, 0);
    auto_wait(3, v112, v27, v28);
    unhook_event_listener(
      3,
      v112,
      v29,
      v30,
      v31,
      v32,
      v102.m128_u64[0],
      v102.m128_u64[1],
      v103.m128i_i64[0],
      v103.m128i_i64[1]);
    if ( v113 )
    {
      path = get_path(1);
      save_database(path, 0, 0, 0);
    }
    v112[0] = &off_4D91E8;
    remove_event_listener(v112);
    v36 = *v14;
    v37 = *(_DWORD *)(*v14 + 1336);
    if ( (v37 & 0x400000) == 0 )
    {
LABEL_11:
      if ( (v37 & 2) != 0 )
      {
        if ( a3 )
        {
          if ( (unsigned __int8)qfileexist(a3) )
          {
            *(_DWORD *)(*v14 + 1336) = 0;
            return 0;
          }
LABEL_13:
          encoding_helper = create_encoding_helper(0xFFFFFFFFLL, 1);
          v114[0] = (*(_DWORD *)(*v14 + 1336) & 1) == 0 ? 119 : 97;
          v39 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)encoding_helper + 40LL))(encoding_helper);
          v114[2] = 0;
          v114[1] = v39 == 0 ? 116 : 98;
          v40 = qfopen(a3, v114);
          if ( v40 )
          {
            v36 = *v14;
LABEL_15:
            *((_BYTE *)v14 + 521) = 1;
            sub_370750(v36);
            sub_321530(*v14);
            v41 = *(_QWORD *)(*v14 + 1352);
            v104 = *(_QWORD *)(*v14 + 1344);
            v105 = v41;
            v44 = sub_3642B0(
                    (__int64)v14,
                    encoding_helper,
                    v40,
                    a4,
                    *(double *)si128.m128_u64,
                    v18,
                    v19,
                    a9,
                    v42,
                    v43,
                    a12);
            sub_133BF0(
              *(_QWORD *)(*v14 + 112),
              encoding_helper,
              v45,
              v46,
              v47,
              v48,
              v102.m128_i64[0],
              v102.m128_i64[1],
              v103.m128i_i64[0],
              v103.m128i_i64[1]);
            if ( v44 == -1 )
              sub_2B11F0((__int64)"IDA failed to encode some text; file generation has been stopped\n");
            if ( encoding_helper )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)encoding_helper + 8LL))(encoding_helper);
              qfclose(v40);
LABEL_19:
              v49 = v105;
              *(_QWORD *)(*v14 + 1344) = v104;
              *(_QWORD *)(*v14 + 1352) = v49;
              sub_3707E0(*v14);
              v50 = *v14;
              *((_BYTE *)v14 + 521) = 0;
              *(_DWORD *)(v50 + 1336) = 0;
              return v44 == 1;
            }
            if ( !v13 )
              goto LABEL_19;
            sub_35E020((__int64)v13, *((int *)v14 + 16));
            if ( !*((_DWORD *)v14 + 16) )
              goto LABEL_19;
            v103.m128i_i64[0] = 0;
            v102.m128_u64[0] = 0;
            while ( 1 )
            {
              v56 = *(_QWORD *)(v14[23] + v103.m128i_i64[0]);
              v112[0] = v56;
              if ( v56 )
                break;
              v100 = v13[1];
              v59 = (unsigned __int64)v13[2];
              v60 = (__int64)v100 + 1;
              if ( v59 < (unsigned __int64)v100 + 1 )
                goto LABEL_58;
              (*v13)[(_QWORD)v100] = nullptr;
LABEL_37:
              v61 = v112[0];
              v13[1] = (__int64 **)((char *)v13[1] + 1);
              if ( v61 )
              {
                v62 = (*(_DWORD *)(v61 + 104))-- == 1;
                if ( v62 )
                {
                  sub_254CF0((__int64 *)v61);
                  v63 = *(_QWORD *)(v61 + 184);
                  if ( v63 )
                  {
                    v64 = *(_QWORD *)(v61 + 192);
                    if ( v64 )
                    {
                      for ( i = 0; i != v64; ++i )
                      {
                        v66 = (__int64 *)(v63 + 24 * i);
                        v67 = *v66;
                        if ( *v66 )
                        {
                          v66[1] = 0;
                          qfree(v67);
                          v63 = *(_QWORD *)(v61 + 184);
                        }
                      }
                    }
                    *(_QWORD *)(v61 + 192) = 0;
                    qfree(v63);
                  }
                  v68 = *(_QWORD *)(v61 + 160);
                  if ( v68 )
                  {
                    *(_QWORD *)(v61 + 168) = 0;
                    qfree(v68);
                  }
                  v69 = *(_QWORD *)(v61 + 128);
                  if ( v69 )
                  {
                    v70 = *(_QWORD *)(v61 + 136);
                    if ( v70 )
                    {
                      for ( j = 0; j != v70; ++j )
                      {
                        v72 = (__int64 *)(v69 + 32 * j);
                        v73 = *v72;
                        if ( *v72 )
                        {
                          v72[1] = 0;
                          qfree(v73);
                          v69 = *(_QWORD *)(v61 + 128);
                        }
                      }
                    }
                    *(_QWORD *)(v61 + 136) = 0;
                    qfree(v69);
                  }
                  sub_2513D0(v61 + 16);
                  j__qfree(v61);
                }
              }
              ++v102.m128_u64[0];
              v74 = *((int *)v14 + 16);
              v103.m128i_i64[0] += 120;
              if ( v102.m128_u64[0] >= v74 )
                goto LABEL_19;
            }
            v57 = *(_DWORD *)(v56 + 104) + 1;
            *(_DWORD *)(v56 + 104) = v57;
            v58 = v13[1];
            v59 = (unsigned __int64)v13[2];
            v60 = (__int64)v58 + 1;
            if ( v59 < (unsigned __int64)v58 + 1 )
            {
LABEL_58:
              v108 = v56;
              v75 = qvector_reserve(v13, 0, v60, 8);
              v76 = v13[1];
              v77 = v13[2];
              v106 = v75;
              v13[2] = (__int64 **)v59;
              v78 = v108;
              v79 = (__int64)v76 - 1;
              v107 = v77;
              v80 = *v13;
              if ( v79 >= 0 )
              {
                LODWORD(v108) = v44;
                v109 = v78;
                v110 = v14;
                v81 = (_QWORD *)v75;
                v111 = v13;
                v82 = v79;
                do
                {
                  v83 = *v80;
                  *v81 = *v80;
                  if ( v83 )
                    ++*((_DWORD *)v83 + 26);
                  v84 = *v80;
                  if ( *v80 )
                  {
                    v62 = (*((_DWORD *)v84 + 26))-- == 1;
                    if ( v62 )
                    {
                      v85 = *v80;
                      if ( *v80 )
                      {
                        sub_254CF0(*v80);
                        v86 = v85[23];
                        if ( v86 )
                        {
                          v87 = v85[24];
                          if ( v87 )
                          {
                            for ( k = 0; k != v87; ++k )
                            {
                              v89 = (__int64 *)(v86 + 24 * k);
                              v90 = *v89;
                              if ( *v89 )
                              {
                                v89[1] = 0;
                                qfree(v90);
                                v86 = v85[23];
                              }
                            }
                          }
                          v85[24] = 0;
                          qfree(v86);
                        }
                        v91 = v85[20];
                        if ( v91 )
                        {
                          v85[21] = 0;
                          qfree(v91);
                        }
                        v92 = v85[16];
                        if ( v92 )
                        {
                          v93 = v85[17];
                          if ( v93 )
                          {
                            for ( m = 0; m != v93; ++m )
                            {
                              v95 = (__int64 *)(v92 + 32 * m);
                              v96 = *v95;
                              if ( *v95 )
                              {
                                v95[1] = 0;
                                qfree(v96);
                                v92 = v85[16];
                              }
                            }
                          }
                          v85[17] = 0;
                          qfree(v92);
                        }
                        sub_2513D0((__int64)(v85 + 2));
                        j__qfree(v85);
                      }
                    }
                  }
                  ++v80;
                  ++v81;
                }
                while ( v82-- != 0 );
                v13 = v111;
                v44 = v108;
                v78 = v109;
                v14 = v110;
                v80 = *v111;
              }
              v108 = v78;
              qfree(v80);
              v98 = (__int64 **)v106;
              v56 = v108;
              v13[2] = v107;
              v99 = v13[1];
              *v13 = v98;
              v98[(_QWORD)v99] = (__int64 *)v56;
              if ( !v56 )
                goto LABEL_37;
              v57 = *(_DWORD *)(v56 + 104);
            }
            else
            {
              (*v13)[(_QWORD)v58] = (__int64 *)v56;
            }
            *(_DWORD *)(v56 + 104) = v57 + 1;
            goto LABEL_37;
          }
          v101 = (const char *)qerrstr(0xFFFFFFFFLL);
          sub_2B11F0((__int64)"%s: %s", a3, v101);
          if ( encoding_helper )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)encoding_helper + 8LL))(encoding_helper);
            return 0;
          }
          return 0;
        }
      }
      else if ( a3 )
      {
        goto LABEL_13;
      }
      encoding_helper = 0;
      v40 = 0;
      goto LABEL_15;
    }
  }
  else
  {
    auto_wait(v14, a2, v25, v26);
    v36 = *v14;
    v37 = *(_DWORD *)(*v14 + 1336);
    if ( (v37 & 0x400000) == 0 )
      goto LABEL_11;
  }
  if ( a4[1] )
  {
    v52 = **a4;
  }
  else
  {
    callui(11, v112, &callui, v33, v34, v35, v102.m128_u64[0], v102.m128_u64[1], v103.m128i_i64[0], v103.m128i_i64[1]);
    v52 = v112[0];
  }
  sub_322A00(v52, 0x73u);
  set_database_flag(2, 1);
  getinf(3);
  v53 = getinf(3);
  setinf(3, v53 & 0xFFFFF9FF | 0x400);
  v54 = get_path(1);
  save_database(v54, 0, 0, 0);
  return 1;
}
