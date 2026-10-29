/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_682D0
// Address: 0x000682D0

//----- (000682D0) --------------------------------------------------------
_DWORD *__cdecl sub_682D0(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, int a5)
{
  _DWORD *v5; // edx
  _DWORD *v6; // ecx
  const char *v7; // esi
  const char *v8; // edi
  int v9; // eax
  _DWORD *v10; // eax
  int v11; // edi
  _DWORD *v12; // esi
  _DWORD *v13; // ecx
  _DWORD *v14; // eax
  _DWORD *v15; // esi
  _DWORD *v16; // eax
  const char *v17; // edx
  const char *v18; // eax
  const char *v19; // edi
  int v20; // eax
  int v21; // eax
  const char *v22; // edi
  _DWORD *v23; // eax
  int *v24; // eax
  int v25; // eax
  bool v26; // zf
  const char *v27; // eax
  int v28; // eax
  const char *v29; // edi
  _DWORD *v30; // eax
  const char *v32; // [esp+10h] [ebp-1Ch]
  const char *v33; // [esp+10h] [ebp-1Ch]
  _DWORD **v34; // [esp+14h] [ebp-18h]
  int v35; // [esp+18h] [ebp-14h]

  v5 = (_DWORD *)a1;
  v6 = a2;
  v34 = (_DWORD **)(a1 + 4);
  if ( a2 == (_DWORD *)(a1 + 4) )
    goto LABEL_7;
  v7 = byte_EF875;
  v8 = byte_EF875;
  if ( *(_DWORD *)(a5 + 4) )
    v8 = *(const char **)a5;
  if ( a2[5] )
    v7 = (const char *)a2[4];
  v9 = strcmp(v8, v7);
  v6 = a2;
  v5 = (_DWORD *)a1;
  if ( v9 < 0 )
  {
LABEL_7:
    v10 = (_DWORD *)*v6;
    if ( (_DWORD *)*v5 == v6 )
    {
      v12 = v6;
      if ( v10 )
      {
LABEL_27:
        *a3 = v12;
        return v12 + 1;
      }
LABEL_39:
      *a3 = v6;
      return v6;
    }
    v35 = *v6;
    if ( v10 )
    {
      v11 = a5;
      do
      {
        v12 = v10;
        v10 = (_DWORD *)v10[1];
      }
      while ( v10 );
    }
    else
    {
      v12 = v6;
      do
      {
        v16 = v12;
        v12 = (_DWORD *)v12[2];
      }
      while ( (_DWORD *)*v12 == v16 );
      v11 = a5;
    }
    v17 = byte_EF875;
    v18 = byte_EF875;
    if ( v12[5] )
      v18 = (const char *)v12[4];
    if ( *(_DWORD *)(v11 + 4) )
      v17 = *(const char **)v11;
    v19 = v17;
    v20 = strcmp(v18, v17);
    v6 = a2;
    if ( v20 < 0 )
    {
      if ( v35 )
        goto LABEL_27;
      goto LABEL_39;
    }
    v33 = v19;
    v21 = a1 + 4;
    v15 = *v34;
    if ( *v34 )
    {
      v34 = (_DWORD **)(a1 + 4);
      while ( 1 )
      {
        v22 = byte_EF875;
        if ( v15[5] )
          v22 = (const char *)v15[4];
        if ( strcmp(v33, v22) >= 0 )
        {
          if ( strcmp(v22, v33) >= 0 )
            goto LABEL_63;
          v6 = v15 + 1;
          v23 = (_DWORD *)v15[1];
          if ( !v23 )
            goto LABEL_38;
        }
        else
        {
          v23 = (_DWORD *)*v15;
          v6 = v15;
          if ( !*v15 )
            goto LABEL_50;
        }
        v34 = (_DWORD **)v6;
        v15 = v23;
      }
    }
LABEL_62:
    *a3 = v21;
    return (_DWORD *)v21;
  }
  if ( strcmp(v7, v8) >= 0 )
  {
    v6 = a4;
    *a3 = a2;
    *a4 = a2;
    return v6;
  }
  v32 = v8;
  v13 = a2;
  v14 = (_DWORD *)a2[1];
  if ( v14 )
  {
    do
    {
      v15 = v14;
      v14 = (_DWORD *)*v14;
    }
    while ( v14 );
  }
  else
  {
    v15 = (_DWORD *)a2[2];
    if ( (_DWORD *)*v15 != a2 )
    {
      v24 = a2 + 2;
      do
      {
        v25 = *v24;
        v15 = *(_DWORD **)(v25 + 8);
        v26 = *v15 == v25;
        v24 = (int *)(v25 + 8);
      }
      while ( !v26 );
    }
  }
  if ( v15 != v34 )
  {
    v27 = v15[5] ? (const char *)v15[4] : byte_EF875;
    v28 = strcmp(v8, v27);
    v13 = a2;
    if ( v28 >= 0 )
    {
      v21 = a1 + 4;
      v15 = *v34;
      if ( *v34 )
      {
        while ( 1 )
        {
          v29 = byte_EF875;
          if ( v15[5] )
            v29 = (const char *)v15[4];
          if ( strcmp(v32, v29) >= 0 )
          {
            if ( strcmp(v29, v32) >= 0 )
            {
LABEL_63:
              *a3 = v15;
              return v34;
            }
            v6 = v15 + 1;
            v30 = (_DWORD *)v15[1];
            if ( !v30 )
            {
LABEL_38:
              *a3 = v15;
              return v6;
            }
          }
          else
          {
            v30 = (_DWORD *)*v15;
            v6 = v15;
            if ( !*v15 )
              goto LABEL_50;
          }
          v34 = (_DWORD **)v6;
          v15 = v30;
        }
      }
      goto LABEL_62;
    }
  }
  if ( v13[1] )
  {
LABEL_50:
    *a3 = v15;
    return v15;
  }
  else
  {
    *a3 = v13;
    return v13 + 1;
  }
}
