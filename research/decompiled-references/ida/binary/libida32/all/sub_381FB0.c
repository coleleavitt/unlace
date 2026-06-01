unsigned __int64 __fastcall sub_381FB0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 *v3; // rax
  char v4; // dl
  int v5; // eax
  __int64 *v6; // rbp
  bool v7; // cc
  __int64 v8; // rax
  unsigned int *v9; // rbp
  unsigned int *v10; // r13
  unsigned int v11; // r15d
  unsigned int not_tail; // r14d
  unsigned int flags; // ebx
  const char *v14; // rbx
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // rax
  _BYTE *v17; // rax
  unsigned int v18; // ebx
  unsigned int v19; // eax
  int data_elsize; // eax
  size_t v21; // rax
  size_t v22; // r8
  size_t v23; // r9
  __int64 v24; // rsi
  size_t v25; // rdx
  __int64 v26; // rsi
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned int v32; // ebx
  __int64 fchunk; // rax
  void *v34; // rdx
  __m128i v35; // xmm1
  __m128 v36; // xmm0
  void *v37; // rax
  int v38; // eax
  __int64 v39; // rsi
  __int64 v40; // rax
  __int64 (__fastcall *v41)(_QWORD *, char); // rax
  __int64 v42; // rbx
  unsigned __int64 v43; // rbp
  __int64 v44; // rax
  void (__fastcall *v45)(__int64, __int64, _QWORD); // rbx
  __int64 v46; // rax
  unsigned int v47; // ebp
  char i; // al
  __int64 *v49; // rbp
  __int64 v50; // rbx
  __int64 v51; // r14
  unsigned __int64 v52; // r13
  __int64 v53; // rax
  size_t v54; // [rsp+8h] [rbp-C0h]
  size_t v55; // [rsp+10h] [rbp-B8h]
  size_t v56; // [rsp+18h] [rbp-B0h]
  _BYTE v57[4]; // [rsp+24h] [rbp-A4h] BYREF
  unsigned int v58; // [rsp+28h] [rbp-A0h]
  void *v59; // [rsp+30h] [rbp-98h] BYREF
  __m128i v60; // [rsp+38h] [rbp-90h] BYREF
  __int64 *v61[2]; // [rsp+50h] [rbp-78h] BYREF
  void *ptr; // [rsp+60h] [rbp-68h]
  __int128 v63; // [rsp+68h] [rbp-60h]
  int v64; // [rsp+78h] [rbp-50h]
  __int16 v65; // [rsp+7Ch] [rbp-4Ch]
  char v66; // [rsp+7Eh] [rbp-4Ah]
  unsigned __int64 v67; // [rsp+88h] [rbp-40h]

  v2 = a1;
  v67 = __readfsqword(0x28u);
  v60 = 0;
  v59 = nullptr;
  v61[0] = (__int64 *)&v59;
  ptr = nullptr;
  v3 = *(__int64 **)(*(_QWORD *)(a2 + 544) + 32LL);
  v63 = 0;
  v61[1] = v3;
  v4 = getinf(32);
  v5 = 0x7FFFFFFF;
  if ( v4 != -1 )
    v5 = (unsigned __int8)getinf(32);
  v6 = v61[0];
  v64 = v5;
  v65 = 0;
  v7 = v61[0][2] <= 0x3FFuLL;
  v66 = 0;
  if ( v7 )
    *v6 = qvector_reserve(v61[0], *v61[0], 1024, 1);
  *(_QWORD *)(a1 + 168) = 0;
  v8 = *(_QWORD *)(a2 + 1480);
  v9 = *(unsigned int **)(v8 + 2640);
  v10 = &v9[*(_QWORD *)(v8 + 2648)];
  if ( v9 == v10 )
  {
    if ( (*(_BYTE *)(a1 + 145) & 3) != 0 )
    {
LABEL_48:
      *(_QWORD *)(a1 + 184) = haystack;
      goto LABEL_49;
    }
    goto LABEL_45;
  }
  do
  {
    while ( 1 )
    {
      v11 = *v9;
      not_tail = *v9;
      if ( (get_flags_ex(*v9, 4) & 0x600) == 0x200 )
        not_tail = prev_not_tail(v11);
      flags = get_flags_ex(not_tail, 4);
      if ( (flags & 0x600) == 0x400 )
      {
        data_elsize = get_data_elsize(not_tail, flags, 0);
        if ( (get_flags_ex(not_tail + data_elsize, 4) & 0x600) == 0x200 )
          not_tail = v11;
      }
      if ( (flags & 0x600) == 0x400 && (flags & 0xF0000000) == 0x50000000
        || (flags & 0x4000) != 0
        || (flags & 0xF00000) == 0x500000 )
      {
        sub_381AD0(v61, *(_DWORD *)(a1 + 16), not_tail, 8);
        if ( v60.m128i_i64[0] > 1uLL )
          break;
      }
      if ( v10 == ++v9 )
        goto LABEL_21;
    }
    v14 = (const char *)v59;
    if ( *(_BYTE *)v59 != 10 )
    {
      if ( !*(_BYTE *)v59 )
        goto LABEL_20;
      v15 = *(_QWORD *)(a1 + 168);
      if ( v15 > 1 )
        goto LABEL_40;
      if ( v59 )
        goto LABEL_43;
      goto LABEL_19;
    }
    if ( *((_BYTE *)v59 + 1) )
    {
      v15 = *(_QWORD *)(a1 + 168);
      v14 = (char *)v59 + 1;
      if ( v15 <= 1 )
        goto LABEL_35;
LABEL_40:
      v26 = *(_QWORD *)(a1 + 160);
      v27 = v15 - 1;
      v28 = v15 + 1;
      if ( *(_QWORD *)(a1 + 176) < v15 + 1 )
      {
        v30 = qvector_reserve(a1 + 160, v26, v28, 1);
        *(_QWORD *)(a1 + 160) = v30;
        v27 = v15 - 1;
        v26 = v30;
        v28 = v15 + 1;
      }
      *(_QWORD *)(a1 + 168) = v28;
      *(_BYTE *)(v26 + v27) = 10;
      *(_BYTE *)(*(_QWORD *)(a1 + 160) + v15) = 0;
      if ( v14 )
      {
LABEL_43:
        v15 = *(_QWORD *)(a1 + 168);
LABEL_35:
        v21 = strlen(v14);
        v22 = v21;
        v23 = v21;
        if ( v15 )
        {
          --v15;
          v23 = v21 + v15;
        }
        v24 = *(_QWORD *)(a1 + 160);
        v25 = v23 + 1;
        if ( *(_QWORD *)(a1 + 176) < v23 + 1 )
        {
          v56 = v21;
          v55 = v23;
          v54 = v23 + 1;
          v31 = qvector_reserve(a1 + 160, v24, v25, 1);
          *(_QWORD *)(a1 + 160) = v31;
          v22 = v56;
          v24 = v31;
          v23 = v55;
          v25 = v54;
        }
        *(_QWORD *)(a1 + 168) = v25;
        *(_BYTE *)(v24 + v23) = 0;
        memmove((void *)(v15 + *(_QWORD *)(a1 + 160)), v14, v22);
      }
LABEL_19:
      *(_BYTE *)(a1 + 192) = 4;
    }
LABEL_20:
    v60.m128i_i64[0] = 0;
    ++v9;
  }
  while ( v10 != v9 );
LABEL_21:
  v16 = *(_QWORD *)(a1 + 168);
  if ( (*(_BYTE *)(a1 + 145) & 3) != 0 )
    goto LABEL_47;
  if ( v16 <= 1 )
  {
LABEL_45:
    if ( *(_DWORD *)(a1 + 108) == -1 )
      goto LABEL_46;
    v32 = *(_DWORD *)(a1 + 16);
    if ( (get_flags_ex(v32, 4) & 0x600) == 0x200 )
      v32 = prev_not_tail(v32);
    if ( (~((unsigned __int16)get_flags_ex(v32, 4) >> 8) & 6) != 0
      || (fchunk = get_fchunk(*(unsigned int *)(a1 + 16))) != 0 && (*(_BYTE *)(fchunk + 8) & 0x40) != 0 )
    {
LABEL_46:
      v16 = *(_QWORD *)(a1 + 168);
    }
    else
    {
      if ( (_BYTE)v65 )
        goto LABEL_60;
      v47 = *(_DWORD *)(a1 + 16);
      for ( i = xrefblk_t_first_from(v57, v47, 1); i; i = xrefblk_t_next_from(v57) )
      {
        if ( !(unsigned __int8)is_mapped(v58) || !sub_381AD0(v61, v47, v58, 8) )
          v66 = 1;
        if ( (_BYTE)v65 )
          goto LABEL_60;
      }
      if ( (_BYTE)v65 || v66 )
      {
LABEL_60:
        if ( (_QWORD)v63 )
        {
          v49 = v61[0];
          v50 = v61[0][1];
          if ( v50 )
          {
            v51 = v50 + 3;
            v52 = v50 + 4;
            --v50;
          }
          else
          {
            v52 = 5;
            v51 = 4;
          }
          if ( v61[0][2] < v52 )
            *v49 = qvector_reserve(v61[0], *v61[0], v52, 1);
          v53 = *v49;
          v49[1] = v52;
          *(_BYTE *)(v53 + v51) = 0;
          *(_DWORD *)(*v49 + v50) = 774778400;
        }
      }
      v16 = *(_QWORD *)(a1 + 168);
      if ( (unsigned __int64)(v61[0][1] - 2) <= 0x7FFFFFFFFFFFFFFELL )
      {
        v34 = *(void **)(a1 + 160);
        v35 = _mm_loadu_si128(&v60);
        *(_BYTE *)(a1 + 192) = 4;
        v36 = _mm_loadh_ps((const double *)(a1 + 176));
        v37 = v59;
        *(__m128i *)(a1 + 168) = v35;
        *(_QWORD *)(a1 + 160) = v37;
        v16 = v60.m128i_i64[0];
        v59 = v34;
        v60 = (__m128i)v36;
      }
    }
LABEL_47:
    if ( v16 )
      goto LABEL_23;
    goto LABEL_48;
  }
LABEL_23:
  v17 = *(_BYTE **)(a1 + 160);
  *(_QWORD *)(a1 + 184) = v17;
  if ( *v17 )
  {
    v18 = *(_DWORD *)(a1 + 16);
    if ( (get_flags_ex(v18, 4) & 0x600) == 0x200 )
      v18 = prev_not_tail(v18);
    v19 = get_flags_ex(v18, 4);
    if ( (v19 & 0x600) == 0x400 && (v38 = get_data_elsize(v18, v19, 0), (get_flags_ex(v18 + v38, 4) & 0x600) == 0x200) )
    {
      v39 = *(unsigned __int8 *)(a1 + 192);
      sub_37D0E0(a1, v39);
      while ( 1 )
      {
        v40 = *(_QWORD *)v2;
        if ( !**(_BYTE **)(v2 + 184) )
          break;
        v41 = *(__int64 (__fastcall **)(_QWORD *, char))(v40 + 96);
        if ( v41 == sub_3598B0 )
        {
          v42 = *(_QWORD *)(v2 + 32);
          v43 = 2;
          if ( v42 )
            v43 = v42-- + 1;
          v39 = *(_QWORD *)(v2 + 24);
          if ( *(_QWORD *)(v2 + 40) < v43 )
          {
            v44 = qvector_reserve(v2 + 24, v39, v43, 1);
            *(_QWORD *)(v2 + 24) = v44;
            v39 = v44;
          }
          *(_QWORD *)(v2 + 32) = v43;
          *(_BYTE *)(v39 + v42) = 32;
          *(_BYTE *)(*(_QWORD *)(v2 + 24) + v42 + 1) = 0;
        }
        else
        {
          v39 = 32;
          v41((_QWORD *)v2, 32);
        }
        a1 = v2;
        sub_37D200(v2);
      }
      v45 = *(void (__fastcall **)(__int64, __int64, _QWORD))(v40 + 56);
      v46 = closing_comment(a1, v39);
      v45(v2, v46, 0);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 72LL))(v2, *(unsigned __int8 *)(v2 + 192));
    }
    else
    {
      *(_DWORD *)(a1 + 144) |= 0x100u;
    }
  }
LABEL_49:
  if ( ptr )
  {
    *(_QWORD *)&v63 = 0;
    qfree(ptr);
  }
  if ( v59 )
  {
    v60.m128i_i64[0] = 0;
    qfree(v59);
  }
  return v67 - __readfsqword(0x28u);
}

