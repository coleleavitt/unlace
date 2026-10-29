void __fastcall sub_18DA630(__int64 *a1, __int64 *a2, __int64 *a3, unsigned int a4, int a5, __int64 a6, double a7)
{
  __int64 v7; // rax
  __int64 v13; // rdi
  _DWORD *v14; // rdi
  unsigned __int64 v15; // rdx
  __int64 *v16; // r12
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  __int64 *v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r9
  unsigned __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rsi
  __int64 v27; // rdx
  void *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // r9
  __int64 v33; // rdx
  unsigned __int8 v34; // al
  int v35; // eax
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rdx
  unsigned int v39; // eax
  void *v40; // rdx
  __m128i si128; // xmm0
  unsigned int v42; // edx
  bool v43; // al
  __int64 *v44; // rsi
  __int64 v45; // rbx
  int v46; // eax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rbx
  __int64 v50; // rbx
  int v51; // eax
  unsigned int v52; // eax
  __int64 v53; // rbx
  __int64 v54; // rbx
  unsigned int v55; // eax
  void *v56; // rax
  void *v57; // rcx
  void **p_ptr; // rdx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rbx
  __int64 v62; // r8
  __int64 v63; // r9
  void *v64; // rax
  _QWORD *v65; // rax
  unsigned __int64 v66; // [rsp+0h] [rbp-258h]
  bool v67; // [rsp+0h] [rbp-258h]
  __int64 v68; // [rsp+8h] [rbp-250h]
  unsigned __int64 v69; // [rsp+8h] [rbp-250h]
  unsigned int v70; // [rsp+10h] [rbp-248h]
  int v71; // [rsp+18h] [rbp-240h]
  __int64 *v72; // [rsp+20h] [rbp-238h]
  unsigned int v73; // [rsp+2Ch] [rbp-22Ch]
  void *v74; // [rsp+30h] [rbp-228h]
  __int64 v75[2]; // [rsp+38h] [rbp-220h] BYREF
  unsigned int v76; // [rsp+48h] [rbp-210h] BYREF
  unsigned int v77; // [rsp+4Ch] [rbp-20Ch] BYREF
  __int64 v78; // [rsp+50h] [rbp-208h] BYREF
  __int64 v79; // [rsp+58h] [rbp-200h] BYREF
  void *v80; // [rsp+60h] [rbp-1F8h] BYREF
  unsigned int v81; // [rsp+68h] [rbp-1F0h]
  char v82; // [rsp+6Ch] [rbp-1ECh]
  void *v83; // [rsp+70h] [rbp-1E8h] BYREF
  unsigned int v84; // [rsp+78h] [rbp-1E0h]
  char v85; // [rsp+7Ch] [rbp-1DCh]
  void *v86; // [rsp+80h] [rbp-1D8h] BYREF
  unsigned int v87; // [rsp+88h] [rbp-1D0h]
  void *v88; // [rsp+90h] [rbp-1C8h] BYREF
  unsigned int v89; // [rsp+98h] [rbp-1C0h]
  char v90; // [rsp+9Ch] [rbp-1BCh]
  void *v91; // [rsp+A0h] [rbp-1B8h] BYREF
  __int64 v92; // [rsp+A8h] [rbp-1B0h]
  void *ptr; // [rsp+B0h] [rbp-1A8h] BYREF
  __m128i v94; // [rsp+B8h] [rbp-1A0h]
  _BYTE v95[40]; // [rsp+C8h] [rbp-190h] BYREF
  __int16 v96; // [rsp+F0h] [rbp-168h] BYREF
  __int64 v97; // [rsp+F8h] [rbp-160h]
  unsigned int v98; // [rsp+100h] [rbp-158h] BYREF
  char v99; // [rsp+104h] [rbp-154h]
  void *v100; // [rsp+108h] [rbp-150h]
  unsigned int v101; // [rsp+110h] [rbp-148h]
  char v102; // [rsp+114h] [rbp-144h]
  unsigned __int64 v103; // [rsp+140h] [rbp-118h] BYREF
  __int64 v104; // [rsp+148h] [rbp-110h]
  unsigned int v105; // [rsp+150h] [rbp-108h] BYREF
  char v106; // [rsp+154h] [rbp-104h]
  void *v107; // [rsp+158h] [rbp-100h]
  unsigned int v108; // [rsp+160h] [rbp-F8h]
  char v109; // [rsp+164h] [rbp-F4h]
  void *v110; // [rsp+190h] [rbp-C8h] BYREF
  unsigned __int64 v111; // [rsp+198h] [rbp-C0h]
  void *v112; // [rsp+1A0h] [rbp-B8h]
  unsigned __int8 *v113; // [rsp+1B0h] [rbp-A8h] BYREF
  char v114; // [rsp+208h] [rbp-50h]
  unsigned int v115; // [rsp+210h] [rbp-48h]
  char v116; // [rsp+214h] [rbp-44h]

  v7 = a1[29];
  v75[0] = a6;
  if ( (*(_BYTE *)(v7 + 47) & 0x20) == 0 )
  {
    if ( a5 == 8 )
    {
      v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_BFBAE0(*a2 & 0xFFFFFFFFFFFFFFFELL) + 8)
                                              & 0xFFFFFFFFFFFFFFF0LL)
                                  + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v21 + 16) == 13 && ((*(_WORD *)(v21 + 18) >> 3) & 0x1FF) == 0x1B4 )
      {
        sub_168B9F0((__int64)&v110, a1 + 1, a4, 0x1CC0u, 0);
        v103 = sub_EEC8C0(*a2 & 0xFFFFFFFFFFFFFFFELL, (__int64)(a1 + 1), a7);
        sub_1587DB0((__int64)&v110, (__int64 *)&v103);
        sub_15F7200(&v110);
      }
    }
    v99 &= ~1u;
    v96 = 0;
    v13 = *a3;
    v97 = 0;
    v98 = 0;
    v14 = (_DWORD *)(v13 & 0xFFFFFFFFFFFFFFFELL);
    if ( (*v14 & 0x20000) == 0 )
    {
      if ( !(unsigned __int8)sub_C3F220((unsigned __int64)v14, (__int64)&v96, a1[31], 0, 0, a6) )
        goto LABEL_22;
      v81 = v101;
      if ( v101 > 0x40 )
        sub_2205510(&v80);
      else
        v80 = v100;
      v82 = v102;
      if ( !v102 )
      {
        v15 = (unsigned __int64)v80;
        if ( v81 > 0x40 )
          v15 = *((_QWORD *)v80 + ((v81 - 1) >> 6));
        if ( (v15 & (1LL << ((unsigned __int8)v81 - 1))) != 0 )
        {
          v16 = (__int64 *)&v103;
          sub_168B9B0((__int64)&v110, (__int64)(a1 + 1), 7363);
          v17 = sub_EEC8C0(*a3 & 0xFFFFFFFFFFFFFFFELL, (__int64)(a1 + 1), a7);
          LOBYTE(v104) = 1;
          v103 = v17;
          sub_AEC610((__int64 *)&v110, (__int64 *)&v103);
          v18 = *a3 & 0xFFFFFFFFFFFFFFFELL;
          v103 = v18;
          if ( v18 )
            v18 = 1;
          else
            v16 = nullptr;
          v19 = v16;
LABEL_15:
          sub_18CA280((__int64)a1, a4, v19, v18, (__int64)&v110);
          if ( v110 && v111 )
            sub_1580C40(v111, (unsigned __int64)v110);
LABEL_18:
          LODWORD(v20) = v81;
          goto LABEL_19;
        }
      }
      v68 = *(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFFELL) + 8);
      v22 = sub_A97D20(a1[31], *(_QWORD *)(v68 & 0xFFFFFFFFFFFFFFF0LL));
      v24 = v68 & 0xFFFFFFFFFFFFFFF0LL;
      v25 = v68;
      v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v68 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      v27 = *(unsigned __int8 *)(v26 + 16);
      if ( (_BYTE)v27 == 10 )
      {
        v52 = sub_AAC1F0(a1[31], v68, v27, v24, v68);
        v24 = v68 & 0xFFFFFFFFFFFFFFF0LL;
        v66 = v52;
      }
      else
      {
        v66 = v22;
        if ( (_BYTE)v27 == 13 && (((*(_WORD *)(v26 + 18) >> 3) + 56) & 0x1FFu) <= 0x17 )
        {
          v55 = sub_AAE100(a1[31], v68, v27, v24);
          v24 = v68 & 0xFFFFFFFFFFFFFFF0LL;
          v66 = (unsigned __int16)v55 - (v55 >> 31);
        }
      }
      v20 = v81;
      if ( v81 > 0x40 )
      {
        v70 = v81;
        v69 = v24;
        v51 = sub_2206780(&v80);
        v20 = v70;
        v24 = v69;
        if ( v70 - v51 > 0x40 )
        {
LABEL_35:
          sub_168B9B0((__int64)&v110, (__int64)(a1 + 1), 7361);
          v29 = sub_EEC8C0(*a3 & 0xFFFFFFFFFFFFFFFELL, (__int64)(a1 + 1), a7);
          LOBYTE(v104) = 1;
          v103 = v29;
          sub_AEC610((__int64 *)&v110, (__int64 *)&v103);
          v18 = *a3 & 0xFFFFFFFFFFFFFFFELL;
          v103 = v18;
          if ( v18 )
          {
            v18 = 1;
            v19 = (__int64 *)&v103;
          }
          else
          {
            v19 = nullptr;
          }
          goto LABEL_15;
        }
        v28 = *(void **)v80;
      }
      else
      {
        v28 = v80;
      }
      if ( v66 <= (unsigned __int64)v28 )
        goto LABEL_35;
      if ( a5 != 7
        || (v30 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v24 + 8LL) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v30 + 16) == 13)
        && (((*(_WORD *)(v30 + 18) >> 3) + 56) & 0x1FFu) <= 0x17
        || (v31 = *a2,
            v104 = 0,
            LOWORD(v103) = 0,
            v106 &= ~1u,
            v105 = 0,
            (*(_DWORD *)(v31 & 0xFFFFFFFFFFFFFFFELL) & 0x20000) != 0) )
      {
LABEL_19:
        if ( (unsigned int)v20 > 0x40 )
        {
LABEL_20:
          if ( v80 )
            operator delete[](v80);
        }
LABEL_22:
        if ( v98 > 1 )
          sub_A4F8E0((int *)&v98);
        return;
      }
      if ( sub_F65540(*(_QWORD *)(v75[0] & 0xFFFFFFFFFFFFFFF0LL), 0, v20, v24, v25, v23)
        || !(unsigned __int8)sub_C3F220(*a2 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v103, a1[31], 0, 0, v32) )
      {
LABEL_100:
        if ( v105 > 1 )
          sub_A4F8E0((int *)&v105);
        goto LABEL_18;
      }
      v84 = v108;
      if ( v108 > 0x40 )
        sub_2205510(&v83);
      else
        v83 = v107;
      v33 = a1[29];
      v34 = *(_BYTE *)(v33 + 211);
      v85 = v109;
      if ( v34 >> 6 != 1 && *(char *)(v33 + 1) >= 0 )
      {
        if ( !v109 && sub_18BB800((__int64 *)&v83) )
        {
          sub_168B9B0((__int64)&v110, (__int64)(a1 + 1), 7362);
          v56 = (void *)sub_EEC8C0(*a2 & 0xFFFFFFFFFFFFFFFELL, (__int64)(a1 + 1), a7);
          v94.m128i_i8[0] = 1;
          ptr = v56;
          sub_AEC610((__int64 *)&v110, (__int64 *)&ptr);
          v57 = (void *)(*a2 & 0xFFFFFFFFFFFFFFFELL);
          ptr = v57;
          if ( v57 )
          {
            v57 = &dword_0 + 1;
            p_ptr = &ptr;
          }
          else
          {
            p_ptr = nullptr;
          }
          sub_18CA280((__int64)a1, a4, p_ptr, (__int64)v57, (__int64)&v110);
          if ( v110 && v111 )
            sub_1580C40(v111, (unsigned __int64)v110);
          goto LABEL_97;
        }
        v35 = sub_C16790((__int64)&v83);
        v36 = v84 + 1 - v35;
        v37 = v36;
        LODWORD(v111) = v81;
        if ( v81 > 0x40 )
        {
          sub_2205510(&v110);
          v37 = v36;
        }
        else
        {
          v110 = v80;
        }
        sub_2205A20(&v110, v37);
        v38 = (__int64)v110;
        v87 = v111;
        v86 = v110;
        v71 = v111;
        if ( (unsigned int)v111 > 0x40 )
        {
          v72 = (__int64 *)v110;
          if ( v71 - (unsigned int)sub_2206780(&v86) <= 0x40 )
          {
            v38 = *v72;
            if ( v66 >= *v72 )
            {
LABEL_104:
              if ( v86 )
                operator delete[](v86);
              goto LABEL_97;
            }
          }
          else
          {
            v38 = 0xFFFFFFFFLL;
          }
LABEL_54:
          if ( v85 )
          {
            sub_2206CD0(&v110, &v83, v38);
            v39 = v111;
            v40 = v110;
            v90 = 1;
          }
          else
          {
            sub_2206B70(&v110, &v83, v38);
            v39 = v111;
            v40 = v110;
            v90 = 0;
          }
          v89 = v111;
          v88 = v110;
          LODWORD(v111) = v39;
          if ( v39 > 0x40 )
            sub_2205510(&v110);
          else
            v110 = v40;
          sub_220A570(&v110, &v80);
          if ( v89 > 0x40 && v88 )
            operator delete[](v88);
          si128 = _mm_load_si128((const __m128i *)&xmmword_23A8CF0);
          v88 = v110;
          v89 = v111;
          ptr = v95;
          v94 = si128;
          sub_220BA90((unsigned int)&v88, (unsigned int)&ptr, 16, 0, 1, 1, 0);
          LODWORD(v92) = v87;
          if ( v87 > 0x40 )
            sub_2205510(&v91);
          else
            v91 = v86;
          sub_2205B00(&v91, 1);
          v42 = v92;
          LODWORD(v92) = 0;
          LODWORD(v111) = v42;
          v73 = v42;
          v110 = v91;
          v74 = v91;
          v43 = sub_9954A0((__int64)&v110, (_QWORD *)v66);
          if ( v73 > 0x40 )
          {
            if ( v74 )
            {
              v67 = v43;
              operator delete[](v74);
              v43 = v67;
              if ( (unsigned int)v92 > 0x40 )
              {
                if ( v91 )
                {
                  operator delete[](v91);
                  v43 = v67;
                }
              }
            }
          }
          v44 = a1 + 1;
          if ( !v43 )
          {
            sub_168B9F0((__int64)&v110, v44, a4, 0x1CC4u, 0);
            v91 = ptr;
            v92 = v94.m128i_i64[0];
            v45 = sub_166BAF0((__int64)&v110, (__int64)&v91);
            v46 = sub_C16790((__int64)&v88);
            v76 = v89 + 1 - v46;
            v47 = sub_16CF160(v45, &v76);
            v48 = sub_1605D30(v47, v75);
            v77 = v84;
            v49 = sub_16CF160(v48, &v77);
            v78 = sub_EEC8C0(*a2 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v77, *(double *)si128.m128i_i64);
            v50 = sub_1587DB0(v49, &v78);
            v79 = sub_EEC8C0(*a3 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v78, *(double *)si128.m128i_i64);
            sub_1587DB0(v50, &v79);
            sub_15F7200(&v110);
            if ( ptr != v95 )
              free(ptr);
            if ( v89 > 0x40 && v88 )
              operator delete[](v88);
            if ( v87 > 0x40 && v86 )
              operator delete[](v86);
            if ( v84 > 0x40 && v83 )
              operator delete[](v83);
            if ( v105 > 1 )
              sub_A4F8E0((int *)&v105);
            if ( v81 <= 0x40 )
              goto LABEL_22;
            goto LABEL_20;
          }
          sub_168B9F0((__int64)&v110, v44, a4, 0x1CC5u, 0);
          if ( v114 )
          {
            sub_AEC220(&v113, ptr, v94.m128i_i64[0]);
          }
          else if ( v116 )
          {
            v61 = sub_168B9E0(&v110);
            v64 = v112;
            if ( v112 )
              v64 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v112 + 32LL))(v112);
            v91 = v64;
            v65 = sub_1587BC0(v61, (__int64 *)&v91, v59, v60, v62, v63);
            sub_AEC220((unsigned __int8 **)(*v65 + 32LL * v115 + 8), ptr, v94.m128i_i64[0]);
          }
          v53 = sub_1605D30((__int64)&v110, v75);
          v79 = sub_EEC8C0(*a2 & 0xFFFFFFFFFFFFFFFELL, (__int64)v75, *(double *)si128.m128i_i64);
          v54 = sub_1587DB0(v53, &v79);
          v91 = (void *)sub_EEC8C0(*a3 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v79, *(double *)si128.m128i_i64);
          sub_1587DB0(v54, (__int64 *)&v91);
          sub_15F7200(&v110);
          if ( ptr != v95 )
            free(ptr);
          if ( v89 > 0x40 && v88 )
            operator delete[](v88);
          if ( v87 <= 0x40 )
            goto LABEL_97;
          goto LABEL_104;
        }
        if ( v66 < (unsigned __int64)v110 )
          goto LABEL_54;
      }
LABEL_97:
      if ( v84 > 0x40 && v83 )
        operator delete[](v83);
      goto LABEL_100;
    }
  }
}
