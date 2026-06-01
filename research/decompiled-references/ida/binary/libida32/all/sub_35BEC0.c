unsigned __int64 __fastcall sub_35BEC0(_QWORD *a1, unsigned int a2, unsigned __int64 a3)
{
  int v5; // eax
  int v6; // ebp
  int v7; // eax
  int v8; // ebp
  __int64 v9; // r12
  __int64 v10; // r14
  unsigned int v11; // ebp
  unsigned int v12; // r12d
  unsigned int wide_dword; // r8d
  char v14; // al
  char v15; // r12
  __int64 v17; // rax
  __int64 v18; // rdx
  void (__fastcall *v19)(_QWORD *, __int64, _QWORD); // rbp
  __int64 v20; // rax
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // rbp
  unsigned int v24; // r12d
  __int64 v25; // rdi
  int wide_byte; // eax
  __int64 v27; // rcx
  __int64 v28; // r8
  unsigned int v29; // ebp
  unsigned __int8 default_encoding_idx; // al
  __int64 encoding_name; // rax
  size_t v32; // rax
  __int64 v33; // r8
  size_t v34; // r9
  size_t v35; // r10
  _BYTE *v36; // rsi
  size_t v37; // rdx
  __int64 v38; // rbp
  unsigned __int64 v39; // rbp
  size_t v40; // r13
  __int64 v41; // r12
  size_t v42; // r14
  _BYTE *v43; // rsi
  const char *v44; // rsi
  void (__fastcall *v45)(_QWORD *, __int64, _QWORD); // rbp
  __int64 v46; // rax
  char *v47; // rsi
  void (__fastcall *v48)(_QWORD *, __int64, _QWORD); // r12
  __int64 v49; // rax
  __int64 v50; // [rsp-10h] [rbp-538h]
  char v51; // [rsp+0h] [rbp-528h]
  int v53; // [rsp+8h] [rbp-520h]
  size_t v54; // [rsp+8h] [rbp-520h]
  unsigned int v55; // [rsp+10h] [rbp-518h]
  __int64 v56; // [rsp+10h] [rbp-518h]
  size_t v57; // [rsp+18h] [rbp-510h]
  size_t v58; // [rsp+20h] [rbp-508h]
  __int64 v59; // [rsp+28h] [rbp-500h]
  int v60; // [rsp+30h] [rbp-4F8h]
  int v61; // [rsp+34h] [rbp-4F4h]
  unsigned int v62; // [rsp+4Ch] [rbp-4DCh] BYREF
  void *v63; // [rsp+50h] [rbp-4D8h] BYREF
  __int128 v64; // [rsp+58h] [rbp-4D0h]
  _QWORD v65[4]; // [rsp+70h] [rbp-4B8h] BYREF
  void *src; // [rsp+90h] [rbp-498h] BYREF
  __int128 v67; // [rsp+98h] [rbp-490h]
  char s[8]; // [rsp+D8h] [rbp-450h] BYREF
  _BYTE v69[1032]; // [rsp+E0h] [rbp-448h] BYREF
  unsigned __int64 v70; // [rsp+4E8h] [rbp-40h]

  v70 = __readfsqword(0x28u);
  v5 = nbits(a2);
  v6 = v5 + 14;
  v7 = v5 + 7;
  if ( v7 >= 0 )
    v6 = v7;
  v8 = v6 >> 3;
  v9 = *(_QWORD *)a1[11];
  switch ( a3 )
  {
    case 4uLL:
      v10 = *(_QWORD *)(v9 + 1000);
      if ( (unsigned int)nbits(a2) != 8 && *(_DWORD *)(v9 + 780) == 8 )
        v10 = *(_QWORD *)(v9 + 1008);
      v11 = 4 * v8;
      v12 = btoa_width(v11, 0, 0);
      if ( (unsigned __int8)is_loaded(a2) )
      {
        wide_dword = get_wide_dword(a2);
        goto LABEL_12;
      }
      goto LABEL_22;
    case 8uLL:
      v10 = *(_QWORD *)(v9 + 1008);
      if ( (unsigned int)nbits(a2) != 8 && *(_DWORD *)(v9 + 780) == 8 )
        v10 = *(_QWORD *)(v9 + 1016);
      v11 = 8 * v8;
      v12 = btoa_width(v11, 0, 0);
      if ( (unsigned __int8)is_loaded(a2) )
      {
        wide_dword = get_qword(a2);
LABEL_12:
        v53 = wide_dword;
        v55 = wide_dword;
        v14 = is_mapped(wide_dword);
        wide_dword = v53;
        if ( v14 )
        {
          numop2str((int)v69, 1024, a2, 0, v53, v11, 0);
          if ( v53 == -1 )
            sub_359A50((__int64)a1, (__int64)&unk_22AD250, v10, v12, v69);
          else
            sub_359A50((__int64)a1, (__int64)&unk_22AD241, v10, v12, v69);
          goto LABEL_15;
        }
LABEL_45:
        numop2str((int)v69, 1024, a2, 0, wide_dword, v11, 0);
        v55 = -1;
        sub_359A50((__int64)a1, (__int64)&unk_22AD250, v10, v12, v69);
LABEL_15:
        if ( a3 == 3 )
        {
          v24 = a2 + 1;
          do
          {
            sub_359A50((__int64)a1, (__int64)&unk_22AD25F);
            (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 31);
            v25 = v24++;
            wide_byte = get_wide_byte(v25);
            numop2str((int)v69, 1024, a2, 0, wide_byte, v11, 0);
            (*(void (__fastcall **)(_QWORD *, _BYTE *, _QWORD, __int64, __int64, __int64))(*a1 + 56LL))(
              a1,
              v69,
              0,
              v27,
              v28,
              v50);
            (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 31);
          }
          while ( a2 + 3 != v24 );
        }
        v15 = getinf_flag(45, 4);
        if ( !v15 )
        {
          v63 = nullptr;
          v64 = 0;
          if ( v55 == -1 )
          {
            if ( !a3 )
              goto LABEL_94;
            v60 = 0;
            v59 = *(_QWORD *)a1[11];
            v61 = a2 + 1;
            do
            {
              sub_3565B0((__int64)&src, v59, a2, v61, 0);
              v29 = (unsigned __int8)getinf_flag(3, 32);
              default_encoding_idx = get_default_encoding_idx(1);
              encoding_name = get_encoding_name(default_encoding_idx);
              sub_894230(v65, &src, encoding_name, v29, 0);
              while ( !(unsigned int)sub_894330(v65, s, &v62) )
              {
                if ( v62 > 0x1F )
                {
                  v15 |= v62 != 32;
                }
                else
                {
                  v62 = 32;
                  strcpy(s, " ");
                }
                v32 = strlen(s);
                v33 = v64;
                v34 = v32;
                v35 = v32;
                if ( (_QWORD)v64 )
                {
                  v33 = v64 - 1;
                  v35 = v32 + v64 - 1;
                }
                v36 = v63;
                v37 = v35 + 1;
                if ( *((_QWORD *)&v64 + 1) < v35 + 1 )
                {
                  v58 = v32;
                  v57 = v35;
                  v56 = v33;
                  v54 = v35 + 1;
                  v63 = (void *)qvector_reserve(&v63, v63, v37, 1);
                  v34 = v58;
                  v36 = v63;
                  v35 = v57;
                  v33 = v56;
                  v37 = v54;
                }
                *(_QWORD *)&v64 = v37;
                v36[v35] = 0;
                memmove((char *)v63 + v33, s, v34);
              }
              ++v60;
            }
            while ( v60 < a3 );
            if ( !v15 )
LABEL_94:
              *(_QWORD *)&v64 = 0;
          }
          else
          {
            get_nice_colored_name(&v63, v55, 130);
          }
          v65[0] = 0;
          v65[1] = 0xFFFFFFFF00000000LL;
          v65[2] = 0;
          if ( (unsigned __int8)get_fixup(v65, a2) )
          {
            v38 = v64;
            if ( (unsigned __int64)v64 > 1 )
            {
              v47 = (char *)v63;
              if ( *((_QWORD *)&v64 + 1) < (unsigned __int64)(v64 + 1) )
              {
                v63 = (void *)qvector_reserve(&v63, v63, v64 + 1, 1);
                v47 = (char *)v63;
              }
              *(_QWORD *)&v64 = v38 + 1;
              v47[v38 - 1] = 32;
              *((_BYTE *)v63 + v38) = 0;
            }
            src = nullptr;
            v67 = 0;
            get_fixup_desc(&src, a2, v65);
            v39 = v67;
            if ( (_QWORD)v67 )
            {
              v40 = v67 - 1;
              if ( (_QWORD)v67 != 1 )
              {
                v41 = v64;
                v42 = v67 - 1;
                if ( (_QWORD)v64 )
                {
                  v41 = v64 - 1;
                  v42 = v40 + v64 - 1;
                  v39 = v67 + v64 - 1;
                }
                v43 = v63;
                if ( *((_QWORD *)&v64 + 1) < v39 )
                {
                  v63 = (void *)qvector_reserve(&v63, v63, v39, 1);
                  v43 = v63;
                }
                *(_QWORD *)&v64 = v39;
                v43[v42] = 0;
                memcpy((char *)v63 + v41, src, v40);
              }
            }
            if ( src )
            {
              *(_QWORD *)&v67 = 0;
              qfree(src);
            }
          }
          if ( (unsigned __int64)v64 > 1 )
          {
            sub_359A50((__int64)a1, (__int64)&unk_22AD266, *(_QWORD *)(a1[60] + 48LL));
            v44 = haystack;
            if ( (_QWORD)v64 )
              v44 = (const char *)v63;
            (*(void (__fastcall **)(_QWORD *, const char *, _QWORD))(*a1 + 56LL))(a1, v44, 0);
            v45 = *(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 56LL);
            v46 = closing_comment();
            v45(a1, v46, 0);
            (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 4);
          }
          if ( v63 )
          {
            *(_QWORD *)&v64 = 0;
            qfree(v63);
          }
        }
        goto LABEL_17;
      }
LABEL_22:
      v17 = a1[60];
      if ( !*(_QWORD *)(v17 + 160) )
        goto LABEL_23;
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 32);
      goto LABEL_47;
    case 2uLL:
      v10 = *(_QWORD *)(v9 + 992);
      if ( (unsigned int)nbits(a2) != 8 && *(_DWORD *)(v9 + 780) == 8 )
        v10 = *(_QWORD *)(v9 + 1000);
      v11 = 2 * v8;
      v12 = btoa_width(v11, 0, 0);
      if ( (unsigned __int8)is_loaded(a2) )
      {
        wide_dword = get_wide_word(a2);
        goto LABEL_12;
      }
      goto LABEL_22;
  }
  v10 = *(_QWORD *)(v9 + 984);
  if ( (unsigned int)nbits(a2) != 8 && *(_DWORD *)(v9 + 780) == 8 )
    v10 = *(_QWORD *)(v9 + 992);
  if ( a3 != 3 )
  {
    v11 = a3 * v8;
    v12 = btoa_width(v11, 0, 0);
    if ( (unsigned __int8)is_loaded(a2) )
    {
      wide_dword = get_wide_byte(a2);
      if ( a3 <= 1 )
        goto LABEL_45;
      goto LABEL_12;
    }
    v17 = a1[60];
    if ( !*(_QWORD *)(v17 + 160) )
      goto LABEL_23;
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 32);
    if ( a3 == 1 )
      goto LABEL_53;
LABEL_47:
    if ( !*(_DWORD *)(*(_QWORD *)a1[11] + 764LL) )
    {
      (*(void (__fastcall **)(_QWORD *, const char *, _QWORD))(*a1 + 56LL))(a1, "db ?", 0);
      if ( a3 <= 1 )
      {
LABEL_32:
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 32);
        goto LABEL_17;
      }
LABEL_30:
      v23 = 1;
      do
      {
        ++v23;
        (*(void (__fastcall **)(_QWORD *, void *, _QWORD))(*a1 + 56LL))(a1, &unk_22AD27A, 0);
      }
      while ( a3 != v23 );
      goto LABEL_32;
    }
LABEL_53:
    qsnprintf((int)v69, 1024, (int)&unk_22AD272, a3, v21, v22, v51);
    sub_359B10((__int64)a1, *(_QWORD *)(a1[60] + 160LL), v69);
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 32);
    goto LABEL_17;
  }
  if ( (unsigned __int8)is_loaded(a2) )
  {
    v11 = 3 * v8;
    v12 = 0;
    wide_dword = get_wide_byte(a2);
    goto LABEL_12;
  }
  v17 = a1[60];
  if ( *(_QWORD *)(v17 + 160) )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 32);
    if ( !*(_DWORD *)(*(_QWORD *)a1[11] + 764LL) )
    {
      (*(void (__fastcall **)(_QWORD *, const char *, _QWORD))(*a1 + 56LL))(a1, "db ?", 0);
      goto LABEL_30;
    }
    goto LABEL_53;
  }
LABEL_23:
  v18 = *(_QWORD *)(v17 + 48);
  if ( (*(_DWORD *)v17 & 0x100000) != 0 )
  {
    sub_359A50((__int64)a1, (__int64)&unk_2317F60, v18, v10);
    if ( (unsigned __int8)is_loaded(a2 + 1) )
    {
      v48 = *(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 56LL);
      v49 = closing_comment();
      v48(a1, v49, 0);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 128LL))(a1, 0xFFFFFFFFLL);
      sub_35A6B0(a1, a2 + 1);
    }
  }
  else
  {
    sub_359A50((__int64)a1, (__int64)&unk_2317F88, v18, v10);
  }
  v19 = *(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 56LL);
  v20 = closing_comment();
  v19(a1, v20, 0);
LABEL_17:
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 128LL))(a1, 0xFFFFFFFFLL);
  return v70 - __readfsqword(0x28u);
}

