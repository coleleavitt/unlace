/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4D8C8
// Address: 0x0004D8C8

//----- (0004D8C8) --------------------------------------------------------
_DWORD *__fastcall sub_4D8C8(_DWORD *a1, int a2, _DWORD *a3, _DWORD *a4, int a5)
{
  _DWORD *v5; // r6
  const char *v6; // r7
  const char *v7; // r4
  char *v8; // r2
  _DWORD *v9; // r4
  _DWORD *v10; // r0
  _DWORD *v11; // r0
  _DWORD *v12; // r4
  _DWORD *v13; // r0
  bool v14; // zf
  const char *v15; // r7
  const char *v16; // r0
  int v17; // r0
  _DWORD **v18; // r1
  _DWORD *v19; // r4
  const char *v20; // r5
  _DWORD *v21; // r0
  _DWORD *v22; // r1
  _DWORD *v23; // r0
  int v24; // r1
  const char *v25; // r1
  _DWORD *v26; // r7
  const char *v27; // r4
  const char *v28; // r5
  _DWORD *v29; // r2
  char *s1a; // [sp+8h] [bp-10h]
  char *s1b; // [sp+8h] [bp-10h]
  _DWORD **v34; // [sp+Ch] [bp-Ch]

  v5 = (_DWORD *)a2;
  v34 = (_DWORD **)(a1 + 1);
  if ( a1 + 1 != (_DWORD *)a2 )
  {
    v6 = &byte_B3CBE;
    v7 = &byte_B3CBE;
    if ( *(_DWORD *)(a5 + 4) )
      v7 = *(const char **)a5;
    if ( *(_DWORD *)(a2 + 20) )
      v6 = *(const char **)(a2 + 16);
    if ( strcmp(v7, v6) >= 0 )
    {
      if ( strcmp(v6, v7) >= 0 )
      {
        *a3 = v5;
        *a4 = v5;
        return a4;
      }
      s1a = (char *)v7;
      v11 = (_DWORD *)v5[1];
      if ( v11 )
      {
        do
        {
          v12 = v11;
          v11 = (_DWORD *)*v11;
        }
        while ( v11 );
      }
      else
      {
        v23 = v5 + 2;
        v12 = (_DWORD *)v5[2];
        if ( (_DWORD *)*v12 != v5 )
        {
          do
          {
            v24 = *v23;
            v23 = (_DWORD *)(*v23 + 8);
            v12 = *(_DWORD **)(v24 + 8);
          }
          while ( *v12 != v24 );
        }
      }
      if ( v12 == v34 || (!v12[5] ? (v25 = &byte_B3CBE) : (v25 = (const char *)v12[4]), strcmp(s1a, v25) < 0) )
      {
        if ( v5[1] )
        {
          *a3 = v12;
          return v12;
        }
        else
        {
          *a3 = v5++;
        }
        return v5;
      }
      v18 = v34;
      v5 = *v34;
      if ( *v34 )
      {
        v26 = a1 + 1;
        v27 = s1a;
        while ( 1 )
        {
          v28 = &byte_B3CBE;
          if ( v5[5] )
            v28 = (const char *)v5[4];
          if ( strcmp(v27, v28) >= 0 )
          {
            if ( strcmp(v28, v27) >= 0 )
            {
              *a3 = v5;
              return v26;
            }
            v29 = (_DWORD *)v5[1];
            v22 = v5 + 1;
            if ( !v29 )
            {
LABEL_59:
              *a3 = v5;
              return v22;
            }
            ++v5;
            v27 = s1a;
          }
          else
          {
            v29 = (_DWORD *)*v5;
            if ( !*v5 )
              goto LABEL_57;
          }
          v26 = v5;
          v5 = v29;
        }
      }
LABEL_58:
      *a3 = v18;
      return v18;
    }
  }
  v8 = (char *)*v5;
  v9 = v5;
  if ( (_DWORD *)*a1 != v5 )
  {
    if ( v8 )
    {
      v10 = (_DWORD *)*v5;
      do
      {
        v9 = v10;
        v10 = (_DWORD *)v10[1];
      }
      while ( v10 );
    }
    else
    {
      v13 = v5;
      do
      {
        v9 = (_DWORD *)v13[2];
        v14 = *v9 == (_DWORD)v13;
        v13 = v9;
      }
      while ( v14 );
    }
    v15 = &byte_B3CBE;
    v16 = &byte_B3CBE;
    if ( v9[5] )
      v16 = (const char *)v9[4];
    s1b = (char *)*v5;
    if ( *(_DWORD *)(a5 + 4) )
      v15 = *(const char **)a5;
    v17 = strcmp(v16, v15);
    v8 = s1b;
    if ( v17 >= 0 )
    {
      v18 = v34;
      v5 = *v34;
      if ( *v34 )
      {
        v19 = a1 + 1;
        while ( 1 )
        {
          v20 = &byte_B3CBE;
          if ( v5[5] )
            v20 = (const char *)v5[4];
          if ( strcmp(v15, v20) >= 0 )
          {
            if ( strcmp(v20, v15) >= 0 )
            {
              *a3 = v5;
              return v19;
            }
            v21 = (_DWORD *)v5[1];
            v22 = v5 + 1;
            if ( !v21 )
              goto LABEL_59;
            ++v5;
          }
          else
          {
            v21 = (_DWORD *)*v5;
            if ( !*v5 )
              goto LABEL_57;
          }
          v19 = v5;
          v5 = v21;
        }
      }
      goto LABEL_58;
    }
  }
  if ( v8 )
  {
    *a3 = v9;
    return v9 + 1;
  }
  else
  {
LABEL_57:
    *a3 = v5;
  }
  return v5;
}
// B3CBE: using guessed type char byte_B3CBE;
