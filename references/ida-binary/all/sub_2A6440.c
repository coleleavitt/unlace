_QWORD *__fastcall sub_2A6440(_QWORD *a1, const char *a2, char a3)
{
  const void *v3; // r12
  char v4; // r13
  unsigned __int16 v5; // ax
  char *v6; // rax
  char v7; // dl
  size_t v8; // rax
  size_t v9; // rbx
  size_t v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // r14
  size_t v14; // r15
  size_t v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // r14
  unsigned __int64 v19; // r13
  __int64 v20; // rbx
  size_t v22; // rax
  size_t v23; // r13
  size_t v24; // rbx
  void *v25; // rax
  __int64 v26; // [rsp+10h] [rbp-58h] BYREF
  __int128 v27; // [rsp+18h] [rbp-50h]
  unsigned __int64 v28; // [rsp+28h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  v3 = a2;
  if ( a3 )
  {
    v26 = 0;
    v27 = 0;
    if ( !a2 )
    {
      v16 = 0;
      v17 = 0;
LABEL_20:
      *a1 = v3;
      a1[1] = v17;
      a1[2] = v16;
      return a1;
    }
    v4 = a3;
    v5 = getinf(42);
    v6 = (char *)tag_advance(a2, v5);
    while ( 1 )
    {
      v7 = *v6;
      if ( *v6 != 2 )
        break;
      if ( v6[1] )
        v6 += 2;
      else
        ++v6;
    }
    v8 = v6 - a2;
    v9 = v8;
    if ( v7 )
    {
      v10 = v8 + 3;
      v11 = *((_QWORD *)&v27 + 1);
      v12 = v26;
      if ( *((_QWORD *)&v27 + 1) >= v10 )
        goto LABEL_9;
    }
    else
    {
      v10 = v8;
      v11 = *((_QWORD *)&v27 + 1);
      v12 = v26;
      v4 = 0;
      if ( *((_QWORD *)&v27 + 1) >= v10 )
      {
LABEL_9:
        v13 = v27;
        v14 = v9;
        if ( (_QWORD)v27 )
        {
          v13 = v27 - 1;
          v14 = v27 - 1 + v9;
        }
        v15 = v14 + 1;
        if ( v11 < v14 + 1 )
        {
          v26 = qvector_reserve(&v26, v12, v15, 1);
          v15 = v14 + 1;
          v12 = v26;
        }
        *(_QWORD *)&v27 = v15;
        *(_BYTE *)(v12 + v14) = 0;
        memmove((void *)(v13 + v26), v3, v9);
        v16 = *((_QWORD *)&v27 + 1);
        v17 = v27;
        v3 = (const void *)v26;
        if ( v4 )
        {
          if ( (_QWORD)v27 )
          {
            v18 = v27 + 2;
            v19 = v27 + 3;
            v17 = v27 - 1;
          }
          else
          {
            v19 = 4;
            v18 = 3;
          }
          if ( *((_QWORD *)&v27 + 1) < v19 )
          {
            v26 = qvector_reserve(&v26, v26, v19, 1);
            v3 = (const void *)v26;
          }
          *(_QWORD *)&v27 = v19;
          *((_BYTE *)v3 + v18) = 0;
          v20 = v26 + v17;
          *(_WORD *)v20 = -32542;
          *(_BYTE *)(v20 + 2) = -90;
          v3 = (const void *)v26;
          v16 = *((_QWORD *)&v27 + 1);
          v17 = v27;
        }
        goto LABEL_20;
      }
    }
    v26 = qvector_reserve(&v26, v12, v10, 1);
    v12 = v26;
    v11 = *((_QWORD *)&v27 + 1);
    goto LABEL_9;
  }
  *a1 = 0;
  *(_OWORD *)(a1 + 1) = 0;
  if ( a2 )
  {
    v22 = strlen(a2);
    v23 = v22 + 1;
    v24 = v22;
    v25 = (void *)qvector_reserve(a1, 0, v22 + 1, 1);
    *a1 = v25;
    a1[1] = v23;
    memmove(v25, a2, v24);
    *(_BYTE *)(*a1 + v24) = 0;
  }
  return a1;
}
