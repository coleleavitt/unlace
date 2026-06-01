unsigned __int64 __fastcall sub_3EBF30(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r12
  unsigned __int8 v5; // r13
  __int64 v6; // rsi
  __int64 v7; // rdx
  void (__fastcall *v8)(_QWORD *, const char *, __int64); // rcx
  const char *v9; // rsi
  __int64 v10; // r15
  unsigned int v11; // r14d
  int v12; // eax
  unsigned __int64 v13; // rbx
  size_t v14; // r13
  __int64 v15; // r12
  size_t v16; // r14
  __int64 v17; // rsi
  __int64 v18; // rbx
  unsigned __int64 v19; // r12
  __int64 v20; // rsi
  unsigned int str_type; // eax
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // r8
  size_t v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r14
  int v28; // ecx
  int v29; // r8d
  int v30; // r9d
  const char *v31; // r12
  size_t v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  void *v35; // rax
  void *v36; // rax
  char v37; // [rsp+0h] [rbp-498h]
  size_t n; // [rsp+8h] [rbp-490h]
  size_t na; // [rsp+8h] [rbp-490h]
  __int64 v40; // [rsp+10h] [rbp-488h]
  __int64 v41; // [rsp+10h] [rbp-488h]
  __int64 v42; // [rsp+18h] [rbp-480h]
  __int64 v43; // [rsp+28h] [rbp-470h] BYREF
  void *src; // [rsp+30h] [rbp-468h] BYREF
  __int128 v45; // [rsp+38h] [rbp-460h]
  _BYTE s[1032]; // [rsp+50h] [rbp-448h] BYREF
  unsigned __int64 v47; // [rsp+458h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(qword_2CA1698 + 1480);
  if ( (unsigned __int8)sub_3EB6E0() || (unsigned __int8)sub_3EB9D0(a1, (__int64)a2) )
    return v47 - __readfsqword(0x28u);
  v5 = sub_3EB660(a1);
  if ( !*(_BYTE *)(a1 + 40) )
  {
    getinf_flag(3, 4);
    b2a64(s);
    (*(void (__fastcall **)(_QWORD *, _BYTE *, _QWORD))(*a2 + 56LL))(a2, s, v5);
  }
  v6 = *(unsigned int *)(a1 + 24);
  src = nullptr;
  v45 = 0;
  if ( !sub_3B8910(v3, v6) )
  {
LABEL_7:
    if ( (unsigned __int64)v45 <= 1 )
    {
      if ( (unsigned __int8)sub_3EBC70(a1, (__int64 *)&src) )
      {
        if ( (unsigned __int64)v45 <= 1 )
          goto LABEL_12;
        v5 = 29;
        if ( *(_BYTE *)(a1 + 40) )
        {
          v7 = 29;
          v8 = *(void (__fastcall **)(_QWORD *, const char *, __int64))(*a2 + 56LL);
          goto LABEL_10;
        }
        goto LABEL_34;
      }
      if ( (unsigned __int64)v45 <= 1 )
        goto LABEL_12;
    }
    goto LABEL_8;
  }
  v10 = *(_QWORD *)(a1 + 24);
  v11 = v10;
  if ( (sub_3B9AA0(v3, v10, 4) & 0x600) == 0x200 )
    LODWORD(v10) = sub_3BD5D0(v3, v10);
  v12 = sub_3B9AA0(v3, v10, 4);
  if ( (v12 & 0x600) == 0x400 && (v12 & 0xF0000000) == 0x50000000 && !*(_DWORD *)(a1 + 8) )
  {
    v43 = 64;
    str_type = get_str_type((unsigned int)v10);
    get_strlit_contents(&src, v11, -1, str_type, &v43, 1);
    v22 = v45;
    if ( (unsigned __int64)v45 <= 1 )
      goto LABEL_18;
    v23 = v45 + 1;
    n = v45 - 1;
    if ( *((_QWORD *)&v45 + 1) < (unsigned __int64)(v45 + 1) )
    {
      v42 = v45;
      v41 = v45 + 1;
      v36 = (void *)qvector_reserve(&src, src, v23, 1);
      v22 = v42;
      v23 = v41;
      src = v36;
    }
    *(_QWORD *)&v45 = v23;
    *((_BYTE *)src + v22) = 0;
    memmove((char *)src + 1, src, n);
    *(_BYTE *)src = 34;
    v24 = ((_QWORD)v45 == 0) + (_QWORD)v45 - 1LL;
    v25 = v24 + 2;
    if ( *((_QWORD *)&v45 + 1) < (unsigned __int64)(v24 + 2) )
    {
      v40 = ((_QWORD)v45 == 0) + (_QWORD)v45 - 1LL;
      na = v24 + 2;
      v35 = (void *)qvector_reserve(&src, src, v25, 1);
      v24 = v40;
      v25 = na;
      src = v35;
    }
    *(_QWORD *)&v45 = v25;
    *((_BYTE *)src + v24) = 34;
    *((_BYTE *)src + v24 + 1) = 0;
  }
  if ( (unsigned __int64)v45 <= 1 )
  {
LABEL_18:
    sub_4BBA40(v3, &src, v11, 133);
    if ( (unsigned __int64)v45 > 1 )
    {
      if ( *(_BYTE *)(a1 + 40) )
      {
        v13 = v45;
        goto LABEL_21;
      }
      v5 = 1;
      goto LABEL_34;
    }
    v26 = sub_4EE820(v3 + 1552, v11);
    v27 = v26;
    if ( v26 )
    {
      sub_4F9200(v3, &src, v26, 0);
      if ( *(_BYTE *)(a1 + 12) )
      {
        if ( (*(_BYTE *)(v27 + 24) & 8) != 0 )
        {
          v31 = haystack;
          if ( (_QWORD)v45 )
            v31 = (const char *)src;
          LODWORD(v43) = 0;
          if ( !(unsigned int)qsscanf((int)v31, (int)"debug%*03d%n", (int)&v43, v28, v29, v30, v37) )
          {
            v32 = strlen(v31);
            if ( (int)v43 == v32 )
            {
              if ( src )
              {
                *(_QWORD *)&v45 = 0;
                qfree(src);
                src = nullptr;
                *((_QWORD *)&v45 + 1) = 0;
              }
            }
          }
        }
      }
    }
    goto LABEL_7;
  }
LABEL_8:
  if ( *(_BYTE *)(a1 + 40) )
  {
    v7 = v5;
    v8 = *(void (__fastcall **)(_QWORD *, const char *, __int64))(*a2 + 56LL);
    goto LABEL_10;
  }
LABEL_34:
  v18 = a2[4];
  v19 = 2;
  if ( v18 )
    v19 = v18-- + 1;
  v20 = a2[3];
  if ( a2[5] < v19 )
  {
    v33 = qvector_reserve(a2 + 3, v20, v19, 1);
    a2[3] = v33;
    v20 = v33;
  }
  a2[4] = v19;
  *(_BYTE *)(v20 + v18) = 32;
  *(_BYTE *)(a2[3] + v18 + 1) = 0;
  if ( v5 != 1 )
  {
    v8 = *(void (__fastcall **)(_QWORD *, const char *, __int64))(*a2 + 56LL);
    v7 = v5;
    if ( !(_QWORD)v45 )
    {
      v9 = haystack;
      goto LABEL_11;
    }
LABEL_10:
    v9 = (const char *)src;
LABEL_11:
    v8(a2, v9, v7);
    goto LABEL_12;
  }
  v13 = v45;
  if ( (_QWORD)v45 )
  {
LABEL_21:
    v14 = v13 - 1;
    if ( v13 != 1 )
    {
      v15 = a2[4];
      v16 = v13 - 1;
      if ( v15 )
      {
        --v15;
        v16 = v14 + v15;
        v13 += v15;
      }
      v17 = a2[3];
      if ( a2[5] < v13 )
      {
        v34 = qvector_reserve(a2 + 3, v17, v13, 1);
        a2[3] = v34;
        v17 = v34;
      }
      a2[4] = v13;
      *(_BYTE *)(v17 + v16) = 0;
      memcpy((void *)(v15 + a2[3]), src, v14);
    }
  }
LABEL_12:
  if ( src )
  {
    *(_QWORD *)&v45 = 0;
    qfree(src);
  }
  return v47 - __readfsqword(0x28u);
}

