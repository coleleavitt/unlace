/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cliopts_t_apply
// Address: 0x00000000000AEDC0

//----- (00000000000AEDC0) ----------------------------------------------------
__int64 __fastcall cliopts_t_apply(unsigned __int8 **a1, int a2, const char **a3, __int64 a4)
{
  const char *v4; // x23
  const char **v6; // x22
  size_t v9; // x0
  unsigned __int64 v10; // x25
  size_t v11; // x24
  void **v12; // x26
  void *v13; // x0
  int v14; // w24
  int v15; // w26
  const char **v16; // x23
  const char *v17; // x25
  const char *v18; // t1
  int v19; // w28
  unsigned __int8 *v20; // x29
  unsigned __int8 *v21; // x27
  unsigned __int64 v22; // x21
  const char *v23; // x0
  unsigned __int8 *v24; // x8
  unsigned __int64 v25; // x9
  char *v26; // x25
  int v27; // w8
  __int64 v29; // [xsp+8h] [xbp-68h]

  v4 = *a3;
  v6 = a3;
  if ( *a3 && (v9 = strlen(*a3)) != 0 )
  {
    v10 = v9 + 1;
    v11 = v9;
    v12 = (void **)(a1 + 3);
    if ( (unsigned __int64)a1[5] >= v9 + 1 )
    {
      v13 = *v12;
    }
    else
    {
      v13 = qvector_reserve((pthread_mutex_t *)(a1 + 3), *v12, v10, 1u);
      *v12 = v13;
    }
    a1[4] = (unsigned __int8 *)v10;
    memmove(v13, v4, v11);
    a1[3][v11] = 0;
  }
  else
  {
    a1[4] = nullptr;
  }
  v14 = a2;
  if ( a2 < 2 )
    return (unsigned int)(a2 - v14);
  v15 = a2;
  v16 = v6;
  v29 = a4;
  while ( 1 )
  {
    v18 = v16[1];
    ++v16;
    v17 = v18;
    if ( (*(unsigned __int8 *)v18 | 2) != 0x2F )
    {
      v14 = v15;
      return (unsigned int)(a2 - v14);
    }
    v19 = *((unsigned __int8 *)v17 + 1);
    if ( v19 == 45 )
    {
      v20 = a1[1];
      if ( !v20 )
        break;
      v21 = *a1;
      v22 = 0;
      while ( 1 )
      {
        v23 = *((const char **)v21 + 1);
        if ( v23 )
        {
          if ( !strcmp(v23, v17 + 2) )
            break;
        }
        ++v22;
        v21 += 40;
        if ( v22 >= (unsigned __int64)v20 )
          goto LABEL_37;
      }
    }
    else
    {
      v24 = a1[1];
      if ( !v24 )
        break;
      v21 = *a1;
      v25 = 0;
      while ( *v21 != v19 )
      {
        ++v25;
        v21 += 40;
        if ( v25 >= (unsigned __int64)v24 )
          goto LABEL_37;
      }
    }
    if ( !v21 )
      break;
    v26 = (char *)(v17 + 2);
    if ( v19 == 45 )
      v26 += strlen(*((const char **)v21 + 1));
    v27 = *((_DWORD *)v21 + 8);
    v14 = v15 - 1;
    if ( v27 )
    {
      if ( v27 == 1 )
      {
        if ( !*v26 )
        {
          if ( v14 <= 1 )
            goto LABEL_41;
          v26 = (char *)v6[2];
          v14 = v15 - 2;
          v16 = v6 + 2;
        }
        (*((void (__fastcall **)(char *, __int64))v21 + 3))(v26, v29);
      }
      else if ( v27 == -1 )
      {
        (*((void (__fastcall **)(_QWORD, const char **, __int64))v21 + 3))((unsigned int)v14, v16, v29);
        return (unsigned int)(a2 - v14);
      }
    }
    else
    {
      (*((void (__fastcall **)(_QWORD, __int64))v21 + 3))(0, v29);
    }
    v15 = v14;
    v6 = v16;
    if ( v14 <= 1 )
      return (unsigned int)(a2 - v14);
  }
LABEL_37:
  if ( *((_BYTE *)a1 + 80) )
LABEL_41:
    cliopts_t_usage((__int64 *)a1, 1);
  return 0;
}
