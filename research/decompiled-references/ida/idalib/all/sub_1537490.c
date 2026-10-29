__int64 __fastcall sub_1537490(
        const __m128i *a1,
        _DWORD *a2,
        __m128i *a3,
        int a4,
        int a5,
        _DWORD *a6,
        __m128i a7,
        __m128 a8,
        _DWORD *a9)
{
  bool v13; // zf
  __int8 v14; // al
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned int v17; // edx
  __int32 v18; // ebp
  __int64 v19; // rax
  unsigned __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r9
  __int64 v25; // r8
  __int64 *v27; // rdx
  int v28; // edx
  __int32 v29; // eax
  __int64 *v30; // r9
  __int64 v31; // rbp
  __int64 *v32; // r14
  char *v33; // r15
  unsigned __int64 v34; // rdx
  __int64 *v35; // rbp
  void *v36; // rax
  _BYTE *v37; // rsi
  signed __int64 v38; // r14
  _BYTE *v39; // rdi
  void **v40; // r15
  _QWORD *v41; // rax
  void **v42; // r14
  void **v43; // rbp
  void **v44; // rdi
  void **v45; // rdi
  void **v46; // r14
  void **v47; // rbp
  unsigned __int16 v48; // cx
  __int64 *v49; // rdi
  __int64 v50; // rcx
  unsigned __int32 v51; // edx
  _WORD *v52; // rax
  _QWORD *v53; // rdx
  int v54; // eax
  __int64 v55; // rax
  __int64 *v56; // rax
  __int64 *v57; // r15
  __int64 v58; // rbp
  int v59; // r14d
  __int64 *v60; // rax
  __int64 *v61; // rdi
  __int64 v62; // rbp
  __int64 v63; // rdi
  __int64 v64; // rax
  __int64 v65; // r9
  unsigned __int32 *v66; // rax
  __int64 v67; // rax
  __m128i si128; // xmm2
  __int8 v69; // al
  __int64 v70; // rbp
  int v71; // r14d
  __int64 *v72; // rdi
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rsi
  __int64 v76; // rbp
  __int64 *v77; // r15
  __int64 *v78; // rdi
  __int64 v79; // [rsp-10h] [rbp-158h]
  __int64 v80; // [rsp-8h] [rbp-150h]
  _BYTE *v81; // [rsp+0h] [rbp-148h]
  _DWORD *v82; // [rsp+8h] [rbp-140h]
  __int64 *v83; // [rsp+10h] [rbp-138h]
  void *src; // [rsp+18h] [rbp-130h]
  __int64 *v85; // [rsp+20h] [rbp-128h]
  __int64 *v86; // [rsp+28h] [rbp-120h]
  unsigned __int32 v87; // [rsp+34h] [rbp-114h] BYREF
  __int64 v88; // [rsp+38h] [rbp-110h] BYREF
  __m128i *v89; // [rsp+40h] [rbp-108h] BYREF
  __int8 v90; // [rsp+48h] [rbp-100h]
  const __m128i *v91; // [rsp+50h] [rbp-F8h]
  int v92; // [rsp+58h] [rbp-F0h]
  __int16 v93; // [rsp+5Ch] [rbp-ECh]
  __int64 (__fastcall *v94)(__int64); // [rsp+60h] [rbp-E8h]
  __int64 v95; // [rsp+68h] [rbp-E0h]
  __int64 v96; // [rsp+70h] [rbp-D8h]
  _DWORD v97[2]; // [rsp+80h] [rbp-C8h] BYREF
  char v98; // [rsp+88h] [rbp-C0h]
  __int64 v99; // [rsp+8Ch] [rbp-BCh]
  char v100; // [rsp+94h] [rbp-B4h]
  void *v101; // [rsp+98h] [rbp-B0h]
  __int64 v102; // [rsp+A0h] [rbp-A8h]
  _BYTE v103[24]; // [rsp+A8h] [rbp-A0h] BYREF
  void *v104[2]; // [rsp+C0h] [rbp-88h] BYREF
  __int64 v105; // [rsp+D0h] [rbp-78h]
  void *v106; // [rsp+E0h] [rbp-68h]
  __int64 v107; // [rsp+F0h] [rbp-58h] BYREF
  __int16 v108; // [rsp+100h] [rbp-48h]

  v13 = a1[2].m128i_i16[0] == 22;
  v89 = (__m128i *)&a1[122];
  v14 = a1[122].m128i_i8[0];
  LODWORD(v81) = a4;
  v90 = v14;
  v94 = sub_146A990;
  v15 = a1->m128i_i64[1];
  a1[122].m128i_i8[0] = 1;
  v91 = a1;
  v92 = 1507350;
  v93 = 63;
  v95 = 0;
  v96 = 0;
  if ( v13 )
  {
    v16 = *(_QWORD *)(v15 + 56);
    v17 = a1[5].m128i_u16[4];
    v82 = a2;
    if ( v17 >= *(_DWORD *)(v16 + 144) )
    {
      sub_1568800(&v89);
      v15 = a1->m128i_i64[1];
      a2 = v82;
    }
    else
    {
      a2 = v82;
      LODWORD(v96) = sub_146A990((__int64)a1);
      v15 = a1->m128i_i64[1];
    }
  }
  v18 = a1[1].m128i_i32[0];
  v19 = *(_QWORD *)(v15 + 56);
  v87 = v18;
  if ( (*(_BYTE *)(v19 + 1) & 8) != 0 )
  {
    v27 = (__int64 *)a2;
    v20 = (unsigned __int64)a1;
    sub_14CC110((__int64)v104, (__int64)a1, v27, (unsigned int)v81, a5, 0, a7, a8, 0, 0);
    *a3 = _mm_load_si128((const __m128i *)v104);
    goto LABEL_11;
  }
  v20 = 0;
  v21 = sub_14BFC10(a1, 0, a7);
  if ( v21 != 1 )
  {
    v20 = a1[6].m128i_u64[0];
    sub_1917B40((unsigned int)v104, v20, *(_QWORD *)(v20 + 608), (_DWORD)v81, v21 & 0xFFFFFFFE, a5, 0);
    *a3 = _mm_load_si128((const __m128i *)v104);
LABEL_11:
    a3[1].m128i_i16[0] = v105;
    a3[1].m128i_i8[2] = BYTE2(v105);
    v25 = a3[1].m128i_u8[0];
    if ( !(_BYTE)v25 )
      goto LABEL_12;
    goto LABEL_7;
  }
  a3[1].m128i_i8[0] = 1;
  v25 = a3[1].m128i_u8[0];
  a3->m128i_i64[0] = 0;
  a3->m128i_i64[1] = 1;
  a3[1].m128i_i8[2] = 0;
  if ( !(_BYTE)v25 )
    goto LABEL_12;
LABEL_7:
  if ( a1[2].m128i_i16[0] == 23 )
  {
LABEL_78:
    v63 = a1[6].m128i_i64[0];
    v64 = *(_QWORD *)(v63 + 248);
    if ( a5 == 2 )
      v65 = *(_QWORD *)(v64 + 18720);
    else
      v65 = *(_QWORD *)(v64 + 18640);
    v66 = &a1[2].m128i_u32[2];
    if ( v18 == a1[1].m128i_i32[0] )
      v66 = &v87;
    v20 = v87;
    v67 = sub_18C4330(v63, v87, *v66, 0, 0, v65);
    if ( v67 != 1 )
    {
      v20 = a1[6].m128i_u64[0];
      sub_1917B40((unsigned int)v104, v20, *(_QWORD *)(v20 + 608), (_DWORD)v81, v67 & 0xFFFFFFFE, a5, 0);
      si128 = _mm_load_si128((const __m128i *)v104);
      a3[1].m128i_i16[0] = v105;
      v69 = BYTE2(v105);
      *a3 = si128;
      a3[1].m128i_i8[2] = v69;
      v22 = v79;
      v23 = v80;
    }
    goto LABEL_12;
  }
  LOWORD(v104[0]) = 63;
  v20 = (unsigned __int64)v104;
  LOBYTE(v82) = v25;
  sub_15680D0(a1, v104, 1, 0);
  v25 = (unsigned __int8)v82;
  if ( a1[2].m128i_i16[0] == 23 )
  {
    if ( a3[1].m128i_i8[0] )
      goto LABEL_78;
LABEL_12:
    sub_14808E0((__int64)&v89, (__int64 *)v20, v22, v23, v25, v24);
    v28 = HIDWORD(v96);
    v13 = a1[2].m128i_i16[0] == 23;
    *a6 = v96;
    *a9 = v28;
    if ( !v13 )
    {
LABEL_46:
      LODWORD(v25) = 0;
      goto LABEL_9;
    }
    v82 = v97;
    v81 = v103;
    v85 = &v88;
    while ( 1 )
    {
      sub_1564840(v104, a1, &a1[1], 1669);
      v29 = a1[1].m128i_i32[0];
      v99 = 0;
      v100 = 0;
      v101 = v81;
      v102 = 0;
      v103[0] = 0;
      v103[16] = 0;
      v97[0] = v29;
      v97[1] = v29;
      v98 = 1;
      if ( !v29 )
        goto LABEL_24;
      v30 = (__int64 *)v104[0];
      if ( v104[0] )
        break;
      v53 = v104[1];
      v54 = *((_DWORD *)v104[1] + 3744);
      if ( v54 )
      {
        v74 = (unsigned int)(v54 - 1);
        *((_DWORD *)v104[1] + 3744) = v74;
        v30 = (__int64 *)v53[v74 + 1856];
        v75 = *((unsigned int *)v30 + 134);
        *(_BYTE *)v30 = 0;
        v76 = v30[66];
        *((_DWORD *)v30 + 106) = 0;
        v75 <<= 6;
        v32 = (__int64 *)(v76 + v75);
        if ( v76 != v76 + v75 )
        {
          v77 = v30;
          do
          {
            while ( 1 )
            {
              v32 -= 8;
              v78 = (__int64 *)v32[3];
              if ( v78 == v32 + 5 )
                break;
              operator delete(v78);
              if ( (__int64 *)v76 == v32 )
                goto LABEL_91;
            }
          }
          while ( (__int64 *)v76 != v32 );
LABEL_91:
          v32 = (__int64 *)v77[66];
          v30 = v77;
        }
        *((_DWORD *)v30 + 134) = 0;
        v55 = *((unsigned int *)v30 + 135);
      }
      else
      {
        v30 = (__int64 *)operator new(0x3A0u);
        *(_BYTE *)v30 = 0;
        v30[12] = (__int64)(v30 + 14);
        v32 = v30 + 68;
        v30[16] = (__int64)(v30 + 18);
        v30[20] = (__int64)(v30 + 22);
        v30[24] = (__int64)(v30 + 26);
        v30[28] = (__int64)(v30 + 30);
        v30[32] = (__int64)(v30 + 34);
        v30[36] = (__int64)(v30 + 38);
        v30[40] = (__int64)(v30 + 42);
        v30[44] = (__int64)(v30 + 46);
        v30[48] = (__int64)(v30 + 50);
        v30[52] = (__int64)(v30 + 54);
        v30[13] = 0;
        *((_BYTE *)v30 + 112) = 0;
        v30[17] = 0;
        *((_BYTE *)v30 + 144) = 0;
        v30[21] = 0;
        *((_BYTE *)v30 + 176) = 0;
        v30[25] = 0;
        *((_BYTE *)v30 + 208) = 0;
        v30[29] = 0;
        *((_BYTE *)v30 + 240) = 0;
        v30[33] = 0;
        *((_BYTE *)v30 + 272) = 0;
        v30[37] = 0;
        *((_BYTE *)v30 + 304) = 0;
        v30[41] = 0;
        *((_BYTE *)v30 + 336) = 0;
        v30[45] = 0;
        *((_BYTE *)v30 + 368) = 0;
        v30[49] = 0;
        *((_BYTE *)v30 + 400) = 0;
        v30[53] = 0x800000000LL;
        v30[66] = (__int64)(v30 + 68);
        v30[67] = 0x600000000LL;
        v55 = 6;
      }
      v34 = 1;
      v104[0] = v30;
      v35 = v32;
      v33 = (char *)v82;
      if ( !v55 )
        goto LABEL_72;
LABEL_17:
      *v35 = *(_QWORD *)v33;
      *((_DWORD *)v35 + 2) = *((_DWORD *)v33 + 2);
      *(__int64 *)((char *)v35 + 12) = *(_QWORD *)(v33 + 12);
      *((_DWORD *)v35 + 5) = *((_DWORD *)v33 + 5);
      v36 = v35 + 5;
      v35[3] = (__int64)(v35 + 5);
      v37 = *((_BYTE **)v33 + 3);
      v38 = *((_QWORD *)v33 + 4);
      if ( &v37[v38] && !v37 )
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      if ( (unsigned __int64)v38 > 0xF )
      {
        if ( v38 < 0 )
          std::__throw_length_error("basic_string::_M_create");
        src = *((void **)v33 + 3);
        v83 = v30;
        v36 = (void *)operator new(v38 + 1);
        v35[5] = v38;
        v30 = v83;
        v35[3] = (__int64)v36;
        v37 = src;
LABEL_68:
        v83 = v30;
        memcpy(v36, v37, v38);
        v36 = (void *)v35[3];
        v30 = v83;
        goto LABEL_22;
      }
      if ( v38 == 1 )
      {
        *((_BYTE *)v35 + 40) = *v37;
        goto LABEL_22;
      }
      if ( v38 )
        goto LABEL_68;
LABEL_22:
      v35[4] = v38;
      *((_BYTE *)v36 + v38) = 0;
      v39 = v101;
      *((_BYTE *)v35 + 56) = v33[56];
      ++*((_DWORD *)v30 + 134);
      if ( v39 != v81 )
        operator delete(v39);
LABEL_24:
      if ( (_BYTE)v108 )
      {
        sub_FC7790(v105, (__int64 *)v104, SHIBYTE(v108));
        v105 = 0;
        v108 = 0;
      }
      if ( v106 != &v107 )
        operator delete(v106);
      v40 = (void **)v104[0];
      if ( v104[0] )
      {
        v41 = v104[1];
        if ( v104[1] )
        {
          if ( v104[0] < v104[1] || v104[0] > (char *)v104[1] + 14848 )
          {
            v42 = *((void ***)v104[0] + 66);
            v43 = &v42[8 * (unsigned __int64)*((unsigned int *)v104[0] + 134)];
            if ( v42 != v43 )
            {
              do
              {
                while ( 1 )
                {
                  v43 -= 8;
                  v44 = (void **)v43[3];
                  if ( v44 == v43 + 5 )
                    break;
                  operator delete(v44);
                  if ( v42 == v43 )
                    goto LABEL_34;
                }
              }
              while ( v42 != v43 );
LABEL_34:
              v43 = (void **)v40[66];
            }
            if ( v43 != v40 + 68 )
              free(v43);
            v45 = (void **)v40[52];
            v46 = v40 + 52;
            if ( v45 != v40 + 54 )
              free(v45);
            v47 = v40 + 12;
            do
            {
              while ( 1 )
              {
                v46 -= 4;
                if ( *v46 == v46 + 2 )
                  break;
                operator delete(*v46);
                if ( v46 == v47 )
                  goto LABEL_42;
              }
            }
            while ( v46 != v47 );
LABEL_42:
            operator delete(v40, 0x3A0u);
          }
          else
          {
            v50 = *((unsigned int *)v104[1] + 3744);
            *((_DWORD *)v104[1] + 3744) = v50 + 1;
            v41[v50 + 1856] = v40;
          }
        }
      }
      v48 = a1[5].m128i_u16[4];
      if ( a1[2].m128i_i16[0] == 22 )
      {
        a1[5].m128i_i16[4] = v48 + 1;
      }
      else if ( v48 )
      {
        v51 = a1[174].m128i_u32[2];
        if ( !v51 )
        {
LABEL_63:
          a1[5].m128i_i16[4] = v48 - 1;
          goto LABEL_45;
        }
        v52 = (_WORD *)(a1[174].m128i_i64[0] + 24LL * v51 - 24);
        while ( 2 )
        {
          if ( v48 == v52[7] )
          {
            if ( *((_DWORD *)v52 + 4) != *(__int32 *)((char *)&a1[5].m128i_i32[2] + 2) )
            {
LABEL_61:
              if ( a1[5].m128i_i16[5] <= v52[8] && a1[5].m128i_i16[6] <= v52[9] )
                goto LABEL_63;
            }
          }
          else if ( v48 <= v52[7] )
          {
            goto LABEL_61;
          }
          --v51;
          v52 -= 12;
          a1[174].m128i_i32[2] = v51;
          if ( !v51 )
            goto LABEL_63;
          continue;
        }
      }
LABEL_45:
      v49 = (__int64 *)a1->m128i_i64[1];
      a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
      sub_14634E0(v49, a1[1].m128i_i32);
      if ( a1[2].m128i_i16[0] != 23 )
        goto LABEL_46;
    }
    v31 = *((unsigned int *)v104[0] + 134);
    v32 = *((__int64 **)v104[0] + 66);
    v33 = (char *)v82;
    v34 = v31 + 1;
    v35 = &v32[8 * v31];
    if ( v34 <= *((unsigned int *)v104[0] + 135) )
      goto LABEL_17;
LABEL_72:
    v56 = (__int64 *)v33;
    v57 = v30 + 68;
    if ( v32 > v56 || v35 <= v56 )
    {
      src = v30;
      v83 = v30 + 66;
      v70 = sub_2237400(v30 + 66, v30 + 68, v34, 64, v85);
      sub_9EF810(v83, v70);
      v30 = (__int64 *)src;
      v71 = v88;
      v72 = *((__int64 **)src + 66);
      if ( v72 != v57 )
      {
        v83 = (__int64 *)src;
        free(v72);
        v30 = v83;
      }
      v73 = *((unsigned int *)v30 + 134);
      v30[66] = v70;
      *((_DWORD *)v30 + 135) = v71;
      v33 = (char *)v82;
      v35 = (__int64 *)((v73 << 6) + v70);
    }
    else
    {
      v86 = v30;
      v58 = (char *)v56 - (char *)v32;
      src = v30 + 66;
      v83 = (__int64 *)sub_2237400(v30 + 66, v30 + 68, v34, 64, v85);
      sub_9EF810((__int64 *)src, (__int64)v83);
      v30 = v86;
      v59 = v88;
      v60 = v83;
      v61 = (__int64 *)v86[66];
      if ( v61 != v57 )
      {
        src = v83;
        v83 = v86;
        free(v61);
        v30 = v83;
        v60 = (__int64 *)src;
      }
      v33 = (char *)v60 + v58;
      v62 = *((unsigned int *)v30 + 134);
      v30[66] = (__int64)v60;
      *((_DWORD *)v30 + 135) = v59;
      v35 = &v60[8 * v62];
    }
    goto LABEL_17;
  }
LABEL_9:
  v89->m128i_i8[0] = v90;
  return (unsigned int)v25;
}
