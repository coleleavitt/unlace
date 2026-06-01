__int64 __fastcall sub_19AA5D0(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        __int16 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        int a9,
        int a10,
        __int64 a11,
        unsigned __int64 a12)
{
  __int64 *v12; // r15
  __int64 *v13; // r14
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdi
  __int64 v22; // rax
  unsigned int v23; // eax
  __int64 v24; // rsi
  bool v25; // al
  __int64 v26; // rcx
  __int64 v27; // r11
  unsigned int v28; // r10d
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rdx
  _QWORD *v32; // rdi
  _QWORD *v33; // rsi
  __int64 v34; // r13
  __int128 v35; // rax
  __int64 v36; // rbx
  __int64 *v38; // rsi
  __int64 v39; // rbp
  __int64 *v40; // r11
  __int64 v41; // rax
  __int64 v42; // rbx
  __int64 v43; // rax
  unsigned int v44; // r14d
  _QWORD *v45; // rdi
  unsigned int v46; // eax
  __int64 v47; // rax
  __int64 v48; // r13
  __int64 v49; // rax
  char v50; // al
  __int64 v51; // rax
  __int64 v52; // rbx
  __int64 v53; // rax
  unsigned int v54; // r14d
  __int64 v55; // rax
  bool v56; // al
  __int64 v57; // rax
  __int64 v58; // r14
  __int64 *v59; // rsi
  __int64 v60; // r14
  char v61; // dl
  bool v62; // zf
  __int64 *v63; // r14
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  _QWORD *v68; // rax
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  _QWORD *v72; // rdx
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  size_t v77; // rax
  int v78; // edx
  __int128 v79; // [rsp-10h] [rbp-1E8h]
  __int128 v81; // [rsp+0h] [rbp-1D8h]
  unsigned __int64 v82; // [rsp+10h] [rbp-1C8h]
  __int64 v83; // [rsp+18h] [rbp-1C0h]
  unsigned int v84; // [rsp+20h] [rbp-1B8h]
  __int64 v85; // [rsp+20h] [rbp-1B8h]
  __int64 v86; // [rsp+20h] [rbp-1B8h]
  _QWORD *v87; // [rsp+28h] [rbp-1B0h]
  unsigned int v88; // [rsp+30h] [rbp-1A8h]
  unsigned int v89; // [rsp+30h] [rbp-1A8h]
  __int16 v90; // [rsp+34h] [rbp-1A4h] BYREF
  unsigned __int64 v91; // [rsp+38h] [rbp-1A0h] BYREF
  unsigned __int64 v92; // [rsp+40h] [rbp-198h] BYREF
  __int64 v93; // [rsp+48h] [rbp-190h] BYREF
  __int64 v94; // [rsp+50h] [rbp-188h] BYREF
  unsigned __int64 v95; // [rsp+58h] [rbp-180h] BYREF
  __int64 v96; // [rsp+64h] [rbp-174h] BYREF
  char v97; // [rsp+6Ch] [rbp-16Ch]
  __int64 v98[2]; // [rsp+70h] [rbp-168h] BYREF
  __int64 v99; // [rsp+80h] [rbp-158h] BYREF
  __int64 *v100; // [rsp+88h] [rbp-150h]
  __int64 v101; // [rsp+90h] [rbp-148h]
  char v102; // [rsp+98h] [rbp-140h]
  _QWORD v103[10]; // [rsp+A0h] [rbp-138h] BYREF
  int v104; // [rsp+F0h] [rbp-E8h]
  char v105; // [rsp+F8h] [rbp-E0h]
  __int64 v106; // [rsp+100h] [rbp-D8h]
  __int64 v107; // [rsp+110h] [rbp-C8h] BYREF
  __int64 *v108; // [rsp+118h] [rbp-C0h]
  void *v109; // [rsp+128h] [rbp-B0h]
  __int64 v110; // [rsp+138h] [rbp-A0h] BYREF

  v12 = (__int64 *)a6;
  v13 = nullptr;
  v16 = a11;
  v91 = a2;
  v82 = a12;
  v90 = a4;
  if ( a11 && (a11 & 4) == 0 )
    v13 = (__int64 *)(a11 & 0xFFFFFFFFFFFFFFF8LL);
  v92 = 0;
  if ( (unsigned __int8)sub_19AA3D0(a1, (__int64 *)&v92, &v91, (__int64)&v90, a3, a6, a7, a8) )
    return 1;
  v21 = *(_QWORD *)(v92 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v21 + 17) & 4) == 0 && !sub_F61140(v21, (__int64)&v92, v17, v18, v19, v20) )
  {
    v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v92 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v17 = *(unsigned __int8 *)(v18 + 16);
    if ( (unsigned int)(v17 - 57) > 1 && (unsigned __int8)(v17 - 31) > 1u )
    {
      v38 = (__int64 *)(a1 + 8);
      if ( (**(_BYTE **)(a1 + 232) & 0x20) == 0 || (_BYTE)v17 != 13 || ((*(_WORD *)(v18 + 18) >> 3) & 0x1FF) != 0x1B3 )
      {
        sub_168B9F0((__int64)&v107, v38, a3, 0x12FFu, 0);
        v39 = sub_1605D30((__int64)&v107, (__int64 *)&v92);
        v99 = sub_EEC8C0(v91, (__int64)&v92, *(double *)a7.m128_u64);
        sub_1587DB0(v39, &v99);
        sub_15F7200(&v107);
        return 1;
      }
      sub_168B9F0((__int64)&v107, v38, a3, 0x1618u, 0);
      v99 = sub_EEC8C0(v91, (__int64)v38, *(double *)a7.m128_u64);
      sub_1587DB0((__int64)&v107, &v99);
      sub_15F7200(&v107);
    }
  }
  if ( v13 )
  {
    v95 = *v13;
    v22 = *v13;
    v108 = v13 + 1;
    v107 = v22;
    v23 = sub_F6CCB0(&v107, a7);
    v18 = v95;
    v84 = v23;
    if ( (*(_BYTE *)(*(_QWORD *)(v95 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
    {
      v24 = v92;
      v19 = v92 & 0xFFFFFFFFFFFFFFF0LL;
      v20 = *(_QWORD *)(v92 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v20 + 17) & 4) == 0 )
      {
        v25 = sub_199F900(v95, v92);
        v28 = v84;
        if ( v25 )
        {
          v29 = *(_QWORD *)(v27 + 8);
          if ( (v29 & 8) != 0 )
          {
            v50 = v26 | v29;
            v18 = *(_QWORD *)(v19 + 8);
            v31 = 0;
            v30 = ((*(__int64 *)((char *)&qword_18 + (*(_QWORD *)(v27 + 8) & 0xFFFFFFFFFFFFFFF0LL))
                  | (unsigned __int64)(v50 & 7)) >> 6)
                & 7;
            if ( (v18 & 8) == 0 )
              goto LABEL_14;
          }
          else
          {
            v18 = *(_QWORD *)(v19 + 8);
            if ( (v18 & 8) == 0 )
              goto LABEL_19;
            LODWORD(v30) = 0;
          }
          v18 &= 0xFFFFFFFFFFFFFFF0LL;
          v31 = *(_QWORD *)(v18 + 24);
LABEL_14:
          v17 = (v31 >> 6) & 7;
          if ( (_DWORD)v17 == (_DWORD)v30 )
            goto LABEL_19;
          if ( (_DWORD)v30 )
          {
            v89 = v84;
            sub_168B9F0((__int64)&v107, (__int64 *)(a1 + 8), v84, 0xBDFu, 0);
            v51 = sub_1605D30((__int64)&v107, (__int64 *)&v92);
            v52 = sub_1605D30(v51, (__int64 *)&v95);
            v96 = sub_EEC8C0(v91, (__int64)&v95, *(double *)a7.m128_u64);
            v86 = sub_1587DB0(v52, &v96);
            v53 = *v13;
            v100 = v13 + 1;
            v99 = v53;
            v54 = sub_F6CE20(&v99);
            v98[0] = __PAIR64__(v54, sub_F6CCB0(&v99, a7));
            sub_1587DB0(v86, v98);
            sub_15F7200(&v107);
            v28 = v89;
          }
          v32 = *(_QWORD **)(a1 + 248);
          v95 = v92;
          v33 = sub_A81910(v32, v92, v28);
          goto LABEL_18;
        }
        v40 = (__int64 *)(a1 + 8);
        if ( v90 != 26
          || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 42
          || (v55 = sub_F68450(v20, v24, v17, v26, v19),
              v56 = sub_199F900(v95, v55),
              v40 = (__int64 *)(a1 + 8),
              v28 = v84,
              !v56) )
        {
          v88 = v28;
          sub_168B9F0((__int64)&v107, v40, v28, 0x1302u, 0);
          v41 = sub_1605D30((__int64)&v107, (__int64 *)&v92);
          v42 = sub_1605D30(v41, (__int64 *)&v95);
          v96 = sub_EEC8C0(v91, (__int64)&v95, *(double *)a7.m128_u64);
          v85 = sub_1587DB0(v42, &v96);
          v43 = *v13;
          v100 = v13 + 1;
          v99 = v43;
          v44 = sub_F6CE20(&v99);
          v98[0] = __PAIR64__(v44, sub_F6CCB0(&v99, a7));
          sub_1587DB0(v85, v98);
          sub_15F7200(&v107);
          v45 = *(_QWORD **)(a1 + 248);
          v95 = v92;
          v33 = sub_A81910(v45, v92, v88);
LABEL_18:
          sub_C93FF0((__int64)&v107, (__int64)v33);
          v17 = (unsigned int)v108;
          v16 = v107;
          v82 = (unsigned int)v108 | a12 & 0xFFFFFFFF00000000LL;
          goto LABEL_19;
        }
        sub_168B9F0((__int64)&v107, (__int64 *)(a1 + 8), a3, 0x14AFu, 0);
        v57 = sub_1605D30((__int64)&v107, (__int64 *)&v92);
        LODWORD(v96) = 0;
        v58 = sub_1587D10(v57, (int *)&v96);
        v59 = v98;
        v98[0] = sub_EEC8C0(v91, (__int64)&v96, *(double *)a7.m128_u64);
        v60 = sub_1587DB0(v58, v98);
        v99 = *(_QWORD *)v60;
        v100 = *(__int64 **)(v60 + 8);
        v101 = *(_QWORD *)(v60 + 16);
        v61 = *(_BYTE *)(v60 + 24);
        v105 = 0;
        v62 = *(_BYTE *)(v60 + 120) == 0;
        v102 = v61;
        if ( !v62 )
        {
          v59 = (__int64 *)(v60 + 32);
          sub_FC70F0((__int64)v103, v60 + 32);
          v103[9] = *(_QWORD *)(v60 + 104);
          v78 = *(_DWORD *)(v60 + 112);
          v105 = 1;
          v104 = v78;
        }
        v106 = *(_QWORD *)(v60 + 128);
        sub_15F7200(&v107);
        v63 = (__int64 *)(v95 & 0xFFFFFFFFFFFFFFF0LL);
        v68 = sub_F63270(*(_QWORD *)(v95 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v59, v64, v65, v66, v67);
        v72 = v68;
        if ( v68 )
        {
          if ( !v68[16] )
          {
            v87 = v68;
            sub_7052B0((__int64 *)(v68[13] + 96LL), v68[13], (__int64)v68, v69, v70, v71);
            v72 = v87;
            if ( !v87[16] )
              goto LABEL_45;
          }
          v73 = sub_1A69EF0(a1, v72);
          if ( !v73 || !sub_18C0C50(a1, v73, 0, v74, v75, v76) )
            goto LABEL_45;
        }
        else if ( (*(_BYTE *)(*v63 + 17) & 4) == 0
               && !sub_F61140(*v63, (__int64)v59, 0, v69, v70, v71)
               && (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v63 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57) > 1u )
        {
LABEL_45:
          v92 = v95;
          v90 = 37;
          sub_15F7200(&v99);
          goto LABEL_19;
        }
        v77 = j__strlen("->");
        LODWORD(v96) = a3;
        HIDWORD(v96) = a3;
        v97 = 1;
        sub_19A1600((__int64)&v107, v96, 1, "->", v77);
        sub_1589170((__int64)&v99, &v107);
        if ( v109 != &v110 )
          operator delete(v109);
        goto LABEL_45;
      }
    }
  }
LABEL_19:
  if ( v12 )
  {
    v93 = *v12;
    v18 = v93;
    if ( (*(_BYTE *)(*(_QWORD *)(v93 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0
      && (*(_BYTE *)(*(_QWORD *)(v92 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0
      && !sub_199F900(v93, v92) )
    {
      v98[0] = v18;
      v98[1] = (__int64)(v12 + 1);
      sub_F6CE20(v98);
      v46 = sub_F6CCB0(v98, a7);
      sub_168B9F0((__int64)&v107, (__int64 *)(a1 + 8), v46, 0x1302u, 0);
      v47 = sub_1605D30((__int64)&v107, (__int64 *)&v92);
      v48 = sub_1605D30(v47, &v93);
      v94 = sub_EEC8C0(v91, (__int64)&v93, *(double *)a7.m128_u64);
      v83 = sub_1587DB0(v48, &v94);
      v49 = *v12;
      v100 = v12 + 1;
      v99 = v49;
      v12 = nullptr;
      LODWORD(v48) = sub_F6CE20(&v99);
      v95 = __PAIR64__(v48, sub_F6CCB0(&v99, a7));
      sub_1587DB0(v83, (__int64 *)&v95);
      sub_15F7200(&v107);
    }
  }
  v34 = v16;
  *(_QWORD *)&v35 = sub_15AB9E0(a5, *(_QWORD **)(a1 + 248), v17, v18, v19, v20);
  v81 = v35;
  v36 = sub_EEE9A0(80, *(_QWORD **)(a1 + 248), 8u);
  *((_QWORD *)&v79 + 1) = v82;
  *(_QWORD *)&v79 = v34;
  sub_C94030(v36, *(_QWORD *)(a1 + 248), v91, v90 == 37, a3, (__int64)v12, v81, a9, a10, v79);
  return v36;
}
