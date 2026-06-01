unsigned __int64 __fastcall sub_3BD830(_QWORD *a1)
{
  char v3; // r14
  bool v4; // zf
  const char *v5; // rdi
  __int64 v6; // r13
  char i; // bp
  int v8; // ebx
  __int64 v9; // rbx
  _BYTE *v10; // rsi
  __int64 v11; // rbp
  __int64 v12; // rdx
  unsigned __int64 v13; // rbx
  size_t v14; // r8
  __int64 v15; // rbp
  size_t v16; // r9
  _BYTE *v17; // rsi
  const char *v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // rdi
  unsigned int v21; // ebx
  __int64 func; // rax
  __int64 (__fastcall *v23)(_QWORD *, char); // rax
  __int64 v24; // rbx
  unsigned __int64 v25; // rbp
  __int64 v26; // rsi
  __int64 (__fastcall *v27)(_QWORD *, char); // rax
  __int64 v28; // rbx
  unsigned __int64 v29; // rbp
  __int64 v30; // rsi
  const char *v31; // rsi
  void (__fastcall *v32)(_QWORD *, __int64, _QWORD); // rbx
  __int64 v33; // rax
  void *v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // [rsp+10h] [rbp-B8h]
  size_t v38; // [rsp+10h] [rbp-B8h]
  size_t v39; // [rsp+18h] [rbp-B0h]
  _BYTE v40[4]; // [rsp+24h] [rbp-A4h] BYREF
  unsigned int v41; // [rsp+28h] [rbp-A0h]
  void *ptr; // [rsp+30h] [rbp-98h] BYREF
  __int128 v43; // [rsp+38h] [rbp-90h]
  void *src; // [rsp+50h] [rbp-78h] BYREF
  __int128 v45; // [rsp+58h] [rbp-70h]
  __int64 v46; // [rsp+70h] [rbp-58h] BYREF
  __int64 v47; // [rsp+78h] [rbp-50h]
  int v48; // [rsp+80h] [rbp-48h]
  unsigned __int64 v49; // [rsp+88h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  if ( (unsigned __int8)getinf_flag(45, 4) )
    return v49 - __readfsqword(0x28u);
  v3 = 0;
  if ( (int)get_flags_ex(*((unsigned int *)a1 + 4), 4) < 0 && get_switch_info(0, *((unsigned int *)a1 + 4)) > 0 )
    return v49 - __readfsqword(0x28u);
  v4 = a1[4] == 0;
  ptr = nullptr;
  v5 = haystack;
  v43 = 0;
  if ( !v4 )
    v5 = (const char *)a1[3];
  v6 = tag_strlen(v5);
  for ( i = xrefblk_t_first_from(v40, *((unsigned int *)a1 + 4), 5); ; i = xrefblk_t_next_from(v40) )
  {
    if ( !i )
      goto LABEL_34;
    v18 = haystack;
    if ( (_QWORD)v43 )
      v18 = (const char *)ptr;
    v19 = v6 + tag_strlen(v18);
    if ( v19 > (unsigned __int16)getinf(43) )
      break;
    v20 = *((unsigned int *)a1 + 4);
    v21 = v41;
    src = nullptr;
    v45 = 0;
    func = get_func(v20);
    if ( func )
      v8 = ((int)get_func_chunknum(func, v21) >= 0) << 6;
    else
      v8 = 0;
    v46 = 24;
    v47 = 0;
    v48 = 0;
    v47 = (unsigned int)getinf(36);
    if ( get_ea_name(&src, v41, v8 | 7u, &v46) <= 0 )
    {
      if ( src )
      {
        *(_QWORD *)&v45 = 0;
        qfree(src);
      }
      v3 = i;
    }
    else
    {
      if ( v48 > 0 )
      {
        if ( src )
        {
          *(_QWORD *)&v45 = 0;
          qfree(src);
        }
        goto LABEL_57;
      }
      v9 = v43;
      if ( (unsigned __int64)v43 > 1 )
      {
        v10 = ptr;
        v11 = v43 - 1;
        v12 = v43 + 1;
        if ( *((_QWORD *)&v43 + 1) < (unsigned __int64)(v43 + 1) )
        {
          v37 = v43 + 1;
          ptr = (void *)qvector_reserve(&ptr, ptr, v12, 1);
          v12 = v37;
          v10 = ptr;
        }
        *(_QWORD *)&v43 = v12;
        v10[v9] = 0;
        *((_BYTE *)ptr + v11) = 32;
      }
      v13 = v45;
      if ( (_QWORD)v45 )
      {
        v14 = v45 - 1;
        if ( (_QWORD)v45 != 1 )
        {
          v15 = v43;
          v16 = v45 - 1;
          if ( (_QWORD)v43 )
          {
            v15 = v43 - 1;
            v16 = v14 + v43 - 1;
            v13 = v45 + v43 - 1;
          }
          v17 = ptr;
          if ( *((_QWORD *)&v43 + 1) < v13 )
          {
            v39 = v45 - 1;
            v38 = v16;
            ptr = (void *)qvector_reserve(&ptr, ptr, v13, 1);
            v14 = v39;
            v17 = ptr;
            v16 = v38;
          }
          *(_QWORD *)&v43 = v13;
          v17[v16] = 0;
          memcpy((char *)ptr + v15, src, v14);
        }
      }
      if ( src )
      {
        *(_QWORD *)&v45 = 0;
        qfree(src);
      }
    }
  }
  v3 = i;
LABEL_34:
  if ( (unsigned __int64)v43 <= 1 )
  {
LABEL_57:
    v34 = ptr;
    if ( !ptr )
      return v49 - __readfsqword(0x28u);
LABEL_54:
    *(_QWORD *)&v43 = 0;
    qfree(v34);
    return v49 - __readfsqword(0x28u);
  }
  v23 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
  if ( v23 == sub_3598B0 )
  {
    v24 = a1[4];
    v25 = 2;
    if ( v24 )
      v25 = v24-- + 1;
    v26 = a1[3];
    if ( a1[5] < v25 )
    {
      v36 = qvector_reserve(a1 + 3, v26, v25, 1);
      a1[3] = v36;
      v26 = v36;
    }
    a1[4] = v25;
    *(_BYTE *)(v26 + v24) = 32;
    *(_BYTE *)(a1[3] + v24 + 1) = 0;
  }
  else
  {
    v23(a1, 32);
  }
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 4);
  (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1 + 56LL))(a1, *(_QWORD *)(a1[60] + 48LL), 0);
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 4);
  v27 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
  if ( v27 == sub_3598B0 )
  {
    v28 = a1[4];
    v29 = 2;
    if ( v28 )
      v29 = v28-- + 1;
    v30 = a1[3];
    if ( a1[5] < v29 )
    {
      v35 = qvector_reserve(a1 + 3, v30, v29, 1);
      a1[3] = v35;
      v30 = v35;
    }
    a1[4] = v29;
    *(_BYTE *)(v30 + v28) = 32;
    *(_BYTE *)(a1[3] + v28 + 1) = 0;
  }
  else
  {
    v27(a1, 32);
  }
  v31 = haystack;
  if ( (_QWORD)v43 )
    v31 = (const char *)ptr;
  (*(void (__fastcall **)(_QWORD *, const char *, _QWORD))(*a1 + 56LL))(a1, v31, 0);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD *, char *, _QWORD))(*a1 + 56LL))(a1, " ...", 0);
  if ( *(_QWORD *)(qword_2CA1698 + 1240) )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 4);
    v32 = *(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 56LL);
    v33 = closing_comment(a1, 4);
    v32(a1, v33, 0);
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 4);
  }
  v34 = ptr;
  if ( ptr )
    goto LABEL_54;
  return v49 - __readfsqword(0x28u);
}

