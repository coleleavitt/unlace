char *__fastcall sub_13C13C0(__int64 *a1, char *a2, char *a3, _BYTE *a4)
{
  char *v6; // rbp
  __int64 v7; // r9
  __int64 v8; // rax
  char *v9; // r13
  char *v10; // r10
  char *v11; // rbx
  size_t v12; // r8
  unsigned __int64 v13; // rdx
  size_t v14; // r14
  __int64 v15; // r8
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rsi
  __int64 v19; // rsi
  char *v20; // rdx
  size_t v21; // rcx
  char *v22; // rax
  void *v24; // rdi
  size_t v25; // r14
  size_t v26; // r12
  size_t v27; // r14
  __int64 i; // rax
  char *v29; // [rsp+8h] [rbp-50h]
  char *v30; // [rsp+8h] [rbp-50h]
  char *v31; // [rsp+8h] [rbp-50h]
  size_t v32; // [rsp+8h] [rbp-50h]
  char *v33; // [rsp+8h] [rbp-50h]
  size_t v34; // [rsp+10h] [rbp-48h]
  size_t v35; // [rsp+10h] [rbp-48h]
  size_t v36; // [rsp+10h] [rbp-48h]
  __int64 v37; // [rsp+18h] [rbp-40h]

  v6 = a3;
  v7 = *a1;
  v8 = a1[1];
  v9 = (char *)(*a1 + v8);
  v10 = &a2[-*a1];
  if ( a2 == v9 )
  {
    v30 = &a2[-*a1];
    sub_A1FE50(a1, a3, a4);
    return &v30[*a1];
  }
  v11 = a2;
  v12 = a4 - a3;
  v13 = a4 - a3 + v8;
  if ( v13 > a1[2] )
  {
    v34 = v12;
    v29 = &a2[-*a1];
    sub_2236E10(a1, a1 + 3, v13, 1);
    v8 = a1[1];
    v10 = v29;
    v7 = *a1;
    v12 = v34;
    v14 = v8 - (_QWORD)v29;
    v9 = (char *)(*a1 + v8);
    v11 = &v29[*a1];
    if ( v8 - (__int64)v29 < v34 )
      goto LABEL_4;
  }
  else
  {
    v14 = v8 - (_QWORD)v10;
    if ( v8 - (__int64)v10 < v12 )
    {
LABEL_4:
      v15 = v8 + v12;
      a1[1] = v15;
      if ( v9 != v11 )
        memcpy((void *)(v7 + v15 - v14), v11, v14);
      if ( v14 )
      {
        if ( (v11 >= v6 + 16 || v6 >= v11 + 16) && v14 - 1 > 0xE )
        {
          v16 = 0;
          v17 = 0;
          v18 = ((v14 - 16) >> 4) + 1;
          do
          {
            ++v17;
            *(__m128i *)&v11[v16] = _mm_loadu_si128((const __m128i *)&v6[v16]);
            v16 += 16;
          }
          while ( v18 > v17 );
          v19 = 16 * v18;
          v20 = &v6[v19];
          v21 = v14 - v19;
          v22 = &v11[v19];
          if ( v14 != v19 )
          {
            *v22 = *v20;
            if ( v21 != 1 )
            {
              v22[1] = v20[1];
              if ( v21 != 2 )
              {
                v22[2] = v20[2];
                if ( v21 != 3 )
                {
                  v22[3] = v20[3];
                  if ( v21 != 4 )
                  {
                    v22[4] = v20[4];
                    if ( v21 != 5 )
                    {
                      v22[5] = v20[5];
                      if ( v21 != 6 )
                      {
                        v22[6] = v20[6];
                        if ( v21 != 7 )
                        {
                          v22[7] = v20[7];
                          if ( v21 != 8 )
                          {
                            v22[8] = v20[8];
                            if ( v21 != 9 )
                            {
                              v22[9] = v20[9];
                              if ( v21 != 10 )
                              {
                                v22[10] = v20[10];
                                if ( v21 != 11 )
                                {
                                  v22[11] = v20[11];
                                  if ( v21 != 12 )
                                  {
                                    v22[12] = v20[12];
                                    if ( v21 != 13 )
                                    {
                                      v22[13] = v20[13];
                                      if ( v21 != 14 )
                                        v22[14] = v20[14];
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          v6 += v14;
        }
        else
        {
          for ( i = 0; i != v14; ++i )
            v11[i] = v6[i];
          v6 += v14;
        }
      }
      if ( a4 != v6 )
        memcpy(v9, v6, a4 - v6);
      return v11;
    }
  }
  v24 = v9;
  v25 = v8 - v12;
  v26 = v12;
  if ( v12 + v8 > a1[2] )
  {
    v37 = v7;
    v35 = v12;
    v31 = v10;
    sub_2236E10(a1, a1 + 3, v12 + v8, 1);
    v8 = a1[1];
    v7 = v37;
    v12 = v35;
    v24 = (void *)(v8 + *a1);
    v10 = v31;
  }
  if ( v26 )
  {
    v36 = v12;
    v33 = v10;
    memmove(v24, (const void *)(v7 + v25), v26);
    v8 = a1[1];
    v12 = v36;
    v10 = v33;
  }
  a1[1] = v26 + v8;
  v27 = v25 - (_QWORD)v10;
  if ( v27 )
  {
    v32 = v12;
    memmove(&v9[-v27], v11, v27);
    v12 = v32;
  }
  if ( v12 )
    memmove(v11, v6, v12);
  return v11;
}
