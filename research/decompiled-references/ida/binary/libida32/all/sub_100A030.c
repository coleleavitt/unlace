unsigned __int8 *__fastcall sub_100A030(__int64 *a1, unsigned __int8 *a2, size_t a3, char a4)
{
  unsigned __int8 *v4; // r12
  size_t v5; // rbx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  __int64 (*v9)(); // rdx
  __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // r13
  const char *v13; // r14
  const void *v14; // r14
  const void *v15; // r14
  const void *v16; // r14
  const void *v17; // r14
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r14
  __int64 v21; // rbp
  const char *v22; // r15
  unsigned __int64 v23; // rax
  const void *v24; // r15
  const void *v25; // r15
  const void *v26; // r15
  const void *v27; // r15
  __int64 v30; // [rsp+18h] [rbp-50h]
  _QWORD v31[8]; // [rsp+28h] [rbp-40h] BYREF

  v4 = a2;
  v5 = a3;
  if ( ((*a2 - 35) & 0xFD) == 0 && a3 )
  {
    v5 = a3 - 1;
    v4 = a2 + 1;
  }
  v30 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 960))(a1);
  v7 = v6;
  if ( (byte_23ED5E0[2 * *v4] & 8) != 0 && !(unsigned __int8)sub_2223C30(v4, v5, 0, v31) && v31[0] == LODWORD(v31[0]) )
  {
    v4 = *(unsigned __int8 **)(v30 + 8LL * v31[0]);
    if ( !v4 )
      return v4;
    goto LABEL_57;
  }
  v8 = *a1;
  v9 = *(__int64 (**)())(*a1 + 976);
  if ( v9 != sub_1007E90 )
  {
    v18 = ((__int64 (__fastcall *)(__int64 *))v9)(a1);
    v20 = v18 + 48 * v19;
    if ( v20 != v18 )
    {
      v21 = v18;
      while ( 1 )
      {
        v22 = *(const char **)v21;
        if ( *(_QWORD *)v21 )
        {
          if ( strlen(*(const char **)v21) == v5 && (!v5 || !memcmp(v22, v4, v5)) )
          {
            v23 = *(unsigned int *)(v21 + 40);
            if ( v23 < v7 )
              break;
          }
          v24 = *(const void **)(v21 + 8);
          if ( v24 )
          {
            if ( v5 == strlen(*(const char **)(v21 + 8)) && (!v5 || !memcmp(v24, v4, v5)) )
            {
              v23 = *(unsigned int *)(v21 + 40);
              if ( v7 > v23 )
                break;
            }
            v25 = *(const void **)(v21 + 16);
            if ( v25 )
            {
              if ( v5 == strlen(*(const char **)(v21 + 16)) && (!v5 || !memcmp(v25, v4, v5)) )
              {
                v23 = *(unsigned int *)(v21 + 40);
                if ( v7 > v23 )
                  break;
              }
              v26 = *(const void **)(v21 + 24);
              if ( v26 )
              {
                if ( v5 == strlen(*(const char **)(v21 + 24)) && (!v5 || !memcmp(v26, v4, v5)) )
                {
                  v23 = *(unsigned int *)(v21 + 40);
                  if ( v23 < v7 )
                    break;
                }
                v27 = *(const void **)(v21 + 32);
                if ( v27 && v5 == strlen(*(const char **)(v21 + 32)) && (!v5 || !memcmp(v27, v4, v5)) )
                {
                  v23 = *(unsigned int *)(v21 + 40);
                  if ( v23 < v7 )
                    break;
                }
              }
            }
          }
        }
        v21 += 48;
        if ( v20 == v21 )
          goto LABEL_53;
      }
      if ( a4 )
      {
        v4 = *(unsigned __int8 **)(v30 + 8 * v23);
        if ( v4 )
          goto LABEL_57;
      }
      return v4;
    }
LABEL_53:
    v8 = *a1;
  }
  v10 = (*(__int64 (__fastcall **)(__int64 *))(v8 + 968))(a1);
  v12 = v10 + 48 * v11;
  if ( v12 != v10 )
  {
    while ( 1 )
    {
      v13 = *(const char **)v10;
      if ( *(_QWORD *)v10 )
      {
        if ( v5 == strlen(*(const char **)v10) && (!v5 || !memcmp(v13, v4, v5)) )
          break;
        v14 = *(const void **)(v10 + 8);
        if ( v14 )
        {
          if ( v5 == strlen(*(const char **)(v10 + 8)) && (!v5 || !memcmp(v14, v4, v5)) )
            break;
          v15 = *(const void **)(v10 + 16);
          if ( v15 )
          {
            if ( strlen(*(const char **)(v10 + 16)) == v5 && (!v5 || !memcmp(v15, v4, v5)) )
              break;
            v16 = *(const void **)(v10 + 24);
            if ( v16 )
            {
              if ( v5 == strlen(*(const char **)(v10 + 24)) && (!v5 || !memcmp(v16, v4, v5)) )
                break;
              v17 = *(const void **)(v10 + 32);
              if ( v17 )
              {
                if ( v5 == strlen(*(const char **)(v10 + 32)) && (!v5 || !memcmp(v17, v4, v5)) )
                  break;
              }
            }
          }
        }
      }
      v10 += 48;
      if ( v12 == v10 )
        return v4;
    }
    v4 = *(unsigned __int8 **)(v10 + 40);
    if ( v4 )
LABEL_57:
      strlen((const char *)v4);
  }
  return v4;
}

