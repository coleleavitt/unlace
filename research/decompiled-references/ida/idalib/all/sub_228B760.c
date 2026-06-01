__m128i *__fastcall sub_228B760(__m128i *a1, const char *a2)
{
  __m128i *v2; // r15
  const char *v3; // rax
  ssize_t v4; // rax
  char *v5; // rax
  char *v6; // r14
  size_t v7; // rax
  unsigned __int64 *v8; // rax
  int v9; // eax
  size_t v10; // rax
  struct stat *p_stat_buf; // rdx
  char *v13; // rax
  char *v14; // rax
  char *v15; // rax
  int save_ptr; // [rsp+8h] [rbp-30E0h]
  char *v17; // [rsp+18h] [rbp-30D0h]
  struct stat stat_buf; // [rsp+20h] [rbp-30C8h] BYREF
  char buf[4096]; // [rsp+B0h] [rbp-3038h] BYREF
  struct stat v20; // [rsp+10B0h] [rbp-2038h] BYREF
  void *ptr; // [rsp+20B0h] [rbp-1038h] BYREF
  __m128i si128; // [rsp+20B8h] [rbp-1030h] BYREF
  _BYTE v23[4128]; // [rsp+20C8h] [rbp-1020h] BYREF

  v2 = a1 + 1;
  v20.st_dev = (__dev_t)"/proc/self/exe";
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  LOWORD(v20.st_gid) = 259;
  ptr = v23;
  v3 = (const char *)sub_2253CC0(&v20.st_dev, &ptr);
  if ( access(v3, 0) == -1 )
  {
    v9 = *__errno_location();
    if ( ptr != v23 )
    {
      save_ptr = v9;
      free(ptr);
      v9 = save_ptr;
    }
    if ( v9 )
      goto LABEL_14;
  }
  else if ( ptr != v23 )
  {
    free(ptr);
  }
  v4 = readlink("/proc/self/exe", buf, 0x1000u);
  if ( v4 < 0 )
    goto LABEL_19;
  if ( v4 > 4095 )
    v4 = 4095;
  buf[v4] = 0;
  v5 = realpath(buf, nullptr);
  v6 = v5;
  if ( !v5 )
  {
LABEL_14:
    if ( !a2 )
      goto LABEL_19;
    if ( *a2 == 47 )
    {
      if ( snprintf((char *)&ptr, 0x1000u, "%s/%s", "/", a2) > 4095 )
        goto LABEL_19;
      v15 = realpath((const char *)&ptr, buf);
      p_stat_buf = &v20;
      if ( !v15 )
        goto LABEL_19;
    }
    else
    {
      if ( !strchr(a2, 47) )
      {
        v13 = getenv("PATH");
        if ( v13 )
        {
          v17 = strdup(v13);
          if ( v17 )
          {
            v14 = strtok_r(v17, ":", (char **)&stat_buf);
            if ( v14 )
            {
              while ( snprintf((char *)&ptr, 0x1000u, "%s/%s", v14, a2) > 4095
                   || !realpath((const char *)&ptr, buf)
                   || __xstat(1, (const char *)&ptr, &v20) )
              {
                v14 = strtok_r(nullptr, ":", (char **)&stat_buf);
                if ( !v14 )
                  goto LABEL_33;
              }
              free(v17);
              goto LABEL_24;
            }
LABEL_33:
            free(v17);
          }
        }
LABEL_19:
        a1->m128i_i64[0] = (__int64)v2;
        v10 = j__strlen(&byte_22F0C30);
        sub_2288020(a1, &byte_22F0C30, (__int64)(&byte_22F0C30 + v10));
        return a1;
      }
      if ( !getcwd((char *)&v20, 0x1000u)
        || snprintf((char *)&ptr, 0x1000u, "%s/%s", (const char *)&v20, a2) > 4095
        || !realpath((const char *)&ptr, buf) )
      {
        goto LABEL_19;
      }
      p_stat_buf = &stat_buf;
    }
    if ( !__xstat(1, (const char *)&ptr, p_stat_buf) )
    {
LABEL_24:
      a1->m128i_i64[0] = (__int64)v2;
      sub_2288020(a1, buf, (__int64)&buf[strlen(buf)]);
      return a1;
    }
    goto LABEL_19;
  }
  ptr = &si128.m128i_u64[1];
  v7 = j__strlen(v5);
  sub_2288020(&ptr, v6, (__int64)&v6[v7]);
  free(v6);
  v8 = (unsigned __int64 *)ptr;
  a1->m128i_i64[0] = (__int64)v2;
  if ( v8 == &si128.m128i_u64[1] )
  {
    a1[1] = _mm_load_si128((const __m128i *)&si128.m128i_u64[1]);
  }
  else
  {
    a1->m128i_i64[0] = (__int64)v8;
    a1[1].m128i_i64[0] = si128.m128i_i64[1];
  }
  a1->m128i_i64[1] = si128.m128i_i64[0];
  return a1;
}
