void __fastcall sub_182DC20(__int64 a1, __m128i *a2, const __m128i *a3, double a4)
{
  __int64 v4; // r13
  __int8 v7; // al
  __int64 v8; // rdi
  unsigned __int64 v9; // rdx
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rdi
  unsigned int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rbx
  int v18; // eax
  unsigned int v19; // edx
  __int64 *v20; // rdx
  unsigned int v21; // r13d
  __int64 v22; // rdi
  unsigned __int64 v23; // rdi
  unsigned int v24; // edx
  unsigned int *v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r12
  void *v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rbx
  unsigned int v38; // eax
  unsigned __int64 v39; // rbp
  __int64 v40; // rdx
  __int64 v41; // rcx
  unsigned int v42; // eax
  __int64 v43; // r8
  __int64 v44; // rdx
  char v45; // al
  unsigned __int64 v46; // rdx
  __int64 v47; // rcx
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // r15
  unsigned __int64 v50; // rax
  __int64 v51; // rdx
  unsigned __int64 v52; // rax
  int v53; // ebp
  __int64 v54; // rax
  unsigned __int64 v55; // rdx
  unsigned int v56; // ecx
  unsigned int v57; // edx
  unsigned __int32 v58; // ebp
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // rcx
  unsigned int v64; // eax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rbx
  _BYTE *v71; // r15
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // r12
  void *v81; // rax
  _QWORD *v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // r12
  __int64 v88; // rax
  _QWORD *v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // rbx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // rax
  _QWORD *v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // rbx
  __int64 v100; // r8
  __int64 v101; // r9
  __int64 v102; // rax
  _QWORD *v103; // rax
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // r9
  __int64 v108; // r12
  __int64 v109; // rax
  _QWORD *v110; // rax
  __m128i *v111; // [rsp+8h] [rbp-140h]
  unsigned int v112; // [rsp+28h] [rbp-120h] BYREF
  unsigned int v113; // [rsp+2Ch] [rbp-11Ch] BYREF
  __m128i *v114; // [rsp+30h] [rbp-118h] BYREF
  __int64 v115; // [rsp+38h] [rbp-110h] BYREF
  __int64 v116; // [rsp+40h] [rbp-108h] BYREF
  __int64 v117; // [rsp+48h] [rbp-100h] BYREF
  void *ptr; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v119; // [rsp+58h] [rbp-F0h]
  _BYTE v120[32]; // [rsp+60h] [rbp-E8h] BYREF
  _QWORD v121[2]; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v122; // [rsp+90h] [rbp-B8h]
  unsigned __int8 *v123[11]; // [rsp+A0h] [rbp-A8h] BYREF
  char v124; // [rsp+F8h] [rbp-50h]
  unsigned int v125; // [rsp+100h] [rbp-48h]
  char v126; // [rsp+104h] [rbp-44h]

  v4 = (__int64)a2;
  v7 = a2[1].m128i_i8[12];
  v114 = a2;
  if ( (v7 & 0x7Fu) - 35 <= 3 && !sub_B979F0(a2) )
  {
    sub_168B9F0((__int64)v121, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0xC82u, 0);
    sub_15DD120((__int64)v121, (__int64)a3);
    sub_15F7200(v121);
    return;
  }
  v8 = a3[5].m128i_i64[0];
  if ( !a3[3].m128i_i16[4] )
    goto LABEL_13;
  if ( (v8 & 2) != 0 )
    goto LABEL_13;
  v9 = v8 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (v8 & 0xFFFFFFFFFFFFFFFCLL) == 0 || (*(_WORD *)v9 & 0x1FF) != 0x47 )
    goto LABEL_13;
  v10 = (*(_QWORD *)v9 & 0x200000LL) != 0
      ? *(_QWORD *)(v9 + 16LL * ((*(_QWORD *)v9 & 0x80000LL) != 0) + 32)
      : *(_QWORD *)(v9 + 16);
  if ( !v10 || (*(_BYTE *)(v10 + 28) & 0x7Fu) - 34 > 5 )
    goto LABEL_13;
  a2 = (__m128i *)(&dword_0 + 1);
  if ( !(unsigned int)sub_B75A50(v10, 1) )
  {
    v8 = a3[5].m128i_i64[0];
LABEL_13:
    LODWORD(v117) = 1;
    if ( (v8 & 2) != 0 )
    {
      v14 = *(_DWORD *)(v8 & 0xFFFFFFFFFFFFFFFCLL);
    }
    else
    {
      v13 = v8 & 0xFFFFFFFFFFFFFFFCLL;
      if ( v13 )
        v14 = sub_EEB7E0(v13, (__int64)a2, a4);
      else
        v14 = 1179403647;
    }
    sub_168B9F0((__int64)v121, (__int64 *)(a1 + 8), v14, 0xC53u, 0);
    v15 = sub_15DD120((__int64)v121, (__int64)a3);
    v16 = sub_1588370(v15, (unsigned int *)&v117);
    v17 = v16;
    if ( *(_BYTE *)(v16 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v16 + 32), 5, 2u);
    }
    else if ( *(_BYTE *)(v16 + 132) )
    {
      v30 = sub_168B9E0((_QWORD *)v16);
      v31 = *(void **)(v17 + 16);
      if ( v31 )
        v31 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v31 + 32LL))(*(_QWORD *)(v17 + 16));
      ptr = v31;
      v32 = sub_1587BC0(v30, (__int64 *)&ptr, v26, v27, v28, v29);
      sub_AE9DF0((unsigned __int8 **)(*v32 + 32LL * *(unsigned int *)(v17 + 128) + 8), 5, 2u);
    }
LABEL_18:
    sub_15F7200(v121);
    return;
  }
  v18 = sub_B76070(v10, 1, v11, v12);
  v19 = a3[3].m128i_u16[4];
  if ( v18 != v19 - 1 )
  {
    sub_168B9F0((__int64)v121, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0xCABu, 0);
    v33 = (__int64)a3;
    v34 = sub_15DD120((__int64)v121, (__int64)a3);
    v37 = v34;
    if ( *(_BYTE *)(v34 + 120) )
    {
      v33 = v10;
      sub_AE9DF0((unsigned __int8 **)(v34 + 32), v10, 0xAu);
    }
    else if ( *(_BYTE *)(v34 + 132) )
    {
      v80 = sub_168B9E0((_QWORD *)v34);
      v81 = *(void **)(v37 + 16);
      if ( v81 )
        v81 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v81 + 32LL))(*(_QWORD *)(v37 + 16));
      ptr = v81;
      v82 = sub_1587BC0(v80, (__int64 *)&ptr, v76, v77, v78, v79);
      v33 = v10;
      sub_AE9DF0((unsigned __int8 **)(*v82 + 32LL * *(unsigned int *)(v37 + 128) + 8), v10, 0xAu);
    }
    LODWORD(ptr) = sub_B76070(v10, v33, v35, v36);
    sub_16CF160(v37, (unsigned int *)&ptr);
    goto LABEL_18;
  }
  v112 = 1;
  ptr = v120;
  v119 = 0x800000000LL;
  if ( v19 <= 1 )
  {
    v71 = v120;
    v58 = 0;
LABEL_66:
    v111 = (__m128i *)sub_1806F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 64, 3u);
    sub_B2E470(v111, *(_QWORD *)(a1 + 248), a3, v10, v71, v58);
    sub_B8CC60(v4, (__int64)v111, v72, v73, v74, v75);
    goto LABEL_33;
  }
  v20 = &a3[5].m128i_i64[1];
  if ( (a3[5].m128i_i8[8] & 2) == 0 )
  {
    v38 = 1;
    while ( 1 )
    {
      a2 = (__m128i *)a3;
      v39 = *v20 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !(unsigned __int8)sub_16211A0(a1, a3, v39, &v113, v38 + 1, 0) )
        goto LABEL_33;
      v42 = sub_B76070((__int64)v114, (__int64)a3, v40, v41);
      if ( v42 < v113 )
      {
        sub_168B9F0((__int64)v121, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0xC5Fu, 0);
        v59 = sub_15DD120((__int64)v121, (__int64)a3);
        v60 = sub_1588370(v59, &v113);
        v61 = sub_16060E0(v60, (__int64 *)&v114);
        LODWORD(v117) = sub_B76070((__int64)v114, (__int64)&v114, v62, v63);
        sub_16CF160(v61, (unsigned int *)&v117);
        goto LABEL_32;
      }
      v115 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 120) + 8LL * (v112 - 1)) + 48LL);
      v116 = *(_QWORD *)(*(_QWORD *)(v114[7].m128i_i64[1] + 8LL * (v113 - 1)) + 48LL);
      v44 = *(_QWORD *)&byte_8[v116 & 0xFFFFFFFFFFFFFFF0LL];
      v45 = v44 | v116;
      v46 = v44 & 0xFFFFFFFFFFFFFFF8LL;
      v47 = *(_QWORD *)(v46 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v47 + 8) & 0xF) != 0 )
      {
        v49 = sub_F64F00(v46 | v45 & 7, (__int64)a3, v46, v47, v43) & 0xFFFFFFFFFFFFFFF0LL;
      }
      else
      {
        v48 = v47 & 0xFFFFFFFFFFFFFFF0LL;
        v49 = v48;
      }
      v50 = *(_QWORD *)&byte_8[v115 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL;
      v51 = *(_QWORD *)v50;
      if ( (*(_BYTE *)(*(_QWORD *)v50 + 8LL) & 0xF) != 0 )
        v52 = sub_F64F00(
                *(_QWORD *)&byte_8[v115 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
              | ((unsigned __int8)*(_QWORD *)&byte_8[v115 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v115) & 7,
                (__int64)a3,
                v51,
                v48,
                v43)
            & 0xFFFFFFFFFFFFFFF0LL;
      else
        v52 = v51 & 0xFFFFFFFFFFFFFFF0LL;
      if ( v49 != v52 )
      {
        v64 = sub_EEB7E0(v39, (__int64)a3, a4);
        sub_168B9F0((__int64)v121, (__int64 *)(a1 + 8), v64, 0xC8Du, 0);
        v65 = sub_15DD120((__int64)v121, (__int64)a3);
        v66 = sub_1588370(v65, &v113);
        v67 = sub_16060E0(v66, (__int64 *)&v114);
        v68 = sub_1605D30(v67, &v116);
        v69 = sub_1588370(v68, &v112);
        v70 = v69;
        if ( *(_BYTE *)(v69 + 120) )
        {
          sub_AE9DF0((unsigned __int8 **)(v69 + 32), v10, 0xAu);
        }
        else if ( *(_BYTE *)(v69 + 132) )
        {
          v108 = sub_168B9E0((_QWORD *)v69);
          v109 = *(_QWORD *)(v70 + 16);
          if ( v109 )
            v109 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v109 + 32LL))(*(_QWORD *)(v70 + 16));
          v117 = v109;
          v110 = sub_1587BC0(v108, &v117, v104, v105, v106, v107);
          sub_AE9DF0((unsigned __int8 **)(*v110 + 32LL * *(unsigned int *)(v70 + 128) + 8), v10, 0xAu);
        }
        sub_1605D30(v70, &v115);
        sub_15F7200(v121);
        goto LABEL_33;
      }
      v53 = v113 - 1;
      v54 = (unsigned int)v119;
      v55 = (unsigned int)v119 + 1LL;
      if ( v55 > HIDWORD(v119) )
      {
        a2 = (__m128i *)v120;
        sub_2237220(&ptr, v120, v55, 4);
        v54 = (unsigned int)v119;
      }
      *((_DWORD *)ptr + v54) = v53;
      v56 = v112;
      v57 = a3[3].m128i_u16[4];
      v58 = v119 + 1;
      v38 = v112 + 1;
      LODWORD(v119) = v119 + 1;
      v112 = v38;
      if ( v38 >= v57 )
      {
        v71 = ptr;
        goto LABEL_66;
      }
      v20 = &a3[5].m128i_i64[v38];
      if ( (*(_BYTE *)v20 & 2) != 0 )
      {
        v21 = v56 + 2;
        goto LABEL_25;
      }
    }
  }
  v21 = 2;
LABEL_25:
  v22 = *v20;
  if ( (*v20 & 2) != 0 )
  {
    v25 = (unsigned int *)(v22 & 0xFFFFFFFFFFFFFFFCLL);
  }
  else
  {
    v23 = v22 & 0xFFFFFFFFFFFFFFFCLL;
    if ( v23 )
    {
      v24 = sub_EEB7E0(v23, (__int64)a2, a4);
      goto LABEL_30;
    }
    v25 = nullptr;
  }
  v24 = *v25;
LABEL_30:
  sub_168B9F0((__int64)v121, (__int64 *)(a1 + 8), v24, 0xC53u, 0);
  if ( v124 )
  {
    sub_AE9DF0(v123, (__int64)a3, 0x10u);
    goto LABEL_72;
  }
  if ( v126 )
  {
    v87 = sub_168B9E0(v121);
    v88 = v122;
    if ( v122 )
      v88 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v122 + 32LL))(v122);
    v117 = v88;
    v89 = sub_1587BC0(v87, &v117, v83, v84, v85, v86);
    sub_AE9DF0((unsigned __int8 **)(*v89 + 32LL * v125 + 8), (__int64)a3, 0x10u);
LABEL_72:
    if ( v124 )
    {
      sub_AE9DF0(v123, v21, 3u);
    }
    else
    {
      if ( !v126 )
        goto LABEL_32;
      v99 = sub_168B9E0(v121);
      v102 = v122;
      if ( v122 )
        v102 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v122 + 32LL))(v122);
      v117 = v102;
      v103 = sub_1587BC0(v99, &v117, v97, v98, v100, v101);
      sub_AE9DF0((unsigned __int8 **)(*v103 + 32LL * v125 + 8), v21, 3u);
    }
    if ( v124 )
    {
      sub_AE9DF0(v123, 1, 2u);
    }
    else if ( v126 )
    {
      v92 = sub_168B9E0(v121);
      v95 = v122;
      if ( v122 )
        v95 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v122 + 32LL))(v122);
      v117 = v95;
      v96 = sub_1587BC0(v92, &v117, v90, v91, v93, v94);
      sub_AE9DF0((unsigned __int8 **)(*v96 + 32LL * v125 + 8), 1, 2u);
    }
  }
LABEL_32:
  sub_15F7200(v121);
LABEL_33:
  if ( ptr != v120 )
    free(ptr);
}
