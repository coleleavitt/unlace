void __fastcall sub_1B08230(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r12
  size_t v11; // rdx
  _BYTE *v12; // rsi
  __int64 v13; // r15
  size_t v14; // rsi
  size_t v15; // r8
  _BYTE *v16; // rdi
  _BYTE *v17; // rcx
  size_t v18; // r12
  unsigned __int64 v19; // rax
  _BYTE *v20; // rdi
  unsigned __int64 v21; // r12
  unsigned __int64 v22; // rdx
  __int64 v23; // r12
  __m128i *v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  _QWORD *v33; // rdi
  bool v34; // zf
  unsigned int v35; // eax
  __int64 v36; // rdi
  __int64 v37; // r14
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // rax
  unsigned __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rbx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  __int64 v47; // rbx
  __int64 v48; // rbp
  unsigned __int64 v49; // rdx
  __int64 v50; // r12
  _QWORD *v51; // r13
  __int64 v52; // rbx
  __int64 v53; // r9
  __int64 v54; // rax
  unsigned __int64 v55; // rcx
  _QWORD *v56; // rdi
  unsigned __int64 v57; // r15
  __int64 v58; // rax
  __int64 v59; // r15
  unsigned __int64 v60; // rcx
  __int64 v61; // rax
  unsigned __int64 v62; // rcx
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rax
  __int64 v65; // rdi
  int v66; // edx
  void *v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rax
  unsigned __int64 v72; // rdx
  _BYTE *v73; // rax
  __m128i *v74; // rcx
  void *v75; // r14
  _UNKNOWN **v76; // rbx
  _BYTE *v77; // rsi
  char *v78; // rcx
  __m128i *v79; // rax
  void *v80; // r14
  size_t v81; // rbx
  _QWORD *v82; // rax
  __int64 v83; // rbx
  size_t v84; // rdx
  __int64 v85; // rax
  __int64 v87; // [rsp+0h] [rbp-158h]
  unsigned __int64 v88; // [rsp+8h] [rbp-150h]
  unsigned __int64 v91; // [rsp+18h] [rbp-140h]
  __int64 v92; // [rsp+18h] [rbp-140h]
  __int64 v93; // [rsp+18h] [rbp-140h]
  __int64 v94; // [rsp+18h] [rbp-140h]
  unsigned int v95; // [rsp+2Ch] [rbp-12Ch]
  void *v96; // [rsp+30h] [rbp-128h] BYREF
  size_t n; // [rsp+38h] [rbp-120h]
  _BYTE v98[16]; // [rsp+40h] [rbp-118h] BYREF
  void *v99; // [rsp+50h] [rbp-108h] BYREF
  size_t v100; // [rsp+58h] [rbp-100h]
  _QWORD v101[2]; // [rsp+60h] [rbp-F8h] BYREF
  void *src; // [rsp+70h] [rbp-E8h] BYREF
  size_t v103; // [rsp+78h] [rbp-E0h]
  __m128i v104; // [rsp+80h] [rbp-D8h] BYREF
  void *ptr; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v106; // [rsp+98h] [rbp-C0h]
  _BYTE v107[184]; // [rsp+A0h] [rbp-B8h] BYREF

  if ( !a5 && a6 != 1 )
  {
    v76 = &off_2BC7880;
    v95 = *(_DWORD *)(sub_168B6E0(a1) + 64);
    sub_168B9F0((__int64)&ptr, (__int64 *)a1, a2, 0x11CBu, 0);
    v98[0] = 0;
    v96 = v98;
    n = 0;
    do
    {
      while ( 1 )
      {
        v77 = *v76;
        v99 = v101;
        if ( v77 )
        {
          sub_1AEB960(&v99, v77, (__int64)v76[1] + (_QWORD)v77);
        }
        else
        {
          v100 = 0;
          LOBYTE(v101[0]) = 0;
        }
        v78 = "', '";
        if ( !n )
          v78 = "'";
        v79 = (__m128i *)sub_99BDC0(&v99, 0, 0, v78, (-(__int64)(n == 0) & 0xFFFFFFFFFFFFFFFDLL) + 4);
        src = &v104;
        if ( (__m128i *)v79->m128i_i64[0] == &v79[1] )
        {
          v104 = _mm_loadu_si128(v79 + 1);
        }
        else
        {
          src = (void *)v79->m128i_i64[0];
          v104.m128i_i64[0] = v79[1].m128i_i64[0];
        }
        v103 = v79->m128i_u64[1];
        v79->m128i_i64[0] = (__int64)v79[1].m128i_i64;
        v79->m128i_i64[1] = 0;
        v79[1].m128i_i8[0] = 0;
        sub_9EE560(&v96, src, v103);
        if ( src != &v104 )
          operator delete(src);
        if ( v99 == v101 )
          break;
        operator delete(v99);
        v76 += 3;
        if ( v76 == (_UNKNOWN **)&unk_2BC7940 )
          goto LABEL_110;
      }
      v76 += 3;
    }
    while ( v76 != (_UNKNOWN **)&unk_2BC7940 );
LABEL_110:
    v80 = v96;
    v81 = n;
    v99 = v101;
    if ( (char *)v96 + n && !v96 )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    if ( n > 0xF )
    {
      if ( (n & 0x8000000000000000LL) != 0LL )
        goto LABEL_137;
      v82 = (_QWORD *)operator new(n + 1);
      v101[0] = v81;
      v99 = v82;
    }
    else
    {
      if ( n == 1 )
      {
        LOBYTE(v101[0]) = *(_BYTE *)v96;
        v82 = v101;
LABEL_115:
        v100 = v81;
        *((_BYTE *)v82 + v81) = 0;
        sub_9EE7C0(&v99, "'");
        if ( v96 != v98 )
          operator delete(v96);
        v83 = sub_1682AF0((__int64)&ptr, (__int64)&v99);
        src = (void *)sub_20EAB70(a3, v95);
        v103 = v84;
        sub_166BAF0(v83, (__int64)&src);
        if ( v99 != v101 )
          operator delete(v99);
        v24 = &v104;
        v23 = 0;
        sub_15F7200(&ptr);
        src = &v104;
        v103 = 0;
        v104.m128i_i8[0] = 0;
        v88 = ((unsigned __int64)a2 << 32) | a2;
        goto LABEL_28;
      }
      v82 = v101;
      if ( !n )
        goto LABEL_115;
    }
    memcpy(v82, v80, v81);
    v82 = v99;
    goto LABEL_115;
  }
  v103 = 0;
  v104.m128i_i8[0] = 0;
  src = &v104;
  v8 = a4 + 32 * a5;
  v88 = ((unsigned __int64)a2 << 32) | a2;
  if ( a4 == v8 )
  {
    v24 = &v104;
    v23 = 0;
    goto LABEL_28;
  }
  v9 = a4;
  v10 = ((32 * a5) >> 5) - 1;
  do
  {
    v10 += *(_QWORD *)(v9 + 8);
    v9 += 32;
  }
  while ( v8 != v9 );
  if ( (unsigned __int64)v10 <= 0xF )
    goto LABEL_7;
  if ( v10 < 0 )
LABEL_137:
    std::__throw_length_error("basic_string::_M_create");
  if ( (unsigned __int64)v10 < 0x1E )
    v10 = 30;
  v73 = (_BYTE *)operator new(v10 + 1);
  v74 = (__m128i *)src;
  v75 = v73;
  *v73 = *(_BYTE *)src;
  if ( v74 != &v104 )
    operator delete(v74);
  src = v75;
  v104.m128i_i64[0] = v10;
LABEL_7:
  v11 = *(_QWORD *)(a4 + 8);
  v12 = *(_BYTE **)a4;
  v13 = a4 + 32;
  sub_9EE560(&src, v12, v11);
  if ( v8 != v13 )
  {
    v14 = v103;
    if ( v103 == 0x7FFFFFFFFFFFFFFFLL )
LABEL_135:
      std::__throw_length_error("basic_string::append");
    while ( 1 )
    {
      v21 = v14 + 1;
      v22 = src == &v104 ? 15LL : v104.m128i_i64[0];
      if ( v21 <= v22 )
        *((_BYTE *)src + v14) = 44;
      else
        sub_998B30((__int64)&src, v14, 0, ",", 1u);
      v103 = v14 + 1;
      *((_BYTE *)src + v21) = 0;
      v15 = *(_QWORD *)(v13 + 8);
      v16 = src;
      v17 = *(_BYTE **)v13;
      v18 = v15 + v103;
      v19 = src == &v104 ? 15LL : v104.m128i_i64[0];
      if ( v18 > v19 )
      {
        sub_998B30((__int64)&src, v103, 0, v17, v15);
        v16 = src;
      }
      else if ( v15 )
      {
        v20 = (char *)src + v103;
        if ( v15 == 1 )
          *v20 = *v17;
        else
          memcpy(v20, *(const void **)v13, *(_QWORD *)(v13 + 8));
        v16 = src;
      }
      v13 += 32;
      v103 = v18;
      v16[v18] = 0;
      if ( v8 == v13 )
        break;
      v14 = v103;
      if ( v103 == 0x7FFFFFFFFFFFFFFFLL )
        goto LABEL_135;
    }
  }
  v23 = v103;
  v24 = (__m128i *)src;
LABEL_28:
  v25 = sub_168B6C0(a1);
  v87 = sub_B35F40(v25, v24, v23, v88);
  if ( src != &v104 )
    operator delete(src);
  if ( a3 == 6 )
  {
    v85 = *(unsigned int *)(a1 + 440);
    if ( v85 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 444) )
    {
      sub_2237220(a1 + 432, a1 + 448, v85 + 1, 8);
      v85 = *(unsigned int *)(a1 + 440);
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 432) + 8 * v85) = v87;
    ++*(_DWORD *)(a1 + 440);
  }
  else
  {
    if ( !a5 )
      return;
    v26 = *(unsigned int *)(a1 + 488);
    if ( v26 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 492) )
    {
      sub_2237220(a1 + 480, a1 + 496, v26 + 1, 8);
      v26 = *(unsigned int *)(a1 + 488);
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 480) + 8 * v26) = v87;
    ptr = v107;
    v106 = 0x800000000LL;
    v27 = *(_QWORD *)a1;
    ++*(_DWORD *)(a1 + 488);
    v28 = *(_QWORD *)(v27 + 544);
LABEL_37:
    v29 = *(_QWORD *)(sub_B8C1B0(v28) + 16);
    if ( (v29 & 4) != 0 )
    {
      while ( *(_QWORD *)((v29 & 0xFFFFFFFFFFFFFFF8LL) + 8) )
      {
LABEL_39:
        v30 = *(_QWORD *)(sub_B8C1B0(v28) + 16);
        if ( (v30 & 4) != 0 )
        {
          v28 = *(_QWORD *)((v30 & 0xFFFFFFFFFFFFFFF8LL) + 8);
          goto LABEL_37;
        }
        v28 = v30 & 0xFFFFFFFFFFFFFFF8LL;
        v29 = *(_QWORD *)(sub_B8C1B0(v28) + 16);
        if ( (v29 & 4) == 0 )
          goto LABEL_38;
      }
    }
    else
    {
LABEL_38:
      if ( (v29 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        goto LABEL_39;
    }
    v31 = (unsigned int)v106;
    v32 = (unsigned int)v106 + 1LL;
    if ( v32 > HIDWORD(v106) )
    {
      sub_2237220(&ptr, v107, v32, 8);
      v31 = (unsigned int)v106;
    }
    *((_QWORD *)ptr + v31) = v28;
    v33 = ptr;
    v34 = (_DWORD)v106 == -1;
    v35 = v106 + 1;
    LODWORD(v106) = v106 + 1;
    if ( !v34 )
    {
      while ( 1 )
      {
        v36 = v33[v35 - 1];
        LODWORD(v106) = v35 - 1;
        v37 = sub_B8E970(v36);
        if ( v37 )
          break;
LABEL_67:
        v35 = v106;
        v33 = ptr;
        if ( !(_DWORD)v106 )
          goto LABEL_68;
      }
      while ( 1 )
      {
        if ( *(char *)(v37 + 28) >= 0 )
        {
          if ( (*(_BYTE *)(v37 + 28) & 0x7F) == 0x48 )
          {
            v38 = *(_QWORD *)(v37 + 48);
            v39 = v38 + 64;
            if ( !v38 )
              v39 = 0;
            v40 = (unsigned int)v106;
            v41 = (unsigned int)v106 + 1LL;
            if ( v41 > HIDWORD(v106) )
            {
              sub_2237220(&ptr, v107, v41, 8);
              v40 = (unsigned int)v106;
            }
            *((_QWORD *)ptr + v40) = v39;
            LODWORD(v106) = v106 + 1;
            v42 = sub_BC37C0((_QWORD *)v37);
            v43 = *(_QWORD *)(v42 + 16) + 8LL * *(unsigned int *)(v42 + 24);
            v45 = *(_QWORD *)(sub_BC37C0((_QWORD *)v37) + 16);
            v46 = (unsigned int)v106;
            v47 = v43 - v45;
            v48 = v47 >> 3;
            v49 = (unsigned int)v106 + (v47 >> 3);
            v50 = v47 >> 3;
            if ( v49 > HIDWORD(v106) )
            {
              v93 = v45;
              sub_2237220(&ptr, v107, v49, 8);
              v46 = (unsigned int)v106;
              v45 = v93;
            }
            v51 = (char *)ptr + 8 * v46;
            if ( v47 > 0 )
            {
              v52 = v45;
              while ( 1 )
              {
                v53 = *(_QWORD *)(*(_QWORD *)v52 + 104LL);
                v54 = *(_QWORD *)(v53 + 96);
                v55 = v54 & 0xFFFFFFFFFFFFFFFELL;
                if ( (v54 & 1) != 0 )
                  goto LABEL_77;
                v56 = (_QWORD *)(v54 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v54 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
                  goto LABEL_77;
                v57 = v54 & 0xFFFFFFFFFFFFFFFCLL;
                if ( (v54 & 2) != 0 )
                  break;
LABEL_59:
                while ( sub_B97450(v57) )
                {
                  while ( 1 )
                  {
                    v58 = *(_QWORD *)(v57 + 96);
                    v57 = 0;
                    if ( (v58 & 3) != 0 )
                      break;
                    v57 = v58 & 0xFFFFFFFFFFFFFFFCLL;
                    if ( !sub_B97450(v58 & 0xFFFFFFFFFFFFFFFCLL) )
                      goto LABEL_62;
                  }
                }
LABEL_62:
                if ( v57 )
                {
                  ++v51;
                  v52 += 8;
                  *(v51 - 1) = v57 + 64;
                  if ( !--v50 )
                    goto LABEL_64;
                }
                else
                {
                  *v51 = 0;
                  v52 += 8;
                  ++v51;
                  if ( !--v50 )
                  {
LABEL_64:
                    LODWORD(v46) = v106;
                    goto LABEL_65;
                  }
                }
              }
              v59 = v56[2295];
              v60 = v53 & 0xFFFFFFFFFFFFFFFBLL;
              if ( v59 )
              {
                v61 = v56[294];
                v56[304] += 24LL;
                v62 = (v61 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                if ( v56[295] >= v62 + 24 && v61 )
                {
                  v56[294] = v62 + 24;
                  v63 = (v61 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                }
                else
                {
                  v92 = v53;
                  v63 = sub_986170((__int64)(v56 + 294), 24, 24, 3, v44, v53);
                  v53 = v92;
                  v62 = v63 & 0xFFFFFFFFFFFFFFFBLL;
                }
                *(_QWORD *)v63 = v59;
                v60 = v62 | 4;
                *(_DWORD *)(v63 + 8) = 0;
                *(_QWORD *)(v63 + 16) = v53;
              }
              v55 = v60 & 0xFFFFFFFFFFFFFFFELL;
              v54 = v55 | 1;
              *(_QWORD *)(v53 + 96) = v55 | 1;
LABEL_77:
              v64 = v54 & 0xFFFFFFFFFFFFFFF8LL;
              v57 = v64;
              if ( v55 )
              {
                if ( (v55 & 4) != 0 )
                {
                  v57 = 0;
                  if ( v64 )
                  {
                    v65 = *(_QWORD *)v64;
                    v66 = *(_DWORD *)(*(_QWORD *)v64 + 12LL);
                    if ( *(_DWORD *)(v64 + 8) != v66 )
                    {
                      *(_DWORD *)(v64 + 8) = v66;
                      v91 = v64;
                      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v65 + 152LL))(v65, v53);
                      v64 = v91;
                    }
                    v57 = *(_QWORD *)(v64 + 16);
                  }
                }
              }
              goto LABEL_59;
            }
LABEL_65:
            LODWORD(v106) = v46 + v48;
          }
          else
          {
            if ( sub_B8E0B0(v37) )
            {
              v71 = sub_B8D340(v37);
              if ( v71 )
              {
                v68 = (unsigned int)v106;
                v72 = (unsigned int)v106 + 1LL;
                if ( v72 > HIDWORD(v106) )
                {
                  v94 = v71;
                  sub_2237220(&ptr, v107, v72, 8);
                  v68 = (unsigned int)v106;
                  v71 = v94;
                }
                v67 = ptr;
                *((_QWORD *)ptr + v68) = v71;
                LODWORD(v106) = v106 + 1;
              }
            }
            if ( (*(_BYTE *)(v37 + 28) & 0x7Fu) - 34 <= 5 )
              sub_B8CC60(v37, v87, (__int64)v67, v68, v69, v70);
          }
        }
        v37 = *(_QWORD *)(v37 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v37 )
          goto LABEL_67;
      }
    }
LABEL_68:
    if ( v33 != (_QWORD *)v107 )
      free(v33);
  }
}
