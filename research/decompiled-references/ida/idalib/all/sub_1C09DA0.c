unsigned __int64 __fastcall sub_1C09DA0(
        __m128 *a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        __int64 *a5,
        char a6,
        __m128 a7,
        __m128 a8)
{
  signed int v11; // eax
  unsigned __int64 v12; // rdx
  unsigned int v13; // r14d
  __int64 v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 *v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int *v26; // rax
  __int64 v27; // r14
  size_t v28; // rdx
  char *v29; // rax
  signed __int64 v30; // rdx
  signed __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rax
  _QWORD *v34; // rdi
  unsigned __int64 v35; // rax
  unsigned __int32 v36; // ecx
  __int64 v37; // rsi
  __int64 *v38; // rcx
  char *v39; // rax
  size_t v40; // rdx
  char *v41; // rax
  signed __int64 v42; // rdx
  __int64 v43; // rsi
  __int64 v44; // rax
  __int64 v45; // rbp
  __int64 v46; // rcx
  __int64 v47; // r8
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rax
  unsigned __int16 *v53; // r12
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rsi
  __int64 v57; // rdx
  __int64 *v58; // rax
  __int64 v59; // rcx
  unsigned __int64 v60; // rdx
  unsigned __int64 v61; // rcx
  __int64 v62; // r8
  unsigned __int16 *v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // [rsp-8h] [rbp-1FE0h]
  unsigned int v68; // [rsp+0h] [rbp-1FD8h]
  __int64 v69; // [rsp+0h] [rbp-1FD8h]
  char *v70; // [rsp+0h] [rbp-1FD8h]
  __int64 v71; // [rsp+0h] [rbp-1FD8h]
  size_t v72; // [rsp+8h] [rbp-1FD0h]
  __int64 v73; // [rsp+10h] [rbp-1FC8h]
  char *v74; // [rsp+10h] [rbp-1FC8h]
  size_t v75; // [rsp+18h] [rbp-1FC0h]
  unsigned int v77; // [rsp+20h] [rbp-1FB8h]
  char v78; // [rsp+20h] [rbp-1FB8h]
  unsigned __int64 v79; // [rsp+30h] [rbp-1FA8h]
  __int64 *v80; // [rsp+30h] [rbp-1FA8h]
  _BOOL8 v81; // [rsp+40h] [rbp-1F98h]
  __int64 *v82; // [rsp+48h] [rbp-1F90h] BYREF
  char v83; // [rsp+57h] [rbp-1F81h] BYREF
  __int64 *v84; // [rsp+58h] [rbp-1F80h] BYREF
  __m128i v85; // [rsp+60h] [rbp-1F78h] BYREF
  __int64 v86; // [rsp+70h] [rbp-1F68h]
  __int64 v87; // [rsp+78h] [rbp-1F60h]
  __int64 v88; // [rsp+80h] [rbp-1F58h] BYREF
  _BYTE *v89; // [rsp+90h] [rbp-1F48h] BYREF
  unsigned __int64 v90; // [rsp+98h] [rbp-1F40h]
  __int64 v91; // [rsp+B0h] [rbp-1F28h] BYREF
  unsigned __int64 v92; // [rsp+B8h] [rbp-1F20h] BYREF
  unsigned __int64 v93; // [rsp+C0h] [rbp-1F18h]
  void *v94; // [rsp+E0h] [rbp-1EF8h] BYREF
  __int64 v95; // [rsp+E8h] [rbp-1EF0h]
  _QWORD v96[338]; // [rsp+F0h] [rbp-1EE8h] BYREF
  int v97; // [rsp+B80h] [rbp-1458h]
  char v98; // [rsp+B84h] [rbp-1454h]
  _QWORD v99[17]; // [rsp+B88h] [rbp-1450h] BYREF
  int v100; // [rsp+C10h] [rbp-13C8h]
  __int64 v101; // [rsp+C18h] [rbp-13C0h]
  __int64 v102; // [rsp+C20h] [rbp-13B8h]
  _QWORD *v103; // [rsp+C28h] [rbp-13B0h]
  __int64 v104; // [rsp+C30h] [rbp-13A8h]
  _QWORD v105[6]; // [rsp+C38h] [rbp-13A0h] BYREF
  _QWORD v106[2]; // [rsp+C68h] [rbp-1370h] BYREF
  unsigned int v107; // [rsp+C78h] [rbp-1360h]
  int v108; // [rsp+C7Ch] [rbp-135Ch]
  __int64 v109; // [rsp+C80h] [rbp-1358h]
  char v110; // [rsp+C88h] [rbp-1350h]
  int v111; // [rsp+C8Ch] [rbp-134Ch]
  int v112; // [rsp+1F90h] [rbp-48h]

  v82 = a5;
  v11 = sub_BF97A0(a3);
  v12 = a1[15].m128_u64[1];
  LODWORD(v87) = a2;
  v13 = v11;
  v14 = (v12 + 16LL * v11 + 17592) | 6;
  v86 = v14;
  sub_B85890(&v88, v14);
  if ( (unsigned __int8)sub_1BC8220((__int64)a1, (__int64 *)&v82, (__m128i)a7, a8, v15, v16, v17, v18) )
    return 1;
  v20 = v82;
  v79 = 0;
  v85 = (__m128i)(unsigned __int64)v82;
  v73 = 1;
  if ( a3 <= 1 )
  {
    LODWORD(v95) = sub_A97D20(
                     a1[15].m128_i64[1],
                     *(_QWORD *)(*(_QWORD *)(a1[15].m128_u64[1] + 18720) & 0xFFFFFFFFFFFFFFF0LL));
    if ( (unsigned int)v95 > 0x40 )
      sub_2205470(&v94, 0, 0);
    else
      v94 = nullptr;
    v34 = (_QWORD *)a1[15].m128_u64[1];
    BYTE4(v95) = 0;
    v85.m128i_i64[1] = sub_C0C5D0(v34, (__int64)&v94, v34[2340], 0);
    if ( (unsigned int)v95 > 0x40 && v94 )
      operator delete[](v94);
    v79 = 1;
    v20 = v82;
    v73 = 2;
  }
  if ( (*(_DWORD *)v20 & 0x10000) == 0 )
  {
    v98 = 1;
    v96[337] = 16;
    v94 = v96;
    v95 = 0x1000000000LL;
    v96[336] = v99;
    v103 = v105;
    v104 = 0x400000000LL;
    v105[4] = v106;
    v97 = 0;
    v99[16] = 0;
    v100 = 0;
    v101 = 0;
    v102 = 0;
    v105[5] = 0;
    v106[0] = 0;
    v106[1] = 1;
    v107 = a2;
    v108 = 1;
    v109 = 0;
    v110 = 0;
    v111 = 0;
    v112 = 0;
    sub_1BF4A50((__int64 *)a1, a4, &v85, v73, (__int64)&v94, 0, a7, a8);
    sub_1BF0DE0((__int64 *)a1, v13, a2, &v85, v73, (__int64)&v94, *(double *)a7.m128_u64, a8, 0);
    if ( a6 )
      sub_1BF3E80((__int64 *)a1, v14, a2, &v85, v73, 0, a7, a8, (__int64)&v94, 0);
    sub_1BFBE60((__int64)a1, v13, a2, v85.m128i_i64, v73, (__int64)&v94, *(double *)a7.m128_u64, a8);
    v68 = v95;
    v77 = v100 & 0x3FFFFFFF;
    v23 = sub_1BF27B0((__int64)&v94, a1, a2, &v84, *(double *)a7.m128_u64, a8);
    if ( v23 == 1 )
    {
      if ( !(unsigned __int8)sub_1BF82B0(a1, v13, a2, (unsigned __int64 *)&v85, v73, *(double *)a7.m128_u64, a8) )
      {
LABEL_41:
        v38 = v82;
LABEL_42:
        v33 = sub_19249E0((__int64)a1, a2, a3, (unsigned __int64)v38, 0, v25, a7, a8);
        goto LABEL_28;
      }
    }
    else
    {
      if ( v23 )
      {
        if ( v23 == 2 )
        {
          v39 = sub_BF9560(a3);
          v72 = v40;
          v70 = v39;
          sub_168B9B0((__int64)&v89, (__int64)&a1->m128_i64[1], 4748);
          v41 = sub_BF9560(a3);
          sub_AEC220(&v89, v41, v42);
          v43 = v82[1];
          sub_AE9DF0(&v89, v43, 8u);
          v44 = sub_EEC8C0((unsigned __int64)v82, v43, *(double *)a7.m128_u64);
          LOBYTE(v92) = 1;
          v91 = v44;
          sub_AEC610((__int64 *)&v89, &v91);
          LODWORD(v91) = a2;
          sub_1582CA0((__int64)&v92, &v89);
          sub_1C022A0(
            (__int64)&v94,
            (unsigned int *)&v91,
            a1,
            2,
            (__int64)&v85,
            v73,
            a7,
            a8,
            v70,
            v72,
            a2,
            (unsigned __int8 (__fastcall *)(__int64, __int64))sub_16A7620,
            (__int64)&v83);
LABEL_21:
          if ( v92 && v93 )
            sub_1580C40(v93, v92);
          if ( v89 && v90 )
            sub_1580C40(v90, (unsigned __int64)v89);
          goto LABEL_27;
        }
        if ( v23 == 3 )
        {
          if ( (*(_BYTE *)(*v84 + 83) & 8) != 0 && (v26 = *(unsigned int **)(*v84 + 128), *((_BYTE *)v26 + 4)) )
          {
            v27 = *(_QWORD *)&v26[2 * *v26 + 2];
            v81 = v27 != 0;
          }
          else
          {
            v81 = 0;
            v27 = 0;
          }
          v74 = sub_BF9560(a3);
          v75 = v28;
          sub_168B9B0((__int64)&v89, (__int64)&a1->m128_i64[1], 4755);
          v29 = sub_BF9560(a3);
          sub_AEC220(&v89, v29, v30);
          sub_AE9DF0(&v89, v81, 2u);
          v31 = 0;
          if ( v27 )
          {
            v31 = *(_DWORD *)(v27 + 16) * ((*(_WORD *)(v27 + 2) >> 6) & 7u);
            v27 += 4LL * *(unsigned int *)(v27 + 4) + 20;
          }
          sub_AEC220(&v89, (_BYTE *)v27, v31);
          v32 = sub_EEC8C0((unsigned __int64)v82, v27, *(double *)a7.m128_u64);
          LOBYTE(v92) = 1;
          v91 = v32;
          sub_AEC610((__int64 *)&v89, &v91);
          LODWORD(v91) = a2;
          sub_1582CA0((__int64)&v92, &v89);
          sub_1C022A0(
            (__int64)&v94,
            (unsigned int *)&v91,
            a1,
            0,
            (__int64)&v85.m128i_i64[1],
            v79,
            a7,
            a8,
            v74,
            v75,
            a2,
            (unsigned __int8 (__fastcall *)(__int64, __int64))sub_16A7620,
            (__int64)&v83);
          goto LABEL_21;
        }
        goto LABEL_41;
      }
      v45 = *v84;
      if ( *v84 )
      {
        if ( (*(_BYTE *)(v45 + 28) & 0x7Fu) - 35 > 3 )
        {
          v80 = v82;
          sub_19CF970(
            (__int64)&v91,
            (_QWORD *)a1[15].m128_u64[1],
            **(_QWORD **)(v45 + 120),
            *(_QWORD *)(**(_QWORD **)(v45 + 120) + 48LL),
            v24,
            v25);
          v64 = sub_1A24E20((__int64)a1, (__int64)&v91, 0, (__int64)v80, 0, 0, a7, a8);
          if ( v64 != 1 )
          {
            v49 = 0;
            v82 = (__int64 *)(v64 & 0xFFFFFFFFFFFFFFFELL);
            goto LABEL_51;
          }
        }
        else
        {
          sub_1663420(a1, a2, (unsigned __int64)v82, 0, v84[1], v25, *(double *)a7.m128_u64);
          if ( (unsigned __int8)sub_B981D0((_QWORD *)v45, a2) )
            v48 = sub_1BCBCC0((__int64)a1, (__int64)v82, v45, v46, v47, a7, a8);
          else
            v48 = sub_1BF87F0((__int64)a1, (__int64)v82, 0, v84[1] & 0xFFFFFFFFFFFFFFF8LL, v45, a7, a8);
          if ( v48 != 1 )
          {
            v82 = (__int64 *)(v48 & 0xFFFFFFFFFFFFFFFELL);
            v49 = v48 & 0xFFFFFFFFFFFFFFFELL;
LABEL_51:
            v91 = 0;
            v71 = sub_1BC7390(
                    a1,
                    v45,
                    v84[1] & 0xFFFFFFFFFFFFFFF8LL,
                    v49,
                    v68 + (unsigned __int64)v77 > 1,
                    a2,
                    a7,
                    a8,
                    &v91);
            if ( v71 != 1 )
            {
              v91 = sub_C1D490(v45, v45, v66, v50);
              v78 = sub_18C0240(v91, v45);
              v91 = sub_F67970(&v91, a1[15].m128_i64[1]);
              v51 = a1[122].m128_u32[1];
              v85.m128i_i64[0] = (__int64)v82;
              v52 = a1[122].m128_u32[0];
              if ( a1[121].m128_u64[1] == __PAIR64__(v51, v52) )
              {
                v51 = 0;
                v52 = 0;
              }
              v53 = (unsigned __int16 *)sub_C98520(
                                          (_QWORD *)a1[15].m128_u64[1],
                                          v13,
                                          v71 & 0xFFFFFFFFFFFFFFFELL,
                                          &v85,
                                          v73,
                                          v91,
                                          v78,
                                          a2,
                                          (v51 << 32) | v52,
                                          (v84[13] & 0x40) != 0);
              v56 = sub_C1D490(v45, v13, v54, v55);
              if ( !(unsigned __int8)sub_18C4140((__int64)a1, v56, a2, (__int64)v53, v45) )
              {
                v58 = (__int64 *)(*(_QWORD *)(v45 + 48) & 0xFFFFFFFFFFFFFFF0LL);
                v59 = *v58;
                if ( *(_BYTE *)(*v58 + 16) != 26 )
                  v59 = sub_F63050(*v58, v56, v57, v59);
                if ( !(unsigned __int8)sub_16F8E60(
                                         (__int64 *)a1,
                                         v45,
                                         (unsigned __int64)v53,
                                         v59,
                                         (__m128i)a7,
                                         *(double *)a8.m128_u64) )
                {
                  v63 = sub_19A3E40((__int64)a1, v53, v60, v61, v62, a7, a8);
                  v33 = sub_18C3A50((__int64)a1, (unsigned __int64)v63, v45);
                  goto LABEL_28;
                }
              }
            }
          }
        }
      }
      else
      {
        v65 = sub_19AFC70((__int64)a1, v82, v84[2], v84[6], 1, 4u, a7, a8);
        if ( v65 != 1 )
        {
          v38 = (__int64 *)(v65 & 0xFFFFFFFFFFFFFFFELL);
          v82 = (__int64 *)(v65 & 0xFFFFFFFFFFFFFFFELL);
          goto LABEL_42;
        }
      }
    }
LABEL_27:
    v33 = 1;
LABEL_28:
    v69 = v33;
    sub_17A20D0((__int64)&v94);
    return v69;
  }
  if ( *(_DWORD *)(a4 + 8) )
  {
    v35 = sub_1BD6F20((__int64)a1, 0, 0, 0, a4, 1u, (const __m128i)a7);
    if ( v35 == 1 )
      return 1;
    v36 = a1[122].m128_u32[0];
    v37 = a1[122].m128_u32[1];
    if ( a1[121].m128_u64[1] == __PAIR64__(v37, v36) )
    {
      v37 = 0;
      v36 = 0;
    }
    return sub_C98520(
             (_QWORD *)a1[15].m128_u64[1],
             v13,
             v35 & 0xFFFFFFFFFFFFFFFELL,
             &v85,
             v73,
             *(_QWORD *)(a1[15].m128_u64[1] + 19072),
             0,
             a2,
             (v37 << 32) | v36,
             0);
  }
  else
  {
    v21 = a1[122].m128_u32[0];
    v22 = a1[122].m128_u32[1];
    if ( a1[121].m128_u64[1] == __PAIR64__(v22, v21) )
    {
      v22 = 0;
      v21 = 0;
    }
    return sub_C09D40(
             (_QWORD *)a1[15].m128_u64[1],
             (__int64)v20,
             a3,
             *(_QWORD *)(a1[15].m128_u64[1] + 19072),
             (a3 == 5) | (unsigned __int8)(a3 - 2 <= 1),
             0,
             a2,
             0,
             (v22 << 32) | v21);
  }
}
