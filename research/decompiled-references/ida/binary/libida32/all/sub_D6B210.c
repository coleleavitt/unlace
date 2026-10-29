__int64 __fastcall sub_D6B210(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // edx
  __int64 v11; // rsi
  __int64 v12; // rbp
  __int64 v13; // r14
  __int64 v14; // rsi
  unsigned int v15; // r13d
  unsigned int *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // r14
  unsigned __int8 **v22; // rax
  unsigned __int8 **v23; // rbx
  bool v24; // si
  __int64 v26; // rax
  unsigned int *v27; // rdi
  __int64 v28; // rax
  _BYTE *v29; // rdi
  size_t v30; // r9
  unsigned __int64 v31; // rax
  unsigned __int8 **v32; // rax
  unsigned __int8 **v33; // rbx
  __int64 v34; // r14
  void *v35; // rax
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // r14
  unsigned __int8 **v38; // rax
  unsigned __int8 **v39; // rbx
  void *v40; // rax
  int v41; // edx
  _BYTE *v42; // rdi
  unsigned __int64 v43; // r14
  void *v44; // r8
  unsigned int v45; // eax
  __int64 v46; // rax
  unsigned __int8 **v47; // rax
  unsigned __int8 **v48; // rbx
  unsigned __int8 **v49; // rax
  unsigned __int8 **v50; // rbx
  char v51; // al
  unsigned __int64 *v52; // rdi
  unsigned __int8 **v53; // rax
  unsigned __int8 **v54; // rbx
  unsigned int v55; // ecx
  __int64 v56; // r15
  __int64 v57; // rax
  __int64 v58; // rax
  void *v59; // rcx
  unsigned int v60; // edx
  unsigned int v61; // eax
  unsigned __int8 **v62; // rax
  bool v64; // [rsp+8h] [rbp-190h]
  unsigned int v65; // [rsp+8h] [rbp-190h]
  __int64 v66; // [rsp+8h] [rbp-190h]
  int v67; // [rsp+8h] [rbp-190h]
  __int64 v68; // [rsp+10h] [rbp-188h]
  size_t v69; // [rsp+10h] [rbp-188h]
  size_t v70; // [rsp+10h] [rbp-188h]
  unsigned __int8 v71; // [rsp+18h] [rbp-180h]
  unsigned int v72; // [rsp+18h] [rbp-180h]
  int v73; // [rsp+18h] [rbp-180h]
  unsigned int v74; // [rsp+20h] [rbp-178h]
  unsigned __int64 v75; // [rsp+20h] [rbp-178h]
  int v76; // [rsp+20h] [rbp-178h]
  __int64 v77; // [rsp+28h] [rbp-170h]
  int v78; // [rsp+28h] [rbp-170h]
  __int64 v79; // [rsp+30h] [rbp-168h]
  unsigned int v80; // [rsp+38h] [rbp-160h]
  unsigned __int64 v81; // [rsp+40h] [rbp-158h] BYREF
  __int64 v82; // [rsp+48h] [rbp-150h] BYREF
  void *v83; // [rsp+50h] [rbp-148h] BYREF
  unsigned int v84; // [rsp+58h] [rbp-140h]
  unsigned int v85[6]; // [rsp+60h] [rbp-138h] BYREF
  int v86; // [rsp+78h] [rbp-120h]
  __int64 v87; // [rsp+80h] [rbp-118h]
  __int64 v88; // [rsp+88h] [rbp-110h]
  unsigned int v89[6]; // [rsp+90h] [rbp-108h] BYREF
  int v90; // [rsp+A8h] [rbp-F0h]
  __int64 v91; // [rsp+B0h] [rbp-E8h]
  __int64 v92; // [rsp+B8h] [rbp-E0h]
  void *v93; // [rsp+C0h] [rbp-D8h] BYREF
  unsigned int v94; // [rsp+C8h] [rbp-D0h]
  int v95; // [rsp+D8h] [rbp-C0h]
  __int64 v96; // [rsp+E0h] [rbp-B8h]
  unsigned int v97; // [rsp+E8h] [rbp-B0h]
  void *v98; // [rsp+F0h] [rbp-A8h] BYREF
  size_t v99; // [rsp+F8h] [rbp-A0h]
  unsigned __int64 v100; // [rsp+100h] [rbp-98h] BYREF
  int v101; // [rsp+108h] [rbp-90h]
  __int64 v102; // [rsp+110h] [rbp-88h]
  unsigned int v103; // [rsp+118h] [rbp-80h]
  void *src; // [rsp+120h] [rbp-78h] BYREF
  size_t n[2]; // [rsp+128h] [rbp-70h] BYREF
  _BYTE v106[96]; // [rsp+138h] [rbp-60h] BYREF

  v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
  v10 = 13;
  v68 = v7;
  v11 = *(_QWORD *)(a3 + 8 * (((*(_BYTE *)(a3 + 2) & 8) != 0) + 1LL) + 48);
  if ( (*(_BYTE *)(v11 + 1) & 6) == 0 )
    v10 = sub_D66A20(*(_QWORD *)(a1 + 184), v11, 13, v8, v9);
  sub_D67460((__int64)&v83, *(_QWORD *)(a1 + 176), v10);
  v12 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v12, 48);
  sub_DFF520(v85);
  sub_DFDA50(v12, 48);
  v13 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v13, 48);
  sub_DFF520(v89);
  v14 = 48;
  sub_DFDA50(v13, 48);
  if ( ((a4 - 946) & 0xFFFFFFFD) == 0 )
  {
    v14 = a2;
    sub_D66F80(a1, a2, a4);
  }
  v64 = 1;
  LOBYTE(v14) = a4 - 1480 <= 1;
  v71 = v14 | (a4 - 947 <= 1);
  if ( ((a4 - 1479) & 0xFFFFFFFD) != 0 )
    v64 = ((a4 - 1478) & 0xFFFFFFFD) == 0;
  v15 = v84;
  if ( v84 <= 0x40 )
  {
    LOBYTE(v15) = v83 == nullptr;
    if ( v83 )
      goto LABEL_9;
LABEL_58:
    v26 = sub_DFD980(*(_QWORD *)(a1 + 176), 48);
    sub_DFF4A0(v26, v89);
    goto LABEL_53;
  }
  LOBYTE(v15) = v15 == (unsigned int)sub_21E2A40(&v83);
  if ( (_BYTE)v15 )
    goto LABEL_58;
LABEL_9:
  if ( !v86 || v86 == 2 )
  {
    v17 = v87;
    if ( !v87 )
      goto LABEL_42;
  }
  else if ( v86 != 3 && !(*(_QWORD *)v85 | v88) )
  {
    v16 = v85;
    goto LABEL_44;
  }
  if ( !v90 || v90 == 2 )
  {
    LOBYTE(v14) = v91 == 0;
    if ( !v91 )
    {
LABEL_35:
      if ( v86 && v86 != 2 )
      {
        v16 = v89;
        if ( v86 != 3 )
        {
          v16 = v85;
          if ( v88 | *(_QWORD *)v85 )
            v16 = v89;
        }
        goto LABEL_44;
      }
      v17 = v87;
LABEL_42:
      v16 = v85;
      if ( v17 )
        v16 = v89;
LABEL_44:
      sub_DFF4A0(&src, v16);
      v93 = (void *)sub_DFB160(*(_QWORD *)(a1 + 400), a2);
      v22 = (unsigned __int8 **)sub_E0FE60(a1, &v93, 2437, 0);
      v23 = v22;
      if ( v22 )
      {
        sub_AC60B0(v22, v71, 2u);
        sub_AC60B0(v23, v64, 2u);
      }
      if ( !v86 || v86 == 2 )
      {
        v24 = v87 != 0;
      }
      else
      {
        v24 = 1;
        if ( v86 != 3 )
        {
          v24 = (*(_QWORD *)v85 | v88) != 0;
          if ( !v23 )
            goto LABEL_62;
          goto LABEL_49;
        }
      }
      if ( !v23 )
      {
LABEL_62:
        sub_E052E0(&v98, &src, v68);
        goto LABEL_50;
      }
LABEL_49:
      sub_AC60B0(v23, v24, 2u);
      sub_E052E0(&v98, &src, v68);
      sub_AC84E0(v23, v98, v99);
LABEL_50:
      if ( v98 != &v100 )
        operator delete(v98);
      sub_DFF560(&src);
      goto LABEL_53;
    }
    if ( v86 == 1 )
      goto LABEL_65;
    if ( !v90 && *(_BYTE *)(*(_QWORD *)(v91 + 32) + 61LL) )
      goto LABEL_53;
  }
  else
  {
    if ( v90 != 3 && !(*(_QWORD *)v89 | v92) )
      goto LABEL_35;
    if ( v86 == 1 || v90 == 1 )
    {
LABEL_65:
      v98 = &v100;
      sub_D66B30(&v98, "(void *)", (__int64)"");
      v27 = v85;
      if ( v86 != 1 )
        v27 = v89;
      v28 = sub_CDA6B0((__int64)v27);
      sub_D67330(
        (__int64 *)&src,
        (__int64 (__fastcall *)(_BYTE *, __int64, __int64, __va_list_tag *))&vsnprintf,
        32,
        (__int64)"%lu",
        v28);
      v29 = v98;
      v30 = n[0] + v99;
      if ( v98 == &v100 )
        v31 = 15;
      else
        v31 = v100;
      if ( v30 > v31 )
      {
        v70 = n[0] + v99;
        sub_974DF0((__int64)&v98, v99, 0, src, n[0]);
        v29 = v98;
        v30 = v70;
      }
      else if ( n[0] )
      {
        v42 = (char *)v98 + v99;
        if ( n[0] == 1 )
        {
          *v42 = *(_BYTE *)src;
          v29 = v98;
        }
        else
        {
          v69 = n[0] + v99;
          memcpy(v42, src, n[0]);
          v29 = v98;
          v30 = v69;
        }
      }
      v99 = v30;
      v29[v30] = 0;
      if ( src != &n[1] )
        operator delete(src);
      src = (void *)sub_DFB160(*(_QWORD *)(a1 + 400), a2);
      v32 = (unsigned __int8 **)sub_E0FE60(a1, &src, 2437, 0);
      v33 = v32;
      if ( v32 )
      {
        sub_AC60B0(v32, v71, 2u);
        sub_AC60B0(v33, v64, 2u);
        sub_AC60B0(v33, v90 == 1, 2u);
        sub_AC84E0(v33, v98, v99);
      }
      if ( v98 != &v100 )
        operator delete(v98);
      goto LABEL_53;
    }
  }
  if ( !v86 && v87 && *(_BYTE *)(*(_QWORD *)(v87 + 32) + 61LL) )
    goto LABEL_53;
  v81 = sub_D66E00((__int64)v89, v14);
  v18 = sub_CDA220((__int64)v89);
  v77 = 1;
  if ( *(_BYTE *)(v18 + 60) )
  {
    if ( v90 || (v77 = 0, *(_DWORD *)(v18 + 20) != -1) )
    {
      v34 = (unsigned int)sub_CDA8B0((__int64)v89);
      v77 = v34 - sub_CDA8F0(v89);
    }
  }
  v74 = sub_A8AC40(v68, v81);
  if ( v64 )
  {
    v40 = (void *)sub_A8AC40(v68, *(_QWORD *)(v68 + 18656));
    v41 = v84;
    LODWORD(v99) = v84;
    if ( v84 > 0x40 )
    {
      sub_21E1730(&v98, v40, 0);
      v41 = v99;
      v40 = v98;
    }
    else
    {
      v98 = v40;
    }
    LODWORD(n[0]) = v41;
    src = v40;
    LODWORD(v99) = 0;
    BYTE4(n[0]) = 1;
    sub_21E60A0(&v83, &src);
    if ( LODWORD(n[0]) > 0x40 && src )
      operator delete[](src);
    if ( (unsigned int)v99 > 0x40 && v98 )
      operator delete[](v98);
  }
  v79 = v74;
  v19 = sub_21E42E0(&v83, v74);
  if ( v19 )
  {
    v98 = (void *)sub_DFB160(*(_QWORD *)(a1 + 400), a2);
    v35 = (void *)sub_E0FE60(a1, &v98, 2440, 0);
    src = v35;
    if ( v35 )
    {
      sub_AC60B0((unsigned __int8 **)v35, v71, 2u);
      if ( src )
      {
        sub_AC60B0((unsigned __int8 **)src, v64, 2u);
        if ( src )
        {
          sub_AC60B0((unsigned __int8 **)src, 0, 2u);
          if ( src )
          {
            sub_AC60B0((unsigned __int8 **)src, v81, 8u);
            if ( src )
            {
              sub_D67140((unsigned __int8 ***)&src, (__int64)&v83);
              if ( src )
                sub_AC60B0((unsigned __int8 **)src, v74, 3u);
            }
          }
        }
      }
    }
  }
  else
  {
    v75 = sub_D66E00((__int64)v85, v74);
    v20 = sub_CDA220((__int64)v85);
    if ( *(_BYTE *)(v20 + 60) )
    {
      if ( v86 || *(_DWORD *)(v20 + 20) != -1 )
      {
        v21 = (unsigned int)sub_CDA8B0((__int64)v85);
        v19 = v21 - sub_CDA8F0(v85);
      }
    }
    else
    {
      v19 = 1;
    }
    v80 = sub_A8AC40(v68, v75);
    if ( *(_QWORD *)(*(_QWORD *)&byte_8[v81 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) == *(_QWORD *)(*(_QWORD *)&byte_8[v75 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) )
    {
      if ( (unsigned __int8)sub_F3E930(*(_QWORD *)(v81 & 0xFFFFFFFFFFFFFFF0LL), 0)
        || (v36 = sub_CDA510((__int64)v89, 0), (unsigned __int8)sub_F3E930(*(_QWORD *)(v36 & 0xFFFFFFFFFFFFFFF0LL), 0)) )
      {
        if ( (unsigned __int8)sub_F3E930(*(_QWORD *)(v81 & 0xFFFFFFFFFFFFFFF0LL), 0) )
          v37 = v81;
        else
          v37 = sub_CDA510((__int64)v89, 0);
        src = (void *)sub_DFB160(*(_QWORD *)(a1 + 400), a2);
        v38 = (unsigned __int8 **)sub_E0FE60(a1, &src, 2435, 0);
        v39 = v38;
        if ( v38 )
        {
          sub_AC60B0(v38, v71, 2u);
          sub_AC60B0(v39, v37, 8u);
        }
        goto LABEL_53;
      }
      if ( !(unsigned __int8)sub_F3ED30(&v81, v68) )
      {
        src = (void *)sub_DFB160(*(_QWORD *)(a1 + 400), a2);
        v53 = (unsigned __int8 **)sub_E0FE60(a1, &src, 2436, 0);
        v54 = v53;
        if ( v53 )
        {
          sub_AC60B0(v53, v71, 2u);
          sub_AC60B0(v54, v81, 8u);
        }
        goto LABEL_128;
      }
      v43 = v80 * v19;
      if ( !sub_9C8900((__int64)&v83, v79 * v77) && !sub_9C8900((__int64)&v83, v43) )
      {
        if ( v71 || !(unsigned __int8)sub_E00610(v85, v89) )
          goto LABEL_107;
        sub_DFF4A0(&v93, v85);
        if ( !v95 && v96 && *(_DWORD *)(*(_QWORD *)(v96 + 32) + 24LL) != v97 && v97 )
        {
          v55 = v97;
          v56 = v96;
          do
          {
            v65 = v55;
            v57 = *(_QWORD *)sub_CDA220((__int64)&v93);
            if ( (v57 & 2) != 0 )
              break;
            if ( (v57 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
              break;
            if ( (*(_BYTE *)(v56 + v65 + 28) & 4) == 0 )
              break;
            sub_D672F0((__int64)&src, (__int64)&v93);
            sub_DFF6C0(&v93, &src);
            sub_DFF560(&src);
            if ( v95 )
              break;
            v56 = v96;
            if ( !v96 )
              break;
            v55 = v97;
            if ( *(_DWORD *)(*(_QWORD *)(v96 + 32) + 24LL) == v97 )
              break;
          }
          while ( v97 );
        }
        sub_DFF4A0(&v98, v89);
        while ( !v101 )
        {
          if ( !v102 )
            break;
          if ( *(_DWORD *)(*(_QWORD *)(v102 + 32) + 24LL) == v103 )
            break;
          if ( !v103 )
            break;
          v72 = v103;
          v66 = v102;
          v58 = *(_QWORD *)sub_CDA220((__int64)&v98);
          if ( (v58 & 2) != 0 )
            break;
          if ( (v58 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
            break;
          if ( (*(_BYTE *)(v66 + v72 + 28) & 4) == 0 )
            break;
          sub_D672F0((__int64)&src, (__int64)&v98);
          sub_DFF6C0(&v98, &src);
          sub_DFF560(&src);
        }
        sub_CDA420((__int64)&src, (__int64)&v93);
        v67 = sub_CDA8F0((unsigned int *)&src);
        v73 = sub_CDA650((__int64)&v93);
        sub_DFF560(&src);
        sub_CDA420((__int64)&src, (__int64)&v98);
        v76 = sub_CDA8F0((unsigned int *)&src);
        v78 = sub_CDA650((__int64)&v98);
        sub_DFF560(&src);
        if ( v84 <= 0x40 )
          LODWORD(v59) = (_DWORD)v83;
        else
          v59 = *(void **)v83;
        v60 = v73 * v67;
        v61 = v78 * v76;
        if ( v73 * v67 <= (unsigned int)(v78 * v76) )
        {
          if ( v61 < v60 + (unsigned int)v59 )
          {
LABEL_162:
            src = (void *)sub_DFB160(*(_QWORD *)(a1 + 400), a2);
            v62 = (unsigned __int8 **)sub_E0FE60(a1, &src, 2438, 0);
            if ( v62 )
              sub_AC60B0(v62, 0, 2u);
            sub_DFF560(&v98);
            sub_DFF560(&v93);
LABEL_128:
            v15 = 0;
            goto LABEL_53;
          }
          if ( v60 != v61 )
          {
LABEL_159:
            sub_DFF560(&v98);
            sub_DFF560(&v93);
LABEL_107:
            v44 = v83;
            if ( v84 > 0x40 )
              v44 = *(void **)v83;
            v45 = sub_D80550(a1, a2, v85, v89, 8LL * (_QWORD)v44);
            if ( (_BYTE)v45 )
            {
              v15 = v45;
              v46 = sub_DFD980(*(_QWORD *)(a1 + 176), 48);
              sub_DFF4A0(v46, v89);
            }
            goto LABEL_53;
          }
        }
        if ( v60 >= (unsigned int)v59 + v61 )
          goto LABEL_159;
        goto LABEL_162;
      }
      sub_21E3D10(&v93, &v83, v79);
      v82 = sub_DFB160(*(_QWORD *)(a1 + 400), a2);
      v49 = (unsigned __int8 **)sub_E0FE60(a1, &v82, 2440, 0);
      v50 = v49;
      if ( v49 )
      {
        sub_AC60B0(v49, v71, 2u);
        sub_AC60B0(v50, v64, 2u);
        v51 = sub_9C8900((__int64)&v83, v43);
        sub_AC60B0(v50, (v51 == 0) + 1LL, 2u);
        sub_AC60B0(v50, v81, 8u);
        src = v106;
        *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_2384CB0);
        sub_21E7D50((unsigned int)&v93, (unsigned int)&src, 10, 0, 0, 1, 0);
        v98 = &v100;
        sub_D66B30(&v98, src, (__int64)src + n[0]);
        if ( src != v106 )
          free(src);
        sub_AC84E0(v50, v98, v99);
      }
      else
      {
        src = v106;
        *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_2384CB0);
        sub_21E7D50((unsigned int)&v93, (unsigned int)&src, 10, 0, 0, 1, 0);
        v98 = &v100;
        sub_D66B30(&v98, src, (__int64)src + n[0]);
        if ( src != v106 )
        {
          free(src);
          v52 = (unsigned __int64 *)v98;
          goto LABEL_123;
        }
      }
      v52 = (unsigned __int64 *)v98;
LABEL_123:
      if ( v52 != &v100 )
        operator delete(v52);
      if ( v94 > 0x40 && v93 )
        operator delete[](v93);
      goto LABEL_128;
    }
    src = (void *)sub_DFB160(*(_QWORD *)(a1 + 400), a2);
    v47 = (unsigned __int8 **)sub_E0FE60(a1, &src, 2439, 0);
    v48 = v47;
    if ( v47 )
    {
      sub_AC60B0(v47, v71, 2u);
      sub_AC60B0(v48, v75, 8u);
      sub_AC60B0(v48, v81, 8u);
    }
  }
LABEL_53:
  sub_DFF560(v89);
  sub_DFF560(v85);
  if ( v84 > 0x40 && v83 )
    operator delete[](v83);
  return v15;
}

