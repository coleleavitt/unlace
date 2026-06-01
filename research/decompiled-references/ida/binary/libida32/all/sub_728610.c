__int64 __fastcall sub_728610(__int64 *a1, __int64 a2, __int64 a3)
{
  __int16 v5; // ax
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int16 v9; // ax
  __int64 v10; // r14
  char v11; // r13
  unsigned __int64 v12; // r15
  __int64 v13; // r8
  __int64 v14; // rsi
  unsigned int token; // eax
  __int64 v16; // rdi
  const char *v17; // rax
  unsigned __int64 v18; // r13
  size_t v19; // r15
  __int64 v20; // r14
  size_t v21; // r8
  __int64 v22; // rsi
  __int64 v23; // rax
  __int16 v24; // ax
  __int64 v25; // rax
  __int64 v27; // [rsp+8h] [rbp-40h]
  size_t v28; // [rsp+8h] [rbp-40h]

  a1[1] = 0;
  while ( 1 )
  {
    v5 = *(_WORD *)(a3 + 24);
    if ( v5 == 4 )
    {
LABEL_13:
      v18 = *(_QWORD *)(a3 + 8);
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( v18 != 1 )
        {
          v20 = a1[1];
          v21 = v18 - 1;
          if ( v20 )
          {
            --v20;
            v21 = v19 + v20;
            v18 += v20;
          }
          v22 = *a1;
          if ( a1[2] < v18 )
          {
            v28 = v21;
            v25 = qvector_reserve(a1, v22, v18, 1);
            v21 = v28;
            *a1 = v25;
            v22 = v25;
          }
          a1[1] = v18;
          *(_BYTE *)(v22 + v21) = 0;
          memcpy((void *)(v20 + *a1), *(const void **)a3, v19);
        }
      }
      goto LABEL_10;
    }
    if ( v5 == 2 )
      break;
    v6 = a3;
    if ( !sub_727000(a2, a3) )
      goto LABEL_24;
LABEL_5:
    v9 = *(_WORD *)(a3 + 24);
    if ( v9 == 4 )
      goto LABEL_13;
    if ( v9 == 2 )
    {
      if ( *(_QWORD *)(sub_780220(a2) + 8) > 1u )
        goto LABEL_13;
      v9 = *(_WORD *)(a3 + 24);
    }
    v10 = a1[1];
    v11 = v9;
    if ( v10 )
    {
      v12 = v10 + 1;
      v13 = a1[1];
      v14 = *a1;
      --v10;
      if ( a1[2] < v12 )
        goto LABEL_21;
    }
    else
    {
      v14 = *a1;
      v13 = 1;
      v12 = 2;
      if ( (unsigned __int64)a1[2] < 2 )
      {
LABEL_21:
        v27 = v13;
        v23 = qvector_reserve(a1, v14, v12, 1);
        v13 = v27;
        *a1 = v23;
        v14 = v23;
      }
    }
    a1[1] = v12;
    *(_BYTE *)(v14 + v10) = v11;
    *(_BYTE *)(*a1 + v13) = 0;
LABEL_10:
    v6 = a3;
    token = lex_get_token(a2);
    if ( token )
    {
      v16 = token;
      goto LABEL_12;
    }
  }
  if ( *(_QWORD *)(sub_780220(a2) + 8) > 1u )
    goto LABEL_5;
  v6 = a3;
  if ( sub_727000(a2, a3) )
    goto LABEL_5;
LABEL_24:
  v24 = *(_WORD *)(a3 + 24);
  if ( v24 != 59 )
  {
    if ( v24 != 1 )
      goto LABEL_26;
    if ( *(_QWORD *)(sub_780220(a2) + 8) <= 1u )
    {
      v24 = *(_WORD *)(a3 + 24);
LABEL_26:
      if ( v24 != 2 )
      {
        v16 = 1362;
LABEL_12:
        v17 = (const char *)qstrerror(v16, v6, v7, v8);
        sub_727620(a2, (__int64)"%s", v17);
      }
    }
  }
  return 1;
}

