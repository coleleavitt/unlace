__int64 __fastcall sub_1515C40(const __m128i *a1, __int64 a2, __m128i a3)
{
  const __m128i *v4; // rbx
  __int8 v5; // al
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // r13d
  __int64 v13; // rax
  __int64 v14; // rdx
  char *v16; // r14
  unsigned int v17; // ebx
  const __m128i *v18; // r13
  unsigned int v19; // ebp
  __int64 *v20; // rdi
  __int8 v21; // al
  unsigned int v22; // eax
  __int16 v23; // ax
  __int64 v24; // rdi
  unsigned __int64 v25; // rax
  bool v26; // zf
  __int64 v27; // rdx
  __int64 *v28; // rcx
  unsigned __int64 v29; // rbp
  __int64 v30; // rax
  void *v31; // r10
  char v32; // dl
  unsigned int v33; // r8d
  __int64 (__fastcall *v34)(_QWORD); // rax
  _QWORD *v35; // rdi
  int v36; // eax
  __int64 *v37; // rdi
  __int64 v38; // rax
  const __m128i *v39; // rbx
  __int64 *v40; // rdi
  int *m128i_i32; // rsi
  __int64 *v42; // r11
  __int64 *v43; // r10
  __int64 v44; // rbx
  __int64 *v45; // rsi
  unsigned __int64 v46; // rdi
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // rbx
  char *v49; // rcx
  void *v50; // rax
  __int64 *v51; // r8
  __int64 *v52; // rdi
  size_t v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rdx
  int v59; // eax
  __int64 *v60; // rbx
  int v61; // ebx
  __int64 v62; // rax
  void *v63; // rdi
  __int64 v64; // rax
  __int64 v65; // rsi
  __int64 v66; // rbx
  unsigned int v67; // r12d
  __int64 v68; // rbp
  __int64 *v69; // rbx
  const __m128i *v70; // r14
  __int64 *v71; // r13
  __int64 *v72; // rdi
  __int64 v73; // rbx
  __int64 *v74; // rdi
  __int64 v75; // rax
  char *v76; // [rsp+0h] [rbp-1E8h]
  unsigned __int8 **v77; // [rsp+8h] [rbp-1E0h]
  __m128i **v78; // [rsp+10h] [rbp-1D8h]
  __m128i *v79; // [rsp+18h] [rbp-1D0h]
  const __m128i *v80; // [rsp+20h] [rbp-1C8h]
  __int64 *v81; // [rsp+28h] [rbp-1C0h]
  __int64 *v82; // [rsp+30h] [rbp-1B8h]
  __int64 v83; // [rsp+38h] [rbp-1B0h]
  __int64 *v84; // [rsp+40h] [rbp-1A8h]
  __int64 v85; // [rsp+48h] [rbp-1A0h]
  __int64 v86; // [rsp+58h] [rbp-190h] BYREF
  __m128i *v87; // [rsp+60h] [rbp-188h] BYREF
  __int8 v88; // [rsp+68h] [rbp-180h]
  const __m128i *v89; // [rsp+70h] [rbp-178h]
  int v90; // [rsp+78h] [rbp-170h]
  __int16 v91; // [rsp+7Ch] [rbp-16Ch]
  __int64 (__fastcall *v92)(__int64); // [rsp+80h] [rbp-168h]
  __int64 v93; // [rsp+88h] [rbp-160h]
  __int64 v94; // [rsp+90h] [rbp-158h]
  __m128i *v95; // [rsp+A0h] [rbp-148h] BYREF
  unsigned __int8 v96; // [rsp+A8h] [rbp-140h]
  const __m128i *v97; // [rsp+B0h] [rbp-138h]
  int v98; // [rsp+B8h] [rbp-130h]
  __int16 v99; // [rsp+BCh] [rbp-12Ch]
  __int64 (__fastcall *v100)(__int64); // [rsp+C0h] [rbp-128h]
  __int64 v101; // [rsp+C8h] [rbp-120h]
  __int64 v102; // [rsp+D0h] [rbp-118h]
  __int16 v103; // [rsp+E0h] [rbp-108h] BYREF
  void *ptr; // [rsp+E8h] [rbp-100h]
  __int64 v105; // [rsp+F0h] [rbp-F8h]
  char v106; // [rsp+F8h] [rbp-F0h] BYREF
  _DWORD v107[2]; // [rsp+120h] [rbp-C8h] BYREF
  char v108; // [rsp+128h] [rbp-C0h]
  __int64 v109; // [rsp+12Ch] [rbp-BCh]
  char v110; // [rsp+134h] [rbp-B4h]
  void *v111; // [rsp+138h] [rbp-B0h]
  __int64 v112; // [rsp+140h] [rbp-A8h]
  _BYTE v113[24]; // [rsp+148h] [rbp-A0h] BYREF
  __int64 *v114; // [rsp+160h] [rbp-88h] BYREF
  __int64 v115; // [rsp+168h] [rbp-80h]

  v4 = a1;
  v80 = a1 + 122;
  v87 = (__m128i *)&a1[122];
  v5 = a1[122].m128i_i8[0];
  a1[122].m128i_i8[0] = 1;
  v89 = a1;
  v88 = v5;
  v91 = 449;
  v90 = 1507350;
  v92 = sub_146A990;
  v93 = 0;
  v94 = 0;
  v6 = sub_20EB760(9, 0);
  v7 = 1625;
  v78 = &v87;
  v12 = sub_156A040(&v87, 1625, v6, 0);
  if ( (_BYTE)v12 )
    goto LABEL_6;
  if ( a1[2].m128i_i16[0] != 5 || (v13 = *(_QWORD *)(a1[1].m128i_i64[1] + 16), *(_DWORD *)v13 != 7) )
  {
LABEL_4:
    v14 = *(unsigned int *)(a2 + 8);
    if ( (_DWORD)v14 )
    {
      v12 = sub_14808E0((__int64)v78, (__int64 *)v7, v14, v9, v10, v11);
    }
    else
    {
      v12 = 1;
      sub_1564820(&v114, v4, v4[1].m128i_u32[0], 1819);
      sub_AEA040((__int64)&v114);
      LODWORD(v114) = 1507394;
      WORD2(v114) = 449;
      sub_15680D0(v4, &v114, 3, 2);
      sub_14808E0((__int64)v78, (__int64 *)&v114, v54, v55, v56, v57);
    }
    goto LABEL_6;
  }
  v16 = &v106;
  v76 = (char *)&v103;
  v9 = (__int64)a1;
  v17 = v12;
  v18 = a1;
  while ( 1 )
  {
    if ( *(_DWORD *)(v13 + 16) != 1702129257 || *(_WORD *)(v13 + 20) != 28530 || *(_BYTE *)(v13 + 22) != 112 )
    {
      v19 = v17;
      v4 = v18;
      goto LABEL_10;
    }
    v20 = (__int64 *)v18->m128i_i64[1];
    v18[2].m128i_i32[2] = v18[1].m128i_i32[0];
    v79 = (__m128i *)&v18[1];
    sub_14634E0(v20, v18[1].m128i_i32);
    v99 = 449;
    v95 = (__m128i *)v80;
    v21 = v18[122].m128i_i8[0];
    v18[122].m128i_i8[0] = 1;
    v96 = v21;
    v100 = sub_146A990;
    v97 = v18;
    v98 = 1507350;
    v101 = 0;
    v102 = 0;
    v77 = (unsigned __int8 **)&v95;
    v22 = sub_156A040(&v95, 1625, "interop", 0);
    if ( (_BYTE)v22 )
    {
      v12 = v22;
      v95->m128i_i8[0] = v96;
      goto LABEL_6;
    }
    v7 = (__int64)v76;
    v103 = 0;
    ptr = v16;
    v105 = 0x400000000LL;
    v19 = sub_1509AA0(v18, (__int64)v76, 9, a3);
    if ( !(_BYTE)v19 )
    {
      v27 = *(unsigned int *)(a2 + 8);
      v28 = *(__int64 **)a2;
      v7 = v27 + 1;
      v29 = *(_QWORD *)a2 + 56 * v27;
      v30 = (__int64)v76;
      if ( v27 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
      {
        v81 = *(__int64 **)a2;
        if ( v28 > (__int64 *)v76 || v29 <= (unsigned __int64)v76 )
        {
          sub_1515A20(a2, v7);
          v29 = *(_QWORD *)a2 + 56LL * *(unsigned int *)(a2 + 8);
          v30 = (__int64)v76;
        }
        else
        {
          sub_1515A20(a2, v7);
          v7 = *(_QWORD *)a2;
          v30 = *(_QWORD *)a2 + v76 - (char *)v81;
          v29 = *(_QWORD *)a2 + 56LL * *(unsigned int *)(a2 + 8);
        }
      }
      v31 = (void *)(v29 + 24);
      *(_BYTE *)v29 = *(_BYTE *)v30;
      v32 = *(_BYTE *)(v30 + 1);
      *(_QWORD *)(v29 + 16) = 0x400000000LL;
      *(_BYTE *)(v29 + 1) = v32;
      v33 = *(_DWORD *)(v30 + 16);
      *(_QWORD *)(v29 + 8) = v29 + 24;
      if ( v33 && v29 + 8 != v30 + 8 )
      {
        v53 = 8LL * v33;
        if ( v33 <= 4uLL
          || (v7 = v29 + 24,
              v82 = (__int64 *)v30,
              LODWORD(v81) = v33,
              sub_2237220(v29 + 8, v29 + 24, v33, 8),
              v30 = (__int64)v82,
              v31 = *(void **)(v29 + 8),
              v33 = (unsigned int)v81,
              (v53 = 8LL * *((unsigned int *)v82 + 4)) != 0) )
        {
          v7 = *(_QWORD *)(v30 + 8);
          LODWORD(v81) = v33;
          memcpy(v31, (const void *)v7, v53);
          v33 = (unsigned int)v81;
        }
        *(_DWORD *)(v29 + 16) = v33;
      }
      ++*(_DWORD *)(a2 + 8);
      v19 = v17;
    }
    v23 = v97[2].m128i_i16[0];
    if ( HIWORD(v98) == v23 )
    {
      v34 = v100;
      v35 = (__int64 *)((char *)v97->m128i_i64 + v101);
      if ( ((unsigned __int8)v100 & 1) == 0 )
        goto LABEL_32;
      goto LABEL_31;
    }
    if ( v23 != 63 )
      goto LABEL_20;
    v24 = v97->m128i_i64[1];
    v25 = *(_QWORD *)(v24 + 2944);
    if ( v25 >= *(unsigned int *)(v24 + 2912) )
    {
      v7 = 1;
      v38 = sub_14180A0(v24, 1u);
      if ( *(_WORD *)(v38 + 16) != HIWORD(v98) )
        goto LABEL_20;
LABEL_35:
      v39 = v97;
      v40 = (__int64 *)v97->m128i_i64[1];
      m128i_i32 = v97[1].m128i_i32;
      v97[2].m128i_i32[2] = v97[1].m128i_i32[0];
      sub_14634E0(v40, m128i_i32);
      LODWORD(v39) = v39[2].m128i_i32[2];
      v77 = (unsigned __int8 **)&v114;
      sub_1564820(&v114, v97, (unsigned int)v39, 1917);
      v7 = HIWORD(v98);
      sub_AE9DF0(v77, HIWORD(v98), 4u);
      v42 = (__int64 *)v107;
      v109 = 0;
      v110 = 0;
      v111 = v113;
      v112 = 0;
      v113[0] = 0;
      v113[16] = 0;
      v107[0] = (_DWORD)v39;
      v107[1] = (_DWORD)v39;
      v108 = 1;
      if ( !(_DWORD)v39 )
      {
LABEL_46:
        sub_AEA040((__int64)v77);
        v34 = v100;
        v35 = (__int64 *)((char *)v97->m128i_i64 + v101);
        if ( ((unsigned __int8)v100 & 1) == 0 )
        {
LABEL_32:
          v36 = v34(v35);
          v26 = v18[2].m128i_i16[0] == 66;
          HIDWORD(v102) = v36;
          if ( !v26 )
            goto LABEL_21;
          goto LABEL_33;
        }
LABEL_31:
        v34 = *(__int64 (__fastcall **)(_QWORD))((char *)v34 + *v35 - 1);
        goto LABEL_32;
      }
      v43 = v114;
      if ( v114 )
      {
        v44 = *((unsigned int *)v114 + 134);
        v45 = (__int64 *)v114[66];
        v46 = *((unsigned int *)v114 + 135);
        v47 = v44 + 1;
        v48 = (unsigned __int64)&v45[8 * v44];
      }
      else
      {
        v58 = v115;
        v59 = *(_DWORD *)(v115 + 14976);
        if ( v59 )
        {
          v64 = (unsigned int)(v59 - 1);
          *(_DWORD *)(v115 + 14976) = v64;
          v43 = *(__int64 **)(v58 + 8 * v64 + 14848);
          v65 = *((unsigned int *)v43 + 134);
          *(_BYTE *)v43 = 0;
          v66 = v43[66];
          *((_DWORD *)v43 + 106) = 0;
          v45 = (__int64 *)(v66 + (v65 << 6));
          if ( (__int64 *)v66 != v45 )
          {
            v82 = (__int64 *)a2;
            v67 = v19;
            v68 = v66;
            v69 = v45;
            v83 = (__int64)v16;
            v70 = v18;
            v71 = v43;
            do
            {
              while ( 1 )
              {
                v69 -= 8;
                v72 = (__int64 *)v69[3];
                if ( v72 == v69 + 5 )
                  break;
                v81 = v42;
                operator delete(v72);
                v42 = v81;
                if ( (__int64 *)v68 == v69 )
                  goto LABEL_76;
              }
            }
            while ( (__int64 *)v68 != v69 );
LABEL_76:
            v43 = v71;
            v19 = v67;
            v18 = v70;
            a2 = (__int64)v82;
            v16 = (char *)v83;
            v45 = (__int64 *)v43[66];
          }
          *((_DWORD *)v43 + 134) = 0;
          v46 = *((unsigned int *)v43 + 135);
        }
        else
        {
          v81 = (__int64 *)v107;
          v46 = 6;
          v43 = (__int64 *)operator new(0x3A0u);
          *(_BYTE *)v43 = 0;
          v43[12] = (__int64)(v43 + 14);
          v45 = v43 + 68;
          v43[16] = (__int64)(v43 + 18);
          v43[20] = (__int64)(v43 + 22);
          v43[24] = (__int64)(v43 + 26);
          v43[28] = (__int64)(v43 + 30);
          v43[32] = (__int64)(v43 + 34);
          v43[36] = (__int64)(v43 + 38);
          v43[40] = (__int64)(v43 + 42);
          v43[44] = (__int64)(v43 + 46);
          v43[48] = (__int64)(v43 + 50);
          v43[52] = (__int64)(v43 + 54);
          v43[13] = 0;
          *((_BYTE *)v43 + 112) = 0;
          v43[17] = 0;
          *((_BYTE *)v43 + 144) = 0;
          v43[21] = 0;
          *((_BYTE *)v43 + 176) = 0;
          v43[25] = 0;
          *((_BYTE *)v43 + 208) = 0;
          v43[29] = 0;
          *((_BYTE *)v43 + 240) = 0;
          v43[33] = 0;
          *((_BYTE *)v43 + 272) = 0;
          v43[37] = 0;
          *((_BYTE *)v43 + 304) = 0;
          v43[41] = 0;
          *((_BYTE *)v43 + 336) = 0;
          v43[45] = 0;
          *((_BYTE *)v43 + 368) = 0;
          v43[49] = 0;
          *((_BYTE *)v43 + 400) = 0;
          v43[53] = 0x800000000LL;
          v42 = v81;
          v43[66] = (__int64)(v43 + 68);
          v43[67] = 0x600000000LL;
        }
        v114 = v43;
        v48 = (unsigned __int64)v45;
        v47 = 1;
      }
      v49 = (char *)v42;
      if ( v47 > v46 )
      {
        v81 = v43 + 66;
        if ( v45 > v42 || v48 <= (unsigned __int64)v42 )
        {
          v84 = v42;
          v83 = (__int64)v43;
          v82 = v43 + 68;
          v73 = sub_2237400(v81, v43 + 68, v47, 64, &v86);
          sub_9EF810(v81, v73);
          v43 = (__int64 *)v83;
          v42 = v84;
          v74 = *(__int64 **)(v83 + 528);
          if ( v74 == v82 )
          {
            *(_DWORD *)(v83 + 540) = v86;
            v75 = *((unsigned int *)v43 + 134);
            v49 = (char *)v42;
            v43[66] = v73;
          }
          else
          {
            v83 = (__int64)v84;
            v82 = (__int64 *)v86;
            v81 = v43;
            free(v74);
            v43 = v81;
            v42 = (__int64 *)v83;
            *((_DWORD *)v81 + 135) = (_DWORD)v82;
            v75 = *((unsigned int *)v81 + 134);
            v81[66] = v73;
            v49 = (char *)v83;
          }
          v48 = (v75 << 6) + v73;
        }
        else
        {
          v81 = (__int64 *)((char *)v42 - (char *)v45);
          v60 = v43 + 66;
          v85 = (__int64)v43;
          v84 = v42;
          v83 = (__int64)(v43 + 68);
          v82 = (__int64 *)sub_2237400(v43 + 66, v43 + 68, v47, 64, &v86);
          sub_9EF810(v60, (__int64)v82);
          v43 = (__int64 *)v85;
          v61 = v86;
          v62 = (__int64)v82;
          v63 = *(void **)(v85 + 528);
          v42 = v84;
          if ( v63 == (void *)v83 )
          {
            *(_QWORD *)(v85 + 528) = v82;
            *((_DWORD *)v43 + 135) = v61;
          }
          else
          {
            v83 = (__int64)v82;
            v82 = (__int64 *)v85;
            free(v63);
            v43 = v82;
            v62 = v83;
            v42 = v84;
            v82[66] = v83;
            *((_DWORD *)v82 + 135) = v61;
          }
          v49 = (char *)v81 + v62;
          v48 = v62 + ((unsigned __int64)*((unsigned int *)v43 + 134) << 6);
        }
      }
      *(_QWORD *)v48 = *(_QWORD *)v49;
      *(_DWORD *)(v48 + 8) = *((_DWORD *)v49 + 2);
      *(_QWORD *)(v48 + 12) = *(_QWORD *)(v49 + 12);
      *(_DWORD *)(v48 + 20) = *((_DWORD *)v49 + 5);
      v50 = (void *)(v48 + 40);
      *(_QWORD *)(v48 + 24) = v48 + 40;
      v7 = *((_QWORD *)v49 + 3);
      v51 = *((__int64 **)v49 + 4);
      if ( (__int64 *)((char *)v51 + v7) && !v7 )
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      if ( (unsigned __int64)v51 > 0xF )
      {
        if ( (__int64)v51 < 0 )
          std::__throw_length_error("basic_string::_M_create");
        v85 = (__int64)v42;
        v84 = (__int64 *)v49;
        v83 = v7;
        v82 = v43;
        v81 = v51;
        v50 = (void *)operator new((unsigned __int64)v51 + 1);
        v51 = v81;
        v43 = v82;
        v7 = v83;
        v49 = (char *)v84;
        *(_QWORD *)(v48 + 24) = v50;
        *(_QWORD *)(v48 + 40) = v81;
        v42 = (__int64 *)v85;
      }
      else
      {
        if ( v51 == (__int64 *)((char *)&dword_0 + 1) )
        {
          *(_BYTE *)(v48 + 40) = *(_BYTE *)v7;
          goto LABEL_44;
        }
        if ( !v51 )
        {
LABEL_44:
          *(_QWORD *)(v48 + 32) = v51;
          *((_BYTE *)v51 + (_QWORD)v50) = 0;
          v52 = (__int64 *)v111;
          *(_BYTE *)(v48 + 56) = v49[56];
          ++*((_DWORD *)v43 + 134);
          if ( v52 != v42 + 5 )
            operator delete(v52);
          goto LABEL_46;
        }
      }
      v84 = v42;
      v83 = (__int64)v49;
      v82 = v43;
      v81 = v51;
      memcpy(v50, (const void *)v7, (size_t)v51);
      v50 = *(void **)(v48 + 24);
      v42 = v84;
      v49 = (char *)v83;
      v43 = v82;
      v51 = v81;
      goto LABEL_44;
    }
    if ( *(_WORD *)(*(_QWORD *)(v24 + 2904) + 24 * v25 + 16) == HIWORD(v98) )
      goto LABEL_35;
LABEL_20:
    sub_15688B0(v77);
    if ( v18[2].m128i_i16[0] != 66 )
      goto LABEL_21;
LABEL_33:
    v37 = (__int64 *)v18->m128i_i64[1];
    v7 = (__int64)v79;
    v18[2].m128i_i32[2] = v18[1].m128i_i32[0];
    sub_14634E0(v37, v79->m128i_i32);
LABEL_21:
    if ( ptr != v16 )
      free(ptr);
    v8 = v96;
    v26 = v18[2].m128i_i16[0] == 5;
    v95->m128i_i8[0] = v96;
    if ( !v26 )
      break;
    v13 = *(_QWORD *)(v18[1].m128i_i64[1] + 16);
    if ( *(_DWORD *)v13 != 7 )
      break;
    v17 = v19;
  }
  v4 = v18;
LABEL_10:
  if ( !(_BYTE)v19 )
    goto LABEL_4;
  v12 = v19;
  sub_14808E0((__int64)v78, (__int64 *)v7, v8, v9, v10, v11);
LABEL_6:
  v87->m128i_i8[0] = v88;
  return v12;
}
