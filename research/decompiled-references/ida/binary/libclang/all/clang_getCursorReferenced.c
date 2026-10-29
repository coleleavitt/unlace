__int64 __fastcall clang_getCursorReferenced(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int128 a7,
        const __m128i a8)
{
  __int64 v8; // rbx
  int v9; // ebp
  int v10; // r14d
  __int64 v11; // r13
  __m128i v12; // xmm0
  int v13; // edx
  __int64 v14; // rcx
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // r12
  unsigned __int16 *v18; // rax
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  int v22; // edx
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // rsi
  char v27; // al
  unsigned __int16 *v28; // r15
  unsigned __int64 v29; // rax
  __int64 v30; // r9
  int v31; // esi
  __m128i v32; // xmm2
  int v33; // edx
  int v34; // ecx
  int v35; // r8d
  int v36; // r9d
  int v37; // eax
  int v38; // edx
  int v39; // ecx
  int v40; // r8d
  int v41; // r9d
  __int64 v42; // rsi
  __int64 v43; // rax
  __int64 v44; // rbp
  __int64 v45; // rax
  __m128i v46; // xmm3
  __m128i v47; // xmm5
  __int64 v48; // r13
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rbp
  unsigned __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rdi
  unsigned __int64 v56; // rsi
  __int64 v57; // rax
  __m128i v58; // xmm0
  int v59; // edx
  int v60; // ecx
  int v61; // r8d
  int v62; // r9d
  __int64 v63; // rbp
  __int64 v64; // rax
  __int64 v65; // r9
  __int64 v66; // rbp
  unsigned __int64 v67; // rax
  unsigned __int64 v68; // rcx
  __m128i v69; // xmm4
  __int64 v70; // rax
  _QWORD *v71; // rax
  __int64 v72; // r14
  unsigned __int64 v73; // rdx
  char v74; // al
  __int64 v75; // r13
  __int64 v76; // rax
  unsigned __int64 v77; // rdx
  _QWORD *v78; // rax
  __int64 v79; // r14
  __int64 v80; // rsi
  _DWORD *v81; // rax
  int v82; // eax
  __int64 v83; // rdi
  int v84; // edx
  __m128i v85; // [rsp+0h] [rbp-C8h]
  __m128i v86; // [rsp+0h] [rbp-C8h]
  __m128i v87; // [rsp+0h] [rbp-C8h]
  __m128i v88; // [rsp+0h] [rbp-C8h]
  __m128i si128; // [rsp+0h] [rbp-C8h]
  __m128i v90; // [rsp+0h] [rbp-C8h]
  __m128i v91; // [rsp+0h] [rbp-C8h]
  __m128i v92; // [rsp+0h] [rbp-C8h]
  __m128i v93; // [rsp+0h] [rbp-C8h]
  __m128i v94; // [rsp+0h] [rbp-C8h]
  __m128i v95; // [rsp+0h] [rbp-C8h]
  __m128i v96; // [rsp+0h] [rbp-C8h]
  __m128i v97; // [rsp+0h] [rbp-C8h]
  __m128i v98; // [rsp+0h] [rbp-C8h]
  __m128i v99; // [rsp+0h] [rbp-C8h]
  __m128i v100; // [rsp+0h] [rbp-C8h]
  __m128i v101; // [rsp+20h] [rbp-A8h] BYREF
  __m128i v102; // [rsp+30h] [rbp-98h] BYREF
  __m128i v103; // [rsp+40h] [rbp-88h] BYREF
  __m128i v104; // [rsp+50h] [rbp-78h] BYREF
  __m128i v105; // [rsp+60h] [rbp-68h] BYREF
  int v106; // [rsp+70h] [rbp-58h] BYREF
  int v107; // [rsp+74h] [rbp-54h]
  __m128i v108; // [rsp+78h] [rbp-50h] BYREF
  __int64 v109; // [rsp+88h] [rbp-40h]

  v8 = a1;
  v9 = a7;
  if ( (unsigned int)(a7 - 70) <= 3 )
    goto LABEL_11;
  v10 = DWORD1(a7);
  v11 = a8.m128i_i64[1];
  v101 = _mm_loadu_si128((const __m128i *)((char *)&a7 + 8));
  v85 = _mm_loadu_si128((const __m128i *)&a7);
  v12 = _mm_loadu_si128(&a8);
  v17 = sub_63A300(a1, a2, a3, a4, a5, a6, v85.m128i_i32[0], v85.m128i_i32[2], v12.m128i_i32[0], v12.m128i_i64[1]);
  if ( (unsigned int)(v9 - 600) <= 4 || (unsigned int)(v9 - 1) <= 0x26 )
  {
    v87 = _mm_loadu_si128((const __m128i *)&a7);
    v24 = sub_63A250(a1, a2, v13, v14, v15, v16, v87.m128i_i32[0], v87.m128i_i64[1]);
    v26 = v24;
    if ( v24 )
    {
      v27 = *(_BYTE *)(v24 + 28) & 0x7F;
      if ( v27 == 78 )
      {
        sub_63A1A0(a1, v26, *(unsigned int *)(v26 + 24), v17);
      }
      else if ( v27 == 12 && (v42 = *(_QWORD *)(v26 + 48)) != 0 )
      {
LABEL_20:
        sub_639160(v8, v42, v17, 0, 1, v25, v101.m128i_i64[0], v101.m128i_i64[1]);
      }
      else
      {
        v46 = _mm_load_si128(&v101);
        *(_DWORD *)a1 = v9;
        *(_DWORD *)(a1 + 4) = v10;
        *(_QWORD *)(a1 + 24) = v11;
        *(__m128i *)(a1 + 8) = v46;
      }
      return v8;
    }
    goto LABEL_11;
  }
  if ( (unsigned int)(v9 - 100) <= 0x38 )
  {
    v88 = _mm_loadu_si128((const __m128i *)&a7);
    v28 = (unsigned __int16 *)sub_63A260(
                                a1,
                                a2,
                                v13,
                                v14,
                                v15,
                                v16,
                                v88.m128i_i32[0],
                                v88.m128i_i32[2],
                                _mm_loadu_si128(&a8).m128i_i64[0]);
    v29 = sub_5F7F90(v28);
    if ( v29 )
    {
      v31 = v29;
      sub_639160(&v104, v29, v17, 0, 1, v30, v101.m128i_i64[0], v101.m128i_i64[1]);
      v32 = _mm_load_si128(&v101);
      v106 = v9;
      v107 = v10;
      v108 = v32;
      v109 = v11;
      si128 = _mm_load_si128((const __m128i *)&v106);
      v37 = sub_63A4A0(
              (unsigned int)&v104,
              v31,
              v33,
              v34,
              v35,
              v36,
              si128.m128i_i64[0],
              si128.m128i_i64[1],
              _mm_load_si128((const __m128i *)&v108.m128i_u64[1]).m128i_i64[0]);
      sub_63A5D0(
        (unsigned int)&v102,
        v37,
        v38,
        v39,
        v40,
        v41,
        (__int128)_mm_load_si128(&v104),
        (__int128)_mm_load_si128(&v105));
      *(__m128i *)a1 = _mm_loadu_si128(&v102);
      *(__m128i *)(a1 + 16) = _mm_loadu_si128(&v103);
      return v8;
    }
    if ( v28 && (*v28 & 0x1FFu) - 24 <= 1 )
    {
      sub_63A170(a1, v28, v17);
      return v8;
    }
    goto LABEL_11;
  }
  if ( (unsigned int)(v9 - 200) <= 0x83 )
  {
    v86 = _mm_loadu_si128((const __m128i *)&a7);
    v18 = (unsigned __int16 *)sub_63A2A0(
                                a1,
                                a2,
                                v13,
                                v14,
                                v15,
                                v16,
                                v86.m128i_i32[0],
                                v86.m128i_i32[2],
                                _mm_loadu_si128(&a8).m128i_i64[0]);
    if ( v18 )
    {
      v22 = *v18;
      LOWORD(v22) = v22 & 0x1FF;
      if ( (_WORD)v22 == 240 )
      {
        v43 = *((_QWORD *)v18 + 1);
        if ( v43 )
        {
          v44 = *(_QWORD *)(v43 + 48);
          if ( v44 )
          {
            v90 = _mm_loadu_si128((const __m128i *)&a7);
            v45 = sub_63A250(a1, a2, v22, v19, v20, v21, v90.m128i_i32[0], v90.m128i_i64[1]);
            sub_639270(a1, v44, v45, v17, 0);
            return v8;
          }
        }
      }
    }
    goto LABEL_11;
  }
  if ( v9 == 502 )
  {
    v69 = _mm_load_si128(&v101);
    v107 = v10;
    v106 = 502;
    v109 = v11;
    v108 = v69;
    v70 = sub_63A080(&v106);
    if ( v70 )
    {
      sub_639FA0(a1, v70, v17);
      return v8;
    }
    goto LABEL_11;
  }
  if ( (unsigned int)(v9 - 40) > 0xA )
  {
LABEL_11:
    sub_638F50(a1, 70, 0);
    return v8;
  }
  switch ( v9 )
  {
    case ')':
      LODWORD(a7) = 41;
      v98 = _mm_loadu_si128((const __m128i *)&a7);
      v66 = sub_639C50(
              a1,
              a2,
              v13,
              v14,
              v15,
              v16,
              v98.m128i_i32[0],
              v98.m128i_i64[1],
              _mm_loadu_si128(&a8).m128i_u32[0]);
      v67 = *(_QWORD *)(v66 + 104);
      v68 = v67;
      if ( v67 )
        goto LABEL_47;
      v75 = *(_QWORD *)(v66 + 96);
      v76 = *(_QWORD *)(v75 + 88);
      v77 = v76 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v76 & 1) != 0 )
      {
        if ( !v77 )
          goto LABEL_49;
        goto LABEL_70;
      }
      if ( v77 > 3 )
      {
        if ( (v76 & 2) == 0 )
          goto LABEL_49;
        v78 = (_QWORD *)(v76 & 0xFFFFFFFFFFFFFFFCLL);
        v79 = v78[2275];
        if ( !v79 )
        {
          *(_QWORD *)(v75 + 88) = v75 & 0xFFFFFFFFFFFFFFFALL | 1;
          if ( (v75 & 0xFFFFFFFFFFFFFFFALL) == 0 )
          {
LABEL_72:
            v67 = *(_QWORD *)(v66 + 104);
            goto LABEL_47;
          }
          goto LABEL_81;
        }
        v80 = v78[274];
        v78[284] += 24LL;
        v77 = (v80 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v78[275] >= v77 + 24 && v80 )
          v78[274] = v77 + 24;
        else
          v77 = sub_5F8390((__int64)(v78 + 274), 24, 3);
        *(_QWORD *)v77 = v79;
        *(_DWORD *)(v77 + 8) = 0;
        v76 = v77 | 5;
        *(_QWORD *)(v77 + 16) = v75;
        *(_QWORD *)(v75 + 88) = v77 | 5;
        LOBYTE(v77) = v77 & 0xFA | 4;
LABEL_70:
        if ( (v77 & 4) != 0 )
        {
          v81 = (_DWORD *)(v76 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v81 )
          {
            v83 = *(_QWORD *)v81;
            v84 = *(_DWORD *)(*(_QWORD *)v81 + 12LL);
            if ( v81[2] != v84 )
            {
              v81[2] = v84;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v83 + 144LL))(v83, v75);
            }
          }
          goto LABEL_72;
        }
LABEL_81:
        v68 = *(_QWORD *)(v66 + 104);
        goto LABEL_82;
      }
      if ( !v77 )
        goto LABEL_49;
LABEL_82:
      v67 = v68;
LABEL_47:
      if ( v67 > 7 )
      {
        v42 = *(_QWORD *)(v67 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v42 )
          goto LABEL_20;
      }
LABEL_49:
      sub_639160(v8, v66, v17, 0, 1, v25, v101.m128i_i64[0], v101.m128i_i64[1]);
      break;
    case '*':
      LODWORD(a7) = 42;
      v97 = _mm_loadu_si128((const __m128i *)&a7);
      v63 = sub_639CC0(
              a1,
              a2,
              v13,
              v14,
              v15,
              v16,
              v97.m128i_i32[0],
              v97.m128i_i64[1],
              _mm_loadu_si128(&a8).m128i_u32[0]);
      v64 = sub_6003F0(v63);
      if ( v64 )
        sub_639160(a1, v64, v17, 0, 1, v65, v101.m128i_i64[0], v101.m128i_i64[1]);
      else
        sub_639160(a1, v63, v17, 0, 1, v65, v101.m128i_i64[0], v101.m128i_i64[1]);
      return v8;
    case '+':
      LODWORD(a7) = 43;
      v96 = _mm_loadu_si128((const __m128i *)&a7);
      v54 = sub_639D10(
              a1,
              a2,
              v13,
              v14,
              v15,
              v16,
              v96.m128i_i32[0],
              v96.m128i_i64[1],
              _mm_loadu_si128(&a8).m128i_u32[0]);
      goto LABEL_36;
    case ',':
      LODWORD(a7) = 44;
      v95 = _mm_loadu_si128((const __m128i *)&a7);
      v55 = **(_QWORD **)(sub_639EB0(a1, a2, v13, v14, v15, v16, v95.m128i_i32[0], v95.m128i_i64[1]) + 16);
      v56 = *(_QWORD *)(v55 & 0xFFFFFFFFFFFFFFF0LL);
      v57 = *(_QWORD *)(v56 + 8);
      if ( (v57 & 7) != 0 || (v56 &= 0xFFFFFFFFFFFFFFF0LL, (v57 & 8) != 0) )
        v56 = sub_B0CF30(v55, v56) & 0xFFFFFFFFFFFFFFF0LL;
      sub_690DD0(&v106, v56, v17);
      v58 = _mm_load_si128((const __m128i *)&v106);
      clang_getTypeDeclaration(v8, v56, v59, v60, v61, v62, v58.m128i_i32[0], v58.m128i_i64[1], v108.m128i_i64[1]);
      return v8;
    case '-':
      LODWORD(a7) = 45;
      v94 = _mm_loadu_si128((const __m128i *)&a7);
      v54 = sub_639D60(
              a1,
              a2,
              v13,
              v14,
              v15,
              v16,
              v94.m128i_i32[0],
              v94.m128i_i64[1],
              _mm_loadu_si128(&a8).m128i_u32[0]);
      goto LABEL_36;
    case '.':
      LODWORD(a7) = 46;
      v93 = _mm_loadu_si128((const __m128i *)&a7);
      v54 = sub_639DB0(
              a1,
              a2,
              v13,
              v14,
              v15,
              v16,
              v93.m128i_i32[0],
              v93.m128i_i64[1],
              _mm_loadu_si128(&a8).m128i_u32[0]);
      goto LABEL_36;
    case '/':
      LODWORD(a7) = 47;
      v92 = _mm_loadu_si128((const __m128i *)&a7);
      v54 = sub_639E50(
              a1,
              a2,
              v13,
              v14,
              v15,
              v16,
              v92.m128i_i32[0],
              v92.m128i_i64[1],
              _mm_loadu_si128(&a8).m128i_u32[0]);
      goto LABEL_36;
    case '0':
      if ( !v17 )
        BUG();
      v48 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) + 80LL) + 2112LL) + 80LL);
      v49 = *(_QWORD *)(v48 + 72);
      if ( (v49 & 1) != 0 )
        goto LABEL_31;
      LODWORD(v50) = v49 & 0xFFFFFFFE;
      if ( (v49 & 0xFFFFFFFFFFFFFFFELL) <= 3 )
        goto LABEL_83;
      v71 = (_QWORD *)(v49 & 0xFFFFFFFFFFFFFFFCLL);
      LODWORD(v50) = v50 & 2;
      v51 = (unsigned __int64)v71;
      if ( !(_DWORD)v50 )
        goto LABEL_34;
      v72 = v71[2275];
      if ( v72 )
      {
        v14 = v71[274];
        v71[284] += 24LL;
        v73 = (v14 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v71[275] >= v73 + 24 && v14 )
        {
          v71[274] = v73 + 24;
        }
        else
        {
          LODWORD(a1) = (_DWORD)v71 + 2192;
          a2 = 24;
          v73 = sub_5F8390((__int64)(v71 + 274), 24, 3);
        }
        *(_QWORD *)v73 = v72;
        *(_DWORD *)(v73 + 8) = 0;
        *(_QWORD *)(v73 + 16) = v48;
        *(_QWORD *)(v48 + 72) = v73 | 5;
        v74 = v73;
        v50 = v73 & 0xFFFFFFFFFFFFFFF8LL;
        v51 = v50;
        LOBYTE(v52) = v74 & 0xFA | 4;
      }
      else
      {
        v49 = v48 & 0xFFFFFFFFFFFFFFFALL | 1;
        *(_QWORD *)(v48 + 72) = v49;
LABEL_31:
        v50 = v49 & 0xFFFFFFFFFFFFFFF8LL;
        v51 = v49 & 0xFFFFFFFFFFFFFFF8LL;
        v52 = v49 & 0xFFFFFFFFFFFFFFFELL;
        if ( !v52 )
        {
LABEL_83:
          v51 = 0;
          goto LABEL_34;
        }
      }
      if ( (v52 & 4) != 0 && v50 )
      {
        a1 = *(_QWORD *)v51;
        v82 = *(_DWORD *)(*(_QWORD *)v51 + 12LL);
        if ( *(_DWORD *)(v51 + 8) != v82 )
        {
          *(_DWORD *)(v51 + 8) = v82;
          a2 = v48;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 144LL))(a1, v48);
        }
        v51 = *(_QWORD *)(v51 + 16);
      }
LABEL_34:
      LODWORD(a7) = 48;
      v91 = _mm_loadu_si128((const __m128i *)&a7);
      v53 = sub_63A140(
              a1,
              a2,
              v50,
              v14,
              v15,
              v16,
              v91.m128i_i32[0],
              v91.m128i_i64[1],
              _mm_loadu_si128(&a8).m128i_u32[0]);
      sub_639270(v8, v53, v51, v17, 0);
      return v8;
    case '1':
      v47 = _mm_load_si128(&v101);
      *(_DWORD *)a1 = 49;
      *(_DWORD *)(a1 + 4) = v10;
      *(_QWORD *)(a1 + 24) = v11;
      *(__m128i *)(a1 + 8) = v47;
      return v8;
    case '2':
      LODWORD(a7) = 50;
      v99 = _mm_loadu_si128((const __m128i *)&a7);
      v54 = sub_639E00(
              a1,
              a2,
              v13,
              v14,
              v15,
              v16,
              v99.m128i_i32[0],
              v99.m128i_i64[1],
              _mm_loadu_si128(&a8).m128i_u32[0]);
      goto LABEL_36;
    default:
      LODWORD(a7) = 40;
      v100 = _mm_loadu_si128((const __m128i *)&a7);
      v54 = sub_639C00(
              a1,
              a2,
              v13,
              v14,
              v15,
              v16,
              v100.m128i_i32[0],
              v100.m128i_i64[1],
              _mm_loadu_si128(&a8).m128i_u32[0]);
LABEL_36:
      v42 = v54;
      goto LABEL_20;
  }
  return v8;
}

