__int64 __fastcall sub_6B4700(__int64 *a1, unsigned int a2)
{
  __int64 v3; // rdi
  const char *v5; // rax
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  const char *v9; // r14
  unsigned int v10; // ebp
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // rdi
  char *v15; // rdi
  __int64 v16; // rdi
  char *v17; // rdi
  __int64 v18; // r14
  __int64 v19; // r13
  __int64 v20; // r12
  char *v21; // rbx
  void *v22; // rdi
  void *v23; // rdi
  const char **v24; // r13
  const char *v25; // rdx
  char *v26; // rsi
  char *v27; // rdi
  __int64 v28; // r12
  __int64 v29; // rdi
  char *v30; // rdi
  char *v31; // rdi
  __int64 v32; // rcx
  char *v33; // r13
  char *v34; // rax
  void *v35; // rdi
  void *v36; // rdi
  __int64 v37; // rdi
  char *s2; // [rsp+0h] [rbp-118h]
  char *s2a; // [rsp+0h] [rbp-118h]
  char *v40; // [rsp+8h] [rbp-110h]
  __int64 v41; // [rsp+8h] [rbp-110h]
  const char **v42; // [rsp+10h] [rbp-108h]
  __int64 v43; // [rsp+10h] [rbp-108h]
  __int64 v44; // [rsp+38h] [rbp-E0h] BYREF
  char *s1; // [rsp+40h] [rbp-D8h] BYREF
  __int128 v46; // [rsp+48h] [rbp-D0h]
  char *v47; // [rsp+60h] [rbp-B8h] BYREF
  __int128 v48; // [rsp+68h] [rbp-B0h]
  char *v49; // [rsp+80h] [rbp-98h] BYREF
  __int128 v50; // [rsp+88h] [rbp-90h]
  void *v51; // [rsp+A0h] [rbp-78h] BYREF
  __int128 v52; // [rsp+A8h] [rbp-70h]
  void *ptr; // [rsp+B8h] [rbp-60h]
  __int128 v54; // [rsp+C0h] [rbp-58h]
  int v55; // [rsp+D0h] [rbp-48h]
  char v56; // [rsp+D4h] [rbp-44h]
  unsigned __int64 v57; // [rsp+D8h] [rbp-40h]

  v3 = *a1;
  v57 = __readfsqword(0x28u);
  v5 = (const char *)sub_64DFD0(v3, 0, a2, nullptr);
  if ( !v5 || (v9 = v5, !*v5) || (v12 = sub_6BB440(*a1, *(_QWORD *)(*a1 + 8), a2, v6, v7, v8), v13 = v12, v12 == -1) )
  {
    sub_6B4500(a1, a2);
    return 0;
  }
  v14 = *a1;
  s1 = nullptr;
  v46 = 0;
  if ( !(unsigned __int8)sub_6BB720(v14, &s1, v12) )
    goto LABEL_10;
  v15 = (char *)haystack;
  if ( (_QWORD)v46 )
    v15 = s1;
  if ( strcmp(v15, v9) )
  {
LABEL_10:
    sub_6B4500(a1, a2);
    v10 = 0;
    goto LABEL_11;
  }
  v16 = *a1;
  v51 = nullptr;
  ptr = nullptr;
  v55 = 0;
  v56 = 0x80;
  v52 = 0;
  v54 = 0;
  v10 = sub_6BBAA0(v16, &v51, v13);
  if ( !(_BYTE)v10 )
  {
LABEL_15:
    sub_6B4500(a1, a2);
    goto LABEL_16;
  }
  if ( (unsigned int)sub_415220((__int64)&v51, 1) )
  {
    if ( !*((_BYTE *)a1 + 40) )
      goto LABEL_15;
    if ( (v56 & 0x10) != 0 )
    {
      sub_416660((__int64 *)&v51, 0);
      v49 = nullptr;
      create_tinfo(&v49, 45, 45, &v51);
      save_tinfo(&v49, *(_QWORD *)(*a1 + 8), a2, 0, 5);
      v31 = (char *)v51;
      if ( v51 )
      {
        v32 = 0;
        v33 = nullptr;
        s2a = (char *)v52;
        if ( (_QWORD)v52 )
        {
          do
          {
            v34 = &v31[v32];
            v35 = *(void **)&v31[v32 + 24];
            if ( v35 )
            {
              *((_QWORD *)v34 + 4) = 0;
              v43 = v32;
              v40 = v34;
              qfree(v35);
              v32 = v43;
              v34 = v40;
            }
            v36 = *(void **)v34;
            if ( *(_QWORD *)v34 )
            {
              *((_QWORD *)v34 + 1) = 0;
              v41 = v32;
              qfree(v36);
              v32 = v41;
            }
            v31 = (char *)v51;
            ++v33;
            v32 += 56;
          }
          while ( s2a != v33 );
        }
        *(_QWORD *)&v52 = 0;
        qfree(v31);
        v51 = nullptr;
        *((_QWORD *)&v52 + 1) = 0;
      }
      if ( ptr )
      {
        *(_QWORD *)&v54 = 0;
        qfree(ptr);
        ptr = nullptr;
        *((_QWORD *)&v54 + 1) = 0;
      }
      v37 = *a1;
      v55 = 0;
      v56 = 0x80;
      if ( !(unsigned __int8)sub_6BBAA0(v37, &v51, v13) || (unsigned int)sub_415220((__int64)&v51, 1) )
      {
        sub_6B4500(a1, a2);
        clear_tinfo_t(&v49);
        goto LABEL_16;
      }
      clear_tinfo_t(&v49);
    }
  }
  v24 = (const char **)v51;
  v42 = (const char **)((char *)v51 + 56 * v52);
  if ( v42 == v51 )
    goto LABEL_17;
  while ( 1 )
  {
    v25 = haystack;
    v44 = 0;
    v47 = nullptr;
    v48 = 0;
    if ( v24[1] )
      v25 = *v24;
    if ( get_tinfo_by_edm_name(&v44, 0, v25) == -1 || (v44 & 0x100) == 0 || !get_tinfo_pdata(&v47, v44, 0) )
    {
LABEL_36:
      sub_6B4500(a1, a2);
      goto LABEL_37;
    }
    if ( (_QWORD)v46 )
    {
      v26 = s1;
      v27 = (char *)haystack;
      if ( !(_QWORD)v48 )
        goto LABEL_44;
    }
    else
    {
      v26 = (char *)haystack;
      if ( !(_QWORD)v48 )
        goto LABEL_45;
    }
    v27 = v47;
LABEL_44:
    if ( strcmp(v27, v26) )
      goto LABEL_36;
LABEL_45:
    s2 = (char *)haystack;
    if ( v24[1] )
      s2 = (char *)*v24;
    v28 = sub_6B9860(*a1, s2, 0, 0);
    if ( v28 == -1 )
    {
      if ( !*((_BYTE *)a1 + 40) )
        goto LABEL_36;
      v28 = sub_6B9860(*a1, s2, 0, 1);
      if ( v28 == -1 )
        goto LABEL_36;
    }
    v29 = *a1;
    v49 = nullptr;
    v50 = 0;
    if ( !(unsigned __int8)sub_6B9E00(v29, &v49, v28) )
      break;
    v30 = (char *)haystack;
    if ( (_QWORD)v50 )
      v30 = v49;
    if ( strcmp(v30, s2) )
      break;
    if ( v49 )
    {
      *(_QWORD *)&v50 = 0;
      qfree(v49);
    }
    if ( v47 )
    {
      *(_QWORD *)&v48 = 0;
      qfree(v47);
    }
    v24 += 7;
    clear_tinfo_t(&v44);
    if ( v42 == v24 )
      goto LABEL_17;
  }
  sub_6B4500(a1, a2);
  if ( v49 )
  {
    *(_QWORD *)&v50 = 0;
    qfree(v49);
  }
LABEL_37:
  if ( v47 )
  {
    *(_QWORD *)&v48 = 0;
    qfree(v47);
  }
  clear_tinfo_t(&v44);
LABEL_16:
  v10 = 0;
LABEL_17:
  if ( ptr )
  {
    *(_QWORD *)&v54 = 0;
    qfree(ptr);
  }
  v17 = (char *)v51;
  if ( v51 )
  {
    v18 = v52;
    if ( (_QWORD)v52 )
    {
      v19 = 0;
      v20 = 0;
      do
      {
        v21 = &v17[v19];
        v22 = *(void **)&v17[v19 + 24];
        if ( v22 )
        {
          *((_QWORD *)v21 + 4) = 0;
          qfree(v22);
        }
        v23 = *(void **)v21;
        if ( *(_QWORD *)v21 )
        {
          *((_QWORD *)v21 + 1) = 0;
          qfree(v23);
        }
        ++v20;
        v17 = (char *)v51;
        v19 += 56;
      }
      while ( v18 != v20 );
    }
    *(_QWORD *)&v52 = 0;
    qfree(v17);
  }
LABEL_11:
  if ( s1 )
  {
    *(_QWORD *)&v46 = 0;
    qfree(s1);
  }
  return v10;
}
