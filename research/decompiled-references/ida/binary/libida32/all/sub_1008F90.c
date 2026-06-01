bool __fastcall sub_1008F90(__int64 *a1, unsigned __int8 *a2, size_t a3)
{
  unsigned __int8 *v4; // r12
  size_t v5; // rbx
  const char **v6; // rbp
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r15
  __int64 v9; // r13
  __int64 v10; // rax
  const char **v11; // r13
  const char *v12; // r15
  const char *v13; // r15
  const char *v14; // r15
  const char *v15; // r15
  __int64 v16; // rax
  __int64 (*v17)(); // rdx
  const char **v18; // rbp
  __int64 v19; // rdx
  const char **v20; // r14
  const char *v21; // r13
  const char *v22; // r13
  const char *v23; // r13
  const char *v24; // r13
  const char *v25; // r13
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r15
  __int64 v29; // rbp
  const char *v30; // r13
  const void *v31; // r13
  const void *v32; // r13
  const void *v33; // r13
  const void *v34; // r13
  const char *v35; // r13
  const char *v36; // r13
  const char *v37; // r13
  unsigned __int64 v38; // [rsp+0h] [rbp-58h]
  const char **v39; // [rsp+8h] [rbp-50h]
  unsigned __int64 v40[8]; // [rsp+18h] [rbp-40h] BYREF

  if ( !a3 )
    return 0;
  v4 = a2;
  v5 = a3;
  if ( ((*a2 - 35) & 0xFD) == 0 )
  {
    v5 = a3 - 1;
    if ( a3 == 1 )
      return 0;
    v4 = a2 + 1;
  }
  v6 = (const char **)(*(__int64 (__fastcall **)(__int64 *))(*a1 + 960))(a1);
  v8 = v7;
  v38 = v7;
  if ( (byte_23ED5E0[2 * *v4] & 8) == 0 || (unsigned __int8)sub_2223C30(v4, v5, 0, v40) || v40[0] != LODWORD(v40[0]) )
  {
    v39 = &v6[v38];
    v9 = (__int64)(8 * v38) >> 5;
    v10 = (__int64)(8 * v38) >> 3;
    if ( v9 > 0 )
    {
      v11 = &v6[4 * v9];
      while ( 1 )
      {
        v14 = *v6;
        if ( *v6 )
        {
          if ( strlen(*v6) == v5 && !memcmp(v14, v4, v5) )
            break;
        }
        v15 = v6[1];
        if ( v15 && strlen(v6[1]) == v5 && !memcmp(v15, v4, v5) )
        {
          ++v6;
          break;
        }
        v12 = v6[2];
        if ( v12 && strlen(v6[2]) == v5 && !memcmp(v12, v4, v5) )
        {
          v6 += 2;
          break;
        }
        v13 = v6[3];
        if ( v13 && strlen(v6[3]) == v5 && !memcmp(v13, v4, v5) )
        {
          v6 += 3;
          break;
        }
        v6 += 4;
        if ( v6 == v11 )
        {
          v10 = v39 - v6;
          goto LABEL_33;
        }
      }
LABEL_21:
      if ( v39 != v6 )
        return 1;
LABEL_36:
      v16 = *a1;
      v17 = *(__int64 (**)())(*a1 + 976);
      if ( v17 != sub_1007E90 )
      {
        v26 = ((__int64 (__fastcall *)(__int64 *))v17)(a1);
        v28 = v26 + 48 * v27;
        if ( v26 != v28 )
        {
          v29 = v26;
          do
          {
            v30 = *(const char **)v29;
            if ( *(_QWORD *)v29 )
            {
              if ( strlen(*(const char **)v29) == v5 && !memcmp(v30, v4, v5) && *(unsigned int *)(v29 + 40) < v38 )
                return 1;
              v31 = *(const void **)(v29 + 8);
              if ( v31 )
              {
                if ( strlen(*(const char **)(v29 + 8)) == v5
                  && !memcmp(v31, v4, v5)
                  && v38 > *(unsigned int *)(v29 + 40) )
                {
                  return 1;
                }
                v32 = *(const void **)(v29 + 16);
                if ( v32 )
                {
                  if ( strlen(*(const char **)(v29 + 16)) == v5
                    && !memcmp(v32, v4, v5)
                    && v38 > *(unsigned int *)(v29 + 40) )
                  {
                    return 1;
                  }
                  v33 = *(const void **)(v29 + 24);
                  if ( v33 )
                  {
                    if ( strlen(*(const char **)(v29 + 24)) == v5
                      && !memcmp(v33, v4, v5)
                      && v38 > *(unsigned int *)(v29 + 40) )
                    {
                      return 1;
                    }
                    v34 = *(const void **)(v29 + 32);
                    if ( v34 )
                    {
                      if ( strlen(*(const char **)(v29 + 32)) == v5
                        && !memcmp(v34, v4, v5)
                        && *(unsigned int *)(v29 + 40) < v38 )
                      {
                        return 1;
                      }
                    }
                  }
                }
              }
            }
            v29 += 48;
          }
          while ( v28 != v29 );
        }
        v16 = *a1;
      }
      v18 = (const char **)(*(__int64 (__fastcall **)(__int64 *))(v16 + 968))(a1);
      v20 = &v18[6 * v19];
      if ( v18 == v20 )
        return 0;
      while ( 1 )
      {
        v21 = *v18;
        if ( *v18 )
        {
          if ( strlen(*v18) == v5 && !memcmp(v21, v4, v5) )
            break;
          v22 = v18[1];
          if ( v22 )
          {
            if ( strlen(v18[1]) == v5 && !memcmp(v22, v4, v5) )
              break;
            v23 = v18[2];
            if ( v23 )
            {
              if ( strlen(v18[2]) == v5 && !memcmp(v23, v4, v5) )
                break;
              v24 = v18[3];
              if ( v24 )
              {
                if ( strlen(v18[3]) == v5 && !memcmp(v24, v4, v5) )
                  break;
                v25 = v18[4];
                if ( v25 )
                {
                  if ( strlen(v18[4]) == v5 && !memcmp(v25, v4, v5) )
                    break;
                }
              }
            }
          }
        }
        v18 += 6;
        if ( v20 == v18 )
          return 0;
      }
      return 1;
    }
LABEL_33:
    switch ( v10 )
    {
      case 2LL:
        v37 = *v6;
        if ( *v6 )
        {
LABEL_86:
          if ( strlen(v37) == v5 && !memcmp(v37, v4, v5) )
            goto LABEL_21;
        }
        break;
      case 3LL:
        v36 = *v6;
        if ( *v6 && strlen(*v6) == v5 && !memcmp(v36, v4, v5) )
          goto LABEL_21;
        v37 = v6[1];
        ++v6;
        if ( v37 )
          goto LABEL_86;
        break;
      case 1LL:
        v35 = *v6;
        if ( !*v6 )
          goto LABEL_36;
        goto LABEL_80;
      default:
        goto LABEL_36;
    }
    v35 = v6[1];
    ++v6;
    if ( !v35 )
      goto LABEL_36;
LABEL_80:
    if ( strlen(v35) != v5 || memcmp(v35, v4, v5) )
      goto LABEL_36;
    goto LABEL_21;
  }
  return v40[0] < v8;
}

