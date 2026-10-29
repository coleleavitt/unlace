bool __fastcall atoea(__int64 *a1, char *a2)
{
  unsigned int v3; // edi
  char *v4; // rbx
  char v5; // r12
  unsigned int v6; // edi
  char *v7; // r12
  char v8; // r14
  char v9; // r13
  int v10; // eax
  int v11; // edx
  char *v12; // rbx
  unsigned int v13; // edi
  char v14; // bp

  v3 = *a2;
  v4 = a2;
  if ( v3 > 0x7F )
    goto LABEL_15;
  v5 = *a2;
  while ( isspace(v3) )
  {
    v3 = *++v4;
    v5 = v3;
    if ( v3 > 0x7F )
      goto LABEL_14;
  }
  if ( v5 != 45 )
  {
    if ( v5 == 43 )
    {
      v6 = v4[1];
      v7 = v4 + 1;
      v8 = v4[1];
      if ( v6 <= 0x7F )
      {
        v9 = 0;
        goto LABEL_8;
      }
      v12 = sub_39E390(v4 + 1, a1, 10);
      goto LABEL_20;
    }
LABEL_14:
    v6 = *v4;
    v7 = v4;
    v9 = 0;
    v8 = *v4;
    if ( v6 <= 0x7F )
      goto LABEL_8;
LABEL_15:
    v12 = sub_39E390(v4, a1, 10);
    goto LABEL_20;
  }
  v6 = v4[1];
  v7 = v4 + 1;
  v8 = v4[1];
  if ( v6 > 0x7F )
  {
    v12 = sub_39E390(v4 + 1, a1, 10);
LABEL_19:
    *a1 = -*a1;
    goto LABEL_20;
  }
  v9 = 1;
LABEL_8:
  while ( isspace(v6) )
  {
    v6 = *++v7;
    v8 = v6;
    if ( v6 > 0x7F )
      goto LABEL_17;
  }
  if ( v8 != 48 )
  {
LABEL_17:
    v11 = 10;
    goto LABEL_18;
  }
  v10 = tolower((unsigned __int8)v7[1]);
  if ( v10 == 120 )
  {
    v7 += 2;
    v11 = 16;
  }
  else if ( v10 == 98 )
  {
    v7 += 2;
    v11 = 2;
  }
  else
  {
    ++v7;
    v11 = 8;
  }
LABEL_18:
  v12 = sub_39E390(v7, a1, v11);
  if ( v9 )
    goto LABEL_19;
LABEL_20:
  while ( 1 )
  {
    v13 = *v12;
    v14 = *v12;
    if ( v13 > 0x7F || !isspace(v13) )
      break;
    ++v12;
  }
  return v14 == 0;
}
