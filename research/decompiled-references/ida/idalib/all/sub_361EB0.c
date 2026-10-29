__int64 __fastcall sub_361EB0(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9,
        unsigned int a10,
        char *a11,
        const char *a12,
        unsigned __int64 *a13)
{
  __int64 v14; // r14
  int v17; // eax
  int v18; // edx
  int v19; // eax
  int v20; // eax
  size_t v21; // rax
  size_t v22; // r12
  size_t v23; // rbx
  unsigned int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rdx
  bool v27; // bl
  __int64 v28; // rsi
  __int64 v29; // rax
  int v30; // ebx
  __int64 v31; // r13
  unsigned __int8 v32; // r9
  __int64 v33; // rax
  unsigned int v34; // ecx
  __int64 (__fastcall *v35)(_QWORD *, char); // rax
  __int64 v36; // rbx
  unsigned __int64 v37; // r14
  __int64 v38; // rsi
  char v39; // bl
  const char *v40; // rdi
  __int64 v41; // r12
  _QWORD *v42; // rax
  unsigned __int64 v43; // rdi
  char v44; // al
  __int64 v45; // r12
  __int64 v46; // r12
  __int64 (__fastcall *v47)(_QWORD *, char); // rax
  __int64 v48; // r8
  unsigned __int64 v49; // rdx
  __int64 v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rsi
  const char *v53; // rsi
  __int64 v54; // rax
  __int64 *v55; // rax
  __int64 v56; // rbx
  int v57; // eax
  unsigned __int64 v59; // rax
  __int64 v60; // rcx
  void *v61; // rdi
  __int64 v62; // rax
  unsigned __int64 v63; // rsi
  __int64 *v64; // rdi
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  unsigned __int64 v69; // rdx
  unsigned __int64 v70; // r14
  _BOOL4 v71; // eax
  __int64 v72; // rbx
  char v73; // dl
  unsigned int v74; // eax
  __int64 v75; // [rsp-10h] [rbp-180h]
  char *s; // [rsp+0h] [rbp-170h]
  __int64 v77; // [rsp+8h] [rbp-168h]
  unsigned __int64 v78; // [rsp+10h] [rbp-160h]
  bool v79; // [rsp+1Bh] [rbp-155h]
  int v80; // [rsp+1Ch] [rbp-154h]
  const char *v81; // [rsp+20h] [rbp-150h]
  unsigned __int64 v82; // [rsp+28h] [rbp-148h]
  __int64 v83; // [rsp+30h] [rbp-140h]
  unsigned __int64 *v84; // [rsp+38h] [rbp-138h]
  bool v85; // [rsp+48h] [rbp-128h]
  int v86; // [rsp+50h] [rbp-120h]
  int v87; // [rsp+54h] [rbp-11Ch]
  unsigned __int64 v89; // [rsp+60h] [rbp-110h]
  unsigned __int8 v90; // [rsp+60h] [rbp-110h]
  unsigned __int8 v92; // [rsp+68h] [rbp-108h]
  char v93; // [rsp+77h] [rbp-F9h] BYREF
  __int16 v94; // [rsp+78h] [rbp-F8h] BYREF
  char v95; // [rsp+7Ah] [rbp-F6h]
  int v96; // [rsp+7Ch] [rbp-F4h] BYREF
  void *v97; // [rsp+80h] [rbp-F0h] BYREF
  __int128 v98; // [rsp+88h] [rbp-E8h]
  void *ptr; // [rsp+A0h] [rbp-D0h] BYREF
  __int128 v100; // [rsp+A8h] [rbp-C8h]
  _QWORD *v101; // [rsp+C0h] [rbp-B0h] BYREF
  __int64 v102; // [rsp+C8h] [rbp-A8h]
  __int64 v103; // [rsp+D0h] [rbp-A0h]
  __m128i v104; // [rsp+D8h] [rbp-98h] BYREF
  __int64 v105; // [rsp+E8h] [rbp-88h]
  __int64 v106; // [rsp+F0h] [rbp-80h]
  unsigned __int64 v107; // [rsp+F8h] [rbp-78h]
  unsigned __int64 v108; // [rsp+100h] [rbp-70h]
  __int64 *v109; // [rsp+108h] [rbp-68h]
  int v110; // [rsp+110h] [rbp-60h]
  unsigned int v111; // [rsp+114h] [rbp-5Ch]
  unsigned __int8 v112[8]; // [rsp+118h] [rbp-58h] BYREF
  _BYTE v113[24]; // [rsp+120h] [rbp-50h] BYREF
  unsigned __int64 v114; // [rsp+138h] [rbp-38h]

  v14 = a2;
  s = a11;
  v83 = a5;
  v81 = a12;
  v89 = a6;
  v84 = a13;
  v114 = __readfsqword(0x28u);
  v17 = nbits(a2);
  v18 = v17 + 14;
  v19 = v17 + 7;
  if ( v19 < 0 )
    v19 = v18;
  v20 = v19 >> 3;
  v86 = v20;
  if ( !a5 || !a6 || v20 && !is_mul_ok(a6, v20) )
  {
    v72 = **(_QWORD **)(a1 + 88);
    v83 = *(_QWORD *)(v72 + 1152);
    v84 = nullptr;
    v89 = 1;
    if ( (unsigned int)nbits(a2) != 8 && *(_DWORD *)(v72 + 948) == 8 )
      v83 = *(_QWORD *)(v72 + 1160);
  }
  v80 = 1023;
  if ( !HIDWORD(a8) )
    v80 = (unsigned __int16)getinf(42);
  v97 = nullptr;
  v98 = 0;
  if ( s )
  {
    v21 = strlen(s);
    v22 = v21 + 1;
    v23 = v21;
    v97 = (void *)qvector_reserve(&v97, 0, v21 + 1, 1);
    *(_QWORD *)&v98 = v22;
    memmove(v97, s, v23);
    *((_BYTE *)v97 + v23) = 0;
  }
  if ( (a10 & 2) != 0 )
  {
    v73 = is_debugger_memory(a2);
    v74 = a10 & 0xFFFFFFFD;
    if ( !v73 )
      v74 = a10;
    a10 = v74;
  }
  v82 = 0;
  v87 = 0;
  v24 = a10 & 0xFFFFFFFD;
  if ( (a8 & 1) != 0 )
    v24 = a10;
  a10 = v24;
  v79 = v81 == nullptr;
  while ( 2 )
  {
    while ( 2 )
    {
      v25 = *(_QWORD *)(a1 + 88);
      v93 = 0;
      v96 = 0;
      v26 = **(_QWORD **)(v25 + 96);
      v27 = (_BYTE)v26 != 0;
      if ( !v79 && !(_BYTE)v26 )
        goto LABEL_17;
      v59 = v82;
      if ( !(_BYTE)v26 )
        v59 = (v14 - *(_QWORD *)(a1 + 16)) / v89;
      if ( (a8 & 4) == 0 )
        goto LABEL_17;
      v60 = 10;
      if ( (a8 & 0xC0) == 0 )
        v60 = (unsigned int)byte_23AC0A4[((int)a8 >> 4) & 0xF];
      if ( !btoa64(v113, 20, v59, v60) )
        goto LABEL_17;
      if ( !s || !v27 )
      {
        v81 = v113;
LABEL_17:
        v28 = v83;
        if ( !v83 )
          goto LABEL_85;
        goto LABEL_18;
      }
      sub_35A790((char **)&v97);
      v28 = v83;
      if ( !v83 )
      {
LABEL_85:
        LOBYTE(v34) = 0;
        goto LABEL_63;
      }
LABEL_18:
      v29 = *(_QWORD *)a1;
      *(_QWORD *)(a1 + 32) = 0;
      (*(void (__fastcall **)(__int64, __int64, __int64))(v29 + 56))(a1, v28, 32);
      v30 = v96;
      v31 = (*(_QWORD *)(a1 + 32) == 0) + *(_QWORD *)(a1 + 32) - 1LL;
      while ( 1 )
      {
        if ( v30 )
        {
          v40 = haystack;
          if ( *(_QWORD *)(a1 + 32) )
            v40 = *(const char **)(a1 + 24);
          v41 = tag_strlen(v40);
          if ( v80 - (unsigned __int8)getinf(40) <= v41 )
          {
            v46 = v14;
            v39 = 1;
            goto LABEL_87;
          }
        }
        if ( a3 < v89 )
        {
          v46 = v14;
          v39 = 0;
          goto LABEL_87;
        }
        v42 = *(_QWORD **)(a1 + 88);
        v112[0] = 0;
        v102 = 0;
        v101 = v42;
        v103 = v14;
        v105 = a4;
        v106 = 1;
        v107 = v89;
        v108 = a3;
        v109 = &a8;
        v110 = v86;
        v111 = a10;
        v104 = 0;
        if ( v84 && (v43 = v84[8], (v84[8] & 0xF) == 0xE) )
        {
          v95 = 0;
          v94 = 0;
          if ( !(unsigned __int8)get_tinfo_details(v43, 14, &v94) )
          {
            a3 = 0;
LABEL_61:
            LOBYTE(v34) = 0;
            if ( v30 )
            {
              sub_3600E0((__int64 *)(a1 + 24), v31);
              LOBYTE(v34) = sub_35CF70((_QWORD *)a1, v81, (const char *)v97);
            }
            goto LABEL_63;
          }
          v63 = *v84;
          v64 = (__int64 *)v101[12];
          v65 = v64[48];
          v66 = v65 + 16 * v64[49];
          if ( v65 == v66 )
            goto LABEL_102;
          while ( v63 < *(_QWORD *)v65 || v63 >= *(_QWORD *)(v65 + 8) )
          {
            v65 += 16;
            if ( v66 == v65 )
              goto LABEL_102;
          }
          if ( !v65 )
          {
LABEL_102:
            if ( !under_debugger )
              interr(3061);
LABEL_129:
            BUG();
          }
          v104.m128i_i64[0] = sub_35C7A0(
                                &ptr,
                                v112,
                                v64[45],
                                v63,
                                HIBYTE(v94),
                                v110,
                                *(_QWORD *)v65,
                                *(_QWORD *)(v65 + 8));
          v104.m128i_i64[0] = read_tinfo_bitfield_value(v84[8], v104.m128i_i64[0], (unsigned int)ptr, v67, v68, v75);
          if ( !v95 )
            *(_DWORD *)v109 |= 2u;
          a3 = 0;
          v45 = v102;
        }
        else
        {
          v44 = sub_35DAA0(&v101);
          v45 = v102;
          a3 = v108 - v102;
          if ( !v44 )
            goto LABEL_61;
        }
        v46 = v14 + v45;
        if ( !v30 || a9 < 0 )
        {
          v47 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
          if ( v47 == sub_35CB90 )
          {
            v48 = *(_QWORD *)(a1 + 32);
            v49 = 2;
            if ( v48 )
              v49 = v48-- + 1;
            v50 = *(_QWORD *)(a1 + 24);
            if ( *(_QWORD *)(a1 + 40) < v49 )
            {
              v77 = v48;
              v78 = v49;
              v54 = qvector_reserve(a1 + 24, v50, v49, 1);
              *(_QWORD *)(a1 + 24) = v54;
              v48 = v77;
              v50 = v54;
              v49 = v78;
            }
            *(_QWORD *)(a1 + 32) = v49;
            *(_BYTE *)(v50 + v48) = 32;
            *(_BYTE *)(*(_QWORD *)(a1 + 24) + v48 + 1) = 0;
          }
          else
          {
            v47((_QWORD *)a1, 32);
          }
        }
        v96 = v30 + 1;
        if ( v87 <= 1 && (unsigned __int8)is_manual(a4, (unsigned int)v87) )
        {
          v52 = *(_QWORD *)(a1 + 16);
          ptr = nullptr;
          v100 = 0;
          if ( get_forced_operand(&ptr, v52, 0) > 0 )
          {
            v53 = haystack;
            if ( (_QWORD)v100 )
              v53 = (const char *)ptr;
            (*(void (__fastcall **)(__int64, const char *, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, v53, 0);
          }
          if ( ptr )
          {
            *(_QWORD *)&v100 = 0;
            qfree(ptr);
          }
        }
        else if ( ((v32 = v112[0], v33 = v106, v112[0]) || (**(_BYTE **)(a1 + 632) & 4) != 0) && v106 == 1 )
        {
          LOBYTE(v34) = sub_360180(a1, v14, a4, &v104, v89, v112[0], (int *)&a8, a7);
          if ( !(_BYTE)v34 )
          {
LABEL_74:
            if ( v84 )
            {
              if ( !under_debugger )
                interr(3021);
              goto LABEL_129;
            }
            a3 += v102;
            v14 = v46 - v102;
            goto LABEL_63;
          }
        }
        else
        {
          *(_QWORD *)(a1 + 712) = v14;
          LOBYTE(v34) = sub_361380(
                          (_QWORD *)a1,
                          v14,
                          v46,
                          a4,
                          &v104,
                          &v96,
                          v89,
                          v33,
                          v32,
                          (int *)&a8,
                          a7,
                          (const char *)v97,
                          v81,
                          v31,
                          &v93,
                          v83);
          if ( !(_BYTE)v34 )
            goto LABEL_74;
        }
        v31 = (*(_QWORD *)(a1 + 32) == 0) + *(_QWORD *)(a1 + 32) - 1LL;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 64LL))(a1, 9);
        v35 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
        if ( v35 == sub_35CB90 )
        {
          v36 = *(_QWORD *)(a1 + 32);
          v37 = 2;
          if ( v36 )
            v37 = v36-- + 1;
          v38 = *(_QWORD *)(a1 + 24);
          if ( *(_QWORD *)(a1 + 40) < v37 )
          {
            v51 = qvector_reserve(a1 + 24, v38, v37, 1);
            *(_QWORD *)(a1 + 24) = v51;
            v38 = v51;
          }
          *(_QWORD *)(a1 + 32) = v37;
          *(_BYTE *)(v38 + v36) = 44;
          *(_BYTE *)(*(_QWORD *)(a1 + 24) + v36 + 1) = 0;
        }
        else
        {
          v35((_QWORD *)a1, 44);
        }
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 72LL))(a1, 9);
        ++v82;
        if ( !a3 )
        {
          v39 = 0;
          goto LABEL_87;
        }
        v39 = v93;
        if ( v93 )
          goto LABEL_87;
        v30 = v96;
        if ( HIDWORD(a8) )
        {
          if ( SHIDWORD(a8) <= v96 )
            break;
        }
        ++v87;
        v14 = v46;
      }
      v39 = 1;
LABEL_87:
      v61 = *(void **)(a1 + 24);
      v62 = (__int64)v61;
      if ( !v31 )
      {
        if ( v61 )
        {
          *(_QWORD *)(a1 + 32) = 0;
          qfree(v61);
          *(_QWORD *)(a1 + 24) = 0;
          *(_QWORD *)(a1 + 40) = 0;
        }
        if ( !v96 )
          goto LABEL_91;
LABEL_108:
        *(_QWORD *)(a1 + 712) = v46;
        v71 = sub_35CF70((_QWORD *)a1, v81, (const char *)v97);
        v34 = v71;
        if ( v39 )
        {
          v85 = v71;
          sub_382A40(a1, v46, 0);
          v34 = v85;
        }
        if ( !a3 )
          goto LABEL_69;
        v14 = v46;
        if ( a3 < v89 )
          goto LABEL_63;
LABEL_68:
        if ( (_BYTE)v34 )
          goto LABEL_69;
        continue;
      }
      break;
    }
    v69 = *(_QWORD *)(a1 + 32);
    v70 = v31 + 1;
    if ( v69 < v31 + 1 )
    {
      if ( *(_QWORD *)(a1 + 40) < v70 )
      {
        v62 = qvector_reserve(a1 + 24, *(_QWORD *)(a1 + 24), v31 + 1, 1);
        *(_QWORD *)(a1 + 24) = v62;
        v69 = *(_QWORD *)(a1 + 32);
      }
      memset((void *)(v62 + v69), 0, v70 - v69);
      *(_QWORD *)(a1 + 32) = v70;
      v61 = *(void **)(a1 + 24);
    }
    else if ( v70 != v69 )
    {
      *(_QWORD *)(a1 + 32) = v70;
    }
    *((_BYTE *)v61 + v31) = 0;
    if ( v96 )
      goto LABEL_108;
LABEL_91:
    if ( !a3 )
    {
      v34 = 0;
      goto LABEL_69;
    }
    v14 = v46;
    if ( a3 >= v89 )
      continue;
    break;
  }
  LOBYTE(v34) = 0;
LABEL_63:
  v55 = *(__int64 **)(a1 + 88);
  LODWORD(a8) = a8 & 0xFFFFFFFE;
  a10 &= ~1u;
  v56 = *v55;
  v90 = v34;
  v83 = *(_QWORD *)(*v55 + 1152);
  v57 = nbits(v14);
  v34 = v90;
  if ( v57 != 8 && *(_DWORD *)(v56 + 948) == 8 )
    v83 = *(_QWORD *)(v56 + 1160);
  if ( a3 )
  {
    v89 = 1;
    a4 = 1024;
    goto LABEL_68;
  }
LABEL_69:
  if ( v97 )
  {
    v92 = v34;
    *(_QWORD *)&v98 = 0;
    qfree(v97);
    return v92;
  }
  return v34;
}
