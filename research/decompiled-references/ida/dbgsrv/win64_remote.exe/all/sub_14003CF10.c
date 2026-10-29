/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14003CF10
// Address: 0x000000014003CF10

//----- (000000014003CF10) ----------------------------------------------------
__int64 __fastcall sub_14003CF10(__int64 a1)
{
  int v1; // esi
  _BYTE *v3; // rax
  char *v4; // rax
  char v5; // r15
  char v6; // di
  char *v7; // rbx
  char *v8; // r12
  char **v11; // rdi
  char *v12; // rax
  char v13; // cl
  _BYTE *v14; // rcx
  char v15; // al
  _BYTE *v16; // rax
  _BYTE *v17; // rax
  char *v18; // r14
  char v19; // di
  char v20; // bp
  __int64 v21; // rdi
  size_t v22; // rax
  char *Str1[128]; // [rsp+20h] [rbp-438h] BYREF

  v1 = 0;
  if ( *(_BYTE *)(a1 + 644) != 40 )
    goto LABEL_4;
  v3 = *(_BYTE **)(a1 + 8);
  if ( *v3 == 41 )
  {
    *(_QWORD *)(a1 + 8) = v3 + 1;
LABEL_4:
    v4 = *(char **)(a1 + 8);
    v5 = 0;
    v6 = *v4;
    v7 = v4 + 1;
    if ( *v4 )
    {
      do
      {
        v8 = v7;
        if ( v5 )
        {
          if ( v6 == 92 )
          {
            if ( !*v7++ )
              return 0xFFFFFFFFLL;
          }
          else if ( v6 == v5 )
          {
            v5 = 0;
          }
        }
        else if ( v6 == 34 || v6 == 39 )
        {
          v5 = v6;
        }
        else if ( v1 && (v6 >= 0 && isalpha((unsigned __int8)v6) || v6 == 95 || v6 == 36) )
        {
          v18 = v7 - 1;
          while ( 1 )
          {
            v19 = *v7;
            if ( (*v7 < 0 || !isalnum((unsigned __int8)*v7)) && v19 != 95 && v19 != 36 )
              break;
            ++v7;
          }
          v20 = *v7;
          v21 = 0;
          *v7 = 0;
          if ( v1 > 0 )
          {
            while ( strcmp(Str1[v21], v18) )
            {
              v21 = (unsigned int)(v21 + 1);
              if ( (int)v21 >= v1 )
              {
                *v7 = v20;
                goto LABEL_50;
              }
            }
            *v18 = v21 + 0x80;
            if ( v8 != v7 )
            {
              v22 = strlen(v7 + 1);
              memcpy(v8, v7, v22 + 2);
              v7 = v8;
            }
          }
          *v7 = v20;
        }
LABEL_50:
        v6 = *v7++;
      }
      while ( v6 );
      if ( v5 )
        return (unsigned int)-1;
    }
    return (unsigned int)v1;
  }
  v11 = Str1;
  while ( 1 )
  {
    v12 = sub_14003A8A0(a1);
    v13 = *(_BYTE *)(a1 + 644);
    *v11 = v12;
    if ( !*v12 )
    {
      if ( v13 == 46 )
      {
        v17 = *(_BYTE **)(a1 + 8);
        if ( *v17 == 46 && v17[1] == 46 )
          return 4294967294LL;
      }
      return 0xFFFFFFFFLL;
    }
    ++v1;
    ++v11;
    if ( v13 == 32 || (unsigned __int8)(v13 - 9) <= 4u )
    {
      v14 = *(_BYTE **)(a1 + 8);
      *(_BYTE *)(a1 + 644) = *v14;
      if ( *v14 )
      {
        *v14 = 0;
        ++*(_QWORD *)(a1 + 8);
      }
    }
    v15 = *(_BYTE *)(a1 + 644);
    if ( v15 == 41 )
      goto LABEL_4;
    if ( v15 == 46 )
      break;
    if ( v15 != 44 )
      return 0xFFFFFFFFLL;
    if ( v1 >= 127 )
      return 0xFFFFFFFFLL;
  }
  v16 = *(_BYTE **)(a1 + 8);
  if ( *v16 != 46 )
    return 0xFFFFFFFFLL;
  if ( v16[1] != 46 )
    return 0xFFFFFFFFLL;
  return 4294967294LL;
}
