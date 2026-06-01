/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cliopts_t_apply
// Address: 0x00073220

//----- (00073220) --------------------------------------------------------
int __fastcall cliopts_t_apply(unsigned __int8 **a1, int a2, const char **a3, int a4)
{
  void **v5; // r5
  const char *v6; // r7
  size_t v7; // r0
  size_t v8; // r4
  unsigned int v9; // r6
  void *v10; // r0
  unsigned __int8 **v11; // r5
  int v12; // r7
  const char *v13; // r3
  unsigned __int8 *v14; // r5
  const char *v15; // r4
  unsigned __int8 *v16; // r6
  int v17; // r7
  const char *v18; // r0
  unsigned __int8 *v19; // r0
  unsigned int v20; // r1
  char *v21; // r1
  int v22; // r0
  int result; // r0
  const char *v24; // [sp+Ch] [bp-1Ch]
  int v25; // [sp+10h] [bp-18h]
  int v27; // [sp+18h] [bp-10h]
  int v28; // [sp+18h] [bp-10h]
  const char **v29; // [sp+1Ch] [bp-Ch]
  int v31; // [sp+24h] [bp-4h]

  v5 = (void **)(a1 + 3);
  v29 = a3;
  v6 = *a3;
  if ( *a3 && (v7 = strlen(*a3)) != 0 )
  {
    v8 = v7;
    v27 = a2;
    v9 = v7 + 1;
    if ( (unsigned int)a1[5] >= v7 + 1 )
    {
      v10 = *v5;
    }
    else
    {
      v10 = qvector_reserve((int)v5, *v5, v9, 1u);
      *v5 = v10;
    }
    v11 = a1;
    a1[4] = (unsigned __int8 *)v9;
    memmove(v10, v6, v8);
    a1[3][v8] = 0;
    a2 = v27;
  }
  else
  {
    v11 = a1;
    a1[4] = nullptr;
  }
  v12 = a2;
  if ( a2 >= 2 )
  {
    v12 = a2;
    v28 = a2;
    do
    {
      v13 = v29[1];
      if ( (*(unsigned __int8 *)v13 | 2) != 0x2F )
        return a2 - v12;
      v25 = v12;
      v31 = *((unsigned __int8 *)v13 + 1);
      v24 = v29[1];
      if ( v31 == 45 )
      {
        v14 = v11[1];
        v15 = v13 + 2;
        if ( !v14 )
          goto LABEL_39;
        v16 = *a1;
        v17 = 0;
        while ( 1 )
        {
          v18 = *((const char **)v16 + 1);
          if ( v18 )
          {
            if ( !strcmp(v18, v15) )
              break;
          }
          v16 += 20;
          if ( ++v17 >= (unsigned int)v14 )
            goto LABEL_39;
        }
      }
      else
      {
        v19 = v11[1];
        if ( !v19 )
          goto LABEL_39;
        v16 = *a1;
        v20 = 0;
        while ( 1 )
        {
          ++v20;
          if ( *v16 == v31 )
            break;
          v16 += 20;
          if ( v20 >= (unsigned int)v19 )
            goto LABEL_39;
        }
      }
      if ( !v16 )
      {
LABEL_39:
        result = 0;
        if ( *((_BYTE *)a1 + 40) )
          cliopts_t_usage((int *)a1, 1);
        return result;
      }
      v21 = (char *)(v24 + 2);
      if ( v31 == 45 )
        v21 = (char *)&v24[strlen(*((const char **)v16 + 1)) + 2];
      v11 = a1;
      v22 = *((_DWORD *)v16 + 4);
      if ( v22 )
      {
        if ( v22 == 1 )
        {
          if ( *v21 )
          {
            ++v29;
            v12 = v25 - 1;
          }
          else
          {
            if ( v25 - 1 <= 1 )
              cliopts_t_usage((int *)a1, 1);
            v12 = v25 - 2;
            v21 = (char *)v29[2];
            v29 += 2;
          }
          (*((void (__fastcall **)(char *, int))v16 + 3))(v21, a4);
          goto LABEL_37;
        }
        if ( v22 == -1 )
        {
          (*((void (__fastcall **)(int, const char **, int))v16 + 3))(v25 - 1, v29 + 1, a4);
          v12 = v25 - 1;
          a2 = v28;
          return a2 - v12;
        }
      }
      else
      {
        (*((void (__fastcall **)(_DWORD, int))v16 + 3))(0, a4);
      }
      ++v29;
      v12 = v25 - 1;
LABEL_37:
      a2 = v28;
    }
    while ( v12 > 1 );
  }
  return a2 - v12;
}
