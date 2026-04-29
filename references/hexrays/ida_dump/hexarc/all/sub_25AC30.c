unsigned __int64 __fastcall sub_25AC30(__int64 *a1, __int64 a2)
{
  char *v2; // rbp
  __int64 v3; // r12
  unsigned __int64 v4; // r13
  __int64 v5; // rsi
  unsigned __int64 v6; // r13
  __int64 v7; // r12
  __int64 v8; // rsi
  __int64 v9; // r12
  size_t v10; // rax
  size_t v11; // r13
  size_t v12; // r14
  __int64 v13; // rsi
  __int64 v14; // rbp
  unsigned __int64 v15; // r12
  __int64 v16; // rsi
  unsigned __int64 v17; // r12
  __int64 v18; // rbp
  __int64 v19; // rsi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  char *s; // [rsp+0h] [rbp-58h] BYREF
  __int128 v27; // [rsp+8h] [rbp-50h]
  unsigned __int64 v28; // [rsp+18h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  s = nullptr;
  v27 = 0;
  sub_3242C0(&s, a2, 0, 64);
  v2 = s;
  if ( (_QWORD)v27 && *s )
  {
    v3 = a1[1];
    v4 = 2;
    if ( v3 )
    {
      v4 = v3 + 1;
      v5 = *a1;
      --v3;
      if ( a1[2] >= v4 )
        goto LABEL_5;
    }
    else
    {
      v5 = *a1;
      if ( (unsigned __int64)a1[2] >= 2 )
        goto LABEL_5;
    }
    v22 = qvector_reserve(a1, v5, v4, 1);
    *a1 = v22;
    v5 = v22;
LABEL_5:
    a1[1] = v4;
    v6 = 2;
    *(_BYTE *)(v5 + v3) = 1;
    *(_BYTE *)(*a1 + v3 + 1) = 0;
    v7 = a1[1];
    if ( v7 )
    {
      v6 = v7 + 1;
      v8 = *a1;
      --v7;
      if ( a1[2] >= v6 )
        goto LABEL_7;
    }
    else
    {
      v8 = *a1;
      if ( (unsigned __int64)a1[2] >= 2 )
        goto LABEL_7;
    }
    v21 = qvector_reserve(a1, v8, v6, 1);
    *a1 = v21;
    v8 = v21;
LABEL_7:
    a1[1] = v6;
    *(_BYTE *)(v8 + v7) = 23;
    *(_BYTE *)(*a1 + v7 + 1) = 0;
    if ( v2 )
    {
      v9 = a1[1];
      v10 = strlen(v2);
      v11 = v10;
      v12 = v10;
      if ( v9 )
      {
        --v9;
        v12 = v10 + v9;
      }
      v13 = *a1;
      if ( a1[2] < v12 + 1 )
      {
        v25 = qvector_reserve(a1, v13, v12 + 1, 1);
        *a1 = v25;
        v13 = v25;
      }
      a1[1] = v12 + 1;
      *(_BYTE *)(v13 + v12) = 0;
      memmove((void *)(v9 + *a1), v2, v11);
    }
    v14 = a1[1];
    v15 = 2;
    if ( v14 )
    {
      v15 = v14 + 1;
      v16 = *a1;
      --v14;
      if ( a1[2] >= v15 )
        goto LABEL_15;
    }
    else
    {
      v16 = *a1;
      if ( (unsigned __int64)a1[2] >= 2 )
        goto LABEL_15;
    }
    v24 = qvector_reserve(a1, v16, v15, 1);
    *a1 = v24;
    v16 = v24;
LABEL_15:
    a1[1] = v15;
    v17 = 2;
    *(_BYTE *)(v16 + v14) = 2;
    *(_BYTE *)(*a1 + v14 + 1) = 0;
    v18 = a1[1];
    if ( v18 )
    {
      v17 = v18 + 1;
      v19 = *a1;
      --v18;
      if ( a1[2] >= v17 )
        goto LABEL_17;
    }
    else
    {
      v19 = *a1;
      if ( (unsigned __int64)a1[2] >= 2 )
      {
LABEL_17:
        a1[1] = v17;
        *(_BYTE *)(v19 + v18) = 23;
        *(_BYTE *)(*a1 + v18 + 1) = 0;
        v2 = s;
        goto LABEL_18;
      }
    }
    v23 = qvector_reserve(a1, v19, v17, 1);
    *a1 = v23;
    v19 = v23;
    goto LABEL_17;
  }
LABEL_18:
  if ( v2 )
  {
    *(_QWORD *)&v27 = 0;
    qfree(v2);
  }
  return v28 - __readfsqword(0x28u);
}
