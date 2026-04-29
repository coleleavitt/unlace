__int64 __fastcall sub_1D2AB0(__int64 *a1, __int64 a2, char a3)
{
  bool v4; // r14
  unsigned int v5; // ebp
  _BYTE *v7; // rsi
  __int64 v8; // r12
  unsigned __int64 v9; // rax
  __int64 v10; // r13
  size_t v11; // r14
  unsigned __int64 v12; // r15
  const char *v13; // r12
  size_t v14; // rax
  size_t v15; // r14
  const char *v16; // r13
  signed __int64 v17; // r8
  unsigned __int64 v18; // r14
  int v19; // eax
  int v20; // eax
  const char *v21; // r8
  __int64 v22; // rax
  __int64 v23; // rax
  signed __int64 v24; // [rsp+8h] [rbp-40h]

  if ( get_ea_name() <= 0 )
    return 0;
  v4 = 0;
  if ( (a3 & 2) != 0 )
    v4 = *(_BYTE *)*a1 == 95;
  if ( !calc_c_cpp_name() )
    return 0;
  v5 = cleanup_name();
  if ( !(_BYTE)v5 )
    return 0;
  if ( v4 )
  {
    v7 = (_BYTE *)*a1;
    if ( *(_BYTE *)*a1 != 95 )
    {
      v8 = a1[1];
      v9 = a1[2];
      if ( v8 )
      {
        v10 = v8 + 1;
        v11 = v8 - 1;
        if ( v9 >= v8 + 1 )
          goto LABEL_12;
      }
      else
      {
        if ( v9 > 1 )
        {
          a1[1] = 2;
          v7[1] = 0;
LABEL_16:
          *(_BYTE *)*a1 = 95;
          goto LABEL_17;
        }
        v11 = 0;
        v8 = 1;
        v10 = 2;
      }
      v22 = qvector_reserve((__int64)a1, (__int64)v7, v10, 1);
      *a1 = v22;
      v7 = (_BYTE *)v22;
LABEL_12:
      a1[1] = v10;
      v7[v8] = 0;
      if ( v11 )
        memmove((void *)(*a1 + 1), (const void *)*a1, v11);
      goto LABEL_16;
    }
  }
LABEL_17:
  v12 = a1[1];
  if ( !v12 )
    return v5;
  v13 = (const char *)*a1;
  v14 = strlen((const char *)*a1);
  v15 = v14;
  if ( v14 <= 0xA )
  {
    if ( v14 <= 8 )
    {
      if ( v14 <= 6 )
        return v5;
      goto LABEL_31;
    }
LABEL_29:
    v16 = &v13[v15 - 9];
    v19 = strcmp(v16, "_from_arm");
    if ( &v13[v15] != byte_9 && !v19 )
      goto LABEL_21;
LABEL_31:
    v16 = &v13[v15 - 7];
    v20 = strcmp(v16, "_veneer");
    if ( &v13[v15] == &byte_7 || v20 )
      return v5;
    goto LABEL_21;
  }
  v16 = &v13[v14 - 11];
  if ( strcmp(v16, "_from_thumb") || !v16 )
    goto LABEL_29;
LABEL_21:
  v17 = v16 - v13;
  if ( v16 == v13 )
  {
    if ( v13 )
    {
      a1[1] = 0;
      qfree((__int64)v13);
      *a1 = 0;
      a1[2] = 0;
    }
  }
  else
  {
    v18 = v17 + 1;
    if ( v12 < v17 + 1 )
    {
      if ( a1[2] < v18 )
      {
        v23 = qvector_reserve((__int64)a1, (__int64)v13, v17 + 1, 1);
        v12 = a1[1];
        v17 = v16 - v13;
        *a1 = v23;
        v13 = (const char *)v23;
      }
      v24 = v17;
      memset((void *)&v13[v12], 0, v18 - v12);
      v21 = (const char *)(*a1 + v24);
      a1[1] = v18;
      v16 = v21;
    }
    else if ( v12 != v17 + 1 )
    {
      a1[1] = v18;
    }
    *v16 = 0;
  }
  return v5;
}
