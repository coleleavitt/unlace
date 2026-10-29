char __fastcall sub_4DA730(int *a1, _QWORD *a2, size_t *a3, __int64 a4, double a5)
{
  unsigned int v5; // r14d
  unsigned __int64 v6; // rax
  int v11; // edx
  __int64 v12; // rdi
  char result; // al
  int v14; // eax
  char v15; // dl
  __int16 v16; // cx
  char v17; // bl
  const char *v18; // r15
  int v19; // ebp
  const char *v20; // rsi
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  bool v24; // al
  __int16 v25; // ax
  const char *v26; // rdi
  size_t v27; // r8
  const void *v28; // r12
  int v29; // r14d
  const char *v30; // rdi
  char *v31; // r12
  __int16 v32; // bp
  bool v33; // zf
  const char *v34; // rdi
  size_t v35; // rdx
  int v36; // eax
  void *v37; // rdi
  char *v38; // rdx
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rbp
  __int16 v42; // r12
  const char *v43; // rdi
  char *s2; // [rsp+0h] [rbp-78h]
  char s2b; // [rsp+0h] [rbp-78h]
  char *s2a; // [rsp+0h] [rbp-78h]
  char *s2d; // [rsp+0h] [rbp-78h]
  char *s2c; // [rsp+0h] [rbp-78h]
  size_t v49; // [rsp+8h] [rbp-70h]
  int v50; // [rsp+1Ch] [rbp-5Ch] BYREF
  unsigned __int64 v51; // [rsp+20h] [rbp-58h] BYREF
  __int128 v52; // [rsp+28h] [rbp-50h]
  unsigned __int64 v53; // [rsp+38h] [rbp-40h]

  v53 = __readfsqword(0x28u);
  v5 = *a1;
  if ( (*a1 & 0x40) != 0 )
    return 1;
  v6 = *((_QWORD *)a1 + 6);
  if ( v6 <= 1 )
    return 1;
  v11 = *a1 & 3;
  if ( (unsigned int)(v11 - 1) <= 1 )
  {
    v12 = *((_QWORD *)a1 + 9);
    result = 0;
    if ( !v12 )
      return result;
    v14 = qregexec(v12 + 16, a3[1], 1, &v51, 0);
    v50 = -1;
    v15 = 1;
    if ( v14 == 17 )
      goto LABEL_9;
    if ( (v5 & 0x6000) == 0x2000 )
    {
      if ( v51 )
        goto LABEL_9;
      v16 = v52;
      if ( (_QWORD)v52 != *a3 )
        goto LABEL_9;
    }
    else
    {
      v16 = v52;
    }
    LOWORD(v50) = v51;
    v15 = 0;
    HIWORD(v50) = v16;
LABEL_9:
    result = v15 ^ ((v5 & 0x5000) == 0);
    goto LABEL_10;
  }
  if ( v11 == 3 )
  {
    v27 = *a3;
    v51 = 0;
    v28 = (const void *)a3[1];
    v29 = (v5 >> 5) & 1;
    v52 = 0;
    if ( v27 )
    {
      v37 = nullptr;
      v38 = (char *)(v27 + 1);
      if ( v27 != -1 )
      {
        v49 = v27;
        s2c = (char *)(v27 + 1);
        v51 = qvector_reserve(&v51, 0, v38, 1);
        v27 = v49;
        v37 = (void *)v51;
        v38 = s2c;
      }
      *(_QWORD *)&v52 = v38;
      s2d = (char *)v27;
      memmove(v37, v28, v27);
      s2d[v51] = 0;
    }
    result = sub_4D9700(a2, (char *)a1 + 40, (__int64 *)&v51, a4, v29);
    if ( v51 )
    {
      s2b = result;
      *(_QWORD *)&v52 = 0;
      qfree(v51, (const char *)a1 + 40);
      return s2b;
    }
    return result;
  }
  if ( (~a4 & *((_QWORD *)a1 + 8)) != 0 )
    return 0;
  v50 = -1;
  v18 = (const char *)a3[1];
  v19 = v5 & 0x7000;
  v20 = *((const char **)a1 + 5);
  if ( v19 == 0x4000 )
  {
    v35 = v6 - 1;
    if ( *a3 < v6 - 1 )
      return 0;
    s2a = *((char **)a1 + 5);
    if ( (v5 & 0x20) != 0 )
      v36 = strncmp(v18, v20, v35);
    else
      v36 = strncasecmp(v18, v20, v35);
    v20 = s2a;
    if ( v36 )
      return 0;
LABEL_27:
    LOWORD(v50) = 0;
    v25 = qustrlen(v20);
    goto LABEL_28;
  }
  if ( (v5 & 0x7000) > 0x4000 )
  {
    if ( v19 != 20480 )
    {
      s2 = *((char **)a1 + 5);
      v26 = (const char *)a3[1];
      if ( (v5 & 0x20) == 0 )
        goto LABEL_86;
      v21 = strcmp(v18, v20);
      v20 = s2;
      goto LABEL_32;
    }
    v39 = v6 - 1;
    if ( *a3 < v39 )
      return 0;
    v40 = (unsigned __int64)&v18[*a3 - v39];
    if ( (v5 & 0x20) != 0 ? strcmp(&v18[*a3 - v39], v20) : strcasecmp(&v18[*a3 - v39], v20) )
      return 0;
    v51 = (unsigned __int64)v18;
    v42 = 0;
    if ( v40 )
    {
      while ( v51 < v40 && !skip_utf8(&v51, 1) )
        ++v42;
    }
    else
    {
      while ( !skip_utf8(&v51, 1) )
        ++v42;
    }
    v33 = *((_QWORD *)a1 + 6) == 0;
    LOWORD(v50) = v42;
    v43 = &s1;
    if ( !v33 )
      v43 = *((const char **)a1 + 5);
    v25 = v42 + qustrlen(v43);
    goto LABEL_28;
  }
  if ( (v5 & 0x6000) == 0 )
  {
    v30 = (const char *)a3[1];
    if ( (v5 & 0x20) != 0 )
      v31 = strstr(v30, v20);
    else
      v31 = (char *)stristr(v30, v20);
    if ( (v5 & 0x7000) != 0 )
    {
      result = v31 == nullptr;
LABEL_10:
      v17 = result & (a2 != nullptr);
      if ( v17 )
      {
        sub_4D90A0((__int64)a2, (const char *)&v50);
        return v17;
      }
      return result;
    }
    if ( !v31 )
      return 0;
    v51 = (unsigned __int64)v18;
    v32 = 0;
    if ( v18 < v31 )
    {
      do
      {
        if ( skip_utf8(&v51, 1) )
          break;
        ++v32;
      }
      while ( v51 < (unsigned __int64)v31 );
    }
    v33 = *((_QWORD *)a1 + 6) == 0;
    LOWORD(v50) = v32;
    v34 = &s1;
    if ( !v33 )
      v34 = *((const char **)a1 + 5);
    v25 = v32 + qustrlen(v34);
LABEL_28:
    HIWORD(v50) = v25;
    result = 1;
    goto LABEL_10;
  }
  s2 = *((char **)a1 + 5);
  if ( (v5 & 0x20) != 0 )
    v21 = strcmp(v18, v20);
  else
    v21 = strcasecmp(v18, v20);
  v20 = s2;
  while ( (v5 & 0x7000) <= 0x6000 )
  {
    if ( v19 == 0x2000 )
    {
      v24 = v21 == 0;
LABEL_26:
      if ( !v24 )
        return 0;
      goto LABEL_27;
    }
    if ( v19 == 12288 )
    {
      v24 = v21 != 0;
      goto LABEL_26;
    }
LABEL_84:
    if ( under_debugger )
      BUG();
    v26 = (char *)&stru_9D30.st_size + 1;
    interr((char *)&stru_9D30.st_size + 1, v20, v22, v23, a5);
LABEL_86:
    v21 = strcasecmp(v26, v20);
    v20 = s2;
LABEL_32:
    v22 = (unsigned int)v21 >> 31;
    if ( v19 == 24576 )
      goto LABEL_33;
  }
  if ( v19 != 28672 )
    goto LABEL_84;
  LOBYTE(v22) = v21 > 0;
LABEL_33:
  if ( (_BYTE)v22 )
    goto LABEL_27;
  return 0;
}
