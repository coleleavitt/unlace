__int64 __fastcall sub_358010(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        __int64 *a6,
        char a7,
        __int64 *a8,
        __int64 a9)
{
  unsigned int v10; // r14d
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  char v16; // al
  __int64 v17; // rcx
  char *v18; // r14
  unsigned __int64 v20; // rdx
  unsigned int v21; // r12d
  int v22; // eax
  __int64 encoding_name; // rax
  __int64 v24; // rbp
  unsigned int v25; // r12d
  unsigned int v26; // eax
  __int64 v27; // rdx
  unsigned int v28; // ecx
  __int64 v29; // rax
  int v30; // r8d
  __int64 v31; // rsi
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  size_t v34; // rax
  __int64 v35; // r8
  size_t v36; // r9
  size_t v37; // r10
  __int64 v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rax
  unsigned __int32 v41; // ebx
  unsigned __int64 v42; // rdx
  int v43; // eax
  int v44; // esi
  int v45; // eax
  int v46; // ebp
  __int64 v47; // rdi
  int flags; // eax
  __int64 v49; // rcx
  int v50; // r8d
  int v51; // r9d
  char *v52; // rdi
  __int64 v53; // rdx
  unsigned __int64 v54; // rax
  int v55; // edx
  int v56; // eax
  int v57; // edx
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // r12
  __int64 v60; // rsi
  __int64 v61; // rax
  __int64 v62; // rax
  int v63; // [rsp+0h] [rbp-148h]
  int v64; // [rsp+8h] [rbp-140h]
  int v65[2]; // [rsp+8h] [rbp-140h]
  int v66[2]; // [rsp+8h] [rbp-140h]
  int v67; // [rsp+10h] [rbp-138h]
  int v68; // [rsp+10h] [rbp-138h]
  int v69; // [rsp+18h] [rbp-130h]
  unsigned int v70; // [rsp+18h] [rbp-130h]
  int v71; // [rsp+18h] [rbp-130h]
  __int64 v72; // [rsp+18h] [rbp-130h]
  int v73; // [rsp+20h] [rbp-128h]
  _BYTE v74[9]; // [rsp+27h] [rbp-121h]
  int v75; // [rsp+28h] [rbp-120h]
  int v76[2]; // [rsp+30h] [rbp-118h]
  int v77; // [rsp+38h] [rbp-110h]
  int v78; // [rsp+40h] [rbp-108h]
  void *v79; // [rsp+48h] [rbp-100h]
  _QWORD *v80; // [rsp+50h] [rbp-F8h]
  int v81; // [rsp+58h] [rbp-F0h]
  __int64 v82; // [rsp+58h] [rbp-F0h]
  int v83; // [rsp+60h] [rbp-E8h]
  size_t v84; // [rsp+60h] [rbp-E8h]
  int v85; // [rsp+68h] [rbp-E0h]
  size_t v86; // [rsp+68h] [rbp-E0h]
  int v87; // [rsp+70h] [rbp-D8h]
  int v88; // [rsp+78h] [rbp-D0h]
  int v89; // [rsp+7Ch] [rbp-CCh] BYREF
  __m128i v90; // [rsp+80h] [rbp-C8h] BYREF
  int v91; // [rsp+90h] [rbp-B8h]
  int v92; // [rsp+98h] [rbp-B0h]
  char *v93; // [rsp+A0h] [rbp-A8h] BYREF
  int v94; // [rsp+A8h] [rbp-A0h]
  int v95; // [rsp+B0h] [rbp-98h]
  int v96; // [rsp+B8h] [rbp-90h]
  __m128i v97; // [rsp+C0h] [rbp-88h] BYREF
  __int64 v98; // [rsp+D0h] [rbp-78h]
  unsigned int v99; // [rsp+D8h] [rbp-70h]
  unsigned int v100; // [rsp+DCh] [rbp-6Ch]
  __int64 v101; // [rsp+E0h] [rbp-68h]
  unsigned __int32 v102; // [rsp+E8h] [rbp-60h]
  int v103; // [rsp+ECh] [rbp-5Ch]
  char v104; // [rsp+F0h] [rbp-58h]
  char v105; // [rsp+F8h] [rbp-50h]
  char s[8]; // [rsp+100h] [rbp-48h] BYREF
  unsigned __int64 v107; // [rsp+108h] [rbp-40h]

  v10 = a3;
  *(_QWORD *)v76 = a4;
  v80 = (_QWORD *)a9;
  v107 = __readfsqword(0x28u);
  v64 = *(_DWORD *)(a1 + 1232) & 4;
  if ( a4 < 0 )
  {
    flags = get_flags_ex(a3, 4);
    if ( (flags & 0x600) == 0x400 && (flags & 0xF0000000) == 0x50000000 )
    {
      *(_QWORD *)v76 = (unsigned int)get_item_end(v10, 4, 1024, v49) - v10;
      if ( !v64 )
      {
        v55 = nbits(v10);
        v56 = v55 + 14;
        v57 = v55 + 7;
        if ( v57 >= 0 )
          v56 = v57;
        *(_QWORD *)v76 *= v56 >> 3;
      }
    }
    else
    {
      *(_QWORD *)v76 = get_max_strlit_length(
                         v10,
                         a5,
                         1,
                         v49,
                         v50,
                         v51,
                         v63,
                         v64,
                         v67,
                         v69,
                         v73,
                         v75,
                         v76[0],
                         v77,
                         v78,
                         v79,
                         a9,
                         v81,
                         v83,
                         v85,
                         v87,
                         v88,
                         v90.m128i_i32[0],
                         v90.m128i_i32[2],
                         v91,
                         v92,
                         (int)v93,
                         v94,
                         v95,
                         v96,
                         v97.m128i_i32[0],
                         v97.m128i_i32[2],
                         v98);
    }
  }
  if ( a6 )
  {
    if ( *a6 <= 0 || !*(_QWORD *)v76 )
      return -1;
    v13 = *a6 + 1;
    if ( a2[2] >= v13 )
      goto LABEL_6;
LABEL_75:
    *a2 = qvector_reserve(a2, *a2, v13, 1);
    goto LABEL_6;
  }
  if ( !*(_QWORD *)v76 )
    return -1;
  v13 = *(_QWORD *)v76 + 1LL;
  if ( a2[2] < (unsigned __int64)(*(_QWORD *)v76 + 1LL) )
    goto LABEL_75;
LABEL_6:
  a2[1] = 0;
  if ( !HIBYTE(a5) )
    a5 = sub_356100(a5);
  if ( (unsigned __int8)a5 > 0xAu )
  {
    v14 = 4LL * ((unsigned int)(unsigned __int8)a5 - 12 <= 2);
    v68 = a7 & 4;
    if ( (a7 & 4) != 0 )
      goto LABEL_12;
  }
  else
  {
    v14 = 2;
    if ( (a5 & 0xF8) == 0 )
      v14 = (unsigned int)(unsigned __int8)a5 - 4 <= 2;
    v68 = a7 & 4;
    if ( (a7 & 4) != 0 )
    {
LABEL_12:
      LODWORD(v15) = v76[0];
      if ( v64 )
        goto LABEL_13;
      goto LABEL_67;
    }
  }
  *(_QWORD *)v76 -= v14;
  v10 += v14;
  LODWORD(v15) = v76[0];
  if ( v64 )
    goto LABEL_13;
LABEL_67:
  *(_QWORD *)v66 = v14;
  v43 = nbits(v10);
  v14 = *(_QWORD *)v66;
  v44 = v43 + 14;
  v45 = v43 + 7;
  if ( v45 >= 0 )
    v44 = v45;
  v15 = *(_QWORD *)v76 / (unsigned __int64)(unsigned int)(v44 >> 3);
LABEL_13:
  *(_QWORD *)v65 = v14;
  v97.m128i_i64[0] = (__int64)off_2AFC558;
  v97.m128i_i64[1] = 0;
  v98 = a1;
  v99 = v10;
  v100 = v10 + v15;
  v101 = 0;
  v102 = v10;
  v103 = 0;
  v16 = getinf_flag(3, 64);
  v105 = 0;
  v104 = v16;
  if ( v10 == -1 || (v17 = *(_QWORD *)v65, v100 < v10) )
    sub_356190(3, 64, v10, v17);
  if ( (*(_BYTE *)(a1 + 1232) & 2) != 0 )
    v104 = v16 ^ 1;
  if ( v68 )
  {
    v18 = s;
    v93 = s;
    if ( *(_QWORD *)v65 )
    {
      while ( (unsigned __int8)sub_894160(&v97, &v93) )
      {
        ++v18;
        sub_357520(a2);
        if ( &s[*(_QWORD *)v65] == v18 )
          goto LABEL_23;
      }
      return -1;
    }
  }
LABEL_23:
  if ( a8 )
  {
    v20 = a2[2];
    if ( a8[2] < v20 )
      *a8 = qvector_reserve(a8, *a8, v20, 4);
  }
  if ( (a7 & 2) != 0 && (a7 & 1) != 0 )
  {
    if ( !under_debugger )
      interr(1430);
    goto LABEL_109;
  }
  v21 = (unsigned __int8)getinf_flag(3, 32);
  v22 = a5 >> 24;
  if ( !HIBYTE(a5) )
  {
    v46 = a5 & 3;
    v47 = 2;
    if ( v46 != 1 )
      v47 = 3 * (unsigned int)(v46 == 2) + 1;
    LOBYTE(v22) = get_default_encoding_idx(v47);
  }
  encoding_name = get_encoding_name((unsigned __int8)v22);
  sub_894230(&v93, &v97, encoding_name, v21, 0);
  v90 = 0u;
  v74[8] = 0;
  LOBYTE(v91) = getinf_flag(3, 64);
  *(_QWORD *)v74 = (a7 & 3) == 0;
  v24 = 0;
  v25 = 0;
  while ( 1 )
  {
    v26 = sub_894330(&v93, s, &v89);
    v28 = v26;
    if ( !v89 )
    {
      v70 = v26;
      if ( (*(unsigned __int8 (__fastcall **)(char *, _QWORD, __int64, _QWORD))(*(_QWORD *)v93 + 16LL))(
             v93,
             0,
             v27,
             v26) )
      {
        break;
      }
      v28 = v70;
      if ( v90.m128i_i32[2] < v102 || v102 >= v90.m128i_i32[2] && v90.m128i_i32[3] >= v103 )
      {
        if ( !sub_356450((__int64)&v93, &v90, &v97) )
          break;
        v89 = 0;
        v28 = v70;
      }
    }
    if ( !v28 )
    {
      if ( (a7 & 3) == 0 )
        goto LABEL_54;
      goto LABEL_42;
    }
    if ( v28 != 2 || (a7 & 3) == 0 )
      break;
    if ( (a7 & 1) == 0 && (a7 & 2) == 0 )
    {
LABEL_54:
      v34 = strlen(s);
      v35 = a2[1];
      v36 = v34;
      v37 = v34;
      if ( v35 )
      {
        --v35;
        v37 = v34 + v35;
      }
      v38 = *a2;
      v39 = v37 + 1;
      if ( a2[2] < v37 + 1 )
      {
        v86 = v34;
        v84 = v37;
        v82 = v35;
        v72 = v37 + 1;
        v40 = qvector_reserve(a2, v38, v39, 1);
        v36 = v86;
        v37 = v84;
        *a2 = v40;
        v35 = v82;
        v38 = v40;
        v39 = v72;
      }
      a2[1] = v39;
      ++v25;
      *(_BYTE *)(v38 + v37) = 0;
      memmove((void *)(v35 + *a2), s, v36);
      goto LABEL_43;
    }
LABEL_42:
    v25 += put_cstring_cp();
LABEL_43:
    if ( a8 )
    {
      v29 = a8[1];
      v30 = v89;
      v31 = *a8;
      if ( a8[2] < (unsigned __int64)(v29 + 1) )
      {
        v71 = v89;
        v33 = qvector_reserve(a8, v31, v29 + 1, 4);
        v30 = v71;
        *a8 = v33;
        v31 = v33;
        v29 = a8[1];
      }
      *(_DWORD *)(v31 + 4 * v29) = v30;
      ++a8[1];
    }
    if ( a6 )
    {
      v32 = v25;
      if ( *a6 < (unsigned __int64)v25 )
        goto LABEL_61;
      v24 = (a2[1] == 0) + a2[1] - 1;
      if ( a8 )
        *(_QWORD *)&v74[1] = a8[1];
    }
  }
  if ( a6 )
  {
    v32 = v25;
LABEL_61:
    if ( *a6 < v32 )
    {
      v52 = (char *)*a2;
      v53 = *a2;
      if ( v24 )
      {
        v58 = a2[1];
        v59 = v24 + 1;
        if ( v58 < v24 + 1 )
        {
          if ( a2[2] < v59 )
          {
            v62 = qvector_reserve(a2, *a2, v24 + 1, 1);
            *a2 = v62;
            v52 = (char *)v62;
            v58 = a2[1];
          }
          memset(&v52[v58], 0, v59 - v58);
          a2[1] = v59;
          v53 = *a2;
        }
        else if ( v59 != v58 )
        {
          a2[1] = v59;
        }
        *(_BYTE *)(v53 + v24) = 0;
      }
      else if ( v52 )
      {
        a2[1] = 0;
        qfree(v52);
        *a2 = 0;
        a2[2] = 0;
      }
      if ( a8 )
      {
        v54 = a8[1];
        if ( v54 < *(_QWORD *)&v74[1] )
        {
          v60 = *a8;
          if ( (unsigned __int64)a8[2] < *(_QWORD *)&v74[1] )
          {
            v61 = qvector_reserve(a8, v60, *(_QWORD *)&v74[1], 4);
            *a8 = v61;
            v60 = v61;
            v54 = a8[1];
          }
          memset((void *)(v60 + 4 * v54), 0, 4 * (*(_QWORD *)&v74[1] - v54));
          a8[1] = *(_QWORD *)&v74[1];
        }
        else if ( *(_QWORD *)&v74[1] != v54 )
        {
          a8[1] = *(_QWORD *)&v74[1];
        }
      }
      *a6 = 0;
      if ( !v80 )
        return (a2[1] == 0) + a2[1] - 1;
LABEL_63:
      v41 = v100 - v102;
      v42 = v41 * ((int)nbits(v99) >> 3) + (v103 >> 3);
      if ( *(_QWORD *)v76 >= v42 )
      {
        *v80 = *(_QWORD *)v76 - v42;
        return (a2[1] == 0) + a2[1] - 1;
      }
      if ( !under_debugger )
        interr(1431);
LABEL_109:
      BUG();
    }
  }
  if ( v80 )
    goto LABEL_63;
  return (a2[1] == 0) + a2[1] - 1;
}

