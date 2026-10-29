void __fastcall sub_170EFB0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // r14
  unsigned __int8 v6; // al
  unsigned __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 *v16; // r9
  __int64 *i; // rax
  __int64 v18; // rcx
  __int64 *v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 **v22; // rdx
  __int64 **v23; // r14
  __int64 *v24; // r13
  __m128i v25; // xmm1
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  _QWORD *v31; // r15
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  char **v38; // r15
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  char *v43; // rax
  __int64 *v44; // rbx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 *v49; // r15
  __int64 v50; // rax
  __int64 *v51; // rbx
  __int64 v52; // r14
  char **v53; // rdi
  __m128 v54; // rax
  char *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  unsigned __int64 v60; // rax
  __m128 v61; // xmm0
  unsigned __int64 v62; // rbx
  char **v63; // rdi
  __int64 v64; // rdx
  __int64 v65; // r9
  char *v66; // rax
  __int64 v67; // [rsp+0h] [rbp-1E8h]
  __int64 v69; // [rsp+10h] [rbp-1D8h]
  __int64 **v70; // [rsp+18h] [rbp-1D0h]
  __int64 *v71; // [rsp+28h] [rbp-1C0h] BYREF
  __int64 *v72; // [rsp+30h] [rbp-1B8h]
  void **v73; // [rsp+38h] [rbp-1B0h]
  char *v74; // [rsp+40h] [rbp-1A8h]
  __int64 v75; // [rsp+48h] [rbp-1A0h]
  __m128i v76; // [rsp+50h] [rbp-198h] BYREF
  void *v77[2]; // [rsp+60h] [rbp-188h] BYREF
  char v78; // [rsp+70h] [rbp-178h] BYREF
  void *v79[2]; // [rsp+80h] [rbp-168h] BYREF
  _WORD v80[16]; // [rsp+90h] [rbp-158h] BYREF
  __m128 v81; // [rsp+B0h] [rbp-138h] BYREF
  __m128i si128; // [rsp+C0h] [rbp-128h]
  __int64 v83; // [rsp+D0h] [rbp-118h]
  __int128 v84; // [rsp+D8h] [rbp-110h] BYREF
  __int64 v85; // [rsp+E8h] [rbp-100h]
  char v86; // [rsp+F0h] [rbp-F8h]
  __int64 v87; // [rsp+F8h] [rbp-F0h]
  __int64 v88; // [rsp+100h] [rbp-E8h]
  __int64 v89; // [rsp+108h] [rbp-E0h]
  __m128i v90; // [rsp+110h] [rbp-D8h] BYREF
  __int64 v91; // [rsp+120h] [rbp-C8h]
  __int64 v92; // [rsp+128h] [rbp-C0h]
  __int64 v93; // [rsp+130h] [rbp-B8h]
  __int64 v94; // [rsp+138h] [rbp-B0h]
  _QWORD *v95; // [rsp+140h] [rbp-A8h]
  __int64 v96; // [rsp+148h] [rbp-A0h]
  _QWORD v97[10]; // [rsp+150h] [rbp-98h] BYREF
  __int64 v98; // [rsp+1A0h] [rbp-48h] BYREF

  v5 = *(_QWORD *)(a1 + 544);
  v6 = *(_BYTE *)(v5 + 8) & 0x7F;
  if ( v6 == 8 )
  {
    v7 = *(_QWORD *)(a1 + 544);
    do
    {
      while ( 1 )
      {
        v8 = *(_QWORD *)(sub_B8C1B0(v7) + 16);
        if ( (v8 & 4) != 0 )
          break;
        v7 = v8 & 0xFFFFFFFFFFFFFFF8LL;
        v6 = *(_BYTE *)(v7 + 8) & 0x7F;
        if ( v6 != 8 )
          goto LABEL_5;
      }
      v7 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
      v6 = *(_BYTE *)(v7 + 8) & 0x7F;
    }
    while ( v6 == 8 );
LABEL_5:
    v5 = v7;
  }
  if ( (unsigned int)v6 - 35 <= 3 )
  {
    v67 = v5 - 72;
    if ( v5 != 72 )
    {
      v9 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)(v5 - 72) + 32LL))(v5 - 72);
      v11 = *(_QWORD *)(v9 + 80) >> 16;
      if ( (*(_QWORD *)(v9 + 80) & 0x40000LL) != 0
        || (v11 = (*(_QWORD *)(v9 + 80) >> 16) & 8LL, (_DWORD)v11)
        || (unsigned int)sub_B984E0(v9) )
      {
        v12 = *(__int64 **)(v5 + 48);
        v13 = (__int64)&v12[(unsigned int)sub_B76070(v67, a2, v11, v10)];
        if ( v12 != (__int64 *)v13 )
        {
          if ( !*(_QWORD *)(*v12 + 40) )
            return;
          for ( i = v12 + 1; ; ++i )
          {
            v14 = (__int64)i;
            if ( i == (__int64 *)v13 )
              break;
            v18 = *i;
            if ( !*(_QWORD *)(v18 + 40) )
              return;
          }
        }
        v19 = *(__int64 **)(a1 + 248);
        v76.m128i_i64[0] = sub_16FEC70(*(_QWORD **)(a1 + 240), v19, v13, v14, v15, v16);
        v76.m128i_i64[1] = v20;
        v21 = sub_B98510(v67);
        v70 = v22;
        if ( (__int64 **)v21 != v22 )
        {
          v69 = v5;
          v23 = (__int64 **)v21;
          v73 = v77;
          v74 = &v78;
          v75 = a1;
          do
          {
            v24 = *v23;
            v25 = _mm_loadu_si128((const __m128i *)(a3 + 184));
            v91 = 0;
            v95 = v97;
            v96 = 0x400000000LL;
            v97[8] = &v98;
            v90 = v25;
            v92 = 0;
            v93 = 0;
            v94 = 0;
            v97[9] = 0x200000000LL;
            v26 = (*(__int64 (__fastcall **)(__int64 *))(*v24 + 32))(v24);
            if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v69 - 72) + 32LL))(v67) != v26 )
            {
              v31 = (_QWORD *)(v24[2] & 0xFFFFFFFFFFFFFFF8LL);
              v32 = v24[2] & 4;
              if ( !a2 )
              {
                if ( v32 )
                  v31 = (_QWORD *)*v31;
                v62 = sub_16FF440(*(_QWORD **)(v75 + 248), v69, (__int64)v31, v28, v29, v30);
                if ( v62 )
                {
                  si128 = 0;
                  v77[0] = v74;
                  *((_QWORD *)&v84 + 1) = v73;
                  v78 = 0;
                  v77[1] = nullptr;
                  v81.m128_i32[2] = 0;
                  LOBYTE(v84) = 0;
                  DWORD1(v84) = 1;
                  v83 = 0;
                  v81.m128_u64[0] = (unsigned __int64)&off_2BEBE68;
                  sub_227B8B0(&v81, 0, 0, 0);
                  sub_E90250(v62, (__int64)&v81, &v76, 0, 1);
                  v63 = *(char ***)(a3 + 184);
                  v80[8] = 260;
                  v79[0] = v73;
                  v66 = sub_15A4EB0(v63, (const void ***)v79, v64, (__int64)v73, 260, v65);
                  sub_15A2FD0((__int64)&v90, (__int64)v66);
                  v81.m128_u64[0] = (unsigned __int64)&off_2BEBE68;
                  sub_227B7A0(&v81);
                  if ( v77[0] != v74 )
                    operator delete(v77[0]);
                }
LABEL_30:
                v38 = *(char ***)(a3 + 184);
                sub_B86A00((__int64)v79, v24 + 5);
                v81.m128_u64[0] = (unsigned __int64)v79;
                LOWORD(v83) = 260;
                v43 = sub_15A4EB0(v38, (const void ***)&v81, v39, v40, v41, v42);
                sub_15A2F70((__int64)&v90, (__int64)v43);
                if ( v79[0] != v80 )
                  operator delete(v79[0]);
                sub_15A3210((__int64)&v90, 7, (char *)&byte_22F0C30);
                v44 = *(__int64 **)(v69 + 48);
                v49 = &v44[(unsigned int)sub_B76070(v67, 7, v45, v46)];
                if ( v49 != v44 )
                {
                  v50 = *(_QWORD *)(*v44 + 40);
                  if ( (v50 & 7) != 0 )
LABEL_44:
                    BUG();
                  v71 = v24;
                  v51 = v44 + 1;
                  v72 = (__int64 *)v23;
                  while ( 1 )
                  {
                    v53 = *(char ***)(a3 + 184);
                    v54.m128_u64[0] = *(_QWORD *)((v50 & 0xFFFFFFFFFFFFFFF8LL) + 16);
                    v54.m128_u64[1] = *(unsigned int *)v54.m128_u64[0];
                    v54.m128_u64[0] += 16LL;
                    LOWORD(v83) = 261;
                    v81 = v54;
                    v55 = sub_15A4EB0(v53, (const void ***)&v81, v54.m128_i64[1], 261, v47, v48);
                    sub_15A3090((__int64)&v90, (__int64)v55);
                    if ( v49 == v51 )
                      break;
                    v52 = *v51++;
                    sub_15A3210((__int64)&v90, 15, (char *)&byte_22F0C30);
                    v50 = *(_QWORD *)(v52 + 40);
                    if ( (v50 & 7) != 0 )
                      goto LABEL_44;
                  }
                  v24 = v71;
                  v23 = (__int64 **)v72;
                }
                sub_15A3210((__int64)&v90, 8, (char *)&byte_22F0C30);
                v60 = sub_15A5CA0((__int64)&v90, 8, v56, v57, v58, v59);
                v72 = v24;
                v71 = (__int64 *)v60;
                LODWORD(v83) = 0;
                v85 = 0;
                v61 = _mm_loadh_ps((const double *)&v71);
                si128 = _mm_load_si128((const __m128i *)&xmmword_23AA990);
                v81 = v61;
                v84 = 0;
                v86 = v86 & 0x80 | 0x40;
                v87 = 0;
                v88 = 0;
                v89 = 0;
                sub_1706C30(a3, (__int64)&v81);
                sub_1705410((__int64)&v84);
                v19 = v24;
                sub_17006C0(a3, (__int64)v24);
                sub_1704B40(&v90);
                goto LABEL_23;
              }
              if ( v32 )
                v31 = (_QWORD *)*v31;
              if ( v31 )
              {
                v33 = sub_B91570(a2, (__int64)v19, v27, v28, v29, v30);
                if ( v33 == sub_B91570((__int64)v31, (__int64)v19, v34, v35, v36, v37) )
                  goto LABEL_30;
              }
            }
            sub_1704B40(&v90);
LABEL_23:
            ++v23;
          }
          while ( v70 != v23 );
        }
      }
    }
  }
}
