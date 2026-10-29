unsigned __int64 __fastcall sub_14E340(_QWORD *a1, const void *a2, int a3)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rbx
  size_t v7; // rax
  size_t v8; // rbp
  const char *v9; // rbx
  int v10; // r13d
  __int64 v11; // r12
  __int64 v12; // r12
  __int64 v13; // r15
  const char **v14; // r14
  __int64 v15; // rbp
  __int64 v16; // rax
  const char **v17; // rbp
  void *v19; // rdi
  size_t v20; // r13
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // [rsp+0h] [rbp-78h]
  __int64 v24; // [rsp+8h] [rbp-70h]
  unsigned __int64 v25; // [rsp+10h] [rbp-68h]
  unsigned __int64 v28; // [rsp+38h] [rbp-40h]

  v4 = a1[2];
  v28 = __readfsqword(0x28u);
  v5 = a1[3];
  if ( a1[4] < (unsigned __int64)(v5 + 1) )
  {
    v21 = qvector_reserve();
    a1[2] = v21;
    v4 = v21;
    v5 = a1[3];
  }
  v6 = v4 + 24 * v5;
  *(_QWORD *)v6 = 0;
  *(_OWORD *)(v6 + 8) = 0;
  ++a1[3];
  if ( a2 && (v7 = strlen((const char *)a2), (v8 = v7) != 0) )
  {
    v19 = *(void **)v6;
    v20 = v7 + 1;
    if ( *(_QWORD *)(v6 + 16) < v7 + 1 )
    {
      v22 = qvector_reserve();
      *(_QWORD *)v6 = v22;
      v19 = (void *)v22;
    }
    *(_QWORD *)(v6 + 8) = v20;
    memmove(v19, a2, v8);
    *(_BYTE *)(*(_QWORD *)v6 + v8) = 0;
  }
  else
  {
    *(_QWORD *)(v6 + 8) = 0;
  }
  v9 = (const char *)qstrtok();
  if ( !v9 )
    return v28 - __readfsqword(0x28u);
  do
  {
    v25 = a1[6];
    if ( !v25 )
    {
LABEL_18:
      sub_14E080(a1, (__int64)v9, a3);
      goto LABEL_19;
    }
    v10 = 0;
    v11 = 0;
    v24 = a1[5];
    while ( 1 )
    {
      v12 = v24 + 32 * v11;
      v13 = *(_QWORD *)(v12 + 8);
      v14 = *(const char ***)v12;
      v23 = *(_QWORD *)v12 + 8 * v13;
      v15 = (8 * v13) >> 5;
      v16 = (8 * v13) >> 3;
      if ( v15 > 0 )
      {
        v17 = &v14[4 * v15];
        while ( strcmp(*v14, v9) )
        {
          if ( !strcmp(v14[1], v9) )
          {
            ++v14;
            break;
          }
          if ( !strcmp(v14[2], v9) )
          {
            v14 += 2;
            break;
          }
          if ( !strcmp(v14[3], v9) )
          {
            v14 += 3;
            break;
          }
          v14 += 4;
          if ( v14 == v17 )
          {
            v16 = (v23 - (__int64)v14) >> 3;
            goto LABEL_22;
          }
        }
LABEL_16:
        if ( (const char **)v23 != v14 )
          goto LABEL_27;
        goto LABEL_17;
      }
LABEL_22:
      if ( v16 == 2 )
        goto LABEL_36;
      if ( v16 == 3 )
        break;
      if ( v16 == 1 )
        goto LABEL_25;
LABEL_17:
      v11 = ++v10;
      if ( v10 >= v25 )
        goto LABEL_18;
    }
    if ( !strcmp(*v14, v9) )
      goto LABEL_16;
    ++v14;
LABEL_36:
    if ( !strcmp(*v14, v9) )
      goto LABEL_16;
    ++v14;
LABEL_25:
    if ( strcmp(*v14, v9) || (const char **)v23 == v14 )
      goto LABEL_17;
LABEL_27:
    if ( *(_DWORD *)(v12 + 24) != a3 )
    {
      if ( ((v23 - (__int64)v14) >> 3) - 2 >= 0 )
      {
        memmove(v14, v14 + 1, v23 - (_QWORD)v14 - 8);
        v13 = *(_QWORD *)(v12 + 8);
      }
      *(_QWORD *)(v12 + 8) = v13 - 1;
      sub_14E080(a1, (__int64)v9, a3);
    }
LABEL_19:
    v9 = (const char *)qstrtok();
  }
  while ( v9 );
  return v28 - __readfsqword(0x28u);
}

