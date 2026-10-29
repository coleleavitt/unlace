unsigned __int64 __fastcall sub_35F1E0(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  int v5; // eax
  int v6; // ebp
  int v7; // eax
  int v8; // ebp
  __int64 v9; // r12
  unsigned int v10; // ebp
  unsigned int v11; // r13d
  __int64 wide_dword; // r12
  char v13; // r13
  __int64 v15; // rax
  __int64 v16; // rdx
  void (__fastcall *v17)(_QWORD *, __int64, _QWORD); // rbp
  __int64 v18; // rax
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rbp
  int v22; // r8d
  __int64 v23; // r13
  __int64 v24; // rdi
  int wide_byte; // eax
  __int64 v26; // rcx
  __int64 v27; // r8
  unsigned int v28; // ebp
  unsigned __int8 default_encoding_idx; // al
  __int64 encoding_name; // rax
  size_t v31; // rax
  __int64 v32; // r8
  size_t v33; // r9
  size_t v34; // r10
  _BYTE *v35; // rsi
  size_t v36; // rdx
  __int64 v37; // rbp
  unsigned __int64 v38; // rbp
  size_t v39; // r13
  __int64 v40; // r12
  size_t v41; // r14
  _BYTE *v42; // rsi
  const char *v43; // rsi
  void (__fastcall *v44)(_QWORD *, __int64, _QWORD); // rbp
  __int64 v45; // rax
  char *v46; // rsi
  void (__fastcall *v47)(_QWORD *, __int64, _QWORD); // r12
  __int64 v48; // rax
  __int64 v49; // [rsp-10h] [rbp-548h]
  __int64 v51; // [rsp+10h] [rbp-528h]
  size_t v52; // [rsp+10h] [rbp-528h]
  __int64 v53; // [rsp+18h] [rbp-520h]
  size_t v54; // [rsp+20h] [rbp-518h]
  size_t v55; // [rsp+28h] [rbp-510h]
  int v56; // [rsp+34h] [rbp-504h]
  __int64 v57; // [rsp+40h] [rbp-4F8h]
  __int64 v58; // [rsp+48h] [rbp-4F0h]
  unsigned int v59; // [rsp+5Ch] [rbp-4DCh] BYREF
  void *v60; // [rsp+60h] [rbp-4D8h] BYREF
  __int128 v61; // [rsp+68h] [rbp-4D0h]
  void *src; // [rsp+80h] [rbp-4B8h] BYREF
  __int128 v63; // [rsp+88h] [rbp-4B0h]
  __int64 v64; // [rsp+A0h] [rbp-498h] BYREF
  __m128i si128; // [rsp+A8h] [rbp-490h]
  __int64 v66; // [rsp+B8h] [rbp-480h]
  __int64 v67; // [rsp+C0h] [rbp-478h]
  char s[8]; // [rsp+E8h] [rbp-450h] BYREF
  _BYTE v69[1032]; // [rsp+F0h] [rbp-448h] BYREF
  unsigned __int64 v70; // [rsp+4F8h] [rbp-40h]

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
      v51 = *(_QWORD *)(v9 + 1168);
      if ( (unsigned int)nbits(a2) != 8 && *(_DWORD *)(v9 + 948) == 8 )
        v51 = *(_QWORD *)(v9 + 1176);
      v10 = 4 * v8;
      v11 = btoa_width(v10, 0, 0);
      if ( (unsigned __int8)is_loaded(a2) )
      {
        wide_dword = get_wide_dword(a2);
        if ( !(unsigned __int8)is_mapped(wide_dword) )
          goto LABEL_47;
LABEL_13:
        numop2str((unsigned int)v69, 1024, a2, 0, wide_dword, v10, 0);
        if ( wide_dword == -1 )
          sub_35CD40((__int64)a1, (__int64)&unk_22D0252, v51, v11, v69);
        else
          sub_35CD40((__int64)a1, (__int64)&unk_22D0243, v51, v11, v69);
        goto LABEL_15;
      }
LABEL_22:
      v15 = a1[79];
      if ( !*(_QWORD *)(v15 + 160) )
        goto LABEL_23;
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 32);
      goto LABEL_49;
    case 8uLL:
      v51 = *(_QWORD *)(v9 + 1176);
      if ( (unsigned int)nbits(a2) != 8 && *(_DWORD *)(v9 + 948) == 8 )
        v51 = *(_QWORD *)(v9 + 1184);
      v10 = 8 * v8;
      v11 = btoa_width(v10, 0, 0);
      if ( (unsigned __int8)is_loaded(a2) )
      {
        wide_dword = get_qword(a2);
LABEL_12:
        if ( (unsigned __int8)is_mapped(wide_dword) )
          goto LABEL_13;
LABEL_47:
        v22 = wide_dword;
        wide_dword = -1;
        numop2str((unsigned int)v69, 1024, a2, 0, v22, v10, 0);
        sub_35CD40((__int64)a1, (__int64)&unk_22D0252, v51, v11, v69);
LABEL_15:
        if ( a3 == 3 )
        {
          v23 = a2 + 1;
          do
          {
            sub_35CD40((__int64)a1, (__int64)&unk_22D0261);
            (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 31);
            v24 = v23++;
            wide_byte = get_wide_byte(v24);
            numop2str((unsigned int)v69, 1024, a2, 0, wide_byte, v10, 0);
            (*(void (__fastcall **)(_QWORD *, _BYTE *, _QWORD, __int64, __int64, __int64))(*a1 + 56LL))(
              a1,
              v69,
              0,
              v26,
              v27,
              v49);
            (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 31);
          }
          while ( a2 + 3 != v23 );
        }
        v13 = getinf_flag(45, 4);
        if ( !v13 )
        {
          v60 = nullptr;
          v61 = 0;
          if ( wide_dword == -1 )
          {
            if ( !a3 )
              goto LABEL_96;
            v56 = 0;
            v57 = *(_QWORD *)a1[11];
            v58 = a2 + 1;
            do
            {
              sub_359970((__int64)&v64, v57, a2, v58, 0);
              v28 = (unsigned __int8)getinf_flag(3, 32);
              default_encoding_idx = get_default_encoding_idx(1);
              encoding_name = get_encoding_name(default_encoding_idx);
              sub_8B7BF0(&src, &v64, encoding_name, v28, 0);
              while ( !(unsigned int)sub_8B7CF0(&src, s, &v59) )
              {
                if ( v59 > 0x1F )
                {
                  v13 |= v59 != 32;
                }
                else
                {
                  v59 = 32;
                  strcpy(s, " ");
                }
                v31 = strlen(s);
                v32 = v61;
                v33 = v31;
                v34 = v31;
                if ( (_QWORD)v61 )
                {
                  v32 = v61 - 1;
                  v34 = v31 + v61 - 1;
                }
                v35 = v60;
                v36 = v34 + 1;
                if ( *((_QWORD *)&v61 + 1) < v34 + 1 )
                {
                  v55 = v31;
                  v54 = v34;
                  v53 = v32;
                  v52 = v34 + 1;
                  v60 = (void *)qvector_reserve(&v60, v60, v36, 1);
                  v33 = v55;
                  v35 = v60;
                  v34 = v54;
                  v32 = v53;
                  v36 = v52;
                }
                *(_QWORD *)&v61 = v36;
                v35[v34] = 0;
                memmove((char *)v60 + v32, s, v33);
              }
              ++v56;
            }
            while ( v56 < a3 );
            if ( !v13 )
LABEL_96:
              *(_QWORD *)&v61 = 0;
          }
          else
          {
            get_nice_colored_name(&v60, wide_dword, 130);
          }
          v64 = 0;
          v66 = 0;
          v67 = 0;
          si128 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
          if ( (unsigned __int8)get_fixup(&v64, a2) )
          {
            v37 = v61;
            if ( (unsigned __int64)v61 > 1 )
            {
              v46 = (char *)v60;
              if ( *((_QWORD *)&v61 + 1) < (unsigned __int64)(v61 + 1) )
              {
                v60 = (void *)qvector_reserve(&v60, v60, v61 + 1, 1);
                v46 = (char *)v60;
              }
              *(_QWORD *)&v61 = v37 + 1;
              v46[v37 - 1] = 32;
              *((_BYTE *)v60 + v37) = 0;
            }
            src = nullptr;
            v63 = 0;
            get_fixup_desc(&src, a2, &v64);
            v38 = v63;
            if ( (_QWORD)v63 )
            {
              v39 = v63 - 1;
              if ( (_QWORD)v63 != 1 )
              {
                v40 = v61;
                v41 = v63 - 1;
                if ( (_QWORD)v61 )
                {
                  v40 = v61 - 1;
                  v41 = v39 + v61 - 1;
                  v38 = v63 + v61 - 1;
                }
                v42 = v60;
                if ( *((_QWORD *)&v61 + 1) < v38 )
                {
                  v60 = (void *)qvector_reserve(&v60, v60, v38, 1);
                  v42 = v60;
                }
                *(_QWORD *)&v61 = v38;
                v42[v41] = 0;
                memcpy((char *)v60 + v40, src, v39);
              }
            }
            if ( src )
            {
              *(_QWORD *)&v63 = 0;
              qfree(src);
            }
          }
          if ( (unsigned __int64)v61 > 1 )
          {
            sub_35CD40((__int64)a1, (__int64)&unk_22D0268, *(_QWORD *)(a1[79] + 48LL));
            v43 = haystack;
            if ( (_QWORD)v61 )
              v43 = (const char *)v60;
            (*(void (__fastcall **)(_QWORD *, const char *, _QWORD))(*a1 + 56LL))(a1, v43, 0);
            v44 = *(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 56LL);
            v45 = closing_comment();
            v44(a1, v45, 0);
            (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 4);
          }
          if ( v60 )
          {
            *(_QWORD *)&v61 = 0;
            qfree(v60);
          }
        }
        goto LABEL_17;
      }
      goto LABEL_22;
    case 2uLL:
      v51 = *(_QWORD *)(v9 + 1160);
      if ( (unsigned int)nbits(a2) != 8 && *(_DWORD *)(v9 + 948) == 8 )
        v51 = *(_QWORD *)(v9 + 1168);
      v10 = 2 * v8;
      v11 = btoa_width(v10, 0, 0);
      if ( (unsigned __int8)is_loaded(a2) )
      {
        wide_dword = get_wide_word(a2);
        if ( !(unsigned __int8)is_mapped(wide_dword) )
          goto LABEL_47;
        goto LABEL_13;
      }
      goto LABEL_22;
  }
  v51 = *(_QWORD *)(v9 + 1152);
  if ( (unsigned int)nbits(a2) != 8 && *(_DWORD *)(v9 + 948) == 8 )
    v51 = *(_QWORD *)(v9 + 1160);
  if ( a3 != 3 )
  {
    v10 = a3 * v8;
    v11 = btoa_width(v10, 0, 0);
    if ( (unsigned __int8)is_loaded(a2) )
    {
      wide_dword = get_wide_byte(a2);
      if ( a3 <= 1 )
        goto LABEL_47;
      goto LABEL_12;
    }
    v15 = a1[79];
    if ( !*(_QWORD *)(v15 + 160) )
      goto LABEL_23;
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 32);
    if ( a3 == 1 )
      goto LABEL_55;
LABEL_49:
    if ( !*(_DWORD *)(*(_QWORD *)a1[11] + 932LL) )
    {
      (*(void (__fastcall **)(_QWORD *, const char *, _QWORD))(*a1 + 56LL))(a1, "db ?", 0);
      if ( a3 <= 1 )
      {
LABEL_32:
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 32);
        goto LABEL_17;
      }
LABEL_30:
      v21 = 1;
      do
      {
        ++v21;
        (*(void (__fastcall **)(_QWORD *, void *, _QWORD))(*a1 + 56LL))(a1, &unk_22D027C, 0);
      }
      while ( a3 != v21 );
      goto LABEL_32;
    }
LABEL_55:
    qsnprintf((unsigned int)v69, 1024, (unsigned int)&unk_22D0274, a3, v19, v20);
    sub_35CE00((__int64)a1, *(_QWORD *)(a1[79] + 160LL), v69);
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 32);
    goto LABEL_17;
  }
  if ( (unsigned __int8)is_loaded(a2) )
  {
    v10 = 3 * v8;
    v11 = 0;
    wide_dword = get_wide_byte(a2);
    goto LABEL_12;
  }
  v15 = a1[79];
  if ( *(_QWORD *)(v15 + 160) )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 32);
    if ( !*(_DWORD *)(*(_QWORD *)a1[11] + 932LL) )
    {
      (*(void (__fastcall **)(_QWORD *, const char *, _QWORD))(*a1 + 56LL))(a1, "db ?", 0);
      goto LABEL_30;
    }
    goto LABEL_55;
  }
LABEL_23:
  v16 = *(_QWORD *)(v15 + 48);
  if ( (*(_DWORD *)v15 & 0x100000) != 0 )
  {
    sub_35CD40((__int64)a1, (__int64)&unk_233B380, v16, v51);
    if ( (unsigned __int8)is_loaded(a2 + 1) )
    {
      v47 = *(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 56LL);
      v48 = closing_comment();
      v47(a1, v48, 0);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 128LL))(a1, 0xFFFFFFFFLL);
      sub_35D9C0(a1, a2 + 1);
    }
  }
  else
  {
    sub_35CD40((__int64)a1, (__int64)&unk_233B3A8, v16, v51);
  }
  v17 = *(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 56LL);
  v18 = closing_comment();
  v17(a1, v18, 0);
LABEL_17:
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 128LL))(a1, 0xFFFFFFFFLL);
  return v70 - __readfsqword(0x28u);
}
