__int64 __fastcall sub_416660(__int64 *a1, __int64 a2)
{
  __int64 v2; // rcx
  char v3; // al
  __int64 v4; // r8
  _BOOL8 v5; // rdx
  unsigned int v7; // ecx
  char v8; // dl
  char v9; // al
  char v10; // dl
  int v12; // eax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r12
  __int64 v16; // r9
  char *v17; // rdi
  unsigned __int64 v18; // rbp
  __int64 v19; // r14
  unsigned __int64 v20; // rdx
  char v21; // r11
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // r9
  __int64 v25; // r13
  char *v26; // rsi
  __int64 v27; // r10
  __int64 v28; // r15
  __int64 v29; // rax
  unsigned __int8 v30; // al
  int v31; // ecx
  __int64 v32; // r15
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  void *v39; // rdi
  unsigned int v40; // r12d
  __int64 v41; // rbp
  __int64 v42; // r13
  __int64 v43; // rdi
  char *v44; // rsi
  __int64 v45; // r14
  int v46; // ebp
  __int64 v47; // rdx
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // r15
  __int64 v54; // rax
  __int64 v55; // rdx
  __m128i v56; // xmm0
  __int64 v57; // r14
  __int64 (__fastcall *v58)(_QWORD *, _QWORD *, int); // rax
  void *v59; // rdi
  __m128i *v60; // rax
  __m128i *v61; // r13
  __int64 v62; // rax
  int *v63; // r15
  int *v64; // rax
  __int64 v65; // r13
  void (__fastcall *v66)(__m128i **, const __m128i **, int); // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  void *v69; // rdi
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  int v74; // r9d
  unsigned int v75; // [rsp+0h] [rbp-E8h]
  __int64 v76; // [rsp+0h] [rbp-E8h]
  __int64 v77; // [rsp+0h] [rbp-E8h]
  char v78; // [rsp+0h] [rbp-E8h]
  int v79; // [rsp+0h] [rbp-E8h]
  unsigned int v80; // [rsp+8h] [rbp-E0h]
  unsigned int v81; // [rsp+8h] [rbp-E0h]
  unsigned __int64 v82; // [rsp+8h] [rbp-E0h]
  char v83; // [rsp+10h] [rbp-D8h]
  unsigned int v84; // [rsp+18h] [rbp-D0h]
  int v85; // [rsp+20h] [rbp-C8h] BYREF
  int v86; // [rsp+24h] [rbp-C4h] BYREF
  __int64 v87; // [rsp+28h] [rbp-C0h] BYREF
  __int64 v88; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v89; // [rsp+38h] [rbp-B0h] BYREF
  _QWORD v90[2]; // [rsp+40h] [rbp-A8h] BYREF
  __m128i v91; // [rsp+50h] [rbp-98h]
  __int128 v92; // [rsp+60h] [rbp-88h] BYREF
  __m128i v93; // [rsp+70h] [rbp-78h] BYREF
  __int128 v94; // [rsp+80h] [rbp-68h] BYREF
  __m128i v95; // [rsp+90h] [rbp-58h]
  unsigned __int64 v96; // [rsp+A8h] [rbp-40h]

  v2 = (unsigned int)(a2 - 1);
  v3 = *((_BYTE *)a1 + 52);
  v96 = __readfsqword(0x28u);
  v4 = (unsigned int)a2;
  v5 = (v3 & 0x10) != 0;
  LOBYTE(a2) = (unsigned int)v2 <= 1;
  if ( v5 == (unsigned int)v2 <= 1 )
    return 1;
  if ( !a1[1] )
  {
    v7 = 1;
    if ( ((_DWORD)v4 == 1) == v5 )
      return v7;
    v8 = v3;
    v9 = v3 & 0xEF;
    v10 = v8 | 0x10;
    if ( (_DWORD)v4 == 1 )
      v9 = v10;
LABEL_6:
    *((_BYTE *)a1 + 52) = v9;
    return 0;
  }
  if ( (unsigned int)v2 > 1 )
  {
    v39 = (void *)a1[3];
    if ( v39 )
    {
      a1[4] = 0;
      qfree(v39);
      a1[3] = 0;
      a1[5] = 0;
    }
    if ( (unsigned int)sub_535940(a1, a2, v5, v2, v4) != 2 )
    {
      v40 = (*((_BYTE *)a1 + 52) & 7) != 0 ? 1 << ((*((_BYTE *)a1 + 52) & 7) - 1) : (unsigned __int8)getinf(61);
      v41 = *a1;
      v42 = *a1 + 56 * a1[1];
      if ( v42 != *a1 )
      {
        do
        {
          v43 = *(_QWORD *)(v41 + 48);
          v41 += 56;
          *(_QWORD *)(v41 - 8) = extend_sign(v43, v40, 1);
        }
        while ( v41 != v42 );
      }
    }
    v9 = *((_BYTE *)a1 + 52) & 0xEF;
    goto LABEL_6;
  }
  v12 = v3 & 7;
  if ( v12 )
  {
    v13 = 8 << (v12 - 1);
    v14 = *a1;
    if ( v13 > 63 )
      v15 = -1;
    else
      v15 = (1LL << v13) - 1;
    v16 = *(_QWORD *)(*a1 + 48);
  }
  else
  {
    v75 = v4;
    v15 = -1;
    v30 = getinf(61);
    v20 = a1[1];
    v4 = v75;
    v31 = 8 * v30;
    if ( v31 <= 63 )
      v15 = (1LL << v31) - 1;
    v14 = *a1;
    v16 = *(_QWORD *)(*a1 + 48);
    if ( !v20 )
    {
      v16 &= v15;
      v17 = (char *)a1[3];
      LODWORD(v18) = 0;
      v25 = v16;
      v21 = 0;
      v32 = v15 & *(_QWORD *)(v14 - 8);
      goto LABEL_51;
    }
  }
  v84 = v4;
  v17 = (char *)a1[3];
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  do
  {
    v26 = v17;
    v25 = v16 & v15;
    if ( (v16 & v15) == 0 || (v25 & v19) != 0 )
    {
      if ( v17 )
      {
        a1[4] = 0;
        qfree(v17);
        a1[3] = 0;
        a1[5] = 0;
      }
      set_error_data(0, v25, v20, v14, v4, v16);
      return (unsigned int)-17;
    }
    v27 = *(_QWORD *)(v14 + 56 * v18 + 48) & v15;
    v28 = 56 * v18;
    v29 = v27;
    if ( !v27 )
    {
      v21 = 1;
      goto LABEL_19;
    }
    v4 = ~v25;
    if ( (v27 & ~v25) != 0 )
    {
      v22 = a1[5];
      v23 = a1[4];
      v4 = (unsigned int)(v18 - v20);
      LODWORD(v89) = v18 - v20;
      v24 = v23 + 1;
      if ( &v89 < (__int64 *)v17 || &v89 >= (__int64 *)&v17[4 * v22] )
      {
        if ( v22 >= v24 )
          goto LABEL_18;
        v83 = v21;
        v33 = v23 + 1;
        v26 = v17;
        v80 = v4;
      }
      else
      {
        if ( v22 >= v24 )
        {
LABEL_18:
          *(_DWORD *)&v26[4 * v23] = v4;
          v14 = *a1;
          v19 |= v25;
          v20 = v18;
          ++a1[4];
          v17 = (char *)a1[3];
          v16 = *(_QWORD *)(v14 + v28 + 48);
          v25 = v15 & v16;
          goto LABEL_19;
        }
        v83 = v21;
        v33 = v23 + 1;
        v80 = v4;
      }
      v34 = qvector_reserve(a1 + 3, v26, v33, 4);
      v21 = v83;
      v4 = v80;
      a1[3] = v34;
      v26 = (char *)v34;
      v23 = a1[4];
      goto LABEL_18;
    }
    if ( v20 + 1 == v18 && v25 == v27 )
    {
      if ( v17 )
      {
        a1[4] = 0;
        v76 = v27;
        qfree(v17);
        a1[3] = 0;
        v29 = v76;
        a1[5] = 0;
      }
      v77 = v29;
      set_error_data(1, v25, v20, v14, v4, v16);
      set_error_data(0, v77, v35, v36, v37, v38);
      return (unsigned int)-18;
    }
LABEL_19:
    ++v18;
  }
  while ( v18 < a1[1] );
  v4 = v84;
  v32 = v15 & *(_QWORD *)(v14 + v28 + 48);
  if ( (v25 & v19) != 0 )
    goto LABEL_105;
LABEL_51:
  v44 = v17;
  v45 = v32 & ~v25;
  if ( v45 )
  {
LABEL_105:
    if ( v17 )
    {
      a1[4] = 0;
      qfree(v17);
      a1[3] = 0;
      a1[5] = 0;
    }
    set_error_data(1, v25, v20, v14, v4, v16);
    set_error_data(0, v32, v70, v71, v72, v73);
    return (unsigned int)-18;
  }
  v46 = v18 - v20;
  v47 = a1[4];
  v48 = a1[5];
  LODWORD(v89) = v46;
  v49 = v47 + 1;
  if ( &v89 < (__int64 *)v17 || &v89 >= (__int64 *)&v17[4 * v48] )
  {
    if ( v48 < v49 )
    {
      v81 = v4;
      v50 = v47 + 1;
      v44 = v17;
      v78 = v21;
LABEL_56:
      v51 = qvector_reserve(a1 + 3, v44, v50, 4);
      v47 = a1[4];
      v4 = v81;
      a1[3] = v51;
      v21 = v78;
      v44 = (char *)v51;
    }
  }
  else if ( v48 < v49 )
  {
    v81 = v4;
    v50 = v47 + 1;
    v78 = v21;
    goto LABEL_56;
  }
  *(_DWORD *)&v44[4 * v47] = v46;
  v52 = a1[4];
  v53 = v52 + 1;
  a1[4] = v52 + 1;
  if ( (_DWORD)v4 != 2 )
  {
    v54 = *a1;
    goto LABEL_59;
  }
  if ( !v21 )
  {
LABEL_97:
    v67 = *a1;
    v54 = *a1;
    if ( v53 != 1 || (v68 = ~*(_QWORD *)(v67 + 48), (v15 & v68) != 0) )
    {
LABEL_59:
      v55 = v54 + 56 * a1[1];
      if ( v55 != v54 )
      {
        if ( ((56 * *((_BYTE *)a1 + 8)) & 8) == 0 || (*(_QWORD *)(v54 + 48) &= v15, v54 += 56, v54 != v55) )
        {
          do
          {
            *(_QWORD *)(v54 + 48) &= v15;
            *(_QWORD *)(v54 + 104) &= v15;
            v54 += 112;
          }
          while ( v54 != v55 );
        }
      }
      v9 = *((_BYTE *)a1 + 52) | 0x10;
      goto LABEL_6;
    }
    v69 = (void *)a1[3];
    if ( v69 )
    {
      a1[4] = 0;
      qfree(v69);
      a1[3] = 0;
      a1[5] = 0;
      v67 = *a1;
    }
    set_error_data(0, *(_QWORD *)(v67 + 48), v67, v68, v4, v49);
    return (unsigned int)-18;
  }
  if ( v52 )
  {
    v90[0] = a1;
    v90[1] = 0;
    v56 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_2B27AB0), (__m128i)(unsigned __int64)sub_412190);
    v91 = v56;
    if ( v52 == -1 )
    {
      v57 = a1[1];
      if ( v57 )
      {
        v58 = sub_412400;
        do
        {
          v88 = v53;
          v89 = 0;
          v86 = v57;
          if ( !v58 )
            std::__throw_bad_function_call();
          v47 = ((unsigned int (__fastcall *)(_QWORD *, __int64 *, __int64 *, int *))v91.m128i_i64[1])(
                  v90,
                  &v88,
                  &v89,
                  &v86);
          v58 = (__int64 (__fastcall *)(_QWORD *, _QWORD *, int))v91.m128i_i64[0];
          if ( (_DWORD)v47 )
          {
            if ( v91.m128i_i64[0] )
              ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v91.m128i_i64[0])(v90, v90, 3);
            goto LABEL_78;
          }
          ++v53;
        }
        while ( v57 != v53 );
        if ( v91.m128i_i64[0] )
          ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v91.m128i_i64[0])(v90, v90, 3);
      }
      goto LABEL_96;
    }
    v92 = 0;
    sub_412400(&v92, v90, 2);
    v93 = v56;
    v95 = 0u;
    v94 = 0;
    v60 = (__m128i *)operator new(0x20u);
    v60[1].m128i_i64[0] = 0;
    v61 = v60;
    v60[1].m128i_i64[1] = 0;
    *v60 = 0;
    if ( v93.m128i_i64[0] )
    {
      ((void (__fastcall *)(__m128i *, __int128 *, __int64))v93.m128i_i64[0])(v60, &v92, 2);
      v61[1] = _mm_load_si128(&v93);
    }
    *(_QWORD *)&v94 = v61;
    v62 = a1[4];
    v95 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_2B27AB8), (__m128i)(unsigned __int64)sub_370A10);
    if ( !v62 )
      goto LABEL_104;
    v48 = a1[3];
    v63 = (int *)(v48 + 4 * v62);
    if ( (int *)v48 == v63 )
      goto LABEL_104;
    v64 = (int *)a1[3];
    v47 = 0;
    do
    {
      v65 = *v64;
      if ( !(_DWORD)v65 )
      {
        v66 = (void (__fastcall *)(__m128i **, const __m128i **, int))sub_377BD0;
        goto LABEL_89;
      }
      ++v64;
      v47 += v65;
    }
    while ( v63 != v64 );
    if ( a1[1] == v47 )
    {
      v66 = (void (__fastcall *)(__m128i **, const __m128i **, int))sub_377BD0;
      do
      {
        v74 = *(_DWORD *)v48;
        v87 = v45;
        v85 = v74;
        if ( !v66 )
          std::__throw_bad_function_call();
        v82 = v48;
        v79 = v74;
        LODWORD(v65) = ((__int64 (__fastcall *)(__int128 *, __int64 *, int *))v95.m128i_i64[1])(&v94, &v87, &v85);
        v66 = (void (__fastcall *)(__m128i **, const __m128i **, int))v95.m128i_i64[0];
        if ( (_DWORD)v65 )
          break;
        v49 = v79;
        v48 = v82 + 4;
        v45 += v79;
      }
      while ( v63 != (int *)(v82 + 4) );
    }
    else
    {
LABEL_104:
      v66 = (void (__fastcall *)(__m128i **, const __m128i **, int))sub_377BD0;
      LODWORD(v65) = 0;
    }
LABEL_89:
    if ( v66 )
      v66((__m128i **)&v94, (const __m128i **)&v94, 3);
    if ( v93.m128i_i64[0] )
      ((void (__fastcall *)(__int128 *, __int128 *, __int64))v93.m128i_i64[0])(&v92, &v92, 3);
    if ( v91.m128i_i64[0] )
      ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v91.m128i_i64[0])(v90, v90, 3);
    if ( !(_DWORD)v65 )
    {
LABEL_96:
      v53 = a1[4];
      goto LABEL_97;
    }
  }
LABEL_78:
  v59 = (void *)a1[3];
  if ( v59 )
  {
    a1[4] = 0;
    qfree(v59);
    a1[3] = 0;
    a1[5] = 0;
  }
  set_error_data(0, 0, v47, v48, v4, v49);
  return (unsigned int)-15;
}
