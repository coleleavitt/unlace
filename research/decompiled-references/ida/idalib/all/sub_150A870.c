__int64 __fastcall sub_150A870(__int64 a1, int a2, unsigned int a3, char a4, __m128i a5)
{
  int *v5; // r15
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rax
  __m128i v11; // xmm1
  __m128i v12; // xmm2
  int v13; // edx
  __int64 v14; // rdi
  __int64 v15; // rax
  unsigned int v16; // r13d
  __int64 v17; // rsi
  __int64 *v18; // rdi
  _DWORD *v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  unsigned int v23; // eax
  int v24; // esi
  __int16 v25; // di
  int v26; // eax
  __int16 v27; // ax
  __int64 v28; // r14
  __int16 v30; // di
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned int v33; // eax
  char *v34; // rdx
  __int16 v35; // di
  int v36; // edx
  int v37; // edx
  int v38; // edi
  unsigned int v39; // r13d
  __int64 v40; // rax
  __int64 *v41; // rsi
  __int64 v42; // rax
  int v43; // r13d
  __int64 v44; // r15
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 *v49; // rax
  int v50; // eax
  __int16 v51; // ax
  __int16 v52; // di
  __int64 v53; // rax
  __int64 v54; // rax
  unsigned int v55; // eax
  char *v56; // rdx
  __int16 v57; // di
  int v58; // edx
  int v59; // edx
  int v60; // edi
  __int64 v61; // rdi
  unsigned __int64 v62; // rax
  __int64 v63; // rax
  int v64; // eax
  int v65; // eax
  int v66; // edx
  __int64 v67; // rdi
  __int64 v68; // rcx
  void *v69; // rsi
  int v70; // edi
  __int64 v71; // rdx
  int v72; // eax
  unsigned __int64 v73; // rax
  __int64 v74; // rax
  unsigned int v75; // eax
  __int64 *v76; // rdi
  int v78; // [rsp+14h] [rbp-124h]
  __int64 v79; // [rsp+18h] [rbp-120h]
  unsigned int v80; // [rsp+18h] [rbp-120h]
  __int64 v81; // [rsp+18h] [rbp-120h]
  __int64 v82; // [rsp+18h] [rbp-120h]
  unsigned int v83; // [rsp+18h] [rbp-120h]
  __int64 v84; // [rsp+18h] [rbp-120h]
  unsigned int v85; // [rsp+18h] [rbp-120h]
  int v86; // [rsp+18h] [rbp-120h]
  __int64 v87; // [rsp+18h] [rbp-120h]
  __int64 v88; // [rsp+18h] [rbp-120h]
  unsigned int v89; // [rsp+18h] [rbp-120h]
  __int64 v90; // [rsp+18h] [rbp-120h]
  unsigned int v91; // [rsp+18h] [rbp-120h]
  __int64 v92; // [rsp+18h] [rbp-120h]
  __int64 v93; // [rsp+18h] [rbp-120h]
  int v94; // [rsp+18h] [rbp-120h]
  __int64 v95; // [rsp+18h] [rbp-120h]
  __int64 v96; // [rsp+18h] [rbp-120h]
  int v97; // [rsp+18h] [rbp-120h]
  int v98; // [rsp+18h] [rbp-120h]
  __int64 v99; // [rsp+18h] [rbp-120h]
  unsigned int v100; // [rsp+18h] [rbp-120h]
  void *v101; // [rsp+20h] [rbp-118h] BYREF
  __int64 v102; // [rsp+28h] [rbp-110h]
  __int64 v103; // [rsp+30h] [rbp-108h] BYREF
  int v104; // [rsp+38h] [rbp-100h]
  void *ptr; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v106; // [rsp+48h] [rbp-F0h]
  __int64 v107; // [rsp+50h] [rbp-E8h] BYREF
  int v108; // [rsp+58h] [rbp-E0h]
  _BYTE *v109; // [rsp+60h] [rbp-D8h] BYREF
  char v110; // [rsp+68h] [rbp-D0h]
  __int64 v111; // [rsp+70h] [rbp-C8h]
  int v112; // [rsp+78h] [rbp-C0h]
  __int16 v113; // [rsp+7Ch] [rbp-BCh]
  __int64 (__fastcall *v114)(__int64); // [rsp+80h] [rbp-B8h]
  __int64 v115; // [rsp+88h] [rbp-B0h]
  __int64 v116; // [rsp+90h] [rbp-A8h]
  void *v117; // [rsp+A0h] [rbp-98h] BYREF
  _OWORD v118[2]; // [rsp+A8h] [rbp-90h] BYREF
  __int64 v119; // [rsp+C8h] [rbp-70h]
  __m128i v120; // [rsp+D0h] [rbp-68h]
  int v121; // [rsp+E0h] [rbp-58h]
  __int64 v122; // [rsp+E8h] [rbp-50h]
  int v123; // [rsp+F0h] [rbp-48h]
  __int16 v124; // [rsp+F4h] [rbp-44h]
  char v125; // [rsp+F6h] [rbp-42h]

  v5 = (int *)(a1 + 16);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v8 = *(_DWORD *)(a1 + 40);
  v111 = a1;
  v78 = v8;
  v109 = (_BYTE *)(a1 + 1952);
  LOBYTE(v8) = *(_BYTE *)(a1 + 1952);
  *(_BYTE *)(a1 + 1952) = 1;
  v110 = v8;
  v112 = 1507350;
  v113 = 449;
  v114 = sub_146A990;
  v115 = 0;
  v116 = 0;
  v9 = sub_20EB760(a3, 0);
  if ( (unsigned __int8)sub_156A040(&v109, 1625, v9, 0) )
  {
    v28 = 0;
    goto LABEL_35;
  }
  v101 = &v103;
  v102 = 0x400000000LL;
  ptr = &v107;
  v106 = 0x400000000LL;
  if ( a3 != 90 )
  {
    if ( a3 != 28 )
    {
      if ( a3 == 21 )
      {
        v79 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL);
        if ( sub_10CCDE0(*(_WORD *)(a1 + 32)) )
          sub_15041E0((__int64)&v117);
        else
          sub_13D35F0(
            (__int64)&v117,
            (__int64)v5,
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL),
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL),
            nullptr);
        v23 = sub_FFC7C0(21, (__int64)v117, *(__int64 *)&v118[0], v79);
        if ( v117 != (char *)v118 + 8 )
        {
          v80 = v23;
          operator delete(v117);
          v23 = v80;
        }
        v24 = 4;
        if ( v23 >= 4 )
          v24 = v23;
        sub_9B7040((__int64)&v101, v24);
        sub_14C6D60((__int64)&ptr, *(_DWORD *)(a1 + 16));
        v25 = *(_WORD *)(a1 + 32);
        if ( v25 != 66 && v25 != 23 && v25 != 449 )
        {
          sub_1504200(a1);
          v25 = *(_WORD *)(a1 + 32);
        }
        if ( v25 == 62 )
        {
          sub_1504200(a1);
          v25 = *(_WORD *)(a1 + 32);
          v81 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL);
        }
        else
        {
          v81 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL);
          if ( *(_DWORD *)(v81 + 64) > 0x31u )
          {
            sub_9B7040((__int64)&v101, 4);
            v17 = 0;
            sub_14C6D60((__int64)&ptr, 0);
            goto LABEL_96;
          }
          if ( *((_DWORD *)v101 + (unsigned int)v102 - 1) != 4 )
          {
            sub_1564840(&v117, a1, v5, 2186);
            sub_1503D30((unsigned __int8 **)&v117, (__int64)"defaultmap modifier");
            sub_AEA040((__int64)&v117);
            v25 = *(_WORD *)(a1 + 32);
            v81 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL);
          }
        }
        if ( sub_10CCDE0(v25) )
          sub_15041E0((__int64)&v117);
        else
          sub_13D35F0(
            (__int64)&v117,
            (__int64)v5,
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL),
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL),
            nullptr);
        v26 = sub_FFC7C0(21, (__int64)v117, *(__int64 *)&v118[0], v81);
        sub_9B7040((__int64)&v101, v26);
        if ( v117 != (char *)v118 + 8 )
          operator delete(v117);
        v17 = *(unsigned int *)(a1 + 16);
        sub_14C6D60((__int64)&ptr, v17);
        v27 = *(_WORD *)(a1 + 32);
        LOBYTE(v19) = v27 != 66;
        LOBYTE(v22) = v27 != 23;
        if ( v27 == 23 || v27 == 66 || v27 == 449 )
          goto LABEL_133;
      }
      else
      {
        if ( a3 != 76 )
        {
          switch ( a3 )
          {
            case 0x1Au:
              if ( sub_FFE8A0(a2)
                && (v61 = *(_QWORD *)(a1 + 8), *(_DWORD *)(*(_QWORD *)(v61 + 56) + 64LL) > 0x31u)
                && ((v62 = *(_QWORD *)(v61 + 2944), v62 >= *(unsigned int *)(v61 + 2912))
                  ? (v63 = sub_14180A0(v61, 1u))
                  : (v63 = *(_QWORD *)(v61 + 2904) + 24 * v62),
                    *(_WORD *)(v63 + 16) == 62) )
              {
                v92 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL);
                if ( sub_10CCDE0(*(_WORD *)(a1 + 32)) )
                  sub_15041E0((__int64)&v117);
                else
                  sub_13D35F0(
                    (__int64)&v117,
                    (__int64)v5,
                    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL),
                    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL),
                    nullptr);
                v64 = sub_FFC7C0(26, (__int64)v117, *(__int64 *)&v118[0], v92);
                sub_9B7040((__int64)&v101, v64);
                if ( v117 != (char *)v118 + 8 )
                  operator delete(v117);
                sub_14C6D60((__int64)&ptr, *(_DWORD *)(a1 + 16));
                sub_1504200(a1);
                sub_1504200(a1);
              }
              else
              {
                sub_9B7040((__int64)&v101, 2);
                sub_1506690((__int64 *)&ptr);
              }
              v86 = 0;
              goto LABEL_56;
            case 0x28u:
              v95 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL);
              if ( sub_10CCDE0(*(_WORD *)(a1 + 32)) )
                sub_15041E0((__int64)&v117);
              else
                sub_13D35F0(
                  (__int64)&v117,
                  (__int64)v5,
                  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL),
                  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL),
                  nullptr);
              v68 = v95;
              v69 = v117;
              v70 = 40;
              v71 = *(_QWORD *)&v118[0];
              break;
            case 0x46u:
              v96 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL);
              if ( sub_10CCDE0(*(_WORD *)(a1 + 32)) )
                sub_15041E0((__int64)&v117);
              else
                sub_13D35F0(
                  (__int64)&v117,
                  (__int64)v5,
                  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL),
                  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL),
                  nullptr);
              v68 = v96;
              v69 = v117;
              v70 = 70;
              v71 = *(_QWORD *)&v118[0];
              break;
            case 0x48u:
              v93 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL);
              if ( sub_10CCDE0(*(_WORD *)(a1 + 32)) )
                sub_15041E0((__int64)&v117);
              else
                sub_13D35F0(
                  (__int64)&v117,
                  (__int64)v5,
                  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL),
                  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL),
                  nullptr);
              v65 = sub_FFC7C0(72, (__int64)v117, *(__int64 *)&v118[0], v93);
              v66 = v65;
              if ( v117 != (char *)v118 + 8 )
              {
                v94 = v65;
                operator delete(v117);
                v66 = v94;
              }
              v67 = *(_QWORD *)(a1 + 8);
              if ( *(_DWORD *)(*(_QWORD *)(v67 + 56) + 64LL) <= 0x3Bu )
              {
LABEL_132:
                v17 = 1;
                sub_9B7040((__int64)&v101, 1);
                sub_1506690((__int64 *)&ptr);
                goto LABEL_133;
              }
              goto LABEL_127;
            default:
              sub_14C6D60((__int64)&ptr, *(_DWORD *)(a1 + 16));
              v10 = *(_QWORD *)(a1 + 80);
              a5 = _mm_loadu_si128((const __m128i *)(a1 + 48));
              v11 = _mm_loadu_si128((const __m128i *)(a1 + 64));
              v12 = _mm_loadu_si128((const __m128i *)(a1 + 16));
              v117 = (void *)a1;
              v119 = v10;
              LODWORD(v10) = *(_DWORD *)(a1 + 32);
              v13 = *(_DWORD *)(a1 + 88);
              v14 = *(_QWORD *)(a1 + 8);
              v118[0] = a5;
              v121 = v10;
              v15 = *(unsigned int *)(a1 + 2712);
              v118[1] = v11;
              v122 = v15;
              LOWORD(v15) = *(_WORD *)(a1 + 92);
              v120 = v12;
              v123 = v13;
              v124 = v15;
              sub_1418D30(v14, 0);
              v125 = 1;
              v16 = sub_1506700((const __m128i *)a1);
              v17 = v16;
              sub_9B7040((__int64)&v101, v16);
              if ( v16 == 103 )
              {
                sub_147B460((__int64)&v117);
              }
              else
              {
                v18 = *(__int64 **)(a1 + 8);
                v17 = (__int64)v5;
                *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
                sub_14634E0(v18, v5);
                if ( *(_WORD *)(a1 + 32) == 62 && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 64LL) > 0x28u )
                {
                  sub_14C5EA0((__int64 *)&v117);
                  v76 = *(__int64 **)(a1 + 8);
                  v17 = (__int64)v5;
                  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
                  sub_14634E0(v76, v5);
                  v86 = *(_DWORD *)(a1 + 40);
LABEL_134:
                  if ( a3 == 44 )
                    goto LABEL_56;
                  goto LABEL_135;
                }
                sub_147B460((__int64)&v117);
                v22 = (unsigned int)v102;
                *((_DWORD *)v101 + (unsigned int)v102 - 1) = 103;
              }
LABEL_133:
              v86 = 0;
              goto LABEL_134;
          }
          v72 = sub_FFC7C0(v70, (__int64)v69, v71, v68);
          v66 = v72;
          if ( v117 != (char *)v118 + 8 )
          {
            v97 = v72;
            operator delete(v117);
            v66 = v97;
          }
          v67 = *(_QWORD *)(a1 + 8);
          if ( *(_DWORD *)(*(_QWORD *)(v67 + 56) + 64LL) <= 0x32u )
            goto LABEL_132;
LABEL_127:
          v73 = *(_QWORD *)(v67 + 2944);
          if ( v73 >= *(unsigned int *)(v67 + 2912) )
          {
            v98 = v66;
            v74 = sub_14180A0(v67, 1u);
            v66 = v98;
          }
          else
          {
            v74 = *(_QWORD *)(v67 + 2904) + 24 * v73;
          }
          if ( *(_WORD *)(v74 + 16) != 62 )
          {
            if ( !v66 )
            {
              sub_1564840(&v117, a1, v5, 1735);
              sub_1503D30((unsigned __int8 **)&v117, (__int64)"strict");
              sub_AEA040((__int64)&v117);
              sub_1504200(a1);
            }
            goto LABEL_132;
          }
          sub_9B7040((__int64)&v101, v66);
          v17 = *(unsigned int *)(a1 + 16);
          sub_14C6D60((__int64)&ptr, v17);
          sub_1504200(a1);
          goto LABEL_95;
        }
        v107 = 0;
        v52 = *(_WORD *)(a1 + 32);
        v103 = 0x100000001LL;
        v53 = *(_QWORD *)(a1 + 8);
        LODWORD(v102) = 2;
        v54 = *(_QWORD *)(v53 + 56);
        LODWORD(v106) = 2;
        v88 = v54;
        if ( sub_10CCDE0(v52) )
          sub_15041E0((__int64)&v117);
        else
          sub_13D35F0(
            (__int64)&v117,
            (__int64)v5,
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL),
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL),
            nullptr);
        v55 = sub_FFC7C0(76, (__int64)v117, *(__int64 *)&v118[0], v88);
        v56 = (char *)v118 + 8;
        if ( v117 != (char *)v118 + 8 )
        {
          v89 = v55;
          operator delete(v117);
          v55 = v89;
        }
        v57 = *(_WORD *)(a1 + 32);
        v19 = ptr;
        v17 = (__int64)v101;
        LOBYTE(v56) = v57 != 66;
        LOBYTE(v20) = v57 != 23;
        v58 = v20 & (unsigned int)v56;
        LOBYTE(v20) = v57 != 449;
        v22 = (unsigned int)v20 & v58;
        if ( v55 > 1 )
        {
          *(_DWORD *)v101 = v55;
          *v19 = *(_DWORD *)(a1 + 16);
          if ( (_BYTE)v22 )
          {
            sub_1504200(a1);
            v57 = *(_WORD *)(a1 + 32);
          }
          if ( v57 == 62 )
          {
            sub_1504200(a1);
          }
          else
          {
            sub_1564840(&v117, a1, v5, 2186);
            sub_1503D30((unsigned __int8 **)&v117, (__int64)"order modifier");
            sub_AEA040((__int64)&v117);
          }
          v90 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL);
          if ( sub_10CCDE0(*(_WORD *)(a1 + 32)) )
            sub_15041E0((__int64)&v117);
          else
            sub_13D35F0(
              (__int64)&v117,
              (__int64)v5,
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL),
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL),
              nullptr);
          v55 = sub_FFC7C0(76, (__int64)v117, *(__int64 *)&v118[0], v90);
          if ( v117 != (char *)v118 + 8 )
          {
            v91 = v55;
            operator delete(v117);
            v55 = v91;
          }
          v60 = *(unsigned __int16 *)(a1 + 32);
          v17 = (__int64)v101;
          v19 = ptr;
          LOBYTE(v59) = (_WORD)v60 != 23;
          LOBYTE(v20) = (_WORD)v60 != 66;
          LOBYTE(v60) = (_WORD)v60 != 449;
          v22 = v60 & (unsigned int)v20 & v59;
        }
        *(_DWORD *)(v17 + 4) = v55;
        v19[1] = *(_DWORD *)(a1 + 16);
        if ( !(_BYTE)v22 )
          goto LABEL_133;
      }
LABEL_95:
      sub_1504200(a1);
LABEL_96:
      v86 = 0;
LABEL_135:
      if ( ((a3 - 40) & 0xFFFFFFDF) != 0 && a3 != 70 )
        goto LABEL_75;
LABEL_56:
      v39 = *(_DWORD *)(a1 + 16);
      v40 = sub_14BDA20(a1, 0, 0, 0, 0, nullptr, a5);
      v41 = (__int64 *)(sub_14BE680((const __m128i *)a1, v40, 3, a5) & 0xFFFFFFFFFFFFFFFELL);
      v42 = sub_19B4A30(*(_QWORD *)(a1 + 96), v41, v39, 0, 0, 0);
      v43 = *(_DWORD *)(a1 + 16);
      v44 = v42;
      if ( !(unsigned __int8)sub_14808E0((__int64)&v109, v41, v45, v46, v47, v48) )
        v43 = HIDWORD(v116);
      v49 = (__int64 *)ptr;
      v28 = 0;
      if ( v44 == 1 )
        goto LABEL_61;
      goto LABEL_59;
    }
    v87 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL);
    if ( sub_10CCDE0(*(_WORD *)(a1 + 32)) )
      sub_15041E0((__int64)&v117);
    else
      sub_13D35F0(
        (__int64)&v117,
        (__int64)v5,
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL),
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL),
        nullptr);
    v50 = sub_FFC7C0(28, (__int64)v117, *(__int64 *)&v118[0], v87);
    sub_9B7040((__int64)&v101, v50);
    if ( v117 != (char *)v118 + 8 )
      operator delete(v117);
    v17 = *(unsigned int *)(a1 + 16);
    sub_14C6D60((__int64)&ptr, v17);
    v51 = *(_WORD *)(a1 + 32);
    LOBYTE(v19) = v51 != 23;
    if ( v51 != 66 && v51 != 23 && v51 != 449 )
      sub_1504200(a1);
    v22 = (unsigned int)v102;
    if ( !*((_DWORD *)v101 + (unsigned int)v102 - 1) && *(_WORD *)(a1 + 32) == 66 )
    {
      v86 = sub_1504200(a1);
      if ( v86 )
        goto LABEL_56;
    }
    goto LABEL_74;
  }
  v30 = *(_WORD *)(a1 + 32);
  v107 = 0;
  v103 = 0x500000005LL;
  v31 = *(_QWORD *)(a1 + 8);
  v108 = 0;
  v32 = *(_QWORD *)(v31 + 56);
  LODWORD(v102) = 3;
  LODWORD(v106) = 3;
  v104 = 5;
  v82 = v32;
  if ( sub_10CCDE0(v30) )
    sub_15041E0((__int64)&v117);
  else
    sub_13D35F0(
      (__int64)&v117,
      (__int64)v5,
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL),
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL),
      nullptr);
  v33 = sub_FFC7C0(90, (__int64)v117, *(__int64 *)&v118[0], v82);
  v34 = (char *)v118 + 8;
  if ( v117 != (char *)v118 + 8 )
  {
    v83 = v33;
    operator delete(v117);
    v33 = v83;
  }
  v35 = *(_WORD *)(a1 + 32);
  v19 = v101;
  v17 = (__int64)ptr;
  LOBYTE(v34) = v35 != 449;
  LOBYTE(v20) = v35 != 23;
  v36 = v20 & (unsigned int)v34;
  LOBYTE(v20) = v35 != 66;
  v22 = (unsigned int)v20 & v36;
  if ( v33 > 5 )
  {
    *(_DWORD *)v101 = v33;
    *(_DWORD *)v17 = *(_DWORD *)(a1 + 16);
    if ( (_BYTE)v22 )
    {
      sub_1504200(a1);
      v35 = *(_WORD *)(a1 + 32);
    }
    if ( v35 == 66 )
    {
      sub_1504200(a1);
      v99 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL);
      if ( sub_10CCDE0(*(_WORD *)(a1 + 32)) )
        sub_15041E0((__int64)&v117);
      else
        sub_13D35F0(
          (__int64)&v117,
          (__int64)v5,
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL),
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL),
          nullptr);
      v75 = sub_FFC7C0(90, (__int64)v117, *(__int64 *)&v118[0], v99);
      if ( v117 != (char *)v118 + 8 )
      {
        v100 = v75;
        operator delete(v117);
        v75 = v100;
      }
      v35 = *(_WORD *)(a1 + 32);
      if ( v75 < 5 )
        v75 = 5;
      *((_DWORD *)v101 + 1) = v75;
      *((_DWORD *)ptr + 1) = *(_DWORD *)(a1 + 16);
      if ( v35 != 23 && v35 != 66 && v35 != 449 )
      {
        sub_1504200(a1);
        v35 = *(_WORD *)(a1 + 32);
      }
    }
    if ( v35 == 62 )
    {
      sub_1504200(a1);
    }
    else
    {
      sub_1564840(&v117, a1, v5, 2186);
      sub_1503D30((unsigned __int8 **)&v117, (__int64)"schedule modifier");
      sub_AEA040((__int64)&v117);
    }
    v84 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL);
    if ( sub_10CCDE0(*(_WORD *)(a1 + 32)) )
      sub_15041E0((__int64)&v117);
    else
      sub_13D35F0(
        (__int64)&v117,
        (__int64)v5,
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL),
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL),
        nullptr);
    v33 = sub_FFC7C0(90, (__int64)v117, *(__int64 *)&v118[0], v84);
    if ( v117 != (char *)v118 + 8 )
    {
      v85 = v33;
      operator delete(v117);
      v33 = v85;
    }
    v38 = *(unsigned __int16 *)(a1 + 32);
    v19 = v101;
    v17 = (__int64)ptr;
    LOBYTE(v37) = (_WORD)v38 != 66;
    LOBYTE(v20) = (_WORD)v38 != 23;
    LOBYTE(v38) = (_WORD)v38 != 449;
    v22 = v38 & (unsigned int)v20 & v37;
  }
  v19[2] = v33;
  *(_DWORD *)(v17 + 8) = *(_DWORD *)(a1 + 16);
  if ( (_BYTE)v22 )
  {
    sub_1504200(a1);
    v19 = v101;
  }
  if ( v19[2] > 2u || *(_WORD *)(a1 + 32) != 66 )
  {
LABEL_74:
    v86 = 0;
    goto LABEL_75;
  }
  v86 = sub_1504200(a1);
  if ( v86 )
    goto LABEL_56;
LABEL_75:
  v43 = *(_DWORD *)(a1 + 16);
  if ( !(unsigned __int8)sub_14808E0((__int64)&v109, (__int64 *)v17, v22, (__int64)v19, v20, v21) )
    v43 = HIDWORD(v116);
  v49 = (__int64 *)ptr;
  LODWORD(v44) = 0;
LABEL_59:
  v28 = 0;
  if ( !a4 )
  {
    v28 = sub_1B46CA0(
            *(_QWORD *)(*(_QWORD *)(a1 + 96) + 760LL),
            a3,
            (_DWORD)v101,
            v102,
            (unsigned int)v44 & 0xFFFFFFFE,
            v78,
            v116,
            (__int64)v49,
            (unsigned int)v106,
            v86,
            v43);
    v49 = (__int64 *)ptr;
  }
LABEL_61:
  if ( v49 != &v107 )
    free(v49);
  if ( v101 != &v103 )
    free(v101);
LABEL_35:
  *v109 = v110;
  return v28;
}
