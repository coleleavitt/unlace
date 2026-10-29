__int64 __fastcall sub_14CF100(__int64 a1, __int64 a2, __int64 a3, __m128i a4, __m128 a5)
{
  __m128i *v6; // r14
  __int64 *v8; // rsi
  int v10; // r13d
  unsigned int v11; // ebp
  __int64 *v12; // rdi
  __int64 v13; // rdx
  __int64 result; // rax
  __int64 *v15; // rdi
  __int64 *v16; // rsi
  bool v17; // zf
  __int64 v18; // rdi
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  char v21; // al
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 *v26; // rdi
  __int64 *v27; // rdi
  __int64 *v28; // rdi
  __int64 *v29; // rdi
  __int64 *v30; // rdi
  __int64 *v31; // rdi
  __int64 *v32; // rdi
  __int64 *v33; // rdi
  __int64 *v34; // rdi
  __int64 *v35; // rdi
  __int64 *v36; // rdi
  __int64 *v37; // rdi
  __int64 *v38; // rdi
  __int64 *v39; // rdi
  __int64 *v40; // rdi
  __int64 *v41; // rdi
  __int64 *v42; // rdi
  __int64 *v43; // rdi
  __int64 *v44; // rdi
  __int64 *v45; // rdi
  __int64 *v46; // rdi
  __int64 *v47; // rdi
  __int64 *v48; // rdi
  __int64 *v49; // rdi
  __int64 *v50; // rdi
  __int64 *v51; // rdi
  __int64 *v52; // rdi
  __int64 *v53; // rdi
  __int64 *v54; // rdi
  __int64 *v55; // rdi
  __int64 *v56; // rdi
  __int64 *v57; // rdi
  __int64 *v58; // rdi
  __int64 *v59; // rdi
  __int64 *v60; // rdi
  __int64 *v61; // rdi
  __int64 *v62; // rdi
  char v63; // al
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  char v68; // al
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rax
  __int64 v74; // rax
  __int16 v75; // ax
  __int64 v76; // rdx
  __int64 v77; // rax
  __int64 *v78; // rdi
  size_t v79; // rax
  int v80; // eax
  __int64 *v81; // rdi
  __int64 v82; // rax
  int v83; // r8d
  unsigned __int64 v84; // rdx
  unsigned __int8 v85; // al
  _QWORD *v86; // rax
  __int64 v87; // rcx
  unsigned __int8 v88; // dl
  unsigned __int8 v89; // al
  int v90; // edx
  int v91; // r14d
  unsigned __int8 v92; // [rsp+8h] [rbp-D20h]
  unsigned __int8 v93; // [rsp+8h] [rbp-D20h]
  unsigned __int8 v94; // [rsp+8h] [rbp-D20h]
  unsigned __int8 v95; // [rsp+8h] [rbp-D20h]
  unsigned int v96; // [rsp+10h] [rbp-D18h]
  unsigned __int8 v97; // [rsp+10h] [rbp-D18h]
  unsigned __int8 v98; // [rsp+10h] [rbp-D18h]
  unsigned int v99; // [rsp+1Ch] [rbp-D0Ch]
  bool v100; // [rsp+28h] [rbp-D00h]
  __int64 v101; // [rsp+28h] [rbp-D00h]
  bool v102; // [rsp+30h] [rbp-CF8h]
  int v103; // [rsp+30h] [rbp-CF8h]
  int v104; // [rsp+34h] [rbp-CF4h]
  _BYTE v105[12]; // [rsp+48h] [rbp-CE0h] BYREF
  __int64 v106; // [rsp+54h] [rbp-CD4h]
  void *v107; // [rsp+60h] [rbp-CC8h] BYREF
  __int64 v108; // [rsp+68h] [rbp-CC0h]
  _BYTE v109[16]; // [rsp+70h] [rbp-CB8h] BYREF
  void *ptr; // [rsp+80h] [rbp-CA8h] BYREF
  __m128i si128; // [rsp+88h] [rbp-CA0h]
  _BYTE v112[40]; // [rsp+98h] [rbp-C90h] BYREF
  _DWORD v113[6]; // [rsp+C0h] [rbp-C68h] BYREF
  void *v114; // [rsp+D8h] [rbp-C50h]
  __int64 v115; // [rsp+E8h] [rbp-C40h] BYREF
  unsigned __int8 *v116[10]; // [rsp+100h] [rbp-C28h] BYREF
  void *v117; // [rsp+150h] [rbp-BD8h] BYREF
  __int64 v118; // [rsp+158h] [rbp-BD0h]
  _BYTE v119[288]; // [rsp+160h] [rbp-BC8h] BYREF
  _BYTE *v120; // [rsp+280h] [rbp-AA8h] BYREF
  char v121; // [rsp+288h] [rbp-AA0h]
  __int64 v122; // [rsp+290h] [rbp-A98h]
  int v123; // [rsp+298h] [rbp-A90h]
  __int16 v124; // [rsp+29Ch] [rbp-A8Ch]
  __int64 (__fastcall *v125)(__int64); // [rsp+2A0h] [rbp-A88h]
  __int64 v126; // [rsp+2A8h] [rbp-A80h]
  void *v127; // [rsp+2B0h] [rbp-A78h]
  _DWORD v128[130]; // [rsp+2C8h] [rbp-A60h] BYREF
  void *v129; // [rsp+4D0h] [rbp-858h]
  size_t v130; // [rsp+4D8h] [rbp-850h]
  _DWORD v131[11]; // [rsp+4E8h] [rbp-840h] BYREF
  unsigned __int8 v132; // [rsp+514h] [rbp-814h]
  char v133; // [rsp+515h] [rbp-813h]

  v6 = (__m128i *)(a1 + 16);
  v8 = (__int64 *)(a1 + 16);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v10 = *(unsigned __int16 *)(a1 + 32);
  v11 = *(_DWORD *)(a1 + 40);
  memset(v105, 0, sizeof(v105));
  switch ( v10 )
  {
    case 3:
      v73 = *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(v73 + 760) )
      {
        *(_BYTE *)(v73 + 968) = 1;
        *(_BYTE *)(*(_QWORD *)(v73 + 48) + 6LL) = 1;
      }
      v74 = *(_QWORD *)(a1 + 96);
      *(_WORD *)(a1 + 32) = 1;
      sub_170ADC0(*(_QWORD *)(v74 + 656), *(_QWORD *)(v74 + 608));
      return 1;
    case 20:
      v122 = a1;
      v120 = (_BYTE *)(a1 + 1952);
      v68 = *(_BYTE *)(a1 + 1952);
      *(_BYTE *)(a1 + 1952) = 1;
      v121 = v68;
      v124 = 63;
      v123 = 1376276;
      v125 = sub_14789E0;
      v126 = 0;
      v127 = nullptr;
      sub_14C52C0((__int64)&v120);
      sub_14808E0((__int64)&v120, v8, v69, v70, v71, v72);
      if ( !HIDWORD(v127) )
        goto LABEL_85;
      *(_QWORD *)v105 = v127;
      *v120 = v121;
      v13 = 43;
      goto LABEL_3;
    case 22:
      v122 = a1;
      v120 = (_BYTE *)(a1 + 1952);
      v63 = *(_BYTE *)(a1 + 1952);
      *(_BYTE *)(a1 + 1952) = 1;
      v121 = v63;
      v124 = 63;
      v123 = 1507350;
      v125 = sub_146A990;
      v126 = 0;
      v127 = nullptr;
      sub_149FA40((__int64)&v120);
      sub_14808E0((__int64)&v120, v8, v64, v65, v66, v67);
      if ( !HIDWORD(v127) )
        goto LABEL_85;
      *(_QWORD *)v105 = v127;
      *v120 = v121;
      v13 = 42;
      goto LABEL_3;
    case 28:
      v62 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v62, v6->m128i_i32);
      v13 = 11;
      *(_DWORD *)v105 = *(_DWORD *)(a1 + 40);
      goto LABEL_3;
    case 29:
      v61 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v61, v6->m128i_i32);
      v13 = 35;
      *(_DWORD *)v105 = *(_DWORD *)(a1 + 40);
      goto LABEL_3;
    case 30:
      v60 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v60, v6->m128i_i32);
      v13 = 24;
      *(_DWORD *)v105 = *(_DWORD *)(a1 + 40);
      goto LABEL_3;
    case 31:
      v59 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v59, v6->m128i_i32);
      v13 = 7;
      *(_DWORD *)v105 = *(_DWORD *)(a1 + 40);
      goto LABEL_3;
    case 32:
      v58 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v58, v6->m128i_i32);
      v13 = 20;
      *(_DWORD *)v105 = *(_DWORD *)(a1 + 40);
      goto LABEL_3;
    case 33:
      v57 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v57, v6->m128i_i32);
      v13 = 5;
      *(_DWORD *)v105 = *(_DWORD *)(a1 + 40);
      goto LABEL_3;
    case 34:
      v56 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v56, v6->m128i_i32);
      v13 = 37;
      *(_DWORD *)v105 = *(_DWORD *)(a1 + 40);
      goto LABEL_3;
    case 35:
      v55 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v55, v6->m128i_i32);
      v13 = 18;
      *(_DWORD *)v105 = *(_DWORD *)(a1 + 40);
      goto LABEL_3;
    case 36:
      v54 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v54, v6->m128i_i32);
      v13 = 6;
      *(_DWORD *)v105 = *(_DWORD *)(a1 + 40);
      goto LABEL_3;
    case 37:
      v53 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v53, v6->m128i_i32);
      v13 = 41;
      *(_DWORD *)v105 = *(_DWORD *)(a1 + 40);
      goto LABEL_3;
    case 38:
      v52 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v52, v6->m128i_i32);
      v13 = 38;
      *(_DWORD *)v105 = *(_DWORD *)(a1 + 40);
      goto LABEL_3;
    case 39:
      v51 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v51, v6->m128i_i32);
      v13 = 19;
      *(_DWORD *)v105 = *(_DWORD *)(a1 + 40);
      goto LABEL_3;
    case 40:
      v50 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v50, v6->m128i_i32);
      v13 = 13;
      *(_DWORD *)v105 = *(_DWORD *)(a1 + 40);
      goto LABEL_3;
    case 41:
      v49 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v49, v6->m128i_i32);
      v13 = 14;
      *(_DWORD *)v105 = *(_DWORD *)(a1 + 40);
      goto LABEL_3;
    case 42:
      v48 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v48, v6->m128i_i32);
      v13 = 31;
      *(_DWORD *)v105 = *(_DWORD *)(a1 + 40);
      goto LABEL_3;
    case 43:
      v47 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v47, v6->m128i_i32);
      v13 = 8;
      *(_DWORD *)v105 = *(_DWORD *)(a1 + 40);
      goto LABEL_3;
    case 44:
      v46 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v46, v6->m128i_i32);
      v13 = 21;
      *(_DWORD *)v105 = *(_DWORD *)(a1 + 40);
      goto LABEL_3;
    case 45:
      v45 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v45, v6->m128i_i32);
      v13 = 9;
      *(_DWORD *)v105 = *(_DWORD *)(a1 + 40);
      goto LABEL_3;
    case 46:
      v44 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v44, v6->m128i_i32);
      v13 = 22;
      *(_DWORD *)v105 = *(_DWORD *)(a1 + 40);
      goto LABEL_3;
    case 47:
      v43 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v43, v6->m128i_i32);
      v13 = 16;
      *(_DWORD *)v105 = *(_DWORD *)(a1 + 40);
      goto LABEL_3;
    case 48:
      v42 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v42, v6->m128i_i32);
      v13 = 26;
      *(_DWORD *)v105 = *(_DWORD *)(a1 + 40);
      goto LABEL_3;
    case 49:
      v41 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v41, v6->m128i_i32);
      v13 = 32;
      *(_DWORD *)v105 = *(_DWORD *)(a1 + 40);
      goto LABEL_3;
    case 50:
      v40 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v40, v6->m128i_i32);
      v13 = 28;
      *(_DWORD *)v105 = *(_DWORD *)(a1 + 40);
      goto LABEL_3;
    case 51:
      v39 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v39, v6->m128i_i32);
      v13 = 34;
      *(_DWORD *)v105 = *(_DWORD *)(a1 + 40);
      goto LABEL_3;
    case 52:
      v38 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v38, v6->m128i_i32);
      v13 = 17;
      *(_DWORD *)v105 = *(_DWORD *)(a1 + 40);
      goto LABEL_3;
    case 53:
      v37 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v37, v6->m128i_i32);
      v13 = 27;
      *(_DWORD *)v105 = *(_DWORD *)(a1 + 40);
      goto LABEL_3;
    case 54:
      v36 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v36, v6->m128i_i32);
      v13 = 33;
      *(_DWORD *)v105 = *(_DWORD *)(a1 + 40);
      goto LABEL_3;
    case 55:
      v35 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v35, v6->m128i_i32);
      v13 = 29;
      *(_DWORD *)v105 = *(_DWORD *)(a1 + 40);
      goto LABEL_3;
    case 56:
      v34 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v34, v6->m128i_i32);
      v13 = 10;
      *(_DWORD *)v105 = *(_DWORD *)(a1 + 40);
      goto LABEL_3;
    case 57:
      v30 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v30, v6->m128i_i32);
      v13 = 23;
      *(_DWORD *)v105 = *(_DWORD *)(a1 + 40);
      goto LABEL_3;
    case 58:
      v29 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v29, v6->m128i_i32);
      v13 = 12;
      *(_DWORD *)v105 = *(_DWORD *)(a1 + 40);
      goto LABEL_3;
    case 59:
      v28 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v28, v6->m128i_i32);
      v13 = 36;
      *(_DWORD *)v105 = *(_DWORD *)(a1 + 40);
      goto LABEL_3;
    case 60:
      v27 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v27, v6->m128i_i32);
      v13 = 25;
      *(_DWORD *)v105 = *(_DWORD *)(a1 + 40);
      goto LABEL_3;
    case 64:
      v32 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v32, v6->m128i_i32);
      v13 = 15;
      *(_DWORD *)v105 = *(_DWORD *)(a1 + 40);
      goto LABEL_3;
    case 65:
      v31 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v31, v6->m128i_i32);
      v13 = 30;
      *(_DWORD *)v105 = *(_DWORD *)(a1 + 40);
      goto LABEL_3;
    case 66:
      v33 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v33, v6->m128i_i32);
      v13 = 39;
      *(_DWORD *)v105 = *(_DWORD *)(a1 + 40);
      goto LABEL_3;
    case 71:
      v26 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v26, v6->m128i_i32);
      v13 = 40;
      *(_DWORD *)v105 = *(_DWORD *)(a1 + 40);
      goto LABEL_3;
    case 131:
    case 139:
      v15 = *(__int64 **)(a1 + 8);
      v16 = (__int64 *)v6;
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v15, v6->m128i_i32);
      v17 = *(_WORD *)(a1 + 32) == 20;
      *(_DWORD *)v105 = *(_DWORD *)(a1 + 40);
      if ( !v17
        || (v18 = *(_QWORD *)(a1 + 8), (*(_BYTE *)(*(_QWORD *)(v18 + 56) + 1LL) & 0x10) != 0)
        && ((v19 = *(_QWORD *)(v18 + 2944), v19 >= *(unsigned int *)(v18 + 2912))
          ? (v16 = (_QWORD *)(&dword_0 + 1), v20 = sub_14180A0(v18, 1u))
          : (v20 = *(_QWORD *)(v18 + 2904) + 24 * v19),
            *(_WORD *)(v20 + 16) == 20) )
      {
        v13 = (unsigned int)((_WORD)v10 != 139) + 1;
        goto LABEL_3;
      }
      v122 = a1;
      v120 = (_BYTE *)(a1 + 1952);
      v21 = *(_BYTE *)(a1 + 1952);
      *(_BYTE *)(a1 + 1952) = 1;
      v124 = 63;
      v121 = v21;
      v123 = 1376276;
      v125 = sub_14789E0;
      v126 = 0;
      v127 = nullptr;
      sub_14C52C0((__int64)&v120);
      sub_14808E0((__int64)&v120, v16, v22, v23, v24, v25);
      if ( HIDWORD(v127) )
      {
        *(_QWORD *)&v105[4] = v127;
        v13 = (unsigned int)((_WORD)v10 != 139) + 3;
        *v120 = v121;
LABEL_3:
        sub_15AFAE0(a3, v11, v13, v105);
        return 0;
      }
LABEL_85:
      *v120 = v121;
      return 1;
    case 168:
      v12 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v12, v6->m128i_i32);
      v13 = 45;
      *(_DWORD *)v105 = *(_DWORD *)(a1 + 40);
      goto LABEL_3;
    default:
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 0x10) != 0 )
      {
        v100 = (unsigned __int16)(v10 - 17) <= 2u || (unsigned __int16)(v10 - 14) <= 1u;
        if ( v100 )
        {
          sub_1564820(&v120, a1, *(unsigned int *)(a1 + 16), 2121);
          sub_AEA040((__int64)&v120);
          v99 = 0;
          v117 = v119;
          v118 = 0x400000000LL;
          v107 = v109;
          v108 = 0x400000000LL;
          v96 = 0;
          while ( 1 )
          {
            v75 = *(_WORD *)(a1 + 32);
            if ( (unsigned __int16)(v75 - 14) <= 1u || v75 == 17 )
            {
              if ( v75 == 14 )
                goto LABEL_89;
            }
            else if ( (unsigned __int16)(v75 - 18) > 1u )
            {
              sub_13EE5A0((__int64)&v120, (int *)v117, (unsigned int)v118, *(_QWORD **)(a1 + 8), 0);
              result = v132;
              if ( !v132 )
              {
                v102 = v130 != 0;
                if ( v130 )
                {
                  v101 = sub_6F3470(*(_QWORD *)(a1 + 8) + 552LL, v129, v130);
                  v91 = *((_DWORD *)v107 + v131[8]);
                  v104 = v91
                       + sub_13D1C70(
                           v91,
                           v131[9],
                           *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL),
                           *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL));
                  goto LABEL_66;
                }
                v76 = *(unsigned int *)(a1 + 16);
                if ( *(_WORD *)(a1 + 32) == 5 )
                {
                  v77 = *(_QWORD *)(a1 + 24);
                  v78 = *(__int64 **)(a1 + 8);
                  *(_DWORD *)(a1 + 40) = v76;
                  v101 = v77;
                  sub_14634E0(v78, v6->m128i_i32);
                  v104 = *(_DWORD *)(a1 + 40);
                  sub_14C6D60((__int64)&v107, v104);
LABEL_66:
                  if ( (_DWORD)v127 != v128[128] || v133 )
                  {
                    v96 = 1725;
                    v99 = *(_DWORD *)v107;
                    goto LABEL_69;
                  }
                  if ( v96 )
                  {
LABEL_69:
                    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
                    ptr = v112;
                    v79 = j__strlen("\"\"");
                    sub_A1FE50(&ptr, "\"\"", &asc_23176D0[v79 + 2]);
                    sub_A1FE50(
                      &ptr,
                      (_BYTE *)(*(_QWORD *)(v101 + 16) + 16LL),
                      (_BYTE *)(*(_QWORD *)(v101 + 16) + 16LL + **(unsigned int **)(v101 + 16)));
                    sub_1564820(v116, a1, v99, v96);
                    v80 = *((_DWORD *)v107 + (unsigned int)v108 - 1);
                    LODWORD(v106) = *(_DWORD *)v107;
                    HIDWORD(v106) = v80;
                    sub_14C54B0((__int64)v113, v106, 1, ptr, si128.m128i_i64[0]);
                    if ( v113[0] && v113[1] )
                      sub_14C6E00((__int64 *)v116, (unsigned __int64)v113);
                    if ( v114 != &v115 )
                      operator delete(v114);
                    sub_AEA040((__int64)v116);
                    if ( ptr != v112 )
                      free(ptr);
                  }
                  *(_DWORD *)(a3 + 24) = v11;
                  *(_DWORD *)a3 = 3;
                  *(_QWORD *)(a3 + 8) = v101;
                  *(_DWORD *)(a3 + 28) = v104;
                  result = sub_19B2A10(*(_QWORD *)(a1 + 96), a2, a3, v102);
                }
                else
                {
                  sub_1564820(v116, a1, v76, 14);
                  sub_AE9DF0(v116, 5, 4u);
                  sub_AEA040((__int64)v116);
                  result = v100;
                }
              }
              if ( v129 != v131 )
              {
                v97 = result;
                free(v129);
                result = v97;
              }
              if ( v127 != v128 )
              {
                v92 = result;
                free(v127);
                result = v92;
              }
              if ( v107 != v109 )
              {
                v93 = result;
                free(v107);
                result = v93;
              }
              if ( v117 != v119 )
              {
                v94 = result;
                free(v117);
                return v94;
              }
              return result;
            }
            if ( !v96 )
            {
              v96 = 1726;
              v99 = *(_DWORD *)(a1 + 16);
            }
LABEL_89:
            sub_141B840((__int64)&v117, v6);
            v81 = *(__int64 **)(a1 + 8);
            *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
            sub_14634E0(v81, v6->m128i_i32);
            v82 = (unsigned int)v108;
            v83 = *(_DWORD *)(a1 + 40);
            v84 = (unsigned int)v108 + 1LL;
            if ( v84 > HIDWORD(v108) )
            {
              v103 = *(_DWORD *)(a1 + 40);
              sub_2237220(&v107, v109, v84, 4);
              v82 = (unsigned int)v108;
              v83 = v103;
            }
            *((_DWORD *)v107 + v82) = v83;
            LODWORD(v108) = v108 + 1;
          }
        }
      }
      sub_147A4A0((__int64)&v117, a1 + 504);
      v85 = sub_14C6C30(a1, (__int64)&v117, 19, a4, a5);
      if ( !v85 )
      {
        v86 = sub_14B6240();
        sub_147A650((__int64)&v120, (__int64)&v117, (__int64)v86, 19);
        sub_1498040((const __m128i *)a1, (__int64)&v120, nullptr, 0, a4, a5);
        v87 = sub_1E85500(*(_QWORD *)(a1 + 96), &v120);
        v89 = v88;
        if ( !v88 )
        {
          v90 = v128[5];
          *(_DWORD *)a3 = 2;
          *(_DWORD *)(a3 + 24) = v11;
          *(_DWORD *)(a3 + 28) = v90;
          *(_QWORD *)(a3 + 8) = v87;
        }
        v98 = v89;
        sub_147A7A0((char *)&v120);
        v85 = v98;
      }
      v95 = v85;
      sub_147A5F0((__int64)&v117);
      return v95;
  }
}
