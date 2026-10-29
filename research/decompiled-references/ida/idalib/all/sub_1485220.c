void __fastcall sub_1485220(
        const __m128i *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        __m128i a7,
        __m128 a8)
{
  __int16 v10; // ax
  __int64 v12; // r12
  char v13; // al
  __int64 *v14; // rdi
  bool v15; // zf
  __int16 v16; // ax
  int v17; // eax
  unsigned int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int8 v23; // bp
  char *v24; // rdx
  char v25; // al
  __int16 v26; // ax
  __int16 v27; // ax
  __int16 v28; // dx
  int v29; // ebp
  __int64 v30; // rbx
  char *v31; // rax
  __int64 v32; // r12
  __int32 v33; // edi
  __int64 v34; // r12
  __int64 v35; // rax
  char v36; // dl
  __int32 *v37; // rcx
  __int64 v38; // rdx
  __int32 *v39; // rdx
  bool v40; // r12
  __int64 v41; // rax
  __int64 v42; // rcx
  bool v43; // al
  __int8 v44; // al
  int v45; // r11d
  __int64 *v46; // rdi
  __int64 *v47; // rdi
  unsigned __int8 v48; // dl
  char *v49; // rax
  char v50; // al
  char v51; // dl
  __int64 v52; // rcx
  __int8 v53; // al
  __int32 *v54; // rdx
  __int64 v55; // rdi
  unsigned __int64 v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rdx
  unsigned __int16 v59; // bp
  char v60; // al
  __int64 v61; // rcx
  __int64 v62; // rax
  unsigned int *v63; // rax
  size_t v64; // rax
  int v65; // eax
  unsigned __int32 v67; // [rsp+8h] [rbp-EA0h]
  __int64 v68; // [rsp+10h] [rbp-E98h]
  __int8 v69; // [rsp+10h] [rbp-E98h]
  unsigned int v70; // [rsp+1Ch] [rbp-E8Ch]
  bool v71; // [rsp+1Ch] [rbp-E8Ch]
  bool v72; // [rsp+1Ch] [rbp-E8Ch]
  __int64 v73; // [rsp+28h] [rbp-E80h]
  unsigned __int8 v74; // [rsp+38h] [rbp-E70h]
  unsigned int v75; // [rsp+38h] [rbp-E70h]
  int v76; // [rsp+40h] [rbp-E68h]
  __int64 v77; // [rsp+40h] [rbp-E68h]
  unsigned int v78; // [rsp+48h] [rbp-E60h]
  __int64 v79; // [rsp+48h] [rbp-E60h]
  _BOOL4 v80; // [rsp+50h] [rbp-E58h]
  __int64 v81; // [rsp+50h] [rbp-E58h]
  bool v83; // [rsp+5Eh] [rbp-E4Ah]
  unsigned __int8 v84; // [rsp+5Fh] [rbp-E49h]
  unsigned int v85; // [rsp+68h] [rbp-E40h]
  unsigned int v86; // [rsp+6Ch] [rbp-E3Ch]
  __m128i v87; // [rsp+70h] [rbp-E38h] BYREF
  __int64 v88; // [rsp+80h] [rbp-E28h]
  _DWORD v89[2]; // [rsp+9Ch] [rbp-E0Ch] BYREF
  unsigned __int8 v90; // [rsp+A6h] [rbp-E02h] BYREF
  char v91; // [rsp+A7h] [rbp-E01h] BYREF
  __int32 v92; // [rsp+A8h] [rbp-E00h] BYREF
  unsigned int v93; // [rsp+ACh] [rbp-DFCh] BYREF
  __int64 v94; // [rsp+B0h] [rbp-DF8h] BYREF
  char v95; // [rsp+B8h] [rbp-DF0h]
  _BYTE v96[72]; // [rsp+C0h] [rbp-DE8h] BYREF
  _QWORD v97[2]; // [rsp+110h] [rbp-D98h] BYREF
  __int64 v98; // [rsp+120h] [rbp-D88h]
  __int64 v99; // [rsp+128h] [rbp-D80h] BYREF
  _QWORD v100[2]; // [rsp+138h] [rbp-D70h] BYREF
  __int64 v101; // [rsp+148h] [rbp-D60h]
  __int64 v102; // [rsp+150h] [rbp-D58h] BYREF
  _OWORD v103[2]; // [rsp+160h] [rbp-D48h] BYREF
  __m128i v104; // [rsp+180h] [rbp-D28h] BYREF
  __int64 v105; // [rsp+190h] [rbp-D18h]
  char v106; // [rsp+198h] [rbp-D10h]
  __int64 v107; // [rsp+290h] [rbp-C18h] BYREF
  _QWORD v108[2]; // [rsp+298h] [rbp-C10h] BYREF
  __int64 v109; // [rsp+2A8h] [rbp-C00h]
  char v110; // [rsp+2B0h] [rbp-BF8h] BYREF
  __int64 v111; // [rsp+3F0h] [rbp-AB8h]
  char v112; // [rsp+3F8h] [rbp-AB0h]
  unsigned __int8 *v113[11]; // [rsp+400h] [rbp-AA8h] BYREF
  unsigned int v114; // [rsp+45Ch] [rbp-A4Ch]

  v10 = a1[2].m128i_i16[0];
  v89[0] = a2;
  if ( v10 != 3 )
  {
    v12 = (__int64)&a1[31].m128i_i64[1];
    v97[0] = 0;
    v100[0] = (char *)a1 + 504;
    v97[1] = &v99;
    v98 = 0x200000000LL;
    v100[1] = &v102;
    v101 = 0x200000000LL;
    if ( v10 == 320 || v10 == 189 || (unsigned __int16)(v10 - 406) <= 8u || (unsigned int)sub_155CBC0(a1, 0, 0) )
      sub_1485110((__int64)a1, 7, (__int64)v97, 0);
    v67 = 0;
    v83 = a1[2].m128i_i16[0] == 103 || a1[2].m128i_i16[0] == 129;
    if ( v83 )
    {
      v83 = 0;
      v13 = *(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 1LL);
      if ( (v13 & 8) != 0 )
      {
        sub_1564840(v113, a1, &a1[1], (v13 & 0x10) == 0 ? 2018 : 2129);
        sub_AEA040((__int64)v113);
        v14 = (__int64 *)a1->m128i_i64[1];
        v15 = a1[2].m128i_i16[0] == 129;
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        v83 = v15;
        sub_14634E0(v14, a1[1].m128i_i32);
        v67 = a1[2].m128i_u32[2];
        sub_1481E50((__int64)a1, (__int64)v97, 0);
        v16 = a1[2].m128i_i16[0];
        if ( v16 == 189 || v16 == 320 || (unsigned __int16)(v16 - 406) <= 8u || (unsigned int)sub_155CBC0(a1, 0, 0) )
          sub_1485110((__int64)a1, 7, (__int64)v97, 0);
      }
    }
    v17 = *(_DWORD *)a4;
    v108[0] = 0;
    v18 = v17 - 2;
    v19 = a1[6].m128i_i64[0];
    v70 = v18;
    v107 = v19;
    v108[1] = &v110;
    v109 = 0x400000000LL;
    v111 = 0;
    if ( v18 > 1 )
    {
      v112 = 0;
    }
    else
    {
      v20 = *(_QWORD *)(v19 + 512);
      v112 = 1;
      *(_QWORD *)(v19 + 512) = v108;
      v111 = v20;
    }
    switch ( a6 )
    {
      case 0:
      case 1:
      case 4:
      case 6:
      case 10:
        v74 = 1;
        v76 = 3;
        goto LABEL_20;
      case 2:
      case 9:
        v74 = 0;
        v76 = 1;
        goto LABEL_20;
      case 3:
      case 5:
      case 8:
      case 13:
        v74 = 0;
        v76 = 0;
        if ( !(unsigned int)sub_15AC7E0(a3) )
          goto LABEL_63;
        goto LABEL_21;
      case 7:
      case 11:
        v74 = 0;
        v76 = 2;
LABEL_20:
        if ( (unsigned int)sub_15AC7E0(a3) )
        {
LABEL_21:
          v80 = 0;
          v23 = v74;
        }
        else
        {
LABEL_63:
          v23 = 1;
          if ( ((1LL << a6) & 0x43) == 0 )
            v23 = v74;
          v80 = ((1LL << a6) & 0x43) != 0;
        }
        break;
      case 12:
        v23 = (*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 1LL) & 8) == 0;
        v76 = (-v23 & 2) + 1;
        sub_15AC7E0(a3);
        v74 = v23;
        v80 = 0;
        break;
    }
    v24 = *(char **)(a1->m128i_i64[1] + 56);
    v25 = v24[1];
    if ( (v25 & 0x10) == 0 && (v24[2] & 4) == 0 && *v24 >= 0 )
      v23 = v24[2] & 4;
    if ( (v25 & 8) == 0 )
    {
      v26 = a1[2].m128i_i16[0];
      if ( v26 != 5 )
      {
LABEL_28:
        if ( v26 != 62 && v26 != 24 )
        {
          sub_1564840(v113, a1, &a1[1], 17);
          sub_AE9DF0(v113, 5, 4u);
          sub_AE9DF0(v113, 24, 4u);
          sub_AEA040((__int64)v113);
          sub_15AEFC0(a3);
          goto LABEL_111;
        }
        v92 = 0;
        goto LABEL_31;
      }
LABEL_105:
      v46 = (__int64 *)a1->m128i_i64[1];
      v68 = a1[1].m128i_i64[1];
      a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
      sub_14634E0(v46, a1[1].m128i_i32);
      v92 = a1[2].m128i_i32[2];
      if ( v68 )
      {
        if ( v70 > 1 )
          goto LABEL_34;
        goto LABEL_107;
      }
LABEL_31:
      v68 = 0;
      if ( v67 )
      {
        sub_1564840(v113, a1, &a1[1], 1885);
        sub_AEA040((__int64)v113);
        v67 = 0;
        v83 = 0;
      }
      if ( v70 > 1 )
      {
LABEL_34:
        v27 = a1[2].m128i_i16[0];
        v78 = *(_DWORD *)(*(_QWORD *)(a1[6].m128i_i64[0] + 608) + 8LL) & 0x20;
        if ( v78 )
        {
          if ( v67 )
          {
            v86 = 0;
            if ( v27 != 62 )
            {
LABEL_113:
              v85 = 0;
              v78 = 0;
              v84 = 0;
              v81 = 0;
              goto LABEL_39;
            }
LABEL_116:
            if ( v23 || !a1[127].m128i_i8[8] )
            {
              v47 = (__int64 *)a1->m128i_i64[1];
              a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
              sub_14634E0(v47, a1[1].m128i_i32);
              v78 = a1[2].m128i_u32[2];
              sub_147A4A0((__int64)v103, v12);
              sub_148B330(a1, v103, 0, a5, 2);
              if ( !(_BYTE)qword_2CD8AC8 && __cxa_guard_acquire(&qword_2CD8AC8) )
              {
                qword_2CD8AE0[0] = 0;
                qword_2CD8AE0[1] = &qword_2CD8AE0[3];
                qword_2CD8AE0[2] = 0x200000000LL;
                __cxa_atexit((void (*)(void *))sub_1477960, qword_2CD8AE0, &off_2B25620);
                __cxa_guard_release(&qword_2CD8AC8);
              }
              sub_147A650((__int64)v113, (__int64)v103, (__int64)qword_2CD8AE0, 5);
              v81 = sub_1E85500(a1[6].m128i_i64[0], v113);
              v84 = v48;
              v85 = v114;
              v73 = v48;
              v49 = *(char **)(a1->m128i_i64[1] + 56);
              if ( (v49[2] & 4) == 0 )
              {
                if ( (v49[1] & 8) != 0 )
                {
                  sub_1564860(v96, a1, v78, 0);
                }
                else
                {
                  v50 = *v49;
                  v51 = v50 & 8;
                  if ( v50 < 0 )
                  {
                    v52 = 2068;
                    if ( !v51 )
                      v52 = 2006;
                  }
                  else
                  {
                    v52 = v51 == 0 ? 1948 : 2068;
                  }
                  sub_1564820(v96, a1, v78, v52);
                }
                v95 = 1;
                v94 = __PAIR64__(v85, v78);
                sub_AEC610((__int64 *)v96, &v94);
                sub_AEA040((__int64)v96);
              }
              sub_147A7A0((char *)v113);
              sub_147A5F0((__int64)v103);
              goto LABEL_39;
            }
            goto LABEL_113;
          }
          if ( v68 )
          {
            if ( v27 != 62 )
            {
LABEL_38:
              v85 = 0;
              v78 = 0;
              v86 = 1;
              v84 = 0;
              v81 = 0;
LABEL_39:
              if ( v76 )
              {
                v28 = a1[2].m128i_i16[0];
                if ( v28 == 24 )
                {
                  v40 = 0;
                  v29 = 2;
                  if ( *(_DWORD *)(a3 + 264) )
                  {
                    v40 = 1;
                    sub_1564820(v113, a1, a1[1].m128i_u32[0], 1676);
                    v65 = *(_DWORD *)(a3 + 264);
                    BYTE8(v103[0]) = 1;
                    LODWORD(v103[0]) = v65;
                    DWORD1(v103[0]) = v65;
                    sub_AEC610((__int64 *)v113, (__int64 *)v103);
                    sub_AEA040((__int64)v113);
                    sub_1478A90((__int64)a1);
                    LOWORD(v113[0]) = 25;
                    v29 = 3;
                    sub_15680D0(a1, v113, 1, 1);
                    LODWORD(v98) = 0;
                    sub_15DCED0(v100[0], v100);
                    v84 = 0;
                    LODWORD(v101) = 0;
                    v97[0] = 0;
                    v81 = 0;
                    v67 = 0;
                    v83 = 0;
                  }
                  goto LABEL_86;
                }
                if ( ((1LL << a6) & 0xDC3) != 0 )
                {
                  if ( v28 == 63 )
                  {
                    v40 = *(_DWORD *)(a3 + 264) != 0;
                    v29 = *(_DWORD *)(a3 + 264) == 0 ? 1 : 3;
LABEL_86:
                    if ( *(_DWORD *)a4 )
                    {
                      if ( (*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 1LL) & 0x10) == 0 || !*(_QWORD *)(a3 + 120) )
                      {
                        sub_1564840(v113, a1, &a1[1], 13);
                        sub_AEA040((__int64)v113);
                        goto LABEL_111;
                      }
                      if ( *(_DWORD *)a4 == 3 )
                      {
                        sub_15AEFC0(a3);
                        sub_1564820(v113, a1, v89[0], 1662);
                        sub_AEA040((__int64)v113);
                        goto LABEL_61;
                      }
                      v41 = *(_QWORD *)(a4 + 8);
                      v42 = *(unsigned int *)(v41 + 8);
                      v30 = *(_QWORD *)v41;
                      v43 = v29 != 2;
                      v77 = v42;
                      *(_QWORD *)(a3 + 144) = v30;
                      *(_QWORD *)(a3 + 152) = v42;
                    }
                    else
                    {
                      v77 = 0;
                      v43 = v29 != 2;
                      v30 = 0;
                    }
                    v71 = v68 == 0;
                    if ( v68 || !v43 )
                    {
                      if ( !v40 )
                        goto LABEL_94;
                      goto LABEL_50;
                    }
                    goto LABEL_110;
                  }
                  if ( (a1[2].m128i_i8[2] & 1) != 0 && !(unsigned __int8)sub_14A0820(a1, v86) )
                  {
                    v40 = *(_DWORD *)(a3 + 264) != 0;
                    v29 = *(_DWORD *)(a3 + 264) == 0 ? 1 : 3;
                    if ( a1[2].m128i_i16[0] != 63 )
                    {
                      v64 = j__strlen("enum");
                      sub_1569A00(a1, 63, 15, "enum", v64);
                      sub_1479990(a1->m128i_i64[1], a1 + 1, 1u);
                      a1[2].m128i_i16[0] = 63;
                    }
                    goto LABEL_86;
                  }
                }
              }
              if ( v70 > 1 )
              {
                v29 = *(_DWORD *)a4;
                if ( !*(_DWORD *)a4 )
                {
                  v71 = v68 == 0;
                  if ( v68 )
                  {
                    v77 = 0;
                    v30 = 0;
                    goto LABEL_50;
                  }
                  goto LABEL_110;
                }
              }
              else
              {
                if ( (_DWORD)v109 )
                  sub_1806CB0(v107, v108);
                v29 = *(_DWORD *)a4;
                if ( !*(_DWORD *)a4 )
                {
                  if ( v68 )
                  {
                    v77 = 0;
                    v30 = 0;
                    v71 = 0;
                    goto LABEL_50;
                  }
LABEL_110:
                  sub_1564840(v113, a1, &a1[1], 1599);
                  sub_AEA040((__int64)v113);
                  sub_15AEFC0(a3);
LABEL_111:
                  LOWORD(v113[0]) = 66;
                  sub_15680D0(a1, v113, 1, 1);
                  goto LABEL_61;
                }
              }
              if ( v68 )
              {
                v77 = 0;
                v30 = 0;
                v29 = 0;
                v71 = 0;
LABEL_50:
                v31 = *(char **)(a1->m128i_i64[1] + 56);
                if ( *v31 >= 0 && (v31[2] & 4) == 0 )
                {
                  sub_147CDF0((__int64)a1, (int *)v97, 0x616u, 0x6B4u, 1, 0, a7, *(double *)a8.m128_u64);
                  if ( !v81 || v84 )
                  {
                    if ( v67 )
                    {
                      sub_1564820(v113, a1, v67, 1971);
                      *(_QWORD *)((char *)v103 + 12) = 0;
                      BYTE4(v103[1]) = 0;
                      *((_QWORD *)&v103[1] + 1) = &v104.m128i_i64[1];
                      v104.m128i_i64[0] = 0;
                      LODWORD(v103[0]) = v67;
                      DWORD1(v103[0]) = v67;
                      v104.m128i_i8[8] = 0;
                      v106 = 0;
                      BYTE8(v103[0]) = 1;
                      sub_1480470((__int64 *)v113, (unsigned __int64)v103);
                      sub_14780E0(v113, v83);
                      if ( *((__m128i **)&v103[1] + 1) != (__m128i *)&v104.m128i_u64[1] )
                        operator delete(*((void **)&v103[1] + 1));
                      sub_AEA040((__int64)v113);
                    }
                  }
                  else
                  {
                    sub_1564820(v113, a1, v78, 1974);
                    sub_14780E0(v113, v74);
                    BYTE8(v103[0]) = 1;
                    *(_QWORD *)&v103[0] = __PAIR64__(v85, v78);
                    sub_AEC610((__int64 *)v113, (__int64 *)v103);
                    sub_AEA040((__int64)v113);
                  }
                }
                if ( !v29 )
                {
                  v72 = 0;
                  v32 = a1[6].m128i_i64[0];
                  *(_WORD *)v96 = 0;
                  *(_OWORD *)&v96[8] = 0;
                  goto LABEL_54;
                }
LABEL_94:
                sub_1478B40((__int64)v97, a3);
                *(_WORD *)v96 = 0;
                v15 = v29 != 2 || !v71;
                v72 = v29 == 2 && v71;
                *(_OWORD *)&v96[8] = 0;
                if ( v15 )
                {
                  v32 = a1[6].m128i_i64[0];
                  v72 = v29 == 2;
LABEL_54:
                  v94 = 0;
                  v90 = 0;
                  v33 = a1[127].m128i_i32[0];
                  v91 = 0;
                  LOBYTE(v73) = v84;
                  v34 = sub_17D9210(
                          v32,
                          *(_QWORD *)(v32 + 608),
                          23,
                          v29,
                          v89[0],
                          (int)a3 + 112,
                          v68,
                          v92,
                          (__int64)v97,
                          a5,
                          *(_DWORD *)(a3 + 268),
                          v30,
                          v77,
                          (__int64)&v90,
                          (__int64)&v91,
                          v67,
                          v83,
                          v81,
                          v73,
                          a6 == 2,
                          ((a6 - 7) & 0xFFFFFFFD) == 0,
                          v33,
                          (__int64)v96);
                  if ( v96[0] )
                  {
                    v15 = a1[2].m128i_i16[0] == 24;
                    *(_QWORD *)&v103[1] = a1;
                    *(_QWORD *)&v103[0] = a1 + 122;
                    v53 = a1[122].m128i_i8[0];
                    DWORD2(v103[1]) = 1638424;
                    BYTE8(v103[0]) = v53;
                    WORD6(v103[1]) = 63;
                    v104.m128i_i64[0] = (__int64)sub_1478A90;
                    a1[122].m128i_i8[0] = 1;
                    v104.m128i_i64[1] = 0;
                    v105 = 0;
                    if ( v15 )
                    {
                      if ( (unsigned int)a1[5].m128i_u16[6] >= *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 144LL) )
                        sub_1568800(v103);
                      else
                        LODWORD(v105) = sub_1478A90((__int64)a1);
                    }
                    sub_156E210(v103);
                    v54 = &v92;
                    if ( !v92 )
                      v54 = v89;
                    if ( (unsigned __int8)sub_15AD890(
                                            a3,
                                            23,
                                            v89[0],
                                            *v54,
                                            (unsigned int)&v94,
                                            (unsigned int)&v93,
                                            v34,
                                            v90) )
                    {
                      sub_1564820(v113, a1, v89[0], v93);
                      sub_1478320(v113, v94);
                      sub_AEA040((__int64)v113);
                    }
                    **(_BYTE **)&v103[0] = BYTE8(v103[0]);
                    goto LABEL_61;
                  }
                  if ( v91 )
                  {
                    if ( !v68 )
                    {
                      sub_15AEFC0(a3);
                      sub_1564840(v113, a1, &a1[1], 1658);
                      sub_AEA040((__int64)v113);
                      goto LABEL_61;
                    }
                    v35 = sub_1CC55A0(
                            a1[6].m128i_i64[0],
                            *(_QWORD *)(a1[6].m128i_i64[0] + 608),
                            23,
                            v29,
                            (int)a3 + 112,
                            v68,
                            v89[0],
                            v92);
                    if ( !v36 )
                    {
                      v37 = &v92;
                      if ( !v92 )
                        v37 = v89;
                      if ( !(unsigned __int8)sub_15AD410(
                                               a3,
                                               28,
                                               v89[0],
                                               *v37,
                                               (unsigned int)&v94,
                                               (unsigned int)&v93,
                                               v35,
                                               *(_QWORD *)(a1[6].m128i_i64[0] + 248) + 17464LL) )
                        goto LABEL_61;
                      goto LABEL_81;
                    }
                  }
                  else if ( v34 )
                  {
                    if ( !v72 || a1[2].m128i_i16[0] != 24 )
                      goto LABEL_78;
                    v38 = v34;
                    if ( v96[1] )
                      v38 = *(_QWORD *)&v96[16];
                    sub_1490E60(a1, v89[0], v38, v96);
                    if ( !v96[1]
                      || (unsigned __int8)sub_17A6440(
                                            a1[6].m128i_i64[0],
                                            *(_QWORD *)(a1[6].m128i_i64[0] + 608),
                                            v34,
                                            v96) )
                    {
LABEL_78:
                      v39 = &v92;
                      if ( !v92 )
                        v39 = v89;
                      if ( !(unsigned __int8)sub_15AD890(
                                               a3,
                                               23,
                                               v89[0],
                                               *v39,
                                               (unsigned int)&v94,
                                               (unsigned int)&v93,
                                               v34,
                                               v90) )
                        goto LABEL_61;
LABEL_81:
                      sub_1564820(v113, a1, v89[0], v93);
                      sub_1478320(v113, v94);
                      sub_AEA040((__int64)v113);
LABEL_61:
                      sub_147B550((__int64)&v107);
                      sub_147A450(v97);
                      return;
                    }
                  }
                  else if ( v29 && a1[2].m128i_i16[0] == 24 )
                  {
                    sub_1478A90((__int64)a1);
                    LOWORD(v113[0]) = 25;
                    sub_15680D0(a1, v113, 1, 1);
                  }
                  sub_15AEFC0(a3);
                  goto LABEL_61;
                }
                if ( a1[2].m128i_i16[0] != 24 )
                  goto LABEL_96;
                v55 = a1->m128i_i64[1];
                v56 = *(_QWORD *)(v55 + 2944);
                if ( v56 >= *(unsigned int *)(v55 + 2912) )
                {
                  v62 = sub_14180A0(v55, 1u);
                  v32 = a1[6].m128i_i64[0];
                  if ( *(_WORD *)(v62 + 16) != 5 )
                    goto LABEL_97;
                  v55 = a1->m128i_i64[1];
                  v56 = *(_QWORD *)(v55 + 2944);
                  if ( v56 >= *(unsigned int *)(v55 + 2912) )
                  {
                    v63 = (unsigned int *)sub_14180A0(v55, 1u);
                    v55 = a1->m128i_i64[1];
                    v56 = *(_QWORD *)(v55 + 2944);
                    v75 = *v63;
                    if ( v56 >= *(unsigned int *)(v55 + 2912) )
                    {
                      v58 = sub_14180A0(v55, 1u);
LABEL_150:
                      v79 = v58;
                      v59 = *(_WORD *)(v58 + 16);
                      v60 = sub_141A630(v59);
                      if ( v59 == 1 || v60 )
                        v61 = 0;
                      else
                        v61 = *(_QWORD *)(v79 + 8);
                      sub_17A68F0(&v87, v32, *(_QWORD *)(a1[6].m128i_i64[0] + 608), v61, v75);
                      *(__m128i *)v96 = _mm_loadu_si128(&v87);
                      *(_QWORD *)&v96[16] = v88;
LABEL_96:
                      v32 = a1[6].m128i_i64[0];
LABEL_97:
                      v29 = 2;
                      goto LABEL_54;
                    }
LABEL_149:
                    v58 = *(_QWORD *)(v55 + 2904) + 24 * v56;
                    goto LABEL_150;
                  }
                  v57 = *(_QWORD *)(v55 + 2904) + 24 * v56;
                }
                else
                {
                  v32 = a1[6].m128i_i64[0];
                  v57 = *(_QWORD *)(v55 + 2904) + 24 * v56;
                  if ( *(_WORD *)(v57 + 16) != 5 )
                    goto LABEL_97;
                }
                v75 = *(_DWORD *)v57;
                goto LABEL_149;
              }
              goto LABEL_110;
            }
            if ( !(unsigned __int8)sub_155FA50(a1, v80) )
            {
              if ( (*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 1LL) & 0x10) != 0 )
              {
                sub_1564820(v113, a1, a1[1].m128i_u32[0], 1541);
                sub_AEA040((__int64)v113);
              }
              goto LABEL_38;
            }
            v86 = 1;
            goto LABEL_116;
          }
          if ( v27 != 62 )
          {
            v85 = 0;
            v78 = 0;
            v81 = 0;
            v86 = 0;
            v84 = 0;
            goto LABEL_39;
          }
        }
        else if ( v27 != 62 )
        {
          v85 = 0;
          v86 = 0;
          v84 = 0;
          v81 = 0;
          goto LABEL_39;
        }
        v86 = 0;
        goto LABEL_116;
      }
LABEL_107:
      sub_1818070(v107, v111, 0);
      v112 = 0;
      goto LABEL_34;
    }
    v44 = a1[127].m128i_i8[8];
    a7 = 0;
    memset(v103, 0, sizeof(v103));
    v69 = v44;
    v104 = 0;
    a1[127].m128i_i8[8] = 1;
    if ( !(unsigned __int8)sub_14D0170((_DWORD)a1, (unsigned int)v103, 0, 0, 1, 0, 0, 0, 0, 0, 0) )
    {
      if ( !*((_QWORD *)&v103[0] + 1)
        || a1[2].m128i_i16[0] == 5
        || (sub_1564840(v113, a1, &a1[1], 14),
            sub_AE9DF0(v113, 5, 4u),
            sub_AEA040((__int64)v113),
            sub_15AEFC0(a3),
            a1[2].m128i_i16[0] == 24) )
      {
        *(_QWORD *)(a3 + 112) = *(_QWORD *)&v103[0];
        sub_E907B0(a3 + 120, (__int64)v103 + 8);
        v45 = HIDWORD(v103[1]);
        a8 = (__m128)_mm_load_si128(&v104);
        *(__m128 *)(a3 + 144) = a8;
        if ( v45 )
          free(*(void **)&v103[1]);
        a1[127].m128i_i8[8] = v69;
        v26 = a1[2].m128i_i16[0];
        if ( v26 != 5 )
          goto LABEL_28;
        goto LABEL_105;
      }
      LOWORD(v113[0]) = 66;
      sub_15680D0(a1, v113, 1, 1);
    }
    if ( HIDWORD(v103[1]) )
      free(*(void **)&v103[1]);
    a1[127].m128i_i8[8] = v69;
    goto LABEL_61;
  }
  v21 = a1->m128i_i64[1];
  if ( *(_QWORD *)(v21 + 760) )
  {
    *(_BYTE *)(v21 + 968) = 1;
    *(_BYTE *)(*(_QWORD *)(v21 + 48) + 6LL) = 1;
  }
  v22 = a1[6].m128i_i64[0];
  a1[2].m128i_i16[0] = 1;
  sub_1705480(*(_QWORD *)(v22 + 656), *(_QWORD *)(v22 + 608), 23);
  sub_15AEFC0(a3);
}
