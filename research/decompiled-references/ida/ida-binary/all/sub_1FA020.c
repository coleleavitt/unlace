const char *__fastcall sub_1FA020(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  char v5; // r12
  __int64 v6; // r13
  __int64 v7; // rbx
  __int64 v8; // r13
  const char *v9; // rsi
  __int64 v10; // rdx
  size_t v11; // r8
  __int64 v12; // r12
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // r12
  __int64 v15; // r15
  size_t v16; // r9
  __int64 v17; // rsi
  size_t v18; // rax
  size_t v19; // r15
  __int64 v20; // rax
  const char *result; // rax
  __int64 v22; // rax
  size_t v23; // [rsp+0h] [rbp-68h]
  size_t v24; // [rsp+0h] [rbp-68h]
  size_t v25; // [rsp+0h] [rbp-68h]
  size_t v26; // [rsp+8h] [rbp-60h]
  void *src; // [rsp+10h] [rbp-58h] BYREF
  __int128 v28; // [rsp+18h] [rbp-50h]
  unsigned __int64 v29; // [rsp+28h] [rbp-40h]

  v5 = 0;
  v6 = a2[1];
  v7 = *a2;
  v29 = __readfsqword(0x28u);
  v8 = v7 + 16 * v6;
  if ( v8 != v7 )
  {
    while ( 1 )
    {
      if ( !*(_BYTE *)v7 && a3 == *(_QWORD *)(v7 + 8) )
        goto LABEL_18;
      src = nullptr;
      v28 = 0;
      if ( !*(_BYTE *)v7 )
      {
        v9 = *(const char **)(v7 + 8);
        sub_1F9E00((__int64 *)&src);
        goto LABEL_4;
      }
      if ( v7 )
      {
        v18 = strlen((const char *)v7);
        v19 = v18;
        if ( v18 )
          break;
      }
      if ( v5 )
      {
        v12 = a1[1];
        if ( !v12 )
        {
LABEL_26:
          v9 = (const char *)*a1;
          v13 = 3;
          v11 = 2;
          if ( (unsigned __int64)a1[2] < 3 )
          {
LABEL_27:
            v23 = v11;
            v20 = qvector_reserve(a1, v9, v13, 1);
            *a1 = v20;
            v11 = v23;
            v9 = (const char *)v20;
          }
LABEL_7:
          a1[1] = v13;
          v10 = 8236;
          v9[v11] = 0;
          *(_WORD *)(*a1 + v12) = 8236;
LABEL_8:
          v14 = v28;
          if ( (_QWORD)v28 )
          {
            v11 = v28 - 1;
            if ( (_QWORD)v28 != 1 )
            {
              v15 = a1[1];
              v16 = v28 - 1;
              if ( v15 )
              {
                --v15;
                v16 = v11 + v15;
                v14 = v28 + v15;
              }
              v17 = *a1;
              if ( a1[2] < v14 )
              {
                v26 = v28 - 1;
                v25 = v16;
                v22 = qvector_reserve(a1, v17, v14, 1);
                v11 = v26;
                v16 = v25;
                *a1 = v22;
                v17 = v22;
              }
              a1[1] = v14;
              *(_BYTE *)(v17 + v16) = 0;
              v9 = (const char *)src;
              memcpy((void *)(v15 + *a1), src, v11);
            }
          }
          if ( src )
          {
            *(_QWORD *)&v28 = 0;
            qfree(src, v9, v10, a4, v11);
          }
          goto LABEL_17;
        }
LABEL_6:
        v11 = v12 + 1;
        v13 = v12 + 2;
        v9 = (const char *)*a1;
        --v12;
        if ( a1[2] < v13 )
          goto LABEL_27;
        goto LABEL_7;
      }
LABEL_17:
      v5 = 1;
LABEL_18:
      v7 += 16;
      if ( v8 == v7 )
        goto LABEL_28;
    }
    v24 = v18 + 1;
    v9 = (const char *)v7;
    src = (void *)qvector_reserve(&src, 0, v18 + 1, 1);
    *(_QWORD *)&v28 = v24;
    memmove(src, (const void *)v7, v19);
    *((_BYTE *)src + v19) = 0;
LABEL_4:
    if ( !v5 )
      goto LABEL_8;
    v12 = a1[1];
    if ( !v12 )
      goto LABEL_26;
    goto LABEL_6;
  }
LABEL_28:
  result = &s1;
  if ( a1[1] )
    return (const char *)*a1;
  return result;
}
