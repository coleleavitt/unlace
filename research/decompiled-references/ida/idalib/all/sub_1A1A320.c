void __fastcall sub_1A1A320(
        __int64 a1,
        const __m128i *a2,
        __int64 a3,
        _BYTE *a4,
        __int64 a5,
        unsigned int a6,
        __m128 a7,
        __m128 a8,
        unsigned __int8 a9)
{
  _QWORD *v10; // r13
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rsi
  __int64 *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // r14
  unsigned int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdi
  __int64 v33; // r15
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdi
  __int64 v39; // r15
  unsigned int v40; // ebp
  unsigned __int64 v41; // r14
  __int64 v42; // r13
  __int16 v43; // ax
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  __int64 v46; // r12
  int v47; // eax
  __int64 v48; // rax
  _DWORD *v49; // rax
  int v50; // ecx
  char v51; // al
  __int64 v52; // rsi
  _DWORD *v53; // rax
  char v54; // al
  char v55; // bl
  __m128 v56; // xmm0
  __m128 v57; // xmm1
  __int64 v58; // rbp
  _QWORD *v59; // rdi
  __int64 v60; // rbp
  unsigned int v61; // ebp
  __int64 v62; // rax
  unsigned __int64 v63; // r14
  __int64 v64; // rdx
  char v65; // r12
  unsigned __int64 v66; // r15
  _QWORD *v67; // rax
  _BYTE *v68; // r13
  unsigned __int64 v69; // rbx
  __int64 v70; // rax
  __int64 *v71; // rcx
  __int64 v72; // rdx
  __int16 v73; // ax
  unsigned __int64 v74; // r15
  __int64 v75; // rax
  _QWORD *v76; // rbx
  unsigned int v77; // r14d
  __int64 v78; // rbp
  unsigned __int64 v79; // rdx
  unsigned __int64 v80; // rax
  __int64 v81; // rcx
  __int64 v82; // rax
  __int64 v83; // rax
  unsigned int *v84; // rax
  unsigned int v85; // eax
  unsigned __int8 v86; // cl
  unsigned __int32 v87; // eax
  __int64 v88; // rcx
  unsigned __int8 v89; // al
  unsigned int *v90; // rcx
  __int16 v91; // ax
  unsigned __int32 v92; // eax
  __int64 v93; // rax
  _DWORD *v94; // rax
  char v95; // al
  char v96; // cl
  __int64 v97; // rdx
  int v98; // [rsp-10h] [rbp-E8h]
  __int64 v99; // [rsp-8h] [rbp-E0h]
  __int64 v101; // [rsp+10h] [rbp-C8h]
  __int64 v103; // [rsp+20h] [rbp-B8h]
  unsigned __int64 v104; // [rsp+28h] [rbp-B0h]
  __int64 v105; // [rsp+28h] [rbp-B0h]
  __int64 v106; // [rsp+28h] [rbp-B0h]
  _QWORD *v108; // [rsp+38h] [rbp-A0h]
  __m128i v109; // [rsp+40h] [rbp-98h] BYREF
  __m128i v110; // [rsp+50h] [rbp-88h]
  __m128i si128; // [rsp+60h] [rbp-78h]
  __m128i v112; // [rsp+70h] [rbp-68h] BYREF
  __m128i v113; // [rsp+80h] [rbp-58h] BYREF
  __m128i v114[4]; // [rsp+90h] [rbp-48h] BYREF

  if ( a9 && *(_BYTE *)(a1 + 9) )
    return;
  v10 = (_QWORD *)a3;
  if ( sub_BFAFB0(a3) )
    goto LABEL_41;
  v16 = v10[1];
  v17 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*v17 + 16) == 48 )
  {
    v22 = sub_F60F10(*v17, v16, v12, v13, v14, v15);
    if ( *((_BYTE *)v22 + 73) >> 5 == 2 )
    {
      v18 = v10[7];
      if ( v18 )
      {
        if ( (v18 & 2) != 0 )
        {
          v18 &= 0xFFFFFFFFFFFFFFFCLL;
          if ( v18 )
          {
            sub_1A19CB0((__int64 *)a1, 0, v18, (__int64)a2, (unsigned __int64)v10, a4, a7, a8, a9);
            goto LABEL_41;
          }
        }
      }
    }
    v23 = sub_1A0DD40(v10[1], v16, v18, v19, v20, v21);
    v27 = *((unsigned __int8 *)v22 + 73);
    LOBYTE(v27) = (unsigned __int8)v27 >> 5;
    if ( (_BYTE)v27 != 2 )
      v23 -= (*((_BYTE *)v22 + 74) < 0x80u) - 1;
    if ( !*(_BYTE *)(a1 + 9) )
    {
      v24 = (__int64)(v10[3] - v10[2]) >> 3;
      if ( v23 > (unsigned int)v24 )
      {
        v16 = *(_QWORD *)(*(_QWORD *)a1 + 248LL);
        sub_C0B170(v10, (_QWORD *)v16, v23, v27, v25, v26);
      }
    }
    if ( (*((_BYTE *)v22 + 28) & 0x7Fu) - 59 > 2
      || ((sub_7052B0((__int64 *)(v22[13] + 96LL), v22[13], v24, v27, v25, v26),
           v32 = v22[16],
           (*(_BYTE *)(v32 + 24) & 1) != 0)
        ? (v33 = sub_B96980(v32))
        : (v33 = *(_QWORD *)(v32 + 24)),
          (sub_7052B0((__int64 *)(v22[13] + 96LL), v22[13], v28, v29, v30, v31),
           v16 = v22[13],
           v101 = v33 + 24LL * *(unsigned int *)(v22[16] + 16LL),
           sub_7052B0((__int64 *)(v16 + 96), v16, v34, v35, v36, v37),
           v38 = v22[16],
           (*(_BYTE *)(v38 + 24) & 1) != 0)
        ? (v39 = sub_B96980(v38))
        : (v39 = *(_QWORD *)(v38 + 24)),
          v39 == v101) )
    {
      v40 = 0;
LABEL_69:
      v74 = sub_B7E900((__int64)v22, v16, v24, v27, v25, v26);
      if ( v74 )
      {
        v75 = a1;
        v76 = v22;
        v77 = v40;
        v78 = v75;
LABEL_71:
        while ( 1 )
        {
          if ( (*(_BYTE *)(v74 + 68) & 1) == 0 || *(_QWORD *)(v74 + 40) )
          {
            if ( *(_BYTE *)(v78 + 8) )
              break;
            sub_1A19CB0((__int64 *)v78, v77, v74, (__int64)a2, (unsigned __int64)v10, a4, a7, a8, a9);
            if ( *(_BYTE *)(v78 + 8) )
              break;
            ++v77;
            if ( *((_BYTE *)v76 + 73) >> 5 == 2 )
              break;
          }
          v79 = *(_QWORD *)(v74 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v74 = v79;
          if ( !v79 )
            break;
          if ( (*(_BYTE *)(v79 + 28) & 0x7Fu) - 49 > 2 )
          {
            while ( 1 )
            {
              v80 = *(_QWORD *)(v74 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              v74 = v80;
              if ( !v80 )
                break;
              if ( (*(_BYTE *)(v80 + 28) & 0x7Fu) - 49 <= 2 )
                goto LABEL_71;
            }
            v52 = a5;
            if ( a5 )
              goto LABEL_42;
            return;
          }
        }
      }
LABEL_41:
      v52 = a5;
      if ( a5 )
      {
LABEL_42:
        v53 = *(_DWORD **)(*(_QWORD *)(v52 + 16) + 8LL * a6);
        if ( v53 )
        {
          v54 = (*v53 >> 14) | (*(_DWORD *)v52 >> 14);
          v55 = *(_BYTE *)(v52 + 2);
          *(_BYTE *)(v52 + 1) = ((v54 & 0x1F) << 6) | *(_BYTE *)(v52 + 1) & 0x3F;
          *(_BYTE *)(v52 + 2) = v55 & 0xF8 | ((unsigned __int8)(v54 & 0x1F) >> 2);
        }
      }
      return;
    }
    v40 = 0;
    if ( *(_BYTE *)(a1 + 8) )
      goto LABEL_41;
    v108 = v22;
    v41 = (unsigned __int64)v10;
    v42 = (__int64)a2;
    while ( 1 )
    {
      v112.m128i_i32[0] = 10;
      v112.m128i_i64[1] = v42;
      v113.m128i_i32[2] = 0;
      v114[0].m128i_i64[0] = v39 & 0xFFFFFFFFFFFFFFFBLL;
      v44 = *(_QWORD *)(**(_QWORD **)(v39 + 16) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v44 + 8) & 0xF) != 0 )
        v44 = sub_F64F00(**(_QWORD **)(v39 + 16), v16, v24, v27, v25);
      v24 = *(_QWORD *)(v41 + 16);
      v113.m128i_i64[0] = v44 & 0xFFFFFFFFFFFFFFF0LL;
      if ( v40 < (unsigned int)((*(_QWORD *)(v41 + 24) - v24) >> 3) && (v24 = *(_QWORD *)(v24 + 8LL * v40)) != 0 )
      {
        v43 = *(_WORD *)v24 & 0x1FF;
        if ( v43 == 53 )
        {
          v98 = a9;
LABEL_25:
          v16 = (__int64)&v112;
          sub_1A1A320(a1, (unsigned int)&v112, v24, (_DWORD)a4, v41, v40, v98);
          v25 = v99;
          goto LABEL_26;
        }
        if ( v43 == 67 )
        {
          v24 = *(_QWORD *)(v24 + 24);
          v98 = 1;
          goto LABEL_25;
        }
      }
      else
      {
        if ( a9 )
        {
          v45 = **(_QWORD **)(v39 + 16) & 0xFFFFFFFFFFFFFFF0LL;
          if ( (*(_BYTE *)(*(_QWORD *)v45 + 8LL) & 0xF) != 0 )
            v104 = sub_F64F00(**(_QWORD **)(v39 + 16), v16, v24, v27, v25) & 0xFFFFFFFFFFFFFFF0LL;
          else
            v104 = *(_QWORD *)v45 & 0xFFFFFFFFFFFFFFF0LL;
          v46 = sub_EEE9A0(16, *(_QWORD **)(*(_QWORD *)a1 + 248LL), 8u);
          *(_WORD *)v46 = *(_WORD *)v46 & 0xFE00 | 0x2D;
          if ( unk_2CD7484 )
            sub_EE9B50(45);
          *(_WORD *)(v46 + 1) &= 0xF801u;
          *(_QWORD *)(v46 + 8) = v104;
          v47 = sub_B63070(v46);
          v16 = (unsigned int)(v47 << 6);
          *(_BYTE *)(v46 + 1) = ((_BYTE)v47 << 6) | *(_BYTE *)(v46 + 1) & 0x3F;
          v27 = *(_BYTE *)(v46 + 2) & 0xF8;
          *(_BYTE *)(v46 + 2) = *(_BYTE *)(v46 + 2) & 0xF8 | ((unsigned __int8)v47 >> 2) & 7;
          v48 = v46;
          if ( v46 == 1 )
          {
LABEL_94:
            a2 = (const __m128i *)v42;
            *(_BYTE *)(a1 + 8) = 1;
            v10 = (_QWORD *)v41;
            v22 = v108;
            ++v40;
            if ( v101 == v39 + 24 )
              goto LABEL_69;
            goto LABEL_41;
          }
        }
        else
        {
          v87 = sub_BFB220(v41);
          v16 = v87;
          v48 = sub_1A19410((_BYTE *)a1, v87, (__int64)&v112, a7, a8);
          if ( v48 == 1 )
            goto LABEL_94;
        }
        if ( !*(_BYTE *)(a1 + 9) )
        {
          v27 = *(_QWORD *)(v41 + 16);
          v49 = (_DWORD *)(v48 & 0xFFFFFFFFFFFFFFFELL);
          v24 = v40;
          *(_QWORD *)(v27 + 8LL * v40) = v49;
          if ( v49 )
          {
            v50 = ((unsigned __int8)(*v49 >> 14) | (unsigned __int8)(*(_DWORD *)v41 >> 14)) & 0x1F;
            v51 = (unsigned __int8)v50 >> 2;
            v27 = (unsigned int)(v50 << 6);
            *(_BYTE *)(v41 + 1) = v27 | *(_BYTE *)(v41 + 1) & 0x3F;
            v24 = *(_BYTE *)(v41 + 2) & 0xF8;
            *(_BYTE *)(v41 + 2) = *(_BYTE *)(v41 + 2) & 0xF8 | v51;
          }
        }
      }
LABEL_26:
      ++v40;
      v39 += 24;
      if ( v39 == v101 )
      {
        a2 = (const __m128i *)v42;
        v10 = (_QWORD *)v41;
        v22 = v108;
        goto LABEL_69;
      }
      if ( *(_BYTE *)(a1 + 8) )
        goto LABEL_41;
    }
  }
  v56 = (__m128)_mm_loadu_si128(a2);
  v57 = (__m128)_mm_loadu_si128(a2 + 1);
  v58 = v10[3];
  v59 = *(_QWORD **)(*(_QWORD *)a1 + 248LL);
  v109 = (__m128i)v56;
  v60 = v58 - v10[2];
  v110 = (__m128i)v57;
  si128 = _mm_loadu_si128(a2 + 2);
  v61 = v60 >> 3;
  v62 = sub_A72040(v59, v16);
  if ( v62 )
  {
    v63 = v61;
    v64 = (unsigned int)*(unsigned __int8 *)(v62 + 16) - 2;
    v103 = *(_QWORD *)(v62 + 32);
    if ( (unsigned int)v64 <= 1 )
    {
      v63 = *(_QWORD *)(v62 + 40);
      if ( (*(_BYTE *)(v62 + 19) & 2) != 0 )
      {
        if ( *(_DWORD *)(v63 + 8) <= 0x40u )
          v63 = *(_QWORD *)v63;
        else
          v63 = **(_QWORD **)v63;
      }
    }
    if ( a2->m128i_i32[0] == 8 )
      v63 -= !sub_1A0A650((__int64)a2, v16, v64, *(_QWORD *)(v62 + 32)) - 1LL;
    sub_1A0B470((__int64)&v112, *(_QWORD **)(*(_QWORD *)a1 + 248LL), 0, (__int64)a2);
    v109 = _mm_load_si128(&v112);
    v110 = _mm_load_si128(&v113);
    si128 = _mm_load_si128(v114);
    goto LABEL_51;
  }
  v81 = v10[1];
  v82 = *(_QWORD *)(v81 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v82 + 16) - 57 <= 1 )
    goto LABEL_84;
  v97 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v82 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57;
  if ( (unsigned int)v97 > 1 )
  {
LABEL_130:
    v103 = v81;
    v63 = v61;
    goto LABEL_51;
  }
  v82 = sub_F63050(*(_QWORD *)(v10[1] & 0xFFFFFFFFFFFFFFF0LL), v16, v97, v81);
  if ( !v82 )
  {
    v81 = v10[1];
    goto LABEL_130;
  }
LABEL_84:
  v63 = *(unsigned int *)(v82 + 20);
  v103 = *(_QWORD *)(v82 + 32);
  sub_1A0B470((__int64)&v112, *(_QWORD **)(*(_QWORD *)a1 + 248LL), 0, (__int64)a2);
  v109 = _mm_load_si128(&v112);
  v110 = _mm_load_si128(&v113);
  si128 = _mm_load_si128(v114);
LABEL_51:
  if ( !v63 )
    goto LABEL_112;
  v65 = *(_BYTE *)(a1 + 8);
  if ( v65 )
    goto LABEL_41;
  v66 = 0;
  v67 = v10;
  v68 = (_BYTE *)a1;
  v69 = (unsigned __int64)v67;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v109.m128i_i32[0] == 7 || v109.m128i_i32[0] == 12 )
        si128.m128i_i32[0] = v66;
      if ( v61 <= v66 )
        break;
      v71 = (__int64 *)(*(_QWORD *)(v69 + 16) + 8 * v66);
      v72 = *v71;
      if ( *v71 )
      {
        v73 = *(_WORD *)v72 & 0x1FF;
        if ( v73 == 53 )
        {
          sub_1A1A320((_DWORD)v68, (unsigned int)&v109, v72, (_DWORD)a4, v69, v66, a9);
        }
        else if ( v73 == 67 )
        {
          sub_1A1A320((_DWORD)v68, (unsigned int)&v109, *(_QWORD *)(v72 + 24), (_DWORD)a4, v69, v66, 1);
        }
        goto LABEL_60;
      }
      v83 = *(_QWORD *)(v69 + 56);
      if ( v83 )
      {
        if ( (v83 & 2) == 0 )
        {
          v84 = (unsigned int *)(v83 & 0xFFFFFFFFFFFFFFFCLL);
          if ( v84 )
          {
            *v71 = (__int64)v84;
            v85 = *v84;
LABEL_92:
            v86 = ((v85 >> 14) | (*(_DWORD *)v69 >> 14)) & 0x1F;
            *(_BYTE *)(v69 + 1) = (v86 << 6) | *(_BYTE *)(v69 + 1) & 0x3F;
            *(_BYTE *)(v69 + 2) = *(_BYTE *)(v69 + 2) & 0xF8 | (v86 >> 2);
            goto LABEL_60;
          }
        }
      }
      if ( v65 )
        goto LABEL_60;
LABEL_97:
      if ( !a9 )
        goto LABEL_109;
LABEL_98:
      v88 = sub_EEE9A0(16, *(_QWORD **)(*(_QWORD *)v68 + 248LL), 8u);
      *(_WORD *)v88 = *(_WORD *)v88 & 0xFE00 | 0x2D;
      if ( unk_2CD7484 )
      {
        v106 = v88;
        sub_EE9B50(45);
        v88 = v106;
      }
      *(_WORD *)(v88 + 1) &= 0xF801u;
      v105 = v88;
      *(_QWORD *)(v88 + 8) = v103;
      v89 = sub_B63070(v88);
      v90 = (unsigned int *)v105;
      *(_BYTE *)(v105 + 1) = (v89 << 6) | *(_BYTE *)(v105 + 1) & 0x3F;
      *(_BYTE *)(v105 + 2) = *(_BYTE *)(v105 + 2) & 0xF8 | (v89 >> 2) & 7;
      if ( v68[8] )
        goto LABEL_111;
LABEL_101:
      v65 = v68[9];
      if ( !v65 )
      {
        if ( v61 > v66 )
        {
          if ( v109.m128i_i32[0] == 7 )
          {
            sub_BFAF60((_QWORD *)v69, (__int64)v90);
            goto LABEL_60;
          }
          *(_QWORD *)(*(_QWORD *)(v69 + 16) + 8 * v66) = v90;
          if ( v90 )
          {
            v85 = *v90;
            goto LABEL_92;
          }
        }
        else
        {
          if ( v109.m128i_i32[0] == 7 )
          {
            sub_BFAF60((_QWORD *)v69, (__int64)v90);
            goto LABEL_41;
          }
          v91 = *(_WORD *)v90 & 0x1FF;
          if ( v91 != 45 && v91 != 54 )
          {
            sub_C0B210(v69, *(_QWORD **)(*(_QWORD *)v68 + 248LL), v66, v90);
            *a4 = 1;
            goto LABEL_60;
          }
        }
      }
      if ( v63 == ++v66 )
        goto LABEL_112;
    }
    v70 = *(_QWORD *)(v69 + 56);
    if ( !v70 )
      break;
    if ( (v70 & 2) == 0 && (v70 & 0xFFFFFFFFFFFFFFFCLL) != 0 || v65 )
      goto LABEL_41;
    if ( (v70 & 2) != 0 || (v70 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
      goto LABEL_97;
LABEL_60:
    if ( v63 == ++v66 )
      goto LABEL_112;
    if ( v68[8] )
      goto LABEL_41;
  }
  if ( v65 )
    goto LABEL_41;
  if ( a9 )
    goto LABEL_98;
LABEL_109:
  v92 = sub_BFB220(v69);
  v93 = sub_1A19410(v68, v92, (__int64)&v109, v56, v57);
  if ( v93 == 1 )
  {
    v68[8] = 1;
    goto LABEL_41;
  }
  v90 = (unsigned int *)(v93 & 0xFFFFFFFFFFFFFFFELL);
  if ( !v68[8] )
    goto LABEL_101;
LABEL_111:
  if ( v63 != v66 + 1 )
    goto LABEL_41;
LABEL_112:
  if ( a5 )
  {
    v94 = *(_DWORD **)(*(_QWORD *)(a5 + 16) + 8LL * a6);
    if ( v94 )
    {
      v95 = (*v94 >> 14) | (*(_DWORD *)a5 >> 14);
      v96 = *(_BYTE *)(a5 + 2);
      *(_BYTE *)(a5 + 1) = ((v95 & 0x1F) << 6) | *(_BYTE *)(a5 + 1) & 0x3F;
      *(_BYTE *)(a5 + 2) = v96 & 0xF8 | ((unsigned __int8)(v95 & 0x1F) >> 2);
    }
  }
}
