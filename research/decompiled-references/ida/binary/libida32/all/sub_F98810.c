__int64 __fastcall sub_F98810(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, char a8)
{
  _WORD *v8; // rcx
  unsigned __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r9
  size_t v12; // r10
  _BYTE *v13; // r11
  _WORD *v14; // r12
  size_t v15; // rbx
  _QWORD *v17; // rax
  _QWORD *v18; // r13
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r14
  const void *v27; // r14
  const void *v28; // r14
  const void *v29; // r14
  const void *v30; // r14
  const void *v31; // r14
  const char *s1; // [rsp+8h] [rbp-60h]
  const char *s1a; // [rsp+8h] [rbp-60h]
  __int64 v34; // [rsp+10h] [rbp-58h]
  __int64 v35; // [rsp+18h] [rbp-50h]
  unsigned int v36; // [rsp+24h] [rbp-44h]
  _QWORD *v37; // [rsp+28h] [rbp-40h]

  sub_F722A0(a2, a3);
  v14 = sub_F72300(v8, v9);
  v15 = v10;
  if ( *(_DWORD *)(a7 + 64) && v12 == 3 && *(_WORD *)v13 == 28015 && v13[2] == 112 )
  {
    if ( v10 == 9 )
    {
      if ( *(_QWORD *)v14 == 0x7669746365726964LL && *((_BYTE *)v14 + 8) == 101 )
        return 1;
    }
    else if ( v10 == 8 && *(_QWORD *)v14 == 0x65636E6575716573LL )
    {
      return 1;
    }
  }
  v36 = sub_F8ACD0(a1, v14, v10, v13, v12, v11);
  if ( v36 )
    return v36;
  if ( !a8 )
    return v36;
  v17 = (_QWORD *)sub_FDBC70();
  v18 = (_QWORD *)*v17;
  v37 = v17;
  if ( (_QWORD *)*v17 == v17 )
    return v36;
  while ( 2 )
  {
    v19 = v18[2];
    v20 = *(_QWORD *)(v19 + 16);
    v21 = 16LL * *(_QWORD *)(v19 + 24);
    v22 = v20 + v21;
    v23 = v21;
    v24 = v21 >> 6;
    v34 = v22;
    v25 = v23 >> 4;
    if ( v24 <= 0 )
      goto LABEL_45;
    v35 = v20 + (v24 << 6);
    do
    {
      if ( a1 != *(_DWORD *)v20 )
        goto LABEL_9;
      v27 = *(const void **)(v20 + 8);
      if ( v27 )
      {
        if ( strlen(*(const char **)(v20 + 8)) == v15 && (!v15 || !memcmp(v27, v14, v15)) )
          goto LABEL_18;
LABEL_9:
        v26 = v20 + 16;
        if ( a1 != *(_DWORD *)(v20 + 16) )
          goto LABEL_10;
        goto LABEL_23;
      }
      if ( !v15 )
        goto LABEL_18;
      v26 = v20 + 16;
      if ( a1 != *(_DWORD *)(v20 + 16) )
        goto LABEL_10;
LABEL_23:
      if ( !*(_QWORD *)(v20 + 24) )
      {
        if ( !v15 )
          goto LABEL_32;
LABEL_10:
        v26 = v20 + 32;
        if ( a1 != *(_DWORD *)(v20 + 32) )
          goto LABEL_11;
LABEL_28:
        if ( *(_QWORD *)(v20 + 40) )
        {
          s1a = *(const char **)(v20 + 40);
          if ( strlen(s1a) == v15 && (!v15 || !memcmp(s1a, v14, v15)) )
            goto LABEL_32;
        }
        else if ( !v15 )
        {
          goto LABEL_32;
        }
        goto LABEL_11;
      }
      s1 = *(const char **)(v20 + 24);
      if ( strlen(s1) != v15 )
        goto LABEL_10;
      if ( !v15 || !memcmp(s1, v14, v15) )
      {
LABEL_32:
        v20 = v26;
        goto LABEL_18;
      }
      v26 = v20 + 32;
      if ( a1 == *(_DWORD *)(v20 + 32) )
        goto LABEL_28;
LABEL_11:
      if ( a1 == *(_DWORD *)(v20 + 48) )
      {
        v28 = *(const void **)(v20 + 56);
        if ( v28 )
        {
          if ( strlen(*(const char **)(v20 + 56)) == v15 && (!v15 || !memcmp(v28, v14, v15)) )
          {
            v20 += 48;
            goto LABEL_18;
          }
        }
        else if ( !v15 )
        {
          v20 += 48;
          goto LABEL_18;
        }
      }
      v20 += 64;
    }
    while ( v35 != v20 );
    v25 = (v34 - v20) >> 4;
LABEL_45:
    if ( v25 == 2 )
    {
LABEL_62:
      if ( a1 == *(_DWORD *)v20 )
      {
        v30 = *(const void **)(v20 + 8);
        if ( v30 )
        {
          if ( v15 == strlen(*(const char **)(v20 + 8)) && (!v15 || !memcmp(v30, v14, v15)) )
            goto LABEL_18;
        }
        else if ( !v15 )
        {
          goto LABEL_18;
        }
      }
      v20 += 16;
LABEL_48:
      if ( a1 == *(_DWORD *)v20 )
      {
        v29 = *(const void **)(v20 + 8);
        if ( v29 )
        {
          if ( v15 != strlen(*(const char **)(v20 + 8)) || v15 && memcmp(v29, v14, v15) )
            goto LABEL_19;
        }
        else if ( v15 )
        {
          goto LABEL_19;
        }
        goto LABEL_18;
      }
LABEL_19:
      v18 = (_QWORD *)*v18;
      if ( v37 == v18 )
        return v36;
      continue;
    }
    break;
  }
  if ( v25 != 3 )
  {
    if ( v25 == 1 )
      goto LABEL_48;
    goto LABEL_19;
  }
  if ( a1 != *(_DWORD *)v20 )
  {
LABEL_61:
    v20 += 16;
    goto LABEL_62;
  }
  v31 = *(const void **)(v20 + 8);
  if ( v31 )
  {
    if ( strlen(*(const char **)(v20 + 8)) != v15 || v15 && memcmp(v31, v14, v15) )
      goto LABEL_61;
  }
  else if ( v15 )
  {
    goto LABEL_61;
  }
LABEL_18:
  if ( v34 == v20 )
    goto LABEL_19;
  return 1;
}

