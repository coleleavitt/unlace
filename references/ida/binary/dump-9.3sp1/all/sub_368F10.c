bool __fastcall sub_368F10(
        const __m128i *a1,
        __int64 ***a2,
        const char *a3,
        __int64 a4,
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
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdi
  int v29; // eax
  __int64 encoding_helper; // r15
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  char v35; // al
  __int64 v36; // rbp
  __int64 v37; // rax
  double v38; // xmm4_8
  double v39; // xmm5_8
  int v40; // r13d
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rsi
  __int64 v46; // rax
  unsigned __int64 v48; // rdi
  __int64 v49; // r8
  int v50; // eax
  __int64 **v51; // rcx
  unsigned __int64 v52; // rbp
  __int64 v53; // rdx
  __int64 v54; // rbp
  bool v55; // zf
  __int64 v56; // rcx
  __int64 v57; // rsi
  __int64 i; // r14
  __int64 *v59; // rax
  __int64 v60; // rdi
  __int64 v61; // rdi
  __int64 v62; // rcx
  __int64 v63; // rsi
  __int64 j; // r15
  __int64 *v65; // rax
  __int64 v66; // rdi
  unsigned __int64 v67; // rax
  __int64 v68; // rax
  __int64 **v69; // r15
  __int64 **v70; // rsi
  __int64 v71; // r8
  __int64 v72; // r15
  __int64 **v73; // rbp
  _QWORD *v74; // rbx
  __int64 v75; // r12
  __int64 *v76; // rax
  __int64 *v77; // rdx
  __int64 *v78; // r13
  __int64 v79; // r8
  __int64 v80; // r14
  __int64 k; // r15
  __int64 *v82; // rax
  __int64 v83; // rdi
  __int64 v84; // rdi
  __int64 v85; // r8
  __int64 v86; // r14
  __int64 m; // r15
  __int64 *v88; // rax
  __int64 v89; // rdi
  __int64 **v91; // rdx
  __int64 **v92; // rax
  __int64 **v93; // rax
  const char *v94; // rax
  __m128 v95; // [rsp+0h] [rbp-C8h] BYREF
  __m128i v96; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v97; // [rsp+20h] [rbp-A8h]
  __int64 v98; // [rsp+28h] [rbp-A0h]
  __int64 v99; // [rsp+30h] [rbp-98h]
  __int64 **v100; // [rsp+38h] [rbp-90h]
  __int64 v101; // [rsp+40h] [rbp-88h]
  __int64 v102; // [rsp+48h] [rbp-80h]
  __int64 *v103; // [rsp+50h] [rbp-78h]
  __int64 ***v104; // [rsp+58h] [rbp-70h]
  _QWORD v105[2]; // [rsp+60h] [rbp-68h] BYREF
  char v106; // [rsp+70h] [rbp-58h]
  _BYTE v107[3]; // [rsp+85h] [rbp-43h] BYREF
  unsigned __int64 v108; // [rsp+88h] [rbp-40h]

  v13 = a2;
  v14 = (__int64 *)a1;
  v15 = a1->m128i_i64[0];
  v108 = __readfsqword(0x28u);
  *(_DWORD *)(v15 + 1336) = a5;
  si128 = (__m128)_mm_loadu_si128(a1 + 18);
  v18 = _mm_loadu_si128(a1 + 17);
  *(_QWORD *)&v19 = _mm_movehl_ps(a8, si128).m128_u64[0];
  v20 = a1[20].m128i_i64[1] + 8;
  v21 = (void **)(*(_QWORD *)&v19 + 8LL);
  if ( *(_QWORD *)&v19 + 8LL < v20 )
  {
    v95 = si128;
    v96 = v18;
    do
    {
      v22 = *v21;
      a2 = (__int64 ***)&dword_200;
      ++v21;
      operator delete(v22, 0x200u);
    }
    while ( (unsigned __int64)v21 < v20 );
    si128 = (__m128)_mm_load_si128((const __m128i *)&v95);
    v18 = _mm_load_si128(&v96);
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
  sub_361400(v14);
  if ( (*(_BYTE *)(*v14 + 1336) & 0x20) != 0 )
  {
    v105[0] = &off_4E6118;
    v105[1] = 0;
    v106 = 0;
    hook_event_listener();
    auto_wait();
    a2 = (__int64 ***)v105;
    unhook_event_listener();
    if ( v106 )
    {
      get_path();
      a2 = nullptr;
      save_database();
    }
    v105[0] = &off_4EC308;
    remove_event_listener();
    v28 = *v14;
    v29 = *(_DWORD *)(*v14 + 1336);
    if ( (v29 & 0x400000) == 0 )
    {
LABEL_11:
      if ( (v29 & 2) != 0 )
      {
        if ( a3 )
        {
          if ( (unsigned __int8)qfileexist() )
          {
            *(_DWORD *)(*v14 + 1336) = 0;
            return 0;
          }
LABEL_13:
          encoding_helper = create_encoding_helper();
          v107[0] = (*(_DWORD *)(*v14 + 1336) & 1) == 0 ? 119 : 97;
          v35 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64, unsigned __int64, __int64, __int64, __int64))(*(_QWORD *)encoding_helper + 40LL))(
                  encoding_helper,
                  1,
                  v31,
                  v32,
                  v33,
                  v34,
                  v95.m128_u64[0],
                  v95.m128_i64[1],
                  v96.m128i_i64[0],
                  v96.m128i_i64[1]);
          a2 = (__int64 ***)v107;
          v107[2] = 0;
          v107[1] = v35 == 0 ? 116 : 98;
          v36 = qfopen();
          if ( v36 )
          {
            v28 = *v14;
LABEL_15:
            *((_BYTE *)v14 + 521) = 1;
            sub_3748D0(v28, a2);
            sub_3256B0(*v14);
            v37 = *(_QWORD *)(*v14 + 1352);
            v97 = *(_QWORD *)(*v14 + 1344);
            v98 = v37;
            v40 = sub_368430(
                    (__int64)v14,
                    encoding_helper,
                    v36,
                    a4,
                    *(double *)si128.m128_u64,
                    v18,
                    v19,
                    a9,
                    v38,
                    v39,
                    a12);
            sub_137630(
              *(_QWORD *)(*v14 + 112),
              encoding_helper,
              v41,
              v42,
              v43,
              v44,
              v95.m128_i64[0],
              v95.m128_i64[1],
              v96.m128i_i64[0],
              v96.m128i_i64[1]);
            if ( v40 == -1 )
              sub_2B4E70((__int64)"IDA failed to encode some text; file generation has been stopped\n");
            if ( encoding_helper )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)encoding_helper + 8LL))(encoding_helper);
              qfclose();
LABEL_19:
              v45 = v98;
              *(_QWORD *)(*v14 + 1344) = v97;
              *(_QWORD *)(*v14 + 1352) = v45;
              sub_374960(*v14);
              v46 = *v14;
              *((_BYTE *)v14 + 521) = 0;
              *(_DWORD *)(v46 + 1336) = 0;
              return v40 == 1;
            }
            if ( !v13 )
              goto LABEL_19;
            sub_3621A0((__int64)v13, *((int *)v14 + 16));
            if ( !*((_DWORD *)v14 + 16) )
              goto LABEL_19;
            v96.m128i_i64[0] = 0;
            v95.m128_u64[0] = 0;
            while ( 1 )
            {
              v49 = *(_QWORD *)(v14[23] + v96.m128i_i64[0]);
              v105[0] = v49;
              if ( v49 )
                break;
              v93 = v13[1];
              v52 = (unsigned __int64)v13[2];
              v53 = (__int64)v93 + 1;
              if ( v52 < (unsigned __int64)v93 + 1 )
                goto LABEL_58;
              (*v13)[(_QWORD)v93] = nullptr;
LABEL_37:
              v54 = v105[0];
              v13[1] = (__int64 **)((char *)v13[1] + 1);
              if ( v54 )
              {
                v55 = (*(_DWORD *)(v54 + 104))-- == 1;
                if ( v55 )
                {
                  sub_258970((__int64 *)v54);
                  v56 = *(_QWORD *)(v54 + 184);
                  if ( v56 )
                  {
                    v57 = *(_QWORD *)(v54 + 192);
                    if ( v57 )
                    {
                      for ( i = 0; i != v57; ++i )
                      {
                        v59 = (__int64 *)(v56 + 24 * i);
                        v60 = *v59;
                        if ( *v59 )
                        {
                          v59[1] = 0;
                          qfree(v60);
                          v56 = *(_QWORD *)(v54 + 184);
                        }
                      }
                    }
                    *(_QWORD *)(v54 + 192) = 0;
                    qfree(v56);
                  }
                  v61 = *(_QWORD *)(v54 + 160);
                  if ( v61 )
                  {
                    *(_QWORD *)(v54 + 168) = 0;
                    qfree(v61);
                  }
                  v62 = *(_QWORD *)(v54 + 128);
                  if ( v62 )
                  {
                    v63 = *(_QWORD *)(v54 + 136);
                    if ( v63 )
                    {
                      for ( j = 0; j != v63; ++j )
                      {
                        v65 = (__int64 *)(v62 + 32 * j);
                        v66 = *v65;
                        if ( *v65 )
                        {
                          v65[1] = 0;
                          qfree(v66);
                          v62 = *(_QWORD *)(v54 + 128);
                        }
                      }
                    }
                    *(_QWORD *)(v54 + 136) = 0;
                    qfree(v62);
                  }
                  sub_255050(v54 + 16);
                  j__qfree(v54);
                }
              }
              ++v95.m128_u64[0];
              v67 = *((int *)v14 + 16);
              v96.m128i_i64[0] += 120;
              if ( v95.m128_u64[0] >= v67 )
                goto LABEL_19;
            }
            v50 = *(_DWORD *)(v49 + 104) + 1;
            *(_DWORD *)(v49 + 104) = v50;
            v51 = v13[1];
            v52 = (unsigned __int64)v13[2];
            v53 = (__int64)v51 + 1;
            if ( v52 < (unsigned __int64)v51 + 1 )
            {
LABEL_58:
              v101 = v49;
              v68 = qvector_reserve((__int64)v13, 0, v53, 8);
              v69 = v13[1];
              v70 = v13[2];
              v99 = v68;
              v13[2] = (__int64 **)v52;
              v71 = v101;
              v72 = (__int64)v69 - 1;
              v100 = v70;
              v73 = *v13;
              if ( v72 >= 0 )
              {
                LODWORD(v101) = v40;
                v102 = v71;
                v103 = v14;
                v74 = (_QWORD *)v68;
                v104 = v13;
                v75 = v72;
                do
                {
                  v76 = *v73;
                  *v74 = *v73;
                  if ( v76 )
                    ++*((_DWORD *)v76 + 26);
                  v77 = *v73;
                  if ( *v73 )
                  {
                    v55 = (*((_DWORD *)v77 + 26))-- == 1;
                    if ( v55 )
                    {
                      v78 = *v73;
                      if ( *v73 )
                      {
                        sub_258970(*v73);
                        v79 = v78[23];
                        if ( v79 )
                        {
                          v80 = v78[24];
                          if ( v80 )
                          {
                            for ( k = 0; k != v80; ++k )
                            {
                              v82 = (__int64 *)(v79 + 24 * k);
                              v83 = *v82;
                              if ( *v82 )
                              {
                                v82[1] = 0;
                                qfree(v83);
                                v79 = v78[23];
                              }
                            }
                          }
                          v78[24] = 0;
                          qfree(v79);
                        }
                        v84 = v78[20];
                        if ( v84 )
                        {
                          v78[21] = 0;
                          qfree(v84);
                        }
                        v85 = v78[16];
                        if ( v85 )
                        {
                          v86 = v78[17];
                          if ( v86 )
                          {
                            for ( m = 0; m != v86; ++m )
                            {
                              v88 = (__int64 *)(v85 + 32 * m);
                              v89 = *v88;
                              if ( *v88 )
                              {
                                v88[1] = 0;
                                qfree(v89);
                                v85 = v78[16];
                              }
                            }
                          }
                          v78[17] = 0;
                          qfree(v85);
                        }
                        sub_255050((__int64)(v78 + 2));
                        j__qfree((__int64)v78);
                      }
                    }
                  }
                  ++v73;
                  ++v74;
                }
                while ( v75-- != 0 );
                v13 = v104;
                v40 = v101;
                v71 = v102;
                v14 = v103;
                v73 = *v104;
              }
              v101 = v71;
              qfree((__int64)v73);
              v91 = (__int64 **)v99;
              v49 = v101;
              v13[2] = v100;
              v92 = v13[1];
              *v13 = v91;
              v91[(_QWORD)v92] = (__int64 *)v49;
              if ( !v49 )
                goto LABEL_37;
              v50 = *(_DWORD *)(v49 + 104);
            }
            else
            {
              (*v13)[(_QWORD)v51] = (__int64 *)v49;
            }
            *(_DWORD *)(v49 + 104) = v50 + 1;
            goto LABEL_37;
          }
          v94 = (const char *)qerrstr();
          sub_2B4E70((__int64)"%s: %s", a3, v94);
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
      v36 = 0;
      goto LABEL_15;
    }
  }
  else
  {
    auto_wait();
    v28 = *v14;
    v29 = *(_DWORD *)(*v14 + 1336);
    if ( (v29 & 0x400000) == 0 )
      goto LABEL_11;
  }
  if ( *(_QWORD *)(a4 + 8) )
  {
    v48 = **(_QWORD **)a4;
  }
  else
  {
    callui(11, v105, &callui, v25, v26, v27, v95.m128_u64[0], v95.m128_u64[1], v96.m128i_i64[0], v96.m128i_i64[1]);
    v48 = v105[0];
  }
  sub_326B80(v48, 0x73u);
  set_database_flag();
  getinf();
  getinf();
  setinf();
  get_path();
  save_database();
  return 1;
}
