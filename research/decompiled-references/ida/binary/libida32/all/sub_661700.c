__int64 __fastcall sub_661700(__int64 *a1, const char *a2, __int64 a3, char a4)
{
  const char *v5; // r13
  __int64 current_config; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // r14
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // r15
  size_t v15; // rbx
  char v16; // r15
  _BYTE *v17; // rsi
  __int64 v18; // r9
  void *v19; // r11
  size_t v20; // r10
  __int64 v21; // rsi
  size_t v22; // rdx
  __int64 v23; // rax
  char valid; // al
  unsigned __int64 v26; // rdx
  __int64 v27; // rbx
  const char *v28; // r10
  _DWORD *v29; // rsi
  unsigned __int64 v30; // rbx
  size_t v31; // rax
  const void *v32; // r8
  void *v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rax
  const char *v36; // rsi
  __int64 v37; // [rsp+0h] [rbp-98h]
  __int64 v38; // [rsp+0h] [rbp-98h]
  unsigned __int64 v39; // [rsp+0h] [rbp-98h]
  const void *v40; // [rsp+0h] [rbp-98h]
  size_t v41; // [rsp+8h] [rbp-90h]
  __int64 v42; // [rsp+8h] [rbp-90h]
  __int64 v43; // [rsp+8h] [rbp-90h]
  __int64 v44; // [rsp+8h] [rbp-90h]
  void *v45; // [rsp+10h] [rbp-88h]
  const char *v46; // [rsp+10h] [rbp-88h]
  __int64 v47; // [rsp+18h] [rbp-80h]
  __int64 v48; // [rsp+18h] [rbp-80h]
  size_t v49; // [rsp+20h] [rbp-78h]
  char v51; // [rsp+2Fh] [rbp-69h]
  void *src; // [rsp+40h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+48h] [rbp-50h]
  unsigned __int64 v54; // [rsp+58h] [rbp-40h]

  v5 = a2;
  v54 = __readfsqword(0x28u);
  current_config = get_current_config();
  if ( !a2 )
    return 0;
  v9 = current_config;
  v10 = current_config + 536;
  v11 = &qword_2CA2490;
  if ( a4 )
  {
    v10 = current_config + 512;
    v11 = &qword_2CA24B0;
    if ( *(_QWORD *)(current_config + 520) > 1u )
      goto LABEL_4;
  }
  else if ( *(_QWORD *)(current_config + 544) > 1u )
  {
    goto LABEL_4;
  }
  v42 = current_config;
  v37 = v10;
  valid = is_valid_utf8(a2);
  v10 = v37;
  v9 = v42;
  if ( valid )
    return 0;
LABEL_4:
  a1[1] = 0;
  if ( a3 == -1 )
  {
    v43 = v9;
    v38 = v10;
    v31 = strlen(a2);
    v9 = v43;
    v10 = v38;
    a3 = v31;
    v12 = v31;
    if ( (unsigned __int64)v11[1] > 1 )
    {
LABEL_6:
      v51 = 0;
      if ( a3 > 0 )
        goto LABEL_11;
      return 1;
    }
  }
  else
  {
    v12 = a3;
    if ( (unsigned __int64)v11[1] > 1 )
      goto LABEL_6;
  }
  if ( a4 )
  {
    v26 = 6;
    v27 = 5;
    v28 = "CP850";
  }
  else
  {
    v26 = 7;
    v27 = 6;
    v28 = "CP1252";
  }
  v29 = (_DWORD *)*v11;
  if ( v11[2] < v26 )
  {
    v48 = v9;
    v46 = v28;
    v44 = v10;
    v39 = v26;
    v34 = qvector_reserve(v11, v29, v26, 1);
    v9 = v48;
    v28 = v46;
    v10 = v44;
    v26 = v39;
    *v11 = v34;
    v29 = (_DWORD *)v34;
  }
  v11[1] = v26;
  *v29 = *(_DWORD *)v28;
  *(_DWORD *)((char *)v29 + (unsigned int)v27 - 4) = *(_DWORD *)&v28[(unsigned int)v27 - 4];
  *(_BYTE *)(*v11 + v27) = 0;
  v30 = *(_QWORD *)(v10 + 8);
  if ( v30 <= 1 )
  {
    v51 = *(_BYTE *)(v9 + 504) ^ 1;
    if ( a3 <= 0 )
    {
LABEL_32:
      if ( v51 )
        sub_375500();
      return 1;
    }
    do
    {
LABEL_11:
      src = nullptr;
      *(_OWORD *)n = 0;
      v13 = convert_encoding();
      v14 = v13;
      if ( v13 < 0 )
      {
        v36 = haystack;
        if ( v11[1] )
          v36 = (const char *)*v11;
        sub_375320((__int64)"It appears the character encoding \"%s\" is not supported on this platform", v36);
      }
      v15 = n[0];
      if ( !v13 )
      {
        v16 = *v5;
        v17 = src;
        if ( n[1] < n[0] + 1 )
        {
          src = (void *)qvector_reserve(&src, src, n[0] + 1, 1);
          v15 = n[0];
          v17 = src;
        }
        v17[v15] = v16;
        v14 = 1;
        v15 = ++n[0];
      }
      v18 = a1[1];
      v19 = src;
      v20 = v15;
      if ( v18 )
        v20 = --v18 + v15;
      v21 = *a1;
      v22 = v20 + 1;
      if ( a1[2] < v20 + 1 )
      {
        v49 = v20;
        v47 = v18;
        v45 = src;
        v41 = v20 + 1;
        v23 = qvector_reserve(a1, v21, v22, 1);
        *a1 = v23;
        v20 = v49;
        v21 = v23;
        v18 = v47;
        v19 = v45;
        v22 = v41;
      }
      a1[1] = v22;
      v12 -= v14;
      v5 += v14;
      *(_BYTE *)(v21 + v20) = 0;
      memmove((void *)(v18 + *a1), v19, v15);
      if ( src )
      {
        n[0] = 0;
        qfree(src);
      }
    }
    while ( v12 > 0 );
    goto LABEL_32;
  }
  if ( (__int64 *)v10 != v11 )
  {
    v32 = *(const void **)v10;
    v33 = (void *)*v11;
    if ( v11[2] < v30 )
    {
      v40 = *(const void **)v10;
      v35 = qvector_reserve(v11, *v11, *(_QWORD *)(v10 + 8), 1);
      v32 = v40;
      *v11 = v35;
      v33 = (void *)v35;
    }
    v11[1] = v30;
    memmove(v33, v32, v30 - 1);
    *(_BYTE *)(*v11 + v30 - 1) = 0;
    if ( a3 <= 0 )
      return 1;
    v51 = 0;
    goto LABEL_11;
  }
  if ( a3 > 0 )
  {
    v51 = 0;
    goto LABEL_11;
  }
  return 1;
}

