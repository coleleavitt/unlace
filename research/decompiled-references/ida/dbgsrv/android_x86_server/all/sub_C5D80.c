/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C5D80
// Address: 0x000C5D80

//----- (000C5D80) --------------------------------------------------------
char __fastcall sub_C5D80(char **a1)
{
  char *v1; // ebx
  char *v2; // eax
  char *v3; // edx
  char *v4; // esi
  char *v5; // edi
  char *v6; // ebx
  char *v7; // esi
  unsigned int v8; // edi
  char *v9; // esi
  char *v10; // edi
  char *v11; // esi
  char *v12; // edx
  char *v13; // ebx
  char *v14; // esi
  unsigned int v15; // edx
  char *v16; // esi
  char result; // al
  char *v18; // ebx
  char *v19; // edi
  char *v20; // edx
  char *v21; // esi
  char *v22; // edi
  unsigned int v23; // edx
  char *v24; // edi

  v1 = *a1;
  v2 = a1[1];
  if ( *a1 == v2 )
    return 1;
  if ( *v1 == 104 )
  {
    v3 = v1 + 1;
    *a1 = v1 + 1;
    v4 = v2;
    v5 = v1 + 1;
    if ( v1 + 1 != v2 )
    {
      v4 = v1 + 1;
      v5 = v1 + 1;
      if ( *v3 == 110 )
      {
        v6 = v1 + 2;
        *a1 = v6;
        v4 = v6;
        v5 = v6;
      }
    }
    if ( v5 != v2 && (unsigned int)(*v4 - 48) <= 9 )
    {
      v7 = v4 + 1;
      while ( 1 )
      {
        *a1 = v7;
        if ( v2 == v7 )
          break;
        v8 = *v7++ - 48;
        if ( v8 >= 0xA )
        {
          v9 = v7 - 1;
          if ( v3 == v9 )
            return 1;
          goto LABEL_25;
        }
      }
      v9 = v2;
      if ( v3 == v2 )
        return 1;
LABEL_25:
      if ( v9 == v2 )
        return 1;
      result = 1;
      if ( *v9 == 95 )
      {
        *a1 = v9 + 1;
        return 0;
      }
      return result;
    }
    return 1;
  }
  if ( *v1 != 118 )
    return 1;
  v10 = v1 + 1;
  *a1 = v1 + 1;
  v11 = v2;
  v12 = v1 + 1;
  if ( v1 + 1 != v2 )
  {
    v11 = v1 + 1;
    v12 = v1 + 1;
    if ( *v10 == 110 )
    {
      v13 = v1 + 2;
      *a1 = v13;
      v11 = v13;
      v12 = v13;
    }
  }
  if ( v12 == v2 || (unsigned int)(*v11 - 48) > 9 )
    return 1;
  v14 = v11 + 1;
  while ( 1 )
  {
    *a1 = v14;
    if ( v2 == v14 )
      break;
    v15 = *v14++ - 48;
    if ( v15 >= 0xA )
    {
      v16 = v14 - 1;
      if ( v10 == v16 )
        return 1;
      goto LABEL_30;
    }
  }
  v16 = v2;
  if ( v10 == v2 )
    return 1;
LABEL_30:
  if ( v16 == v2 || *v16 != 95 )
    return 1;
  v18 = v16 + 1;
  *a1 = v16 + 1;
  v19 = v2;
  v20 = v16 + 1;
  if ( v16 + 1 != v2 )
  {
    v19 = v16 + 1;
    v20 = v16 + 1;
    if ( *v18 == 110 )
    {
      v21 = v16 + 2;
      *a1 = v21;
      v19 = v21;
      v20 = v21;
    }
  }
  if ( v20 == v2 || (unsigned int)(*v19 - 48) > 9 )
    return 1;
  v22 = v19 + 1;
  while ( 1 )
  {
    *a1 = v22;
    if ( v2 == v22 )
      break;
    v23 = *v22++ - 48;
    if ( v23 >= 0xA )
    {
      v24 = v22 - 1;
      if ( v18 == v24 )
        return 1;
      goto LABEL_45;
    }
  }
  v24 = v2;
  if ( v18 == v2 )
    return 1;
LABEL_45:
  if ( v24 == v2 )
    return 1;
  result = 1;
  if ( *v24 == 95 )
  {
    *a1 = v24 + 1;
    return 0;
  }
  return result;
}
