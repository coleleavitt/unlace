__int64 __fastcall sub_706400(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // r14
  __int64 v4; // r12
  unsigned __int64 v5; // rax
  __int64 v6; // rsi
  unsigned __int64 v7; // rax
  __int64 v8; // rsi
  const char *v9; // rdi
  __int64 v10; // r15
  size_t v11; // rdx
  const char *v12; // rsi
  int v13; // r8d
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rsi
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // r12
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  void *v23; // rdi
  __int64 v24; // r14
  __int64 v25; // r12
  unsigned __int64 v26; // rax
  __int64 v27; // rsi
  const char *v28; // rdi
  __int64 v29; // r15
  size_t v30; // rdx
  const char *v31; // rsi
  int v32; // r8d
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rsi
  unsigned __int64 v36; // rax
  __int64 v37; // r13
  __int64 v38; // r12
  unsigned __int64 v39; // rax
  __int64 v40; // rsi
  unsigned __int64 v41; // rax
  __int64 v42; // rsi
  unsigned __int64 v43; // rax
  const char *v44; // rdi
  __int64 v45; // rcx
  size_t v46; // rax
  const char *v47; // rsi
  size_t v48; // rdx
  int v49; // r8d
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  unsigned __int64 v53; // rax
  __int64 v54; // r15
  __int64 v55; // r14
  __int64 v56; // rsi
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rax
  __int64 v59; // rsi
  const char *v60; // rdi
  __int64 v61; // rcx
  size_t v62; // rax
  const char *v63; // rsi
  size_t v64; // rdx
  int v65; // r8d
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rbp
  int v69; // r12d
  int v70; // eax
  __int64 v71; // rax
  __int64 v72; // r14
  __int64 v73; // r12
  __int64 v74; // rsi
  unsigned __int64 v75; // rax
  __int64 v76; // rsi
  const char *v77; // rdi
  __int64 v78; // r15
  size_t v79; // rdx
  const char *v80; // rsi
  int v81; // r8d
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // r14
  __int64 v85; // rsi
  unsigned __int64 v86; // rax
  __int64 v87; // rsi
  const char *v88; // rdi
  __int64 v89; // r15
  size_t v90; // rdx
  const char *v91; // rsi
  int v92; // r8d
  __int64 v93; // rax
  __int64 v94; // rax
  int v95; // r12d
  unsigned __int64 v96; // rsi
  __int64 v97; // rax
  int v98; // ebp
  unsigned __int64 v99; // rsi
  __int64 v100; // rax
  __int64 v101; // [rsp+0h] [rbp-E8h]
  __int64 v102; // [rsp+0h] [rbp-E8h]
  __int64 v103; // [rsp+0h] [rbp-E8h]
  __int64 v104; // [rsp+10h] [rbp-D8h]
  __int64 v105; // [rsp+20h] [rbp-C8h]
  void *v106; // [rsp+40h] [rbp-A8h] BYREF
  unsigned int v107; // [rsp+48h] [rbp-A0h]
  unsigned __int64 v108; // [rsp+50h] [rbp-98h]
  unsigned __int64 v109; // [rsp+58h] [rbp-90h]
  unsigned __int64 v110; // [rsp+60h] [rbp-88h]
  unsigned __int64 v111; // [rsp+68h] [rbp-80h]
  unsigned __int64 v112; // [rsp+70h] [rbp-78h]
  __m128i v113; // [rsp+80h] [rbp-68h] BYREF
  char *v114; // [rsp+90h] [rbp-58h]
  char *v115; // [rsp+98h] [rbp-50h]
  char *v116; // [rsp+A0h] [rbp-48h]

  result = a1[174];
  if ( !result )
  {
    switch ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)a1[2161] + 296LL))(a1[2161]) )
    {
      case 0u:
        v36 = sub_6C4160((__int64)a1, a1[2311]);
        goto LABEL_21;
      case 1u:
        v36 = sub_6C4160((__int64)a1, a1[2309]);
        goto LABEL_21;
      case 2u:
        v104 = sub_6BAA70(a1, "__va_list", 9u, 0);
        if ( (*(_BYTE *)(a1[270] + 1LL) & 8) != 0 )
        {
          v98 = sub_600210(a1[2168], "std", 3u);
          v99 = sub_6E2C00((unsigned __int64 *)(*(_QWORD *)(a1[264] + 80LL) + 72LL), *(_QWORD *)(a1[264] + 80LL));
          if ( v99 )
            LODWORD(v99) = v99 + 40;
          v100 = sub_7AEF40((_DWORD)a1, v99, 0, 0, 0, v98, 0, 0);
          *(_BYTE *)(v100 + 29) |= 2u;
          sub_798630(v104, v100 + 48);
        }
        v37 = 0;
        v38 = v104 + 64;
        sub_789630(v104);
        v39 = sub_6C4160((__int64)a1, a1[2309]);
        v40 = a1[2309];
        v108 = v39;
        v113.m128i_i64[0] = (__int64)"__stack";
        v41 = sub_6C4160((__int64)a1, v40);
        v42 = a1[2309];
        v109 = v41;
        v113.m128i_i64[1] = (__int64)"__gr_top";
        v110 = sub_6C4160((__int64)a1, v42);
        v114 = "__vr_top";
        v43 = a1[2320];
        v115 = "__gr_offs";
        v111 = v43;
        v112 = v43;
        v116 = "__vr_offs";
        do
        {
          v44 = (const char *)v113.m128i_i64[v37];
          v45 = a1[2168];
          if ( v44 )
          {
            v102 = a1[2168];
            v46 = strlen(v44);
            v45 = v102;
            v47 = v44;
            v48 = v46;
          }
          else
          {
            v47 = nullptr;
            v48 = 0;
          }
          v49 = sub_600210(v45, v47, v48);
          v50 = (unsigned int)v37++;
          v51 = sub_781470((_DWORD)a1, v38, 0, 0, v49, *(&v108 + v50), 0, 0, 0, 0);
          *(_BYTE *)(v51 + 29) &= 0x9Fu;
          sub_7A0AA0(v38, v51);
        }
        while ( v37 != 5 );
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v104 + 104LL))(v104);
        a1[2821] = v104;
        v35 = v104;
        goto LABEL_20;
      case 3u:
        v52 = sub_6CD020(a1, *(_DWORD *)(a1[2161] + 136LL));
        v113.m128i_i32[2] = sub_6F6DE0((__int64)a1, *(_QWORD *)(v52 & 0xFFFFFFFFFFFFFFF0LL));
        if ( v113.m128i_i32[2] > 0x40u )
          sub_2585A50(&v113, 4, 0);
        else
          v113.m128i_i64[0] = 4;
        v53 = sub_6C55D0((__int64)a1, a1[2320], (__int64)&v113, 0, 0, 0);
        result = sub_6BAD90(a1, v53, "__builtin_va_list", 0x11u);
        if ( v113.m128i_i32[2] <= 0x40u )
          break;
        v23 = (void *)v113.m128i_i64[0];
        if ( !v113.m128i_i64[0] )
          break;
        goto LABEL_13;
      case 4u:
        v54 = 0;
        v105 = sub_6BAA70(a1, "__va_list_tag", 0xDu, 0);
        sub_789630(v105);
        v55 = v105 + 64;
        v56 = a1[2309];
        v108 = a1[2324];
        v109 = v108;
        v113.m128i_i64[1] = (__int64)"fpr";
        v57 = a1[2325];
        v113.m128i_i64[0] = (__int64)"gpr";
        v110 = v57;
        v114 = "reserved";
        v58 = sub_6C4160((__int64)a1, v56);
        v59 = a1[2309];
        v111 = v58;
        v115 = "overflow_arg_area";
        v112 = sub_6C4160((__int64)a1, v59);
        v116 = "reg_save_area";
        do
        {
          v60 = (const char *)v113.m128i_i64[v54];
          v61 = a1[2168];
          if ( v60 )
          {
            v103 = a1[2168];
            v62 = strlen(v60);
            v61 = v103;
            v63 = v60;
            v64 = v62;
          }
          else
          {
            v63 = nullptr;
            v64 = 0;
          }
          v65 = sub_600210(v61, v63, v64);
          v66 = (unsigned int)v54++;
          v67 = sub_781470((_DWORD)a1, v55, 0, 0, v65, *(&v108 + v66), 0, 0, 0, 0);
          *(_BYTE *)(v67 + 29) &= 0x9Fu;
          sub_7A0AA0(v55, v67);
        }
        while ( v54 != 5 );
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v105 + 104LL))(v105);
        a1[2821] = v105;
        v16 = v105;
        goto LABEL_8;
      case 5u:
        v84 = 0;
        v73 = sub_6BAA70(a1, "__va_list_tag", 0xDu, 0);
        sub_789630(v73);
        v85 = a1[2309];
        v108 = a1[2326];
        v109 = v108;
        v113.m128i_i64[0] = (__int64)"gp_offset";
        v113.m128i_i64[1] = (__int64)"fp_offset";
        v86 = sub_6C4160((__int64)a1, v85);
        v87 = a1[2309];
        v110 = v86;
        v114 = "overflow_arg_area";
        v111 = sub_6C4160((__int64)a1, v87);
        v115 = "reg_save_area";
        do
        {
          v88 = (const char *)v113.m128i_i64[v84];
          v89 = a1[2168];
          if ( v88 )
          {
            v90 = strlen(v88);
            v91 = v88;
          }
          else
          {
            v91 = nullptr;
            v90 = 0;
          }
          v92 = sub_600210(v89, v91, v90);
          v93 = (unsigned int)v84++;
          v94 = sub_781470((_DWORD)a1, (int)v73 + 64, 0, 0, v92, *(&v108 + v93), 0, 0, 0, 0);
          *(_BYTE *)(v94 + 29) &= 0x9Fu;
          sub_7A0AA0(v73 + 64, v94);
        }
        while ( v84 != 4 );
        goto LABEL_46;
      case 6u:
        v68 = sub_6BAA70(a1, "__va_list", 9u, 0);
        if ( (*(_BYTE *)(a1[270] + 1LL) & 8) != 0 )
        {
          v95 = sub_600210(a1[2168], "std", 3u);
          v96 = sub_6E2C00((unsigned __int64 *)(*(_QWORD *)(a1[264] + 80LL) + 72LL), *(_QWORD *)(a1[264] + 80LL));
          if ( v96 )
            LODWORD(v96) = v96 + 40;
          v97 = sub_7AEF40((_DWORD)a1, v96, 0, 0, 0, v95, 0, 0);
          *(_BYTE *)(v97 + 29) |= 2u;
          sub_798630(v68, v97 + 48);
        }
        sub_789630(v68);
        v69 = sub_6C4160((__int64)a1, a1[2309]);
        v70 = sub_600210(a1[2168], "__ap", 4u);
        v71 = sub_781470((_DWORD)a1, (int)v68 + 64, 0, 0, v70, v69, 0, 0, 0, 0);
        *(_BYTE *)(v71 + 29) &= 0x9Fu;
        sub_7A0AA0(v68 + 64, v71);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v68 + 104LL))(v68);
        a1[2821] = v68;
        v35 = v68;
        goto LABEL_20;
      case 7u:
        v72 = 0;
        v73 = sub_6BAA70(a1, "__va_list_tag", 0xDu, 0);
        sub_789630(v73);
        v74 = a1[2309];
        v108 = a1[2321];
        v109 = v108;
        v113.m128i_i64[0] = (__int64)"__gpr";
        v113.m128i_i64[1] = (__int64)"__fpr";
        v75 = sub_6C4160((__int64)a1, v74);
        v76 = a1[2309];
        v110 = v75;
        v114 = "__overflow_arg_area";
        v111 = sub_6C4160((__int64)a1, v76);
        v115 = "__reg_save_area";
        do
        {
          v77 = (const char *)v113.m128i_i64[v72];
          v78 = a1[2168];
          if ( v77 )
          {
            v79 = strlen(v77);
            v80 = v77;
          }
          else
          {
            v80 = nullptr;
            v79 = 0;
          }
          v81 = sub_600210(v78, v80, v79);
          v82 = (unsigned int)v72++;
          v83 = sub_781470((_DWORD)a1, (int)v73 + 64, 0, 0, v81, *(&v108 + v82), 0, 0, 0, 0);
          *(_BYTE *)(v83 + 29) &= 0x9Fu;
          sub_7A0AA0(v73 + 64, v83);
        }
        while ( v72 != 4 );
LABEL_46:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v73 + 104LL))(v73);
        a1[2821] = v73;
        v19 = sub_6E8B00((__int64)a1, v73);
        goto LABEL_9;
      case 8u:
        v3 = 0;
        v4 = sub_6BAA70(a1, "__va_list_tag", 0xDu, 0);
        sub_789630(v4);
        v5 = sub_6C4160((__int64)a1, a1[2309]);
        v6 = a1[2309];
        v108 = v5;
        v113.m128i_i64[0] = (__int64)"__current_saved_reg_area_pointer";
        v7 = sub_6C4160((__int64)a1, v6);
        v8 = a1[2309];
        v109 = v7;
        v113.m128i_i64[1] = (__int64)"__saved_reg_area_end_pointer";
        v110 = sub_6C4160((__int64)a1, v8);
        v114 = "__overflow_area_pointer";
        do
        {
          v9 = (const char *)v113.m128i_i64[v3];
          v10 = a1[2168];
          if ( v9 )
          {
            v11 = strlen(v9);
            v12 = v9;
          }
          else
          {
            v12 = nullptr;
            v11 = 0;
          }
          v13 = sub_600210(v10, v12, v11);
          v14 = (unsigned int)v3++;
          v15 = sub_781470((_DWORD)a1, (int)v4 + 64, 0, 0, v13, *(&v108 + v14), 0, 0, 0, 0);
          *(_BYTE *)(v15 + 29) &= 0x9Fu;
          sub_7A0AA0(v4 + 64, v15);
        }
        while ( v3 != 3 );
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 104LL))(v4);
        a1[2821] = v4;
        v16 = v4;
LABEL_8:
        v17 = sub_6E8B00((__int64)a1, v16);
        v18 = sub_6BAD90(a1, v17, "__va_list_tag", 0xDu);
        v19 = sub_6DE140((__int64)a1, v18, 0);
LABEL_9:
        v20 = v19;
        v21 = sub_6CD020(a1, *(_DWORD *)(a1[2161] + 136LL));
        v107 = sub_6F6DE0((__int64)a1, *(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF0LL));
        if ( v107 > 0x40 )
          sub_2585A50(&v106, 1, 0);
        else
          v106 = &dword_0 + 1;
        v22 = sub_6C55D0((__int64)a1, v20, (__int64)&v106, 0, 0, 0);
        result = sub_6BAD90(a1, v22, "__builtin_va_list", 0x11u);
        if ( v107 > 0x40 )
        {
          v23 = v106;
          if ( v106 )
          {
LABEL_13:
            v101 = result;
            operator delete[](v23);
            result = v101;
          }
        }
        break;
      case 9u:
        v24 = 0;
        v25 = sub_6BAA70(a1, "__va_list_tag", 0xDu, 0);
        sub_789630(v25);
        v26 = sub_6C4160((__int64)a1, a1[2320]);
        v27 = a1[2320];
        v108 = v26;
        v109 = sub_6C4160((__int64)a1, v27);
        v110 = a1[2320];
        v114 = "__va_ndx";
        v113 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_47D4680), (__m128i)(unsigned __int64)"__va_reg");
        do
        {
          v28 = (const char *)v113.m128i_i64[v24];
          v29 = a1[2168];
          if ( v28 )
          {
            v30 = strlen(v28);
            v31 = v28;
          }
          else
          {
            v31 = nullptr;
            v30 = 0;
          }
          v32 = sub_600210(v29, v31, v30);
          v33 = (unsigned int)v24++;
          v34 = sub_781470((_DWORD)a1, (int)v25 + 64, 0, 0, v32, *(&v108 + v33), 0, 0, 0, 0);
          *(_BYTE *)(v34 + 29) &= 0x9Fu;
          sub_7A0AA0(v25 + 64, v34);
        }
        while ( v24 != 3 );
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 104LL))(v25);
        a1[2821] = v25;
        v35 = v25;
LABEL_20:
        v36 = sub_6E8B00((__int64)a1, v35);
LABEL_21:
        result = sub_6BAD90(a1, v36, "__builtin_va_list", 0x11u);
        break;
    }
    a1[174] = result;
  }
  return result;
}

