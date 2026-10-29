/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140089BB0
// Address: 0x0000000140089BB0

//----- (0000000140089BB0) ----------------------------------------------------
__int64 __fastcall sub_140089BB0(char *a1, unsigned __int64 a2, int a3, int *a4, int a5, int a6)
{
  int *v8; // rax
  unsigned int v9; // ebx
  int v11; // eax
  char *v12; // rbp
  char *v13; // rbx
  char *v14; // rdi
  char v15; // al
  int v16; // esi
  char v17; // al
  int v18; // eax
  _BYTE *v19; // rax
  bool v20; // zf
  __int64 v21; // r8

  if ( !a1 || !a2 )
    goto LABEL_2;
  v11 = 0;
  *a1 = 0;
  if ( a3 > 0 )
    v11 = a3;
  if ( a2 <= v11 + 1 )
  {
    v8 = errno();
    v9 = 34;
    goto LABEL_3;
  }
  if ( !a4 )
  {
LABEL_2:
    v8 = errno();
    v9 = 22;
LABEL_3:
    *v8 = v9;
    invalid_parameter_noinfo();
    return v9;
  }
  v12 = *((char **)a4 + 1);
  v13 = a1 + 1;
  v14 = v12;
  *a1 = 48;
  while ( a3 > 0 )
  {
    v15 = *v14;
    if ( *v14 )
      ++v14;
    else
      v15 = 48;
    *v13++ = v15;
    --a3;
  }
  *v13 = 0;
  if ( a3 < 0 )
    goto LABEL_43;
  v16 = *a4;
  if ( a6 )
  {
    v18 = fegetround();
    if ( v18 )
    {
      if ( v18 == 512 )
      {
        if ( *v14 == 48 )
          goto LABEL_43;
        v20 = v16 == 45;
        goto LABEL_38;
      }
      if ( v18 != 256 )
      {
        v17 = 0;
        goto LABEL_37;
      }
      if ( *v14 == 48 || v16 != 45 )
        goto LABEL_43;
    }
    else if ( *v14 <= 53 )
    {
      if ( *v14 < 53 )
        goto LABEL_43;
      v19 = v14 + 1;
      if ( !a5 )
        goto LABEL_41;
      while ( *v19 == 48 )
        ++v19;
      if ( *v19 )
        goto LABEL_41;
      if ( v14 == v12 )
        goto LABEL_43;
      v17 = *(v14 - 1) & 1;
      goto LABEL_37;
    }
LABEL_41:
    while ( *--v13 == 57 )
      *v13 = 48;
    ++*v13;
    goto LABEL_43;
  }
  v17 = *v14 >= 53;
LABEL_37:
  v20 = v17 == 0;
LABEL_38:
  if ( !v20 )
    goto LABEL_41;
LABEL_43:
  if ( *a1 == 49 )
  {
    ++a4[1];
  }
  else
  {
    v21 = -1;
    do
      ++v21;
    while ( a1[v21 + 1] );
    memcpy(a1, a1 + 1, v21 + 1);
  }
  return 0;
}
