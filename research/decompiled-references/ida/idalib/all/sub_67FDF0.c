__int64 __fastcall sub_67FDF0(__int64 *a1, const char *a2, __int64 a3, char a4)
{
  const char *v5; // r13
  __int64 current_config; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // r14
  unsigned __int64 i; // rax
  __int64 v13; // r12
  const char *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // r15
  size_t v17; // rbx
  char v18; // r15
  _BYTE *v19; // rsi
  __int64 v20; // r9
  void *v21; // r11
  size_t v22; // r10
  __int64 v23; // rsi
  size_t v24; // rdx
  __int64 v25; // rax
  char valid; // al
  unsigned __int64 v28; // rdx
  __int64 v29; // rbx
  const char *v30; // r10
  _DWORD *v31; // rsi
  unsigned __int64 v32; // rbx
  size_t v33; // rax
  const void *v34; // r8
  void *v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rax
  const char *v38; // rsi
  __int64 v39; // [rsp+0h] [rbp-98h]
  __int64 v40; // [rsp+0h] [rbp-98h]
  unsigned __int64 v41; // [rsp+0h] [rbp-98h]
  const void *v42; // [rsp+0h] [rbp-98h]
  size_t v43; // [rsp+8h] [rbp-90h]
  __int64 v44; // [rsp+8h] [rbp-90h]
  __int64 v45; // [rsp+8h] [rbp-90h]
  __int64 v46; // [rsp+8h] [rbp-90h]
  void *v47; // [rsp+10h] [rbp-88h]
  const char *v48; // [rsp+10h] [rbp-88h]
  __int64 v49; // [rsp+18h] [rbp-80h]
  __int64 v50; // [rsp+18h] [rbp-80h]
  size_t v51; // [rsp+20h] [rbp-78h]
  char v53; // [rsp+2Fh] [rbp-69h]
  void *src; // [rsp+40h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+48h] [rbp-50h]
  unsigned __int64 v56; // [rsp+58h] [rbp-40h]

  v5 = a2;
  v56 = __readfsqword(0x28u);
  current_config = get_current_config();
  if ( !a2 )
    return 0;
  v9 = current_config;
  v10 = current_config + 544;
  v11 = &qword_2CCC390;
  if ( a4 )
  {
    v10 = current_config + 520;
    v11 = &qword_2CCC3B0;
    if ( *(_QWORD *)(current_config + 528) > 1u )
      goto LABEL_4;
  }
  else if ( *(_QWORD *)(current_config + 552) > 1u )
  {
    goto LABEL_4;
  }
  v44 = current_config;
  v39 = v10;
  valid = is_valid_utf8(a2);
  v10 = v39;
  v9 = v44;
  if ( valid )
    return 0;
LABEL_4:
  a1[1] = 0;
  if ( a3 == -1 )
  {
    v45 = v9;
    v40 = v10;
    v33 = strlen(a2);
    v9 = v45;
    v10 = v40;
    a3 = v33;
    i = v11[1];
    v13 = a3;
    if ( i > 1 )
    {
LABEL_6:
      v53 = 0;
      if ( a3 > 0 )
        goto LABEL_12;
      return 1;
    }
  }
  else
  {
    i = v11[1];
    v13 = a3;
    if ( i > 1 )
      goto LABEL_6;
  }
  if ( a4 )
  {
    v28 = 6;
    v29 = 5;
    v30 = "CP850";
  }
  else
  {
    v28 = 7;
    v29 = 6;
    v30 = "CP1252";
  }
  v31 = (_DWORD *)*v11;
  if ( v11[2] < v28 )
  {
    v50 = v9;
    v48 = v30;
    v46 = v10;
    v41 = v28;
    v36 = qvector_reserve(v11, v31, v28, 1);
    v9 = v50;
    v30 = v48;
    v10 = v46;
    v28 = v41;
    *v11 = v36;
    v31 = (_DWORD *)v36;
  }
  v11[1] = v28;
  *v31 = *(_DWORD *)v30;
  *(_DWORD *)((char *)v31 + (unsigned int)v29 - 4) = *(_DWORD *)&v30[(unsigned int)v29 - 4];
  *(_BYTE *)(*v11 + v29) = 0;
  v32 = *(_QWORD *)(v10 + 8);
  if ( v32 <= 1 )
  {
    v53 = *(_BYTE *)(v9 + 512) ^ 1;
    if ( a3 <= 0 )
    {
LABEL_35:
      if ( v53 )
        sub_378E50();
      return 1;
    }
    for ( i = v11[1]; ; i = v11[1] )
    {
LABEL_12:
      v14 = haystack;
      src = nullptr;
      *(_OWORD *)n = 0;
      if ( i )
        v14 = (const char *)*v11;
      v15 = convert_encoding(&src, v14, "UTF-8", v5, v13, 0);
      v16 = v15;
      if ( v15 < 0 )
      {
        v38 = haystack;
        if ( v11[1] )
          v38 = (const char *)*v11;
        sub_378C70((__int64)"It appears the character encoding \"%s\" is not supported on this platform", v38);
      }
      v17 = n[0];
      if ( !v15 )
      {
        v18 = *v5;
        v19 = src;
        if ( n[1] < n[0] + 1 )
        {
          src = (void *)qvector_reserve(&src, src, n[0] + 1, 1);
          v17 = n[0];
          v19 = src;
        }
        v19[v17] = v18;
        v16 = 1;
        v17 = ++n[0];
      }
      v20 = a1[1];
      v21 = src;
      v22 = v17;
      if ( v20 )
        v22 = --v20 + v17;
      v23 = *a1;
      v24 = v22 + 1;
      if ( a1[2] < v22 + 1 )
      {
        v51 = v22;
        v49 = v20;
        v47 = src;
        v43 = v22 + 1;
        v25 = qvector_reserve(a1, v23, v24, 1);
        *a1 = v25;
        v22 = v51;
        v23 = v25;
        v20 = v49;
        v21 = v47;
        v24 = v43;
      }
      a1[1] = v24;
      v13 -= v16;
      v5 += v16;
      *(_BYTE *)(v23 + v22) = 0;
      memmove((void *)(v20 + *a1), v21, v17);
      if ( src )
      {
        n[0] = 0;
        qfree(src);
      }
      if ( v13 <= 0 )
        break;
    }
    goto LABEL_35;
  }
  if ( (__int64 *)v10 != v11 )
  {
    v34 = *(const void **)v10;
    v35 = (void *)*v11;
    if ( v11[2] < v32 )
    {
      v42 = *(const void **)v10;
      v37 = qvector_reserve(v11, *v11, *(_QWORD *)(v10 + 8), 1);
      v34 = v42;
      *v11 = v37;
      v35 = (void *)v37;
    }
    v11[1] = v32;
    memmove(v35, v34, v32 - 1);
    *(_BYTE *)(*v11 + v32 - 1) = 0;
    if ( a3 <= 0 )
      return 1;
    v53 = 0;
    i = v11[1];
    goto LABEL_12;
  }
  if ( a3 > 0 )
  {
    v53 = 0;
    i = *(_QWORD *)(v10 + 8);
    goto LABEL_12;
  }
  return 1;
}
