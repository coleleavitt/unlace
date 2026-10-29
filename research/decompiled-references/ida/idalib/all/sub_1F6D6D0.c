__int64 __fastcall sub_1F6D6D0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r15
  __int64 v5; // rbx
  __int64 *v6; // r13
  __int64 v7; // r14
  unsigned int *v8; // rsi
  unsigned int *v9; // rdi
  size_t v10; // r11
  size_t v11; // r12
  size_t v12; // rdx
  int v13; // eax
  __int64 v14; // r14
  unsigned int *v15; // r12
  size_t v16; // r15
  __int64 v17; // r12
  unsigned int *v18; // rdi
  size_t v19; // r8
  size_t v20; // rdx
  int v21; // eax
  __int64 v23; // rbx
  __int64 v24; // rax
  size_t v25; // [rsp+8h] [rbp-60h]
  size_t v26; // [rsp+8h] [rbp-60h]
  __int64 s2; // [rsp+10h] [rbp-58h]
  void *s2a; // [rsp+10h] [rbp-58h]
  __int64 v30; // [rsp+20h] [rbp-48h]

  s2 = (a2 - 1) / 2;
  v30 = a2 & 1;
  if ( a2 > 2 )
  {
    v4 = 0;
    while ( 1 )
    {
      v5 = 2 * (v4 + 1);
      v6 = &a1[2 * v4 + 2];
      v7 = *v6;
      v8 = *(unsigned int **)(*(v6 - 1) + 16);
      v9 = *(unsigned int **)(*v6 + 16);
      v10 = *v8;
      v11 = *v9;
      v12 = v11;
      if ( v10 <= v11 )
        v12 = *v8;
      if ( !v12 )
        break;
      v25 = *v8;
      v13 = memcmp(v9 + 4, v8 + 4, v12);
      v10 = v25;
      if ( !v13 )
        break;
      if ( v13 < 0 )
      {
LABEL_5:
        v6 = &a1[--v5];
        v7 = *v6;
LABEL_6:
        a1[v4] = v7;
        v4 = v5;
        if ( v5 >= s2 )
          goto LABEL_13;
      }
      else
      {
        a1[v4] = v7;
        v4 = 2 * (v4 + 1);
        if ( v5 >= s2 )
        {
LABEL_13:
          if ( !v30 && v5 == (a2 - 2) >> 1 )
          {
LABEL_27:
            v23 = 2 * v5 + 2;
            v24 = a1[v23 - 1];
            v5 = v23 - 1;
            *v6 = v24;
          }
          v14 = (v5 - 1) >> 1;
          v15 = *(unsigned int **)(a3 + 16);
          v16 = *v15;
          s2a = v15 + 4;
          while ( 1 )
          {
            v6 = &a1[v14];
            v17 = *v6;
            v18 = *(unsigned int **)(*v6 + 16);
            v19 = *v18;
            v20 = v19;
            if ( v16 <= v19 )
              v20 = v16;
            if ( v20 && (v26 = *v18, v21 = memcmp(v18 + 4, s2a, v20), v19 = v26, v21) )
            {
              if ( v21 >= 0 )
                goto LABEL_21;
            }
            else if ( v16 == v19 || v16 <= v19 )
            {
LABEL_21:
              v6 = &a1[v5];
              goto LABEL_22;
            }
            a1[v5] = v17;
            v5 = v14;
            if ( !v14 )
              goto LABEL_22;
            v14 = (v14 - 1) / 2;
          }
        }
      }
    }
    if ( v10 == v11 || v10 <= v11 )
      goto LABEL_6;
    goto LABEL_5;
  }
  v6 = a1;
  if ( (a2 & 1) == 0 && (unsigned __int64)(a2 - 1) <= 2 )
  {
    v5 = 0;
    goto LABEL_27;
  }
LABEL_22:
  *v6 = a3;
  return a3;
}
