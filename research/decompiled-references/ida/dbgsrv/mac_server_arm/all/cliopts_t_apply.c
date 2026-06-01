/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cliopts_t_apply
// Address: 0x0000000100065864

//----- (0000000100065864) ----------------------------------------------------
__int64 __fastcall cliopts_t_apply(
        __int64 *a1,
        int a2,
        const char **a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  const char **v9; // x22
  const char *v12; // x23
  size_t v13; // x0
  size_t v14; // x24
  unsigned __int64 v15; // x25
  unsigned __int8 *v16; // x1
  int v17; // w24
  int v18; // w26
  const char **v19; // x23
  const char *v20; // x24
  const char *v21; // t1
  int v22; // w28
  unsigned __int8 *v23; // x25
  unsigned __int8 *v24; // x27
  const char *v25; // x0
  char *v26; // x25
  int v27; // w8
  unsigned __int8 *v28; // x8

  v9 = a3;
  v12 = *a3;
  if ( *a3 && (v13 = strlen(*a3)) != 0 )
  {
    v14 = v13;
    v15 = v13 + 1;
    v16 = (unsigned __int8 *)a1[3];
    if ( a1[5] < v13 + 1 )
    {
      v16 = (unsigned __int8 *)qvector_reserve(a1 + 3, v16, v15, 1u);
      a1[3] = (__int64)v16;
    }
    a1[4] = v15;
    memmove(v16, v12, v14);
    *(_BYTE *)(a1[3] + v14) = 0;
  }
  else
  {
    a1[4] = 0;
  }
  v17 = a2;
  if ( a2 < 2 )
    return (unsigned int)(a2 - v17);
  v18 = a2;
  v19 = v9;
  while ( 1 )
  {
    v21 = v19[1];
    ++v19;
    v20 = v21;
    if ( (*(unsigned __int8 *)v21 | 2) != 0x2F )
    {
      v17 = v18;
      return (unsigned int)(a2 - v17);
    }
    v22 = *((unsigned __int8 *)v20 + 1);
    if ( v22 != 45 )
      break;
    v23 = (unsigned __int8 *)a1[1];
    if ( !v23 )
      goto LABEL_35;
    v24 = (unsigned __int8 *)*a1;
    while ( 1 )
    {
      v25 = *((const char **)v24 + 1);
      if ( v25 )
      {
        if ( !strcmp(v25, v20 + 2) )
          break;
      }
      v24 += 40;
      if ( !--v23 )
        goto LABEL_35;
    }
LABEL_16:
    if ( !v24 )
      goto LABEL_35;
    v26 = (char *)(v20 + 2);
    if ( v22 == 45 )
      v26 += strlen(*((const char **)v24 + 1));
    v17 = v18 - 1;
    v27 = *((_DWORD *)v24 + 8);
    switch ( v27 )
    {
      case 0:
        v26 = nullptr;
LABEL_32:
        (*((void (__fastcall **)(char *, __int64))v24 + 3))(v26, a4);
        break;
      case 1:
        if ( !*v26 )
        {
          v17 = v18 - 2;
          if ( v18 <= 2 )
            goto LABEL_39;
          v26 = (char *)v9[2];
          v19 = v9 + 2;
        }
        goto LABEL_32;
      case -1:
        (*((void (__fastcall **)(_QWORD, const char **, __int64))v24 + 3))((unsigned int)(v18 - 1), v19, a4);
        return (unsigned int)(a2 - v17);
    }
    v18 = v17;
    v9 = v19;
    if ( v17 <= 1 )
      return (unsigned int)(a2 - v17);
  }
  v28 = (unsigned __int8 *)a1[1];
  if ( v28 )
  {
    v24 = (unsigned __int8 *)*a1;
    while ( *v24 != v22 )
    {
      v24 += 40;
      if ( !--v28 )
        goto LABEL_35;
    }
    goto LABEL_16;
  }
LABEL_35:
  if ( *((_BYTE *)a1 + 80) == 1 )
LABEL_39:
    cliopts_t_usage(a1, 1, (__int64)a3, a4, a5, a6, a7, a8);
  return 0;
}
// 100065A5C: variable 'a3' is possibly undefined
// 100065A5C: variable 'a4' is possibly undefined
// 100065A5C: variable 'a5' is possibly undefined
// 100065A5C: variable 'a6' is possibly undefined
// 100065A5C: variable 'a7' is possibly undefined
// 100065A5C: variable 'a8' is possibly undefined
