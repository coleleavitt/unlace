__m128i *__fastcall sub_18575A0(
        __int64 *a1,
        __int64 a2,
        char a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        char a11,
        __int64 a12)
{
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  char v17; // r15
  bool v18; // al
  bool v19; // dl
  __m128 v20; // xmm0
  __m128i v21; // xmm1
  __m128i *v22; // r15
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned __int8 v29; // al
  __int64 *v30; // rbp
  __int64 v31; // r11
  __int64 v32; // r10
  unsigned __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r14
  __int64 v38; // rdx
  __int64 v39; // r11
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  int v45; // edx
  __int64 v46; // rax
  char v47; // cl
  int v48; // eax
  __int64 v49; // rdx
  unsigned int v50; // eax
  unsigned __int64 v51; // rax
  unsigned int v52; // edx
  __int64 v53; // r10
  unsigned __int64 v54; // rax
  __int64 v55; // r8
  char v56; // al
  __int64 v57; // r8
  __int64 v58; // r9
  unsigned __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // r9
  __int64 v62; // rax
  __int64 *v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rdx
  unsigned int v71; // edx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rax
  _QWORD *v77; // rax
  __int64 v78; // [rsp-10h] [rbp-1F8h]
  __int64 v79; // [rsp-8h] [rbp-1F0h]
  __int64 v81; // [rsp+0h] [rbp-1E8h]
  __int64 v82; // [rsp+0h] [rbp-1E8h]
  unsigned int v83; // [rsp+Ch] [rbp-1DCh]
  char v84; // [rsp+10h] [rbp-1D8h]
  char v85; // [rsp+10h] [rbp-1D8h]
  __int64 v86; // [rsp+10h] [rbp-1D8h]
  __int64 v87; // [rsp+10h] [rbp-1D8h]
  __int64 v88; // [rsp+10h] [rbp-1D8h]
  __int64 v90; // [rsp+18h] [rbp-1D0h]
  __int64 v91; // [rsp+18h] [rbp-1D0h]
  __int64 v92; // [rsp+18h] [rbp-1D0h]
  unsigned __int8 v93; // [rsp+20h] [rbp-1C8h]
  _QWORD *v94; // [rsp+20h] [rbp-1C8h]
  char v95; // [rsp+33h] [rbp-1B5h] BYREF
  int v96; // [rsp+34h] [rbp-1B4h] BYREF
  __int64 *v97; // [rsp+38h] [rbp-1B0h] BYREF
  __int64 v98; // [rsp+40h] [rbp-1A8h] BYREF
  __int64 v99; // [rsp+48h] [rbp-1A0h] BYREF
  __m128i v100; // [rsp+50h] [rbp-198h] BYREF
  __int64 v101; // [rsp+60h] [rbp-188h]
  __int128 v102; // [rsp+70h] [rbp-178h] BYREF
  __int64 v103; // [rsp+80h] [rbp-168h]
  int v104; // [rsp+88h] [rbp-160h]
  unsigned __int8 *v105; // [rsp+90h] [rbp-158h] BYREF
  char v106; // [rsp+E8h] [rbp-100h]
  unsigned int v107; // [rsp+F0h] [rbp-F8h]
  char v108; // [rsp+F4h] [rbp-F4h]
  __int64 v109; // [rsp+100h] [rbp-E8h] BYREF
  __int64 *v110; // [rsp+108h] [rbp-E0h]
  __int64 v111; // [rsp+110h] [rbp-D8h]
  __int64 v112; // [rsp+118h] [rbp-D0h] BYREF
  void *v113[2]; // [rsp+158h] [rbp-90h]
  __int64 v114; // [rsp+168h] [rbp-80h]
  __int64 *v115; // [rsp+170h] [rbp-78h]
  __m128i v116; // [rsp+178h] [rbp-70h]
  __int64 v117; // [rsp+188h] [rbp-60h]
  __int64 v118; // [rsp+190h] [rbp-58h]
  __int64 v119; // [rsp+198h] [rbp-50h]
  bool v120; // [rsp+1A0h] [rbp-48h]
  char v121; // [rsp+1A1h] [rbp-47h]
  char v122; // [rsp+1A2h] [rbp-46h]
  bool v123; // [rsp+1A3h] [rbp-45h]
  bool v124; // [rsp+1A4h] [rbp-44h]
  char v125; // [rsp+1A5h] [rbp-43h]
  __int16 v126; // [rsp+1A6h] [rbp-42h]

  if ( !a11 )
  {
    v83 = a6;
    sub_17B41B0((__int64)&v100, a1, (unsigned int *)a8, *(double *)a7.m128_u64, (__int64)a4, a5, a6);
    v97 = nullptr;
    sub_1E5F010(a10, &v97);
    v17 = sub_17B40D0((__int64)a1, a1[68], v13, v14, v15, v16, v100.m128i_i64[0], v100.m128i_u32[2]);
    if ( !v17 )
    {
      v84 = sub_1E535C0(a1, *(unsigned int *)(a8 + 24), v97, 2);
      if ( v84 )
      {
        v94 = (_QWORD *)a1[31];
        v49 = *v97;
        v110 = v97 + 1;
        v109 = v49;
        v50 = sub_F6CCB0(&v109, a7);
        v97 = sub_A81910(v94, *(_QWORD *)(a1[31] + 18720), v50);
      }
      v18 = 0;
      v19 = 1;
      if ( a5 )
      {
        v48 = sub_1A3A250(a1);
        v19 = v48 != 0;
        v17 = v48 == 2;
        v18 = v48 == 0;
      }
      v20 = 0;
      v110 = &v112;
      v21 = _mm_load_si128(&v100);
      v111 = 0x800000000LL;
      *(_OWORD *)v113 = 0;
      v116 = v21;
      v117 = v101;
      v120 = v19;
      v123 = v18;
      v124 = v18;
      v126 = 0;
      v109 = 0;
      v114 = 0;
      v115 = a1;
      v118 = 0;
      v119 = 0;
      v121 = v17;
      v122 = 1;
      v125 = 0;
      sub_1A395A0(&v109);
      sub_1A49A10(a1, &v109, a2, 0, 0);
      if ( (_DWORD)v109 == 2 )
      {
        v46 = sub_16C47B0(*v110 & 0xFFFFFFFFFFFFFFF8LL);
        v47 = *(_BYTE *)(v46 + 28) & 0x7F;
        if ( ((v47 + 61) & 0x7Fu) <= 1 || v47 == 47 )
        {
          sub_1CC2540(a1, *(unsigned int *)(a8 + 24), v46, 0);
          LODWORD(v109) = 0;
          LODWORD(v111) = 0;
          if ( v113[0] )
            sub_1A39780(v113[0]);
          v20 = 0;
          LOBYTE(v126) = 0;
          *(_OWORD *)v113 = 0;
        }
      }
      v22 = (__m128i *)sub_B7A760(a1[31], a1[68], v83, *(_DWORD *)(a8 + 24), *(_QWORD *)(a8 + 8), (__int64)v97);
      v93 = a3 & 3;
      v22[1].m128i_i8[13] = (32 * (a3 & 3)) | v22[1].m128i_i8[13] & 0x9F;
      if ( v84 )
        sub_B88650((__int64)v22, 1);
      LOWORD(v102) = 1;
      sub_1836B60(a1, a2, v22, a9, &v102, v20, v21);
      sub_16660F0((__int64)a1, a2, (__int64)v22);
      sub_167AF90((__int64)a1, (__int64)v22, v23, v24, v25, v26, (__m128i)v20, *(double *)v21.m128i_i64);
      sub_17AF4B0((__int64)a1, a2, (__int64)v22);
      v29 = v22[1].m128i_u8[12];
      v95 = 0;
      v30 = *(__int64 **)(a2 + 72);
      if ( !a5 )
      {
        if ( a12 && (*(_BYTE *)(a12 + 28) & 0x7Fu) - 58 <= 4 )
        {
          sub_17B3900(a1, a12, (__int64)v22, 0, v27, v28, (__m128i)v20, *(double *)v21.m128i_i64);
          sub_17A3D60((__int64)a1, a12, (__int64)v30);
        }
        sub_17DF540(a1, v30, a1[68], (unsigned __int64)v22, (int *)&v109, &v95);
        goto LABEL_28;
      }
      if ( a5 == 1 )
      {
        v85 = v84 | (v29 >> 7);
      }
      else
      {
        sub_168B9F0((__int64)&v102, a1 + 1, v83, 0xB9Bu, 0);
        v45 = *(_DWORD *)(a4[1] + 8);
        HIDWORD(v99) = *(_DWORD *)(a4[a5 - 1] + 16);
        LODWORD(v99) = v45;
        sub_1587DB0((__int64)&v102, &v99);
        sub_15F7200(&v102);
        v85 = 1;
      }
      v81 = *a4;
      if ( (unsigned __int8)sub_1CBD040(a1, v30, *a4) )
        goto LABEL_33;
      sub_17A32D0((__int64)a1, (int *)&v109, a1[68], v30, 0, 0);
      if ( (_DWORD)v111 )
      {
        v95 = 1;
        if ( (_DWORD)v109 != 2
          || (v31 = sub_16C47B0(*v110 & 0xFFFFFFFFFFFFFFF8LL), (*(_BYTE *)(v31 + 28) & 0x7F) != 0x46) )
        {
          if ( !v85 )
          {
            sub_168B9F0((__int64)&v102, a1 + 1, v83, 0x1328u, 0);
            if ( v106 )
            {
              sub_AE9DF0(&v105, *(_QWORD *)(a8 + 8), 5u);
            }
            else if ( v108 )
            {
              v73 = sub_168B9E0(&v102);
              v76 = v103;
              if ( v103 )
              {
                v92 = v73;
                v76 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v103 + 32LL))(v103);
                v73 = v92;
              }
              v99 = v76;
              v77 = sub_1587BC0(v73, &v99, v72, v73, v74, v75);
              sub_AE9DF0((unsigned __int8 **)(*v77 + 32LL * v107 + 8), *(_QWORD *)(a8 + 8), 5u);
            }
            sub_15F7200(&v102);
            v52 = *(_DWORD *)((*v110 & 0xFFFFFFFFFFFFFFF8LL) + 24);
            if ( v52 )
            {
              sub_168B9F0((__int64)&v102, a1 + 1, v52, 0x71u, 0);
              sub_15F7200(&v102);
            }
          }
          v53 = 0;
LABEL_48:
          if ( (unsigned __int8)sub_1CBDF60(a1, v81, v53, 0, 0) )
            goto LABEL_33;
          v54 = sub_BBF8A0(a1[31], a1[68], v83, *(_QWORD *)(a8 + 8), v81, (__int64)v22);
          v22[5].m128i_i64[1] = v54;
          v22 = (__m128i *)v54;
          *(_BYTE *)(v54 + 29) = (32 * v93) | *(_BYTE *)(v54 + 29) & 0x9F;
          goto LABEL_50;
        }
        if ( !v85 )
        {
          v32 = 0;
          if ( *(char *)(v31 + 28) < 0 )
            goto LABEL_19;
          v55 = *(_QWORD *)(v31 + 56);
          v87 = v31;
          v102 = 0;
          v103 = 0;
          v104 = 0;
          v56 = sub_1CD38B0((_DWORD)a1, (unsigned int)&v102, v81, 0, v55, 1, 0, 0);
          v53 = 0;
          if ( v56 )
          {
            v59 = sub_AEA770((__int64 *)(*(_QWORD *)(v87 + 72) + 64LL), *(_QWORD *)(v87 + 72), v78, v79, v57, v58);
            v31 = v87;
            v32 = *(_QWORD *)(v59 + 56);
            v60 = v22[5].m128i_i64[0];
            v61 = *(_QWORD *)(v87 + 48);
            if ( (v60 & 4) != 0 )
              v62 = *(_QWORD *)((v60 & 0xFFFFFFFFFFFFFFF8LL) + 8);
            else
              v62 = *(_QWORD *)(v60 & 0xFFFFFFFFFFFFFFF8LL);
            v63 = (__int64 *)(*(_QWORD *)(v61 + 80) & 0xFFFFFFFFFFFFFFF8LL);
            if ( (*(_QWORD *)(v61 + 80) & 4) != 0 )
              v64 = v63[1];
            else
              v64 = *v63;
            v88 = *(_QWORD *)(v87 + 48);
            if ( (*(_QWORD *)&byte_8[v64 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                | ((unsigned __int8)*(_QWORD *)&byte_8[v64 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v64) & 7) == (*(_QWORD *)&byte_8[v62 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)&byte_8[v62 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v62) & 7) )
            {
LABEL_19:
              v86 = v31;
              if ( !(unsigned __int8)sub_1CBDF60(a1, v81, v32, 0, 0) )
              {
                v33 = sub_BBF8A0(a1[31], a1[68], v83, *(_QWORD *)(a8 + 8), v81, (__int64)v22);
                v22[5].m128i_i64[1] = v33;
                v37 = v33;
                v38 = 32 * (unsigned int)v93;
                *(_BYTE *)(v33 + 29) = (32 * v93) | *(_BYTE *)(v33 + 29) & 0x9F;
                v39 = v86;
LABEL_21:
                v82 = v39;
                v22 = (__m128i *)v37;
                sub_AEABB0((_QWORD *)(v37 + 64), v39, v38, v34, v35, v36);
                sub_17CF9C0(a1, v37, v82);
LABEL_28:
                sub_17B7670((__int64)a1, (__int64)v22, (__int64)v30, 1, v35, v36);
                sub_17A5800(a1, (__int64)v22, v41, v42, v43, v44);
LABEL_29:
                sub_169D230((__int64)&v109);
                return v22;
              }
LABEL_33:
              v22 = nullptr;
              goto LABEL_29;
            }
            v91 = v32;
            sub_168B9F0((__int64)&v102, a1 + 1, v22[1].m128i_u32[2], 0x132Bu, 0);
            v96 = 2;
            v65 = sub_1587D10((__int64)&v102, &v96);
            v66 = v22[5].m128i_i64[0];
            if ( (v66 & 4) != 0 )
              v67 = *(_QWORD *)((v66 & 0xFFFFFFFFFFFFFFF8LL) + 8);
            else
              v67 = *(_QWORD *)(v66 & 0xFFFFFFFFFFFFFFF8LL);
            v98 = v67;
            v68 = sub_162B6D0(v65, &v98);
            v69 = *(_QWORD *)(v88 + 80);
            if ( (v69 & 4) != 0 )
              v70 = *(_QWORD *)((v69 & 0xFFFFFFFFFFFFFFF8LL) + 8);
            else
              v70 = *(_QWORD *)(v69 & 0xFFFFFFFFFFFFFFF8LL);
            v99 = v70;
            sub_162B6D0(v68, &v99);
            sub_15F7200(&v102);
            v53 = v91;
            v71 = *(_DWORD *)(v88 + 24);
            if ( v71 )
            {
              sub_168B9F0((__int64)&v102, a1 + 1, v71, 0x71u, 0);
              sub_15F7200(&v102);
              v53 = v91;
            }
          }
          goto LABEL_48;
        }
      }
      else
      {
        v31 = 0;
      }
      v90 = v31;
      if ( (unsigned __int8)sub_1CBDF60(a1, v81, 0, 0, 0) )
        goto LABEL_33;
      v51 = sub_BBF8A0(a1[31], a1[68], v83, *(_QWORD *)(a8 + 8), v81, (__int64)v22);
      v22[5].m128i_i64[1] = v51;
      v37 = v51;
      v22 = (__m128i *)v51;
      v38 = 32 * (unsigned int)v93;
      *(_BYTE *)(v51 + 29) = (32 * v93) | *(_BYTE *)(v51 + 29) & 0x9F;
      v39 = v90;
      if ( !v85 )
      {
        if ( !v90 )
          goto LABEL_28;
        goto LABEL_21;
      }
LABEL_50:
      sub_B88650((__int64)v22, 1);
      goto LABEL_28;
    }
  }
  return nullptr;
}
