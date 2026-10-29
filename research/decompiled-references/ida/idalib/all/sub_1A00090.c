void __fastcall sub_1A00090(__int64 *a1, __int64 a2, unsigned int a3, int *a4, __int64 a5)
{
  int *v5; // r15
  int *v6; // r12
  char **v8; // rcx
  char *v9; // r13
  size_t v10; // rax
  unsigned __int64 v11; // rdx
  char **v12; // rdx
  __int64 v13; // r13
  _BYTE *v14; // rax
  signed __int64 v15; // rdx
  bool v16; // bl
  _BYTE *v17; // r13
  signed __int64 v18; // r12
  size_t v19; // rax
  _QWORD *v20; // rbx
  size_t v21; // r12
  __int64 v22; // rdx
  char *v23; // r13
  char *v24; // rcx
  __int64 v25; // rdx
  unsigned __int64 v26; // rsi
  __m128i v27; // xmm0
  char *v28; // rsi
  __m128i v29; // xmm1
  __m128i v30; // xmm2
  _QWORD *v31; // rax
  __int64 v32; // rdx
  signed __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  void *v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  void *v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rbx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  _QWORD *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // r12
  void *v58; // rax
  _QWORD *v59; // rax
  __int64 v60; // r9
  _BYTE *v61; // rax
  size_t v62; // r11
  _QWORD *v63; // r8
  _QWORD *v64; // rcx
  unsigned __int64 v65; // r9
  _BYTE *v66; // rsi
  size_t v67; // r10
  _BYTE *v68; // rdi
  char *v69; // rbx
  size_t j; // rsi
  _BYTE *v71; // rdi
  _BYTE *v72; // rdi
  size_t v73; // r8
  _BYTE *v74; // rcx
  _BYTE *v75; // rdi
  unsigned __int64 v76; // rax
  _BYTE *v77; // rdi
  unsigned __int64 v78; // rax
  _QWORD *v79; // rax
  __int64 v80; // [rsp+8h] [rbp-1A0h]
  __int64 v81; // [rsp+8h] [rbp-1A0h]
  unsigned __int64 v82; // [rsp+8h] [rbp-1A0h]
  unsigned __int64 v83; // [rsp+8h] [rbp-1A0h]
  size_t v84; // [rsp+8h] [rbp-1A0h]
  size_t v85; // [rsp+8h] [rbp-1A0h]
  unsigned __int64 v86; // [rsp+8h] [rbp-1A0h]
  size_t v87; // [rsp+8h] [rbp-1A0h]
  _QWORD *v88; // [rsp+8h] [rbp-1A0h]
  _QWORD *v90; // [rsp+10h] [rbp-198h]
  size_t v91; // [rsp+10h] [rbp-198h]
  size_t v92; // [rsp+18h] [rbp-190h]
  unsigned __int64 v93; // [rsp+18h] [rbp-190h]
  __int64 v94; // [rsp+28h] [rbp-180h] BYREF
  void *src; // [rsp+30h] [rbp-178h] BYREF
  size_t v96; // [rsp+38h] [rbp-170h]
  _QWORD v97[2]; // [rsp+40h] [rbp-168h] BYREF
  _QWORD v98[2]; // [rsp+50h] [rbp-158h] BYREF
  void *v99; // [rsp+60h] [rbp-148h]
  unsigned __int8 *v100[11]; // [rsp+70h] [rbp-138h] BYREF
  char v101; // [rsp+C8h] [rbp-E0h]
  unsigned int v102; // [rsp+D0h] [rbp-D8h]
  char v103; // [rsp+D4h] [rbp-D4h]
  void *ptr; // [rsp+E0h] [rbp-C8h] BYREF
  __int64 i; // [rsp+E8h] [rbp-C0h]
  _BYTE v106[184]; // [rsp+F0h] [rbp-B8h] BYREF

  v5 = &a4[a5];
  v6 = a4;
  ptr = v106;
  for ( i = 0x800000000LL; v5 != v6; LODWORD(i) = i + 1 )
  {
    while ( 1 )
    {
      v9 = sub_B13A60(*v6);
      v10 = 0;
      if ( v9 )
        v10 = strlen(v9);
      v11 = (unsigned int)i + 1LL;
      if ( v11 > HIDWORD(i) )
        break;
      ++v6;
      v8 = (char **)((char *)ptr + 16 * (unsigned int)i);
      *v8 = v9;
      v8[1] = (char *)v10;
      LODWORD(i) = i + 1;
      if ( v5 == v6 )
        goto LABEL_8;
    }
    ++v6;
    v92 = v10;
    sub_2237220(&ptr, v106, v11, 16);
    v12 = (char **)((char *)ptr + 16 * (unsigned int)i);
    *v12 = v9;
    v12[1] = (char *)v92;
  }
LABEL_8:
  sub_168B9F0((__int64)v98, a1, *(_DWORD *)(a2 + 24), 0xF2Cu, 0);
  v13 = *(_QWORD *)a2;
  if ( v101 )
  {
    sub_AE9DF0(v100, *(_QWORD *)a2, 5u);
  }
  else if ( v103 )
  {
    v40 = sub_168B9E0(v98);
    v44 = v99;
    if ( v99 )
    {
      v81 = v40;
      v44 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v99 + 32LL))(v99);
      v40 = v81;
    }
    src = v44;
    v45 = sub_1587BC0(v40, (__int64 *)&src, v40, v41, v42, v43);
    sub_AE9DF0((unsigned __int8 **)(*v45 + 32LL * v102 + 8), v13, 5u);
  }
  v14 = (_BYTE *)sub_22B6CA0(a3);
  v16 = a5 != 1;
  v17 = v14;
  v18 = v15;
  if ( v101 )
  {
    sub_AEC220(v100, v14, v15);
    if ( v101 )
    {
LABEL_35:
      sub_AE9DF0(v100, v16, 2u);
      goto LABEL_12;
    }
  }
  else
  {
    if ( !v103 )
      goto LABEL_12;
    v34 = sub_168B9E0(v98);
    v38 = v99;
    if ( v99 )
    {
      v80 = v34;
      v38 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v99 + 32LL))(v99);
      v34 = v80;
    }
    src = v38;
    v39 = sub_1587BC0(v34, (__int64 *)&src, v34, v35, v36, v37);
    sub_AEC220((unsigned __int8 **)(*v39 + 32LL * v102 + 8), v17, v18);
    if ( v101 )
      goto LABEL_35;
  }
  if ( v103 )
  {
    v57 = sub_168B9E0(v98);
    v58 = v99;
    if ( v99 )
      v58 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v99 + 32LL))(v99);
    src = v58;
    v59 = sub_1587BC0(v57, (__int64 *)&src, v53, v54, v55, v56);
    sub_AE9DF0((unsigned __int8 **)(*v59 + 32LL * v102 + 8), v16, 2u);
  }
LABEL_12:
  v19 = j__strlen(", ");
  LOBYTE(v97[0]) = 0;
  v20 = ptr;
  v21 = v19;
  v96 = 0;
  v22 = 16LL * (unsigned int)i;
  src = v97;
  v23 = (char *)ptr + v22;
  if ( ptr == (char *)ptr + v22 )
    goto LABEL_25;
  v24 = (char *)ptr;
  v25 = v19 * ((v22 >> 4) - 1);
  v26 = v23 - (_BYTE *)ptr - 16;
  if ( v26 <= 0x40 )
  {
    v31 = ptr;
  }
  else
  {
    v27 = 0;
    v28 = (char *)ptr + (v26 & 0xFFFFFFFFFFFFFFE0LL);
    do
    {
      v29 = _mm_loadu_si128((const __m128i *)(v24 + 8));
      v30 = _mm_loadu_si128((const __m128i *)(v24 + 24));
      v24 += 32;
      v27 = _mm_add_epi64(v27, _mm_unpacklo_epi64(v29, v30));
    }
    while ( v24 != v28 );
    v31 = (char *)ptr + 16 * (((unsigned __int64)(v23 - (_BYTE *)ptr - 16) >> 4) & 0xFFFFFFFFFFFFFFFELL);
    v25 += _mm_add_epi64(v27, _mm_srli_si128(v27, 8)).m128i_u64[0];
  }
  v32 = v31[1] + v25;
  if ( v23 != (char *)(v31 + 2) )
  {
    v32 += v31[3];
    if ( v23 != (char *)(v31 + 4) )
    {
      v32 += v31[5];
      if ( v23 != (char *)(v31 + 6) )
      {
        v32 += v31[7];
        if ( v23 != (char *)(v31 + 8) )
          v32 += v31[9];
      }
    }
  }
  if ( (unsigned __int64)v32 <= 0xF )
  {
    v33 = *((_QWORD *)ptr + 1);
    if ( v33 < 0 )
      goto LABEL_24;
    v66 = *(_BYTE **)ptr;
    v67 = *((_QWORD *)ptr + 1);
    v64 = v97;
    v62 = 0;
    v65 = 15;
    goto LABEL_59;
  }
  if ( v32 < 0 )
    std::__throw_length_error("basic_string::_M_create");
  v60 = 30;
  if ( (unsigned __int64)v32 >= 0x1E )
    v60 = v32;
  v82 = v60;
  v61 = (_BYTE *)operator new(v60 + 1);
  v62 = v96;
  v63 = src;
  v64 = v61;
  v65 = v82;
  if ( v96 )
  {
    if ( v96 != -1 )
    {
      v93 = v82;
      v91 = v96;
      v88 = src;
      v79 = memcpy(v61, src, v96 + 1);
      v65 = v93;
      v62 = v91;
      v63 = v88;
      v64 = v79;
    }
    if ( v63 == v97 )
      goto LABEL_57;
  }
  else
  {
    *v61 = *(_BYTE *)src;
    if ( v63 == v97 )
      goto LABEL_57;
  }
  v90 = v64;
  v83 = v65;
  operator delete(v63);
  v62 = v96;
  v64 = v90;
  v65 = v83;
LABEL_57:
  src = v64;
  v97[0] = v65;
  v33 = v20[1];
  v66 = (_BYTE *)*v20;
  if ( 0x7FFFFFFFFFFFFFFFLL - v62 < v33 )
    goto LABEL_24;
  v67 = v62 + v33;
LABEL_59:
  if ( v67 > v65 )
  {
    v87 = v67;
    sub_998B30((__int64)&src, v62, 0, v66, v33);
    v64 = src;
    v67 = v87;
  }
  else if ( v33 )
  {
    v68 = (char *)v64 + v62;
    if ( v33 == 1 )
    {
      *v68 = *v66;
      v64 = src;
    }
    else
    {
      v84 = v67;
      memcpy(v68, v66, v33);
      v64 = src;
      v67 = v84;
    }
  }
  v69 = (char *)(v20 + 2);
  v96 = v67;
  *((_BYTE *)v64 + v67) = 0;
  if ( v23 != v69 )
  {
    for ( j = v96; v21 <= 0x7FFFFFFFFFFFFFFFLL - v96; j = v96 )
    {
      v72 = src;
      v86 = v21 + j;
      v78 = src == v97 ? 15LL : v97[0];
      if ( v86 <= v78 )
      {
        if ( v21 )
        {
          v71 = (char *)src + j;
          if ( v21 == 1 )
            *v71 = 44;
          else
            memcpy(v71, ", ", v21);
          v72 = src;
        }
      }
      else
      {
        sub_998B30((__int64)&src, j, 0, ", ", v21);
        v72 = src;
      }
      v96 = v21 + j;
      v72[v86] = 0;
      v73 = *((_QWORD *)v69 + 1);
      v74 = *(_BYTE **)v69;
      if ( v73 > 0x7FFFFFFFFFFFFFFFLL - v96 )
        break;
      v75 = src;
      v85 = v73 + v96;
      if ( src == v97 )
        v76 = 15;
      else
        v76 = v97[0];
      if ( v85 > v76 )
      {
        sub_998B30((__int64)&src, v96, 0, v74, v73);
        v75 = src;
      }
      else if ( v73 )
      {
        v77 = (char *)src + v96;
        if ( v73 == 1 )
          *v77 = *v74;
        else
          memcpy(v77, v74, v73);
        v75 = src;
      }
      v69 += 16;
      v96 = v85;
      v75[v85] = 0;
      if ( v23 == v69 )
        goto LABEL_25;
    }
LABEL_24:
    std::__throw_length_error("basic_string::append");
  }
LABEL_25:
  if ( v101 )
  {
    sub_AEC220(v100, src, v96);
  }
  else if ( v103 )
  {
    v48 = sub_168B9E0(v98);
    v51 = (__int64)v99;
    if ( v99 )
      v51 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v99 + 32LL))(v99);
    v94 = v51;
    v52 = sub_1587BC0(v48, &v94, v46, v47, v49, v50);
    sub_AEC220((unsigned __int8 **)(*v52 + 32LL * v102 + 8), src, v96);
  }
  if ( src != v97 )
    operator delete(src);
  sub_15F7200(v98);
  if ( ptr != v106 )
    free(ptr);
}
