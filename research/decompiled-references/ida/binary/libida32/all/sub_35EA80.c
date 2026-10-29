__int64 __fastcall sub_35EA80(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned int a7,
        __int64 a8,
        int a9,
        unsigned int a10,
        char *a11,
        const char *a12,
        unsigned __int64 *a13)
{
  unsigned int v14; // r14d
  int v17; // eax
  int v18; // edx
  int v19; // eax
  unsigned int v20; // eax
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
  unsigned int v33; // eax
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
  int v45; // r12d
  unsigned int v46; // r12d
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
  unsigned int v59; // eax
  __int64 v60; // rcx
  void *v61; // rdi
  __int64 v62; // rax
  unsigned __int64 v63; // rsi
  __int64 v64; // rdi
  __int64 v65; // rax
  __int64 v66; // rdx
  unsigned __int64 v67; // rdx
  unsigned __int64 v68; // r14
  _BOOL4 v69; // eax
  __int64 v70; // rbx
  char v71; // dl
  unsigned int v72; // eax
  char *s; // [rsp+8h] [rbp-158h]
  bool v74; // [rsp+17h] [rbp-149h]
  __int64 v75; // [rsp+18h] [rbp-148h]
  unsigned __int64 v76; // [rsp+20h] [rbp-140h]
  const char *v77; // [rsp+28h] [rbp-138h]
  int v78; // [rsp+30h] [rbp-130h]
  int v79; // [rsp+34h] [rbp-12Ch]
  __int64 v80; // [rsp+38h] [rbp-128h]
  unsigned __int64 *v81; // [rsp+40h] [rbp-120h]
  bool v82; // [rsp+50h] [rbp-110h]
  unsigned int v83; // [rsp+58h] [rbp-108h]
  int v84; // [rsp+5Ch] [rbp-104h]
  unsigned int v86; // [rsp+68h] [rbp-F8h]
  unsigned __int8 v87; // [rsp+68h] [rbp-F8h]
  unsigned __int8 v89; // [rsp+6Ch] [rbp-F4h]
  char v90; // [rsp+77h] [rbp-E9h] BYREF
  __int16 v91; // [rsp+78h] [rbp-E8h] BYREF
  char v92; // [rsp+7Ah] [rbp-E6h]
  int v93; // [rsp+7Ch] [rbp-E4h] BYREF
  void *v94; // [rsp+80h] [rbp-E0h] BYREF
  __int128 v95; // [rsp+88h] [rbp-D8h]
  void *ptr; // [rsp+A0h] [rbp-C0h] BYREF
  __int128 v97; // [rsp+A8h] [rbp-B8h]
  _QWORD *v98; // [rsp+C0h] [rbp-A0h] BYREF
  int v99; // [rsp+C8h] [rbp-98h]
  unsigned int v100; // [rsp+CCh] [rbp-94h]
  __m128i v101; // [rsp+D0h] [rbp-90h] BYREF
  __int64 v102; // [rsp+E0h] [rbp-80h]
  int v103; // [rsp+E8h] [rbp-78h]
  unsigned int v104; // [rsp+ECh] [rbp-74h]
  unsigned int v105; // [rsp+F0h] [rbp-70h]
  __int64 *v106; // [rsp+F8h] [rbp-68h]
  int v107; // [rsp+100h] [rbp-60h]
  unsigned int v108; // [rsp+104h] [rbp-5Ch]
  unsigned __int8 v109[8]; // [rsp+108h] [rbp-58h] BYREF
  _BYTE v110[24]; // [rsp+110h] [rbp-50h] BYREF
  unsigned __int64 v111; // [rsp+128h] [rbp-38h]

  v14 = a2;
  s = a11;
  v80 = a5;
  v77 = a12;
  v86 = a6;
  v81 = a13;
  v111 = __readfsqword(0x28u);
  v17 = nbits(a2);
  v18 = v17 + 14;
  v19 = v17 + 7;
  if ( v19 < 0 )
    v19 = v18;
  v20 = v19 >> 3;
  v79 = v20;
  if ( !a5 || !a6 || v20 && !is_mul_ok(a6, v20) )
  {
    v70 = **(_QWORD **)(a1 + 88);
    v80 = *(_QWORD *)(v70 + 984);
    v81 = nullptr;
    v86 = 1;
    if ( (unsigned int)nbits(a2) != 8 && *(_DWORD *)(v70 + 780) == 8 )
      v80 = *(_QWORD *)(v70 + 992);
  }
  v78 = 1023;
  if ( !HIDWORD(a8) )
    v78 = (unsigned __int16)getinf(42);
  v94 = nullptr;
  v95 = 0;
  if ( s )
  {
    v21 = strlen(s);
    v22 = v21 + 1;
    v23 = v21;
    v94 = (void *)qvector_reserve(&v94, 0, v21 + 1, 1);
    *(_QWORD *)&v95 = v22;
    memmove(v94, s, v23);
    *((_BYTE *)v94 + v23) = 0;
  }
  if ( (a10 & 2) != 0 )
  {
    v71 = is_debugger_memory(a2);
    v72 = a10 & 0xFFFFFFFD;
    if ( !v71 )
      v72 = a10;
    a10 = v72;
  }
  v83 = 0;
  v84 = 0;
  v24 = a10 & 0xFFFFFFFD;
  if ( (a8 & 1) != 0 )
    v24 = a10;
  a10 = v24;
  v74 = v77 == nullptr;
  while ( 2 )
  {
    while ( 2 )
    {
      v25 = *(_QWORD *)(a1 + 88);
      v90 = 0;
      v93 = 0;
      v26 = **(_QWORD **)(v25 + 88);
      v27 = (_BYTE)v26 != 0;
      if ( !v74 && !(_BYTE)v26 )
        goto LABEL_17;
      v59 = v83;
      if ( !(_BYTE)v26 )
        v59 = (v14 - *(_DWORD *)(a1 + 16)) / v86;
      if ( (a8 & 4) == 0 )
        goto LABEL_17;
      v60 = 10;
      if ( (a8 & 0xC0) == 0 )
        v60 = (unsigned int)byte_2388074[((int)a8 >> 4) & 0xF];
      if ( !btoa32(v110, 20, v59, v60) )
        goto LABEL_17;
      if ( !s || !v27 )
      {
        v77 = v110;
LABEL_17:
        v28 = v80;
        if ( !v80 )
          goto LABEL_85;
        goto LABEL_18;
      }
      sub_3573A0((char **)&v94);
      v28 = v80;
      if ( !v80 )
      {
LABEL_85:
        LOBYTE(v34) = 0;
        goto LABEL_63;
      }
LABEL_18:
      v29 = *(_QWORD *)a1;
      *(_QWORD *)(a1 + 32) = 0;
      (*(void (__fastcall **)(__int64, __int64, __int64))(v29 + 56))(a1, v28, 32);
      v30 = v93;
      v31 = (*(_QWORD *)(a1 + 32) == 0) + *(_QWORD *)(a1 + 32) - 1LL;
      while ( 1 )
      {
        if ( v30 )
        {
          v40 = haystack;
          if ( *(_QWORD *)(a1 + 32) )
            v40 = *(const char **)(a1 + 24);
          v41 = tag_strlen(v40);
          if ( v78 - (unsigned __int8)getinf(40) <= v41 )
          {
            v46 = v14;
            v39 = 1;
            goto LABEL_87;
          }
        }
        if ( a3 < v86 )
        {
          v46 = v14;
          v39 = 0;
          goto LABEL_87;
        }
        v42 = *(_QWORD **)(a1 + 88);
        v109[0] = 0;
        v99 = 0;
        v98 = v42;
        v100 = v14;
        v102 = a4;
        v103 = 1;
        v104 = v86;
        v105 = a3;
        v106 = &a8;
        v107 = v79;
        v108 = a10;
        v101 = 0;
        if ( v81 && (v43 = v81[8], (v81[8] & 0xF) == 0xE) )
        {
          v92 = 0;
          v91 = 0;
          if ( !(unsigned __int8)get_tinfo_details(v43, 14, &v91) )
          {
            a3 = 0;
LABEL_61:
            LOBYTE(v34) = 0;
            if ( v30 )
            {
              sub_35CD10((__int64 *)(a1 + 24), v31);
              LOBYTE(v34) = sub_359C80((_QWORD *)a1, v77, (const char *)v94);
            }
            goto LABEL_63;
          }
          v63 = *v81;
          v64 = v98[11];
          v65 = *(_QWORD *)(v64 + 240);
          v66 = v65 + 16LL * *(_QWORD *)(v64 + 248);
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
          v101.m128i_i64[0] = sub_3593A0(
                                &ptr,
                                v109,
                                *(_DWORD *)(v64 + 224),
                                v63,
                                HIBYTE(v91),
                                v107,
                                *(_QWORD *)v65,
                                *(_QWORD *)(v65 + 8));
          v101.m128i_i64[0] = read_tinfo_bitfield_value(v81[8], v101.m128i_i64[0], (unsigned int)ptr);
          if ( !v92 )
            *(_DWORD *)v106 |= 2u;
          a3 = 0;
          v45 = v99;
        }
        else
        {
          v44 = sub_35A790(&v98);
          v45 = v99;
          a3 = v105 - v99;
          if ( !v44 )
            goto LABEL_61;
        }
        v46 = v14 + v45;
        if ( !v30 || a9 < 0 )
        {
          v47 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
          if ( v47 == sub_3598B0 )
          {
            v48 = *(_QWORD *)(a1 + 32);
            v49 = 2;
            if ( v48 )
              v49 = v48-- + 1;
            v50 = *(_QWORD *)(a1 + 24);
            if ( *(_QWORD *)(a1 + 40) < v49 )
            {
              v75 = v48;
              v76 = v49;
              v54 = qvector_reserve(a1 + 24, v50, v49, 1);
              *(_QWORD *)(a1 + 24) = v54;
              v48 = v75;
              v50 = v54;
              v49 = v76;
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
        v93 = v30 + 1;
        if ( v84 <= 1 && (unsigned __int8)is_manual(a4, (unsigned int)v84) )
        {
          v52 = *(unsigned int *)(a1 + 16);
          ptr = nullptr;
          v97 = 0;
          if ( get_forced_operand(&ptr, v52, 0) > 0 )
          {
            v53 = haystack;
            if ( (_QWORD)v97 )
              v53 = (const char *)ptr;
            (*(void (__fastcall **)(__int64, const char *, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, v53, 0);
          }
          if ( ptr )
          {
            *(_QWORD *)&v97 = 0;
            qfree(ptr);
          }
        }
        else if ( ((v32 = v109[0], v33 = v103, v109[0]) || (**(_BYTE **)(a1 + 480) & 4) != 0) && v103 == 1 )
        {
          LOBYTE(v34) = sub_35CDB0(a1, v14, a4, &v101, v86, v109[0], (int *)&a8, a7);
          if ( !(_BYTE)v34 )
          {
LABEL_74:
            if ( v81 )
            {
              if ( !under_debugger )
                interr(3021);
              goto LABEL_129;
            }
            a3 += v99;
            v14 = v46 - v99;
            goto LABEL_63;
          }
        }
        else
        {
          *(_DWORD *)(a1 + 524) = v14;
          LOBYTE(v34) = sub_35DF50(
                          (_QWORD *)a1,
                          v14,
                          v46,
                          a4,
                          &v101,
                          &v93,
                          v86,
                          v33,
                          v32,
                          (int *)&a8,
                          a7,
                          (const char *)v94,
                          v77,
                          v31,
                          &v90,
                          v80);
          if ( !(_BYTE)v34 )
            goto LABEL_74;
        }
        v31 = (*(_QWORD *)(a1 + 32) == 0) + *(_QWORD *)(a1 + 32) - 1LL;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 64LL))(a1, 9);
        v35 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
        if ( v35 == sub_3598B0 )
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
        ++v83;
        if ( !a3 )
        {
          v39 = 0;
          goto LABEL_87;
        }
        v39 = v90;
        if ( v90 )
          goto LABEL_87;
        v30 = v93;
        if ( HIDWORD(a8) )
        {
          if ( SHIDWORD(a8) <= v93 )
            break;
        }
        ++v84;
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
        if ( !v93 )
          goto LABEL_91;
LABEL_108:
        *(_DWORD *)(a1 + 524) = v46;
        v69 = sub_359C80((_QWORD *)a1, v77, (const char *)v94);
        v34 = v69;
        if ( v39 )
        {
          v82 = v69;
          sub_37EF30(a1, v46, 0);
          v34 = v82;
        }
        if ( !a3 )
          goto LABEL_69;
        v14 = v46;
        if ( a3 < v86 )
          goto LABEL_63;
LABEL_68:
        if ( (_BYTE)v34 )
          goto LABEL_69;
        continue;
      }
      break;
    }
    v67 = *(_QWORD *)(a1 + 32);
    v68 = v31 + 1;
    if ( v67 < v31 + 1 )
    {
      if ( *(_QWORD *)(a1 + 40) < v68 )
      {
        v62 = qvector_reserve(a1 + 24, *(_QWORD *)(a1 + 24), v31 + 1, 1);
        *(_QWORD *)(a1 + 24) = v62;
        v67 = *(_QWORD *)(a1 + 32);
      }
      memset((void *)(v62 + v67), 0, v68 - v67);
      *(_QWORD *)(a1 + 32) = v68;
      v61 = *(void **)(a1 + 24);
    }
    else if ( v68 != v67 )
    {
      *(_QWORD *)(a1 + 32) = v68;
    }
    *((_BYTE *)v61 + v31) = 0;
    if ( v93 )
      goto LABEL_108;
LABEL_91:
    if ( !a3 )
    {
      v34 = 0;
      goto LABEL_69;
    }
    v14 = v46;
    if ( a3 >= v86 )
      continue;
    break;
  }
  LOBYTE(v34) = 0;
LABEL_63:
  v55 = *(__int64 **)(a1 + 88);
  LODWORD(a8) = a8 & 0xFFFFFFFE;
  a10 &= ~1u;
  v56 = *v55;
  v87 = v34;
  v80 = *(_QWORD *)(*v55 + 984);
  v57 = nbits(v14);
  v34 = v87;
  if ( v57 != 8 && *(_DWORD *)(v56 + 780) == 8 )
    v80 = *(_QWORD *)(v56 + 992);
  if ( a3 )
  {
    v86 = 1;
    a4 = 1024;
    goto LABEL_68;
  }
LABEL_69:
  if ( v94 )
  {
    v89 = v34;
    *(_QWORD *)&v95 = 0;
    qfree(v94);
    return v89;
  }
  return v34;
}

