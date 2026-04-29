__int64 *__fastcall sub_324570(__int64 *a1, __int64 a2, __int64 a3)
{
  char v5; // al
  __int64 v6; // rdi
  char v7; // al
  __int64 v8; // rbp
  __int64 v9; // r15
  unsigned __int64 v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rbp
  size_t v13; // rax
  __int64 v14; // r13
  size_t v15; // r14
  size_t v16; // r15
  __int64 v17; // rsi
  size_t v18; // rdx
  unsigned __int64 v20; // r15
  __int64 v21; // rbp
  __int64 v22; // rsi
  __int64 v23; // rsi
  unsigned __int64 v24; // r15
  __int64 v25; // r8
  __int64 v26; // rbp
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  const char *v31; // rsi
  char *v32; // rbp
  unsigned int v33; // edi
  char *v34; // r14
  size_t v35; // rax
  __int64 v36; // r14
  size_t v37; // r15
  size_t v38; // r8
  __int64 v39; // rsi
  size_t v40; // rdx
  __int64 v41; // rbp
  __int64 v42; // r15
  unsigned __int64 v43; // r14
  __int64 v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // [rsp+0h] [rbp-488h]
  size_t v48; // [rsp+0h] [rbp-488h]
  size_t v49; // [rsp+8h] [rbp-480h]
  __int64 v50; // [rsp+18h] [rbp-470h] BYREF
  const char *tinfo_property; // [rsp+20h] [rbp-468h] BYREF
  __int128 v52; // [rsp+28h] [rbp-460h]
  char s[2]; // [rsp+40h] [rbp-448h] BYREF
  char v54; // [rsp+42h] [rbp-446h] BYREF
  unsigned __int64 v55; // [rsp+448h] [rbp-40h]

  v55 = __readfsqword(0x28u);
  *a1 = 0;
  *(_OWORD *)(a1 + 1) = 0;
  v50 = 0;
  copy_tinfo_t(&v50, a2);
  while ( 1 )
  {
    while ( (get_tinfo_property(v50, 2) & 0xF) == 0xA )
    {
      tinfo_property = nullptr;
      tinfo_property = (const char *)get_tinfo_property(v50, 9);
      copy_tinfo_t(&v50, &tinfo_property);
      v20 = 2;
      clear_tinfo_t(&tinfo_property);
      v21 = a1[1];
      if ( v21 )
        v20 = v21-- + 1;
      v22 = *a1;
      if ( a1[2] < v20 )
      {
        v29 = qvector_reserve(a1, v22, v20, 1);
        *a1 = v29;
        a1[1] = v20;
        *(_BYTE *)(v29 + v21) = 112;
      }
      else
      {
        a1[1] = v20;
        *(_BYTE *)(v22 + v21) = 112;
      }
      *(_BYTE *)(*a1 + v21 + 1) = 0;
    }
    v5 = get_tinfo_property(v50, 2);
    v6 = v50;
    if ( (v5 & 0xF) != 0xB )
      break;
    tinfo_property = nullptr;
    tinfo_property = (const char *)get_tinfo_property(v50, 11);
    copy_tinfo_t(&v50, &tinfo_property);
    clear_tinfo_t(&tinfo_property);
    v7 = get_tinfo_property(v50, 2);
    v8 = a1[1];
    if ( (v7 & 0x1F) == 0x12 )
    {
      if ( v8 )
      {
        v9 = v8 + 2;
        v10 = v8 + 3;
        v11 = *a1;
        --v8;
        if ( a1[2] >= v10 )
        {
LABEL_7:
          a1[1] = v10;
          *(_BYTE *)(v11 + v9) = 0;
          v12 = *a1 + v8;
          *(_WORD *)v12 = 29811;
          *(_BYTE *)(v12 + 2) = 114;
          clear_tinfo_t(&v50);
          v6 = v50;
          break;
        }
      }
      else
      {
        v11 = *a1;
        v10 = 4;
        v9 = 3;
        if ( (unsigned __int64)a1[2] >= 4 )
          goto LABEL_7;
      }
      v27 = qvector_reserve(a1, v11, v10, 1);
      *a1 = v27;
      v11 = v27;
      goto LABEL_7;
    }
    if ( v8 )
    {
      v25 = v8 + 2;
      v24 = v8 + 3;
      v23 = *a1;
      --v8;
      if ( a1[2] >= v24 )
        goto LABEL_23;
    }
    else
    {
      v23 = *a1;
      v24 = 4;
      v25 = 3;
      if ( (unsigned __int64)a1[2] >= 4 )
        goto LABEL_23;
    }
    v47 = v25;
    v28 = qvector_reserve(a1, v23, v24, 1);
    *a1 = v28;
    v25 = v47;
    v23 = v28;
LABEL_23:
    a1[1] = v24;
    *(_BYTE *)(v23 + v25) = 0;
    v26 = *a1 + v8;
    *(_WORD *)v26 = 29281;
    *(_BYTE *)(v26 + 2) = 114;
  }
  if ( (_BYTE)v6 )
  {
    if ( (get_tinfo_property(v6, 2) & 0xF) == 0xC )
    {
      v41 = a1[1];
      if ( v41 )
      {
        v42 = v41 + 3;
        v43 = v41 + 4;
        --v41;
      }
      else
      {
        v43 = 5;
        v42 = 4;
      }
      v44 = *a1;
      if ( a1[2] < v43 )
      {
        v45 = qvector_reserve(a1, v44, v43, 1);
        *a1 = v45;
        v44 = v45;
      }
      a1[1] = v43;
      *(_BYTE *)(v44 + v42) = 0;
      *(_DWORD *)(*a1 + v41) = 1668183398;
    }
    else
    {
      v52 = 0;
      tinfo_property = nullptr;
      sub_3242C0((__int64 *)&tinfo_property, (__int64)&v50, nullptr, 0);
      v31 = s1;
      if ( (_QWORD)v52 )
        v31 = tinfo_property;
      v32 = s;
      qstrncpy(s, v31, 1024);
      v33 = s[0];
      if ( s[0] == 99 )
      {
        sub_3215C0(s, "const ");
        v33 = s[0];
      }
      if ( (_BYTE)v33 == 115 )
      {
        sub_3215C0(s, "struct ");
        v33 = s[0];
      }
      if ( (_BYTE)v33 == 117 )
      {
        sub_3215C0(s, "union ");
        v33 = s[0];
      }
      if ( (_BYTE)v33 == 101 )
      {
        sub_3215C0(s, "enum ");
        v33 = s[0];
      }
      v34 = s;
      if ( (_BYTE)v33 )
      {
        do
        {
          if ( (_BYTE)v33 != 95 && (v33 > 0x7F || !isalnum(v33)) )
            *v34 = 95;
          v33 = *++v34;
        }
        while ( (_BYTE)v33 );
        if ( &v54 < v34 && *(v34 - 2) == 95 && *(v34 - 1) == 116 )
          *(v34 - 2) = 0;
      }
      qstrlwr(s);
      if ( s[0] == 95 )
      {
        do
          ++v32;
        while ( *v32 == 95 );
      }
      v35 = strlen(v32);
      v36 = a1[1];
      v37 = v35;
      v38 = v35;
      if ( v36 )
      {
        --v36;
        v38 = v35 + v36;
      }
      v39 = *a1;
      v40 = v38 + 1;
      if ( a1[2] < v38 + 1 )
      {
        v49 = v38;
        v48 = v38 + 1;
        v46 = qvector_reserve(a1, v39, v40, 1);
        v38 = v49;
        v40 = v48;
        *a1 = v46;
        v39 = v46;
      }
      a1[1] = v40;
      *(_BYTE *)(v39 + v38) = 0;
      memmove((void *)(v36 + *a1), v32, v37);
      if ( tinfo_property )
      {
        *(_QWORD *)&v52 = 0;
        qfree(tinfo_property);
      }
    }
  }
  if ( a3 != -1 )
  {
    qsnprintf(s, 1024, "%a", 0.0);
    v13 = strlen(s);
    v14 = a1[1];
    v15 = v13;
    v16 = v13;
    if ( v14 )
    {
      --v14;
      v16 = v13 + v14;
    }
    v17 = *a1;
    v18 = v16 + 1;
    if ( a1[2] < v16 + 1 )
    {
      v30 = qvector_reserve(a1, v17, v18, 1);
      *a1 = v30;
      v18 = v16 + 1;
      v17 = v30;
    }
    a1[1] = v18;
    *(_BYTE *)(v17 + v16) = 0;
    memmove((void *)(v14 + *a1), s, v15);
  }
  clear_tinfo_t(&v50);
  return a1;
}
