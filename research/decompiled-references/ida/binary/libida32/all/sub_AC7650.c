__int64 __fastcall sub_AC7650(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  __int64 v5; // r15
  unsigned __int64 v6; // rax
  unsigned int *v7; // rsi
  __int64 v8; // rbx
  size_t v9; // r8
  const char *v10; // rsi
  unsigned __int64 v11; // rbx
  unsigned int *v12; // rdi
  size_t v13; // rdx
  const void *v14; // rdi
  int v15; // eax
  __int64 v16; // rbp
  _QWORD *v17; // r12
  __int64 v18; // r14
  __int64 v19; // rax
  _QWORD *v20; // r15
  __int64 v21; // r14
  unsigned __int64 v22; // rcx
  unsigned int *v23; // rax
  __int64 v24; // r15
  __int64 v25; // rbx
  size_t v26; // rbp
  __int64 *v27; // r13
  __int64 v28; // r9
  __int64 v29; // r12
  unsigned __int64 v30; // r12
  unsigned int *v31; // rdi
  size_t v32; // rdx
  const void *v33; // rdi
  int v34; // eax
  __int64 v36; // rbp
  __int64 v37; // rax
  size_t v38; // [rsp+0h] [rbp-68h]
  __int64 v39; // [rsp+0h] [rbp-68h]
  __int64 s2; // [rsp+8h] [rbp-60h]
  void *s2a; // [rsp+8h] [rbp-60h]
  __int64 v44; // [rsp+20h] [rbp-48h]

  v4 = a1;
  s2 = (a3 - 1) / 2;
  v44 = a3 & 1;
  if ( a2 < s2 )
  {
    v5 = a2;
    while ( 1 )
    {
      v16 = 2 * (v5 + 1);
      v17 = (_QWORD *)(v4 + 16 * (v5 + 1));
      v18 = *v17;
      v19 = *(_QWORD *)(*(v17 - 1) + 40LL);
      if ( (v19 & 7) != 0 || (v6 = v19 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      {
        v8 = *(_QWORD *)(v18 + 40);
        v10 = &byte_22CD811;
        v9 = 0;
        if ( (v8 & 7) == 0 )
          goto LABEL_5;
        *(_QWORD *)(v4 + 8 * v5) = v18;
        v5 = 2 * (v5 + 1);
        if ( v16 >= s2 )
        {
LABEL_17:
          v20 = v17;
          if ( v44 )
            goto LABEL_18;
          goto LABEL_38;
        }
      }
      else
      {
        v7 = *(unsigned int **)(v6 + 16);
        v8 = *(_QWORD *)(v18 + 40);
        v9 = *v7;
        v10 = (const char *)(v7 + 4);
        if ( (v8 & 7) != 0 )
        {
          v11 = 0;
          goto LABEL_10;
        }
LABEL_5:
        v11 = v8 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v11 )
        {
          v12 = *(unsigned int **)(v11 + 16);
          v13 = v9;
          v11 = *v12;
          v14 = v12 + 4;
          if ( v11 <= v9 )
            v13 = v11;
          if ( v13 )
          {
            v38 = v9;
            v15 = memcmp(v14, v10, v13);
            v9 = v38;
            if ( v15 )
            {
              if ( v15 >= 0 )
                goto LABEL_13;
              goto LABEL_12;
            }
          }
        }
LABEL_10:
        if ( v9 == v11 || v9 <= v11 )
          goto LABEL_13;
LABEL_12:
        --v16;
        v17 = (_QWORD *)(v4 + 8 * v16);
        v18 = *v17;
LABEL_13:
        *(_QWORD *)(v4 + 8 * v5) = v18;
        v5 = v16;
        if ( v16 >= s2 )
          goto LABEL_17;
      }
    }
  }
  v20 = (_QWORD *)(a1 + 8 * a2);
  if ( (a3 & 1) == 0 )
  {
    v16 = a2;
LABEL_38:
    if ( (a3 - 2) / 2 == v16 )
    {
      v36 = 2 * v16 + 2;
      v37 = *(_QWORD *)(v4 + 8 * v36 - 8);
      v16 = v36 - 1;
      *v20 = v37;
      v20 = (_QWORD *)(v4 + 8 * v16);
    }
LABEL_18:
    v21 = (v16 - 1) / 2;
    if ( v16 > a2 )
    {
      v22 = *(_QWORD *)(a4 + 40) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a4 + 40) & 7) == 0 && v22 )
      {
        v23 = *(unsigned int **)(v22 + 16);
        v24 = v4;
        s2a = v23 + 4;
        v25 = v16;
        v26 = *v23;
        while ( 1 )
        {
          v27 = (__int64 *)(v24 + 8 * v21);
          v28 = *v27;
          v29 = *(_QWORD *)(*v27 + 40);
          if ( (v29 & 7) != 0 )
          {
            v30 = 0;
          }
          else
          {
            v30 = v29 & 0xFFFFFFFFFFFFFFF8LL;
            if ( v30 )
            {
              v31 = *(unsigned int **)(v30 + 16);
              v32 = v26;
              v30 = *v31;
              v33 = v31 + 4;
              if ( v30 <= v26 )
                v32 = v30;
              if ( v32 )
              {
                v39 = *v27;
                v34 = memcmp(v33, s2a, v32);
                v28 = v39;
                if ( v34 )
                {
                  if ( v34 >= 0 )
                    goto LABEL_30;
                  goto LABEL_41;
                }
              }
            }
          }
          if ( v26 == v30 || v26 <= v30 )
          {
LABEL_30:
            v16 = v25;
            v4 = v24;
            break;
          }
LABEL_41:
          *(_QWORD *)(v24 + 8 * v25) = v28;
          v25 = v21;
          if ( a2 >= v21 )
          {
            v20 = (_QWORD *)(v24 + 8 * v21);
            goto LABEL_35;
          }
          v21 = (v21 - 1) / 2;
        }
      }
      v20 = (_QWORD *)(v4 + 8 * v16);
    }
  }
LABEL_35:
  *v20 = a4;
  return a4;
}

