/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A8F9C
// Address: 0x00000000000A8F9C

//----- (00000000000A8F9C) ----------------------------------------------------
__int64 __fastcall sub_A8F9C(__int64 a1, pthread_mutex_t *a2, char *s, char a4)
{
  const char *v6; // x21
  __int64 result; // x0
  __int64 v9; // x8
  const char *v10; // x24
  size_t v11; // x23
  __int64 v12; // x8
  const char *v13; // x29
  __int64 v14; // x8
  __int64 v15; // x25
  size_t v16; // x26
  char *v17; // x8
  char *align; // x0
  pthread_mutex_t *v19; // x27
  __int64 v20; // x8
  void *v21; // x1
  __int64 v22; // x20
  unsigned __int64 v23; // x28
  __int64 v24; // x8
  size_t v25; // x8
  _BOOL4 v26; // w8
  char *v27; // x8
  _QWORD *v28; // x8
  const char *v29; // [xsp+10h] [xbp-70h]
  char v30; // [xsp+1Ch] [xbp-64h]

  v6 = s;
  result = strlen(s);
  v10 = *(const char **)a1;
  v9 = *(_QWORD *)(a1 + 8);
  v11 = result;
  if ( v9 )
    v12 = v9 - 1;
  else
    v12 = 0;
  v13 = &v10[v12];
  if ( v10 < &v10[v12] )
  {
    v30 = a4;
    v29 = v6;
    do
    {
      result = (__int64)strstr(v10, v6);
      if ( result )
        v14 = result;
      else
        v14 = (__int64)v13;
      v15 = result;
      v16 = v14 - (_QWORD)v10;
      if ( (a4 & 1) == 0 || v16 )
      {
        v17 = (char *)*(&a2->__align + 1);
        if ( *(&a2->__align + 2) >= (unsigned __int64)(v17 + 1) )
        {
          align = (char *)a2->__align;
        }
        else
        {
          align = (char *)qvector_reserve(a2, (void *)a2->__align, (unsigned __int64)(v17 + 1), 0x18u);
          v17 = (char *)*(&a2->__align + 1);
          a2->__align = (__int64)align;
        }
        v19 = (pthread_mutex_t *)&align[24 * (_QWORD)v17];
        *(&v19->__align + 2) = 0;
        v19->__align = 0;
        *(&v19->__align + 1) = 0;
        ++*(&a2->__align + 1);
        v20 = *(&v19->__align + 1);
        v21 = (void *)v19->__align;
        if ( v20 )
          v22 = v20 - 1;
        else
          v22 = 0;
        v23 = v22 + v16 + 1;
        if ( *(&v19->__align + 2) < v23 )
        {
          v21 = qvector_reserve(v19, v21, v22 + v16 + 1, 1u);
          v19->__align = (__int64)v21;
        }
        *(&v19->__align + 1) = v23;
        *((_BYTE *)v21 + v22 + v16) = 0;
        result = (__int64)memmove((void *)(v19->__align + v22), v10, v16);
        a4 = v30;
        v6 = v29;
      }
      if ( v15 )
        v10 = (const char *)(v15 + v11);
      else
        v10 = v13;
    }
    while ( v10 < v13 );
  }
  if ( v6 )
  {
    if ( v11 == -1 )
    {
      result = strlen(v6);
      v11 = result;
      if ( result )
      {
LABEL_27:
        v24 = *(_QWORD *)(a1 + 8);
        if ( v24 )
          v25 = v24 - 1;
        else
          v25 = 0;
        if ( v25 < v11 )
          return result;
        result = strncmp((const char *)(*(_QWORD *)a1 + v25 - v11), v6, v11);
        v26 = result == 0;
        if ( (a4 & 1) != 0 )
          return result;
        goto LABEL_32;
      }
    }
    else if ( v11 )
    {
      goto LABEL_27;
    }
  }
  v26 = 1;
  if ( (a4 & 1) != 0 )
    return result;
LABEL_32:
  if ( v26 )
  {
    v27 = (char *)*(&a2->__align + 1);
    if ( *(&a2->__align + 2) >= (unsigned __int64)(v27 + 1) )
    {
      result = a2->__align;
    }
    else
    {
      result = (__int64)qvector_reserve(a2, (void *)a2->__align, (unsigned __int64)(v27 + 1), 0x18u);
      v27 = (char *)*(&a2->__align + 1);
      a2->__align = result;
    }
    v28 = (_QWORD *)(result + 24LL * (_QWORD)v27);
    v28[1] = 0;
    v28[2] = 0;
    *v28 = 0;
    ++*(&a2->__align + 1);
  }
  return result;
}
