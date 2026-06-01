__int64 __fastcall sub_FBC550(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  _WORD *v8; // rcx
  unsigned __int64 v9; // r8
  size_t v10; // rdx
  __int64 v11; // r10
  __int64 v12; // r11
  _WORD *v13; // r12
  size_t v14; // rbx
  _QWORD *v16; // rax
  _QWORD *v17; // r13
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r14
  const void *v26; // r14
  const void *v27; // r14
  const void *v28; // r14
  const void *v29; // r14
  const void *v30; // r14
  const char *s1; // [rsp+8h] [rbp-60h]
  const char *s1a; // [rsp+8h] [rbp-60h]
  __int64 v33; // [rsp+10h] [rbp-58h]
  __int64 v34; // [rsp+18h] [rbp-50h]
  unsigned int v35; // [rsp+24h] [rbp-44h]
  _QWORD *v36; // [rsp+28h] [rbp-40h]

  sub_F95FE0(a2, a3);
  v13 = sub_F96040(v8, v9);
  v14 = v10;
  if ( *(_DWORD *)(a7 + 64) && v11 == 3 && *(_WORD *)v12 == 28015 && *(_BYTE *)(v12 + 2) == 112 )
  {
    if ( v10 == 9 )
    {
      if ( *(_QWORD *)v13 == 0x7669746365726964LL && *((_BYTE *)v13 + 8) == 101 )
        return 1;
    }
    else if ( v10 == 8 && *(_QWORD *)v13 == 0x65636E6575716573LL )
    {
      return 1;
    }
  }
  v35 = sub_FAEA10(a1, v13, v10, v12, v11);
  if ( v35 )
    return v35;
  if ( !a8 )
    return v35;
  v16 = (_QWORD *)sub_FFF9B0();
  v17 = (_QWORD *)*v16;
  v36 = v16;
  if ( (_QWORD *)*v16 == v16 )
    return v35;
  while ( 2 )
  {
    v18 = v17[2];
    v19 = *(_QWORD *)(v18 + 16);
    v20 = 16LL * *(_QWORD *)(v18 + 24);
    v21 = v19 + v20;
    v22 = v20;
    v23 = v20 >> 6;
    v33 = v21;
    v24 = v22 >> 4;
    if ( v23 <= 0 )
      goto LABEL_45;
    v34 = v19 + (v23 << 6);
    do
    {
      if ( a1 != *(_DWORD *)v19 )
        goto LABEL_9;
      v26 = *(const void **)(v19 + 8);
      if ( v26 )
      {
        if ( strlen(*(const char **)(v19 + 8)) == v14 && (!v14 || !memcmp(v26, v13, v14)) )
          goto LABEL_18;
LABEL_9:
        v25 = v19 + 16;
        if ( a1 != *(_DWORD *)(v19 + 16) )
          goto LABEL_10;
        goto LABEL_23;
      }
      if ( !v14 )
        goto LABEL_18;
      v25 = v19 + 16;
      if ( a1 != *(_DWORD *)(v19 + 16) )
        goto LABEL_10;
LABEL_23:
      if ( !*(_QWORD *)(v19 + 24) )
      {
        if ( !v14 )
          goto LABEL_32;
LABEL_10:
        v25 = v19 + 32;
        if ( a1 != *(_DWORD *)(v19 + 32) )
          goto LABEL_11;
LABEL_28:
        if ( *(_QWORD *)(v19 + 40) )
        {
          s1a = *(const char **)(v19 + 40);
          if ( strlen(s1a) == v14 && (!v14 || !memcmp(s1a, v13, v14)) )
            goto LABEL_32;
        }
        else if ( !v14 )
        {
          goto LABEL_32;
        }
        goto LABEL_11;
      }
      s1 = *(const char **)(v19 + 24);
      if ( strlen(s1) != v14 )
        goto LABEL_10;
      if ( !v14 || !memcmp(s1, v13, v14) )
      {
LABEL_32:
        v19 = v25;
        goto LABEL_18;
      }
      v25 = v19 + 32;
      if ( a1 == *(_DWORD *)(v19 + 32) )
        goto LABEL_28;
LABEL_11:
      if ( a1 == *(_DWORD *)(v19 + 48) )
      {
        v27 = *(const void **)(v19 + 56);
        if ( v27 )
        {
          if ( strlen(*(const char **)(v19 + 56)) == v14 && (!v14 || !memcmp(v27, v13, v14)) )
          {
            v19 += 48;
            goto LABEL_18;
          }
        }
        else if ( !v14 )
        {
          v19 += 48;
          goto LABEL_18;
        }
      }
      v19 += 64;
    }
    while ( v34 != v19 );
    v24 = (v33 - v19) >> 4;
LABEL_45:
    if ( v24 == 2 )
    {
LABEL_62:
      if ( a1 == *(_DWORD *)v19 )
      {
        v29 = *(const void **)(v19 + 8);
        if ( v29 )
        {
          if ( v14 == strlen(*(const char **)(v19 + 8)) && (!v14 || !memcmp(v29, v13, v14)) )
            goto LABEL_18;
        }
        else if ( !v14 )
        {
          goto LABEL_18;
        }
      }
      v19 += 16;
LABEL_48:
      if ( a1 == *(_DWORD *)v19 )
      {
        v28 = *(const void **)(v19 + 8);
        if ( v28 )
        {
          if ( v14 != strlen(*(const char **)(v19 + 8)) || v14 && memcmp(v28, v13, v14) )
            goto LABEL_19;
        }
        else if ( v14 )
        {
          goto LABEL_19;
        }
        goto LABEL_18;
      }
LABEL_19:
      v17 = (_QWORD *)*v17;
      if ( v36 == v17 )
        return v35;
      continue;
    }
    break;
  }
  if ( v24 != 3 )
  {
    if ( v24 == 1 )
      goto LABEL_48;
    goto LABEL_19;
  }
  if ( a1 != *(_DWORD *)v19 )
  {
LABEL_61:
    v19 += 16;
    goto LABEL_62;
  }
  v30 = *(const void **)(v19 + 8);
  if ( v30 )
  {
    if ( strlen(*(const char **)(v19 + 8)) != v14 || v14 && memcmp(v30, v13, v14) )
      goto LABEL_61;
  }
  else if ( v14 )
  {
    goto LABEL_61;
  }
LABEL_18:
  if ( v33 == v19 )
    goto LABEL_19;
  return 1;
}
