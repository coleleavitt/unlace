/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CE4C0
// Address: 0x080CE4C0

//----- (080CE4C0) --------------------------------------------------------
char *__cdecl sub_80CE4C0(char *a1, int a2, char *a3, int a4)
{
  char *v4; // ebx
  unsigned int v5; // ebp
  char *v6; // esi
  bool v7; // cl
  size_t v8; // eax
  char *v9; // eax
  bool v10; // dl
  bool v11; // bl
  int v13; // [esp-12h] [ebp-38h]
  int v14; // [esp-Eh] [ebp-34h]
  int v15; // [esp-Ah] [ebp-30h]
  bool v16; // [esp+1h] [ebp-25h]
  bool v17; // [esp+1h] [ebp-25h]

  v4 = a3;
  if ( a2 < 0 )
  {
    if ( !byte_811F8A1 )
      sub_80CFF40(1225, v13, v14, v15);
    goto LABEL_37;
  }
  if ( !a1 )
    return a1;
  v5 = (unsigned int)&a1[a2];
  if ( !a3 )
  {
    v9 = a1;
LABEL_26:
    if ( (unsigned int)v9 < v5 )
      goto LABEL_27;
    if ( !byte_811F8A1 )
      sub_80CFF40(519, v13, v14, v15);
LABEL_37:
    BUG();
  }
  v6 = a1;
  v7 = 0;
  while ( 1 )
  {
    if ( v4 != v6 )
    {
      v16 = v7;
      sub_80C74C0(v6, v4, v5 - (_DWORD)v6);
      v7 = v16;
    }
    v17 = v7;
    v8 = strlen(v6);
    v7 = v17;
    v9 = &v6[v8];
    if ( a1 >= v9 )
    {
LABEL_12:
      a4 += 4;
      v4 = *(char **)(a4 - 4);
      if ( !v4 )
        break;
      goto LABEL_15;
    }
    v10 = v17;
    do
    {
      v11 = v10;
      v10 = *(v9 - 1) == 92 || *(v9 - 1) == 47;
      if ( !v10 )
      {
        v7 = v11;
        goto LABEL_12;
      }
      --v9;
    }
    while ( a1 != v9 );
    a4 += 4;
    v7 = v10;
    v4 = *(char **)(a4 - 4);
    if ( !v4 )
      break;
LABEL_15:
    while ( *v4 == 47 || *v4 == 92 )
      ++v4;
    if ( (unsigned int)v9 >= v5 )
      goto LABEL_35;
    v6 = v9 + 1;
    *v9 = 47;
    if ( (unsigned int)(v9 + 1) >= v5 )
    {
      *(_BYTE *)(v5 - 1) = 0;
      v6 = (char *)(v5 - 1);
    }
  }
  if ( a1 != v9 || !v7 )
    goto LABEL_26;
  if ( (unsigned int)v9 >= v5 )
  {
LABEL_35:
    if ( !byte_811F8A1 )
      sub_80CFF40(518, v13, v14, v15);
    goto LABEL_37;
  }
  *v9 = 47;
  if ( (unsigned int)(v9 + 1) >= v5 )
  {
    *(_BYTE *)(v5 - 1) = 0;
    v9 = (char *)(v5 - 1);
    goto LABEL_26;
  }
  ++v9;
LABEL_27:
  *v9 = 0;
  return a1;
}
// 80CE63B: variable 'v13' is possibly undefined
// 80CE63B: variable 'v14' is possibly undefined
// 80CE63B: variable 'v15' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;
