void *__fastcall sub_5A2B00(__int64 a1, const char *a2, int a3)
{
  __int64 v4; // rsi
  __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // rbx
  size_t v10; // r13
  size_t v11; // r15
  __int64 v12; // rsi
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r13
  size_t v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  char v25; // [rsp+7h] [rbp-41h] BYREF
  unsigned __int64 v26; // [rsp+8h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 144);
  v26 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 152);
  if ( *(_QWORD *)(a1 + 160) < (unsigned __int64)(v6 + 1) )
  {
    v18 = qvector_reserve(a1 + 144, v4, v6 + 1, 24);
    v6 = *(_QWORD *)(a1 + 152);
    *(_QWORD *)(a1 + 144) = v18;
    v4 = v18;
  }
  v7 = v4 + 24 * v6;
  *(_OWORD *)(v7 + 8) = 0;
  *(_QWORD *)v7 = 0;
  LODWORD(v8) = *(_DWORD *)(a1 + 132) * a3;
  ++*(_QWORD *)(a1 + 152);
  *(_QWORD *)(v7 + 8) = 0;
  v8 = (int)v8;
  if ( !(_DWORD)v8 )
  {
    if ( !a2 )
      return (void *)(v26 - __readfsqword(0x28u));
    v10 = strlen(a2);
    v11 = v10;
    goto LABEL_7;
  }
  v25 = 32;
  v14 = *(_QWORD *)v7;
  v15 = (int)v8 + 1LL;
  if ( (int)v8 != -1 )
  {
    v19 = *(_QWORD *)(v7 + 16);
    if ( (unsigned __int64)&v25 < v14 )
    {
      v20 = 0;
      if ( v19 >= v15 )
        goto LABEL_20;
    }
    else
    {
      v20 = 0;
      if ( (unsigned __int64)&v25 < v14 + v19 )
      {
        if ( v19 >= v15
          || (v24 = qvector_reserve(v7, v14, (int)v8 + 1LL, 1),
              *(_QWORD *)v7 = v24,
              v14 = v24,
              v20 = *(_QWORD *)(v7 + 8),
              v20 < v15) )
        {
          do
          {
            v21 = v20;
            *(_BYTE *)(v14 + v20++) = 32;
            v14 = *(_QWORD *)v7;
          }
          while ( (int)v8 != v21 );
        }
        goto LABEL_18;
      }
      if ( v19 >= v15 )
        goto LABEL_20;
    }
    v23 = qvector_reserve(v7, v14, (int)v8 + 1LL, 1);
    *(_QWORD *)v7 = v23;
    v14 = v23;
    v20 = *(_QWORD *)(v7 + 8);
    if ( v20 >= v15 )
    {
LABEL_18:
      *(_QWORD *)(v7 + 8) = v15;
      goto LABEL_10;
    }
    do
    {
LABEL_20:
      v22 = v20;
      *(_BYTE *)(v14 + v20++) = 32;
      v14 = *(_QWORD *)v7;
    }
    while ( (int)v8 != v22 );
    goto LABEL_18;
  }
LABEL_10:
  *(_BYTE *)(v14 + (int)v8) = 0;
  if ( !a2 )
    return (void *)(v26 - __readfsqword(0x28u));
  v16 = strlen(a2);
  v8 = *(_QWORD *)(v7 + 8);
  v10 = v16;
  if ( v8 )
  {
    --v8;
    v12 = *(_QWORD *)v7;
    v11 = v16 + v8;
    v13 = v16 + v8 + 1;
    if ( *(_QWORD *)(v7 + 16) >= v13 )
      goto LABEL_8;
LABEL_13:
    v17 = qvector_reserve(v7, v12, v13, 1);
    *(_QWORD *)v7 = v17;
    v12 = v17;
    goto LABEL_8;
  }
  v11 = v16;
LABEL_7:
  v12 = *(_QWORD *)v7;
  v13 = v11 + 1;
  if ( *(_QWORD *)(v7 + 16) < v11 + 1 )
    goto LABEL_13;
LABEL_8:
  *(_QWORD *)(v7 + 8) = v13;
  *(_BYTE *)(v12 + v11) = 0;
  return memmove((void *)(v8 + *(_QWORD *)v7), a2, v10);
}
