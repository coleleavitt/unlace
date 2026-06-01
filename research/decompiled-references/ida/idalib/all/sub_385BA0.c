unsigned __int64 __fastcall sub_385BA0(__int64 a1, __int64 a2)
{
  __int64 *v2; // r13
  __int64 v4; // r12
  char v5; // dl
  int v6; // eax
  __int64 *v7; // rbp
  bool v8; // cc
  __int64 v9; // rax
  unsigned __int64 *v10; // rbx
  unsigned __int64 v11; // r14
  unsigned __int64 not_tail; // r15
  unsigned int flags; // ebp
  const char *v14; // rbp
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rax
  _BYTE *v17; // rax
  __int64 v18; // rbx
  unsigned int v19; // eax
  __int64 data_elsize; // rax
  size_t v21; // rax
  unsigned __int64 v22; // r8
  size_t v23; // r9
  size_t v24; // r10
  __int64 v25; // rsi
  size_t v26; // rdx
  __int64 v27; // rsi
  unsigned __int64 v28; // r9
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 (__fastcall *v35)(_QWORD *, char); // rax
  __int64 v36; // rbx
  unsigned __int64 v37; // rbp
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 fchunk; // rax
  void *v41; // rdx
  __m128i v42; // xmm1
  __m128 v43; // xmm0
  void *v44; // rax
  void (__fastcall *v45)(__int64, __int64, _QWORD); // rbx
  __int64 v46; // rax
  __int64 v47; // rbp
  char i; // al
  __int64 *v49; // rbp
  __int64 v50; // rbx
  __int64 v51; // rax
  unsigned __int64 *v52; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v53; // [rsp+10h] [rbp-D8h]
  size_t v54; // [rsp+10h] [rbp-D8h]
  unsigned __int64 v55; // [rsp+10h] [rbp-D8h]
  size_t v56; // [rsp+18h] [rbp-D0h]
  unsigned __int64 v57; // [rsp+18h] [rbp-D0h]
  unsigned __int64 v58; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v59; // [rsp+20h] [rbp-C8h]
  size_t v60; // [rsp+28h] [rbp-C0h]
  void *v61; // [rsp+30h] [rbp-B8h] BYREF
  __m128i v62; // [rsp+38h] [rbp-B0h] BYREF
  char v63[8]; // [rsp+50h] [rbp-98h] BYREF
  unsigned __int64 v64; // [rsp+58h] [rbp-90h]
  __int64 *v65[2]; // [rsp+70h] [rbp-78h] BYREF
  void *v66; // [rsp+80h] [rbp-68h]
  __int128 v67; // [rsp+88h] [rbp-60h]
  int v68; // [rsp+98h] [rbp-50h]
  __int16 v69; // [rsp+9Ch] [rbp-4Ch]
  char v70; // [rsp+9Eh] [rbp-4Ah]
  unsigned __int64 v71; // [rsp+A8h] [rbp-40h]

  v71 = __readfsqword(0x28u);
  v2 = *(__int64 **)(*(_QWORD *)(a2 + 632) + 32LL);
  if ( (unsigned __int64)v2[2] < *(_QWORD *)(a1 + 16) )
    return v71 - __readfsqword(0x28u);
  v4 = a1;
  v65[0] = (__int64 *)&v61;
  v61 = nullptr;
  v65[1] = v2;
  v66 = nullptr;
  v62 = 0;
  v67 = 0;
  v5 = getinf(32);
  v6 = 0x7FFFFFFF;
  if ( v5 != -1 )
    v6 = (unsigned __int8)getinf(32);
  v7 = v65[0];
  v68 = v6;
  v69 = 0;
  v8 = v65[0][2] <= 0x3FFuLL;
  v70 = 0;
  if ( v8 )
    *v7 = qvector_reserve(v65[0], *v65[0], 1024, 1);
  *(_QWORD *)(a1 + 168) = 0;
  v9 = *(_QWORD *)(a2 + 1672);
  v10 = *(unsigned __int64 **)(v9 + 2840);
  v52 = &v10[*(_QWORD *)(v9 + 2848)];
  if ( v10 == v52 )
  {
    if ( (*(_BYTE *)(a1 + 145) & 3) != 0 )
    {
LABEL_44:
      *(_QWORD *)(a1 + 184) = haystack;
      goto LABEL_31;
    }
    goto LABEL_41;
  }
  do
  {
    while ( 1 )
    {
      v11 = *v10;
      if ( v2[2] >= *v10 )
      {
        not_tail = *v10;
        if ( (get_flags_ex(*v10, 4) & 0x600) == 0x200 )
          not_tail = prev_not_tail(v11);
        flags = get_flags_ex(not_tail, 4);
        if ( (flags & 0x600) == 0x400 )
        {
          data_elsize = get_data_elsize(not_tail, flags, 0);
          if ( (get_flags_ex(v2[2] & (not_tail + data_elsize), 4) & 0x600) == 0x200 )
            not_tail = v11;
        }
        if ( (flags & 0x600) == 0x400 && (flags & 0xF0000000) == 0x50000000
          || (flags & 0x4000) != 0
          || (flags & 0xF00000) == 0x500000 )
        {
          sub_3856A0(v65, *(_QWORD *)(a1 + 16), not_tail, 8);
          if ( v62.m128i_i64[0] > 1uLL )
            break;
        }
      }
      if ( v52 == ++v10 )
        goto LABEL_24;
    }
    v14 = (const char *)v61;
    if ( *(_BYTE *)v61 != 10 )
    {
      if ( !*(_BYTE *)v61 )
        goto LABEL_23;
      v15 = *(_QWORD *)(a1 + 168);
      if ( v15 > 1 )
        goto LABEL_53;
      if ( v61 )
        goto LABEL_52;
      goto LABEL_22;
    }
    if ( *((_BYTE *)v61 + 1) )
    {
      v15 = *(_QWORD *)(a1 + 168);
      v14 = (char *)v61 + 1;
      if ( v15 <= 1 )
        goto LABEL_47;
LABEL_53:
      v27 = *(_QWORD *)(a1 + 160);
      v28 = v15 - 1;
      v29 = v15 + 1;
      if ( *(_QWORD *)(a1 + 176) < v15 + 1 )
      {
        v59 = v15 - 1;
        v57 = v15;
        v55 = v15 + 1;
        v31 = qvector_reserve(a1 + 160, v27, v29, 1);
        *(_QWORD *)(a1 + 160) = v31;
        v28 = v59;
        v27 = v31;
        v15 = v57;
        v29 = v55;
      }
      *(_QWORD *)(a1 + 168) = v29;
      *(_BYTE *)(v27 + v28) = 10;
      *(_BYTE *)(*(_QWORD *)(a1 + 160) + v15) = 0;
      if ( v14 )
      {
LABEL_52:
        v15 = *(_QWORD *)(a1 + 168);
LABEL_47:
        v53 = v15;
        v21 = strlen(v14);
        v22 = v53;
        v23 = v21;
        v24 = v21;
        if ( v53 )
        {
          v22 = v53 - 1;
          v24 = v21 + v53 - 1;
        }
        v25 = *(_QWORD *)(a1 + 160);
        v26 = v24 + 1;
        if ( *(_QWORD *)(a1 + 176) < v24 + 1 )
        {
          v60 = v21;
          v58 = v22;
          v56 = v24;
          v54 = v24 + 1;
          v30 = qvector_reserve(a1 + 160, v25, v26, 1);
          *(_QWORD *)(a1 + 160) = v30;
          v23 = v60;
          v25 = v30;
          v22 = v58;
          v24 = v56;
          v26 = v54;
        }
        *(_QWORD *)(a1 + 168) = v26;
        *(_BYTE *)(v25 + v24) = 0;
        memmove((void *)(v22 + *(_QWORD *)(a1 + 160)), v14, v23);
      }
LABEL_22:
      *(_BYTE *)(a1 + 192) = 4;
    }
LABEL_23:
    v62.m128i_i64[0] = 0;
    ++v10;
  }
  while ( v52 != v10 );
LABEL_24:
  v16 = *(_QWORD *)(a1 + 168);
  if ( (*(_BYTE *)(a1 + 145) & 3) != 0 )
    goto LABEL_43;
  if ( v16 <= 1 )
  {
LABEL_41:
    if ( *(_DWORD *)(a1 + 108) == -1 )
      goto LABEL_42;
    v39 = *(_QWORD *)(a1 + 16);
    if ( (get_flags_ex(v39, 4) & 0x600) == 0x200 )
      v39 = prev_not_tail(v39);
    if ( (~((unsigned __int16)get_flags_ex(v39, 4) >> 8) & 6) != 0
      || (fchunk = get_fchunk(*(_QWORD *)(a1 + 16))) != 0 && (*(_BYTE *)(fchunk + 16) & 0x40) != 0 )
    {
LABEL_42:
      v16 = *(_QWORD *)(a1 + 168);
    }
    else
    {
      if ( (_BYTE)v69 )
        goto LABEL_73;
      v47 = *(_QWORD *)(a1 + 16);
      for ( i = xrefblk_t_first_from(v63, v47, 1); i; i = xrefblk_t_next_from(v63) )
      {
        if ( !(unsigned __int8)is_mapped(v64) || !sub_3856A0(v65, v47, v64, 8) )
          v70 = 1;
        if ( (_BYTE)v69 )
          break;
      }
      if ( (_BYTE)v69 || v70 )
      {
LABEL_73:
        if ( (_QWORD)v67 )
        {
          v49 = v65[0];
          v50 = (v65[0][1] == 0) + v65[0][1] - 1;
          if ( v65[0][2] < (unsigned __int64)(v50 + 5) )
            *v49 = qvector_reserve(v65[0], *v65[0], v50 + 5, 1);
          v51 = *v49;
          v49[1] = v50 + 5;
          *(_BYTE *)(v51 + v50 + 4) = 0;
          *(_DWORD *)(*v49 + v50) = 774778400;
        }
      }
      v16 = *(_QWORD *)(a1 + 168);
      if ( (unsigned __int64)(v65[0][1] - 2) <= 0x7FFFFFFFFFFFFFFELL )
      {
        v41 = *(void **)(a1 + 160);
        v42 = _mm_loadu_si128(&v62);
        *(_BYTE *)(a1 + 192) = 4;
        v43 = _mm_loadh_ps((const double *)(a1 + 176));
        v44 = v61;
        *(__m128i *)(a1 + 168) = v42;
        *(_QWORD *)(a1 + 160) = v44;
        v16 = v62.m128i_i64[0];
        v61 = v41;
        v62 = (__m128i)v43;
      }
    }
LABEL_43:
    if ( v16 )
      goto LABEL_26;
    goto LABEL_44;
  }
LABEL_26:
  v17 = *(_BYTE **)(a1 + 160);
  *(_QWORD *)(a1 + 184) = v17;
  if ( *v17 )
  {
    v18 = *(_QWORD *)(a1 + 16);
    if ( (get_flags_ex(v18, 4) & 0x600) == 0x200 )
      v18 = prev_not_tail(v18);
    v19 = get_flags_ex(v18, 4);
    if ( (v19 & 0x600) == 0x400
      && (v32 = get_data_elsize(v18, v19, 0), (get_flags_ex(v2[2] & (v18 + v32), 4) & 0x600) == 0x200) )
    {
      v33 = *(unsigned __int8 *)(a1 + 192);
      sub_380B50(a1, v33);
      while ( 1 )
      {
        v34 = *(_QWORD *)v4;
        if ( !**(_BYTE **)(v4 + 184) )
          break;
        v35 = *(__int64 (__fastcall **)(_QWORD *, char))(v34 + 96);
        if ( v35 == sub_35CB90 )
        {
          v36 = *(_QWORD *)(v4 + 32);
          v37 = 2;
          if ( v36 )
            v37 = v36-- + 1;
          v33 = *(_QWORD *)(v4 + 24);
          if ( *(_QWORD *)(v4 + 40) < v37 )
          {
            v38 = qvector_reserve(v4 + 24, v33, v37, 1);
            *(_QWORD *)(v4 + 24) = v38;
            v33 = v38;
          }
          *(_QWORD *)(v4 + 32) = v37;
          *(_BYTE *)(v33 + v36) = 32;
          *(_BYTE *)(*(_QWORD *)(v4 + 24) + v36 + 1) = 0;
        }
        else
        {
          v33 = 32;
          v35((_QWORD *)v4, 32);
        }
        a1 = v4;
        sub_380C70(v4);
      }
      v45 = *(void (__fastcall **)(__int64, __int64, _QWORD))(v34 + 56);
      v46 = closing_comment(a1, v33);
      v45(v4, v46, 0);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 72LL))(v4, *(unsigned __int8 *)(v4 + 192));
    }
    else
    {
      *(_DWORD *)(a1 + 144) |= 0x100u;
    }
  }
LABEL_31:
  if ( v66 )
  {
    *(_QWORD *)&v67 = 0;
    qfree(v66);
  }
  if ( v61 )
  {
    v62.m128i_i64[0] = 0;
    qfree(v61);
  }
  return v71 - __readfsqword(0x28u);
}
