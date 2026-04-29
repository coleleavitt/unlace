__int64 __fastcall sub_1CE890(__int64 *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  _BYTE *v7; // rsi
  bool v8; // r14
  unsigned int v9; // ebp
  __int64 v11; // rsi
  __int64 v12; // r12
  unsigned __int64 v13; // rax
  __int64 v14; // r13
  size_t v15; // r14
  unsigned __int64 v16; // r15
  const char *v17; // r12
  size_t v18; // rax
  size_t v19; // r14
  const char *v20; // r13
  signed __int64 v21; // r8
  unsigned __int64 v22; // r14
  int v23; // eax
  int v24; // eax
  const char *v25; // r8
  __int64 v26; // rax
  __int64 v27; // rax
  signed __int64 v28; // [rsp+8h] [rbp-40h]

  if ( get_ea_name(a1, a2, 512, 0) <= 0 )
    return 0;
  v7 = (_BYTE *)*a1;
  v8 = 0;
  if ( (a3 & 2) != 0 )
    v8 = *v7 == 95;
  if ( !calc_c_cpp_name(a1, v7, a4, 1) )
    return 0;
  v9 = cleanup_name(a1, a2, *a1, a3);
  if ( !(_BYTE)v9 )
    return 0;
  if ( v8 )
  {
    v11 = *a1;
    if ( *(_BYTE *)*a1 != 95 )
    {
      v12 = a1[1];
      v13 = a1[2];
      if ( v12 )
      {
        v14 = v12 + 1;
        v15 = v12 - 1;
        if ( v13 >= v12 + 1 )
          goto LABEL_12;
      }
      else
      {
        if ( v13 > 1 )
        {
          a1[1] = 2;
          *(_BYTE *)(v11 + 1) = 0;
LABEL_16:
          *(_BYTE *)*a1 = 95;
          goto LABEL_17;
        }
        v15 = 0;
        v12 = 1;
        v14 = 2;
      }
      v26 = qvector_reserve(a1, v11, v14, 1);
      *a1 = v26;
      v11 = v26;
LABEL_12:
      a1[1] = v14;
      *(_BYTE *)(v11 + v12) = 0;
      if ( v15 )
        memmove((void *)(*a1 + 1), (const void *)*a1, v15);
      goto LABEL_16;
    }
  }
LABEL_17:
  v16 = a1[1];
  if ( !v16 )
    return v9;
  v17 = (const char *)*a1;
  v18 = strlen((const char *)*a1);
  v19 = v18;
  if ( v18 <= 0xA )
  {
    if ( v18 <= 8 )
    {
      if ( v18 <= 6 )
        return v9;
      goto LABEL_31;
    }
LABEL_29:
    v20 = &v17[v19 - 9];
    v23 = strcmp(v20, "_from_arm");
    if ( &v17[v19] != byte_9 && !v23 )
      goto LABEL_21;
LABEL_31:
    v20 = &v17[v19 - 7];
    v24 = strcmp(v20, "_veneer");
    if ( &v17[v19] == &byte_7 || v24 )
      return v9;
    goto LABEL_21;
  }
  v20 = &v17[v18 - 11];
  if ( strcmp(v20, "_from_thumb") || !v20 )
    goto LABEL_29;
LABEL_21:
  v21 = v20 - v17;
  if ( v20 == v17 )
  {
    if ( v17 )
    {
      a1[1] = 0;
      qfree(v17);
      *a1 = 0;
      a1[2] = 0;
    }
  }
  else
  {
    v22 = v21 + 1;
    if ( v16 < v21 + 1 )
    {
      if ( a1[2] < v22 )
      {
        v27 = qvector_reserve(a1, v17, v21 + 1, 1);
        v16 = a1[1];
        v21 = v20 - v17;
        *a1 = v27;
        v17 = (const char *)v27;
      }
      v28 = v21;
      memset((void *)&v17[v16], 0, v22 - v16);
      v25 = (const char *)(*a1 + v28);
      a1[1] = v22;
      v20 = v25;
    }
    else if ( v16 != v21 + 1 )
    {
      a1[1] = v22;
    }
    *v20 = 0;
  }
  return v9;
}
