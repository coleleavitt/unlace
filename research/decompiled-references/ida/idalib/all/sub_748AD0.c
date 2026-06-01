__int64 __fastcall sub_748AD0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int16 v5; // ax
  __int16 v6; // ax
  __int64 v7; // r14
  char v8; // r13
  unsigned __int64 v9; // r15
  __int64 v10; // r8
  __int64 v11; // rsi
  unsigned int token; // eax
  __int64 v13; // rdi
  const char *v14; // rax
  unsigned __int64 v15; // r13
  size_t v16; // r15
  __int64 v17; // r14
  size_t v18; // r8
  __int64 v19; // rsi
  __int64 v20; // rax
  __int16 v21; // ax
  __int64 v22; // rax
  __int64 v24; // [rsp+8h] [rbp-40h]
  size_t v25; // [rsp+8h] [rbp-40h]

  a1[1] = 0;
  while ( 1 )
  {
    v5 = *(_WORD *)(a3 + 24);
    if ( v5 == 4 )
    {
LABEL_13:
      v15 = *(_QWORD *)(a3 + 8);
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v15 != 1 )
        {
          v17 = a1[1];
          v18 = v15 - 1;
          if ( v17 )
          {
            --v17;
            v18 = v16 + v17;
            v15 += v17;
          }
          v19 = *a1;
          if ( a1[2] < v15 )
          {
            v25 = v18;
            v22 = qvector_reserve(a1, v19, v15, 1);
            v18 = v25;
            *a1 = v22;
            v19 = v22;
          }
          a1[1] = v15;
          *(_BYTE *)(v19 + v18) = 0;
          memcpy((void *)(v17 + *a1), *(const void **)a3, v16);
        }
      }
      goto LABEL_10;
    }
    if ( v5 == 2 )
      break;
    if ( !sub_747540(a2, a3) )
      goto LABEL_24;
LABEL_5:
    v6 = *(_WORD *)(a3 + 24);
    if ( v6 == 4 )
      goto LABEL_13;
    if ( v6 == 2 )
    {
      if ( *(_QWORD *)(sub_7A0520(a2) + 8) > 1u )
        goto LABEL_13;
      v6 = *(_WORD *)(a3 + 24);
    }
    v7 = a1[1];
    v8 = v6;
    if ( v7 )
    {
      v9 = v7 + 1;
      v10 = a1[1];
      v11 = *a1;
      --v7;
      if ( a1[2] < v9 )
        goto LABEL_21;
    }
    else
    {
      v11 = *a1;
      v10 = 1;
      v9 = 2;
      if ( (unsigned __int64)a1[2] < 2 )
      {
LABEL_21:
        v24 = v10;
        v20 = qvector_reserve(a1, v11, v9, 1);
        v10 = v24;
        *a1 = v20;
        v11 = v20;
      }
    }
    a1[1] = v9;
    *(_BYTE *)(v11 + v7) = v8;
    *(_BYTE *)(*a1 + v10) = 0;
LABEL_10:
    token = lex_get_token(a2);
    if ( token )
    {
      v13 = token;
      goto LABEL_12;
    }
  }
  if ( *(_QWORD *)(sub_7A0520(a2) + 8) > 1u || sub_747540(a2, a3) )
    goto LABEL_5;
LABEL_24:
  v21 = *(_WORD *)(a3 + 24);
  if ( v21 != 59 )
  {
    if ( v21 != 1 )
      goto LABEL_26;
    if ( *(_QWORD *)(sub_7A0520(a2) + 8) <= 1u )
    {
      v21 = *(_WORD *)(a3 + 24);
LABEL_26:
      if ( v21 != 2 )
      {
        v13 = 1362;
LABEL_12:
        v14 = (const char *)qstrerror(v13);
        sub_747B60(a2, (__int64)"%s", v14);
      }
    }
  }
  return 1;
}
