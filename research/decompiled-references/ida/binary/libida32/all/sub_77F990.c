__int64 __fastcall sub_77F990(__int64 a1)
{
  bool v1; // zf
  char *v2; // r14
  char v3; // r15
  char *v4; // rbp
  char v5; // r12
  unsigned int v6; // ebx
  char v7; // dl
  char *i; // r13
  char v10; // al
  char *v11; // rdx
  char v12; // al
  __int64 v13; // rax
  __int64 v14; // rdx
  const char *v15; // rdi
  int v16; // eax
  int v17; // edx
  __int64 v18; // rbp
  unsigned __int8 *v19; // rax
  char v20; // dl
  _BYTE *v21; // rax
  char *v22; // rdx
  char v23; // al
  size_t v24; // rax
  __int64 v25; // [rsp+8h] [rbp-450h]
  __int64 v26; // [rsp+10h] [rbp-448h]
  unsigned int v27; // [rsp+18h] [rbp-440h]
  int v28; // [rsp+1Ch] [rbp-43Ch]
  _QWORD v29[135]; // [rsp+20h] [rbp-438h] BYREF

  v1 = *(_BYTE *)(a1 + 580) == 40;
  v29[127] = __readfsqword(0x28u);
  v2 = *(char **)(a1 + 8);
  v27 = 0;
  if ( v1 )
  {
    v18 = 1;
    if ( *v2 == 41 )
    {
      *(_QWORD *)(a1 + 8) = ++v2;
      goto LABEL_2;
    }
    while ( 1 )
    {
      v19 = sub_77F840(a1);
      v20 = *(_BYTE *)(a1 + 580);
      v1 = *v19 == 0;
      v29[v18 - 1] = v19;
      if ( v1 )
        break;
      if ( (unsigned __int8)(v20 - 9) <= 4u || v20 == 32 )
      {
        v22 = *(char **)(a1 + 8);
        v23 = *v22;
        *(_BYTE *)(a1 + 580) = *v22;
        if ( !v23 )
          return (unsigned int)-1;
        *v22 = 0;
        v20 = *(_BYTE *)(a1 + 580);
        ++*(_QWORD *)(a1 + 8);
      }
      if ( v20 == 41 )
      {
        v27 = v18;
        v2 = *(char **)(a1 + 8);
        goto LABEL_2;
      }
      if ( v20 == 46 )
      {
        v21 = *(_BYTE **)(a1 + 8);
        if ( *v21 == 46 )
        {
LABEL_57:
          if ( v21[1] == 46 )
            return (unsigned int)-2;
        }
        return (unsigned int)-1;
      }
      if ( v20 == 44 && ++v18 != 128 )
        continue;
      return (unsigned int)-1;
    }
    if ( v20 == 46 )
    {
      v21 = *(_BYTE **)(a1 + 8);
      if ( *v21 == 46 )
        goto LABEL_57;
    }
    return (unsigned int)-1;
  }
LABEL_2:
  v3 = *v2;
  v4 = v2 + 1;
  if ( !*v2 )
    return v27;
  while ( 2 )
  {
    while ( 1 )
    {
      v5 = *v4;
      if ( v3 == 34 || v3 == 39 )
        break;
      v6 = v3;
      if ( !v27 )
      {
        ++v4;
        if ( !v5 )
          return v27;
        while ( 1 )
        {
          v12 = *v4;
          if ( v5 == 34 || v5 == 39 )
            break;
          v5 = *v4++;
          if ( !v12 )
            return v27;
        }
        v3 = v5;
        v5 = *v4;
        break;
      }
      while ( v6 <= 0x7F )
      {
        if ( isalpha(v6) || v3 == 95 || v3 == 36 )
        {
          for ( i = v4; ; ++i )
          {
            v6 = *i;
            v3 = *i;
            if ( v6 > 0x7F || !isalnum(v6) && (_BYTE)v6 != 95 && (_BYTE)v6 != 36 )
              break;
          }
          v13 = (int)v27;
          *i = 0;
          v14 = 0;
          v26 = v13;
          while ( 1 )
          {
            v15 = (const char *)v29[v14];
            v28 = v14;
            v25 = v14;
            v16 = strcmp(v15, v2);
            v17 = v25;
            if ( !v16 )
              break;
            v14 = v25 + 1;
            if ( v25 + 1 == v26 )
            {
              v17 = v28 + 1;
              break;
            }
          }
          if ( v17 < (int)v27 )
          {
            *v2 = v17 + 0x80;
            if ( i != v4 )
            {
              v24 = strlen(i + 1);
              memmove(v4, i, v24 + 2);
            }
            i = v4;
          }
          *i = v3;
          v4 = i + 1;
          if ( !v3 )
            return v27;
          v5 = i[1];
          if ( v3 == 34 || v3 == 39 )
            goto LABEL_15;
        }
        else
        {
          if ( !v5 )
            return v27;
          v7 = v4[1];
          if ( v5 == 34 || v5 == 39 )
          {
            v3 = v5;
            ++v4;
            v5 = v7;
            goto LABEL_15;
          }
          v6 = v5;
          i = v4;
          v5 = *++v4;
          v3 = v6;
        }
        v2 = i;
      }
      if ( !v5 )
        return v27;
      v2 = v4;
      v3 = v5;
      ++v4;
    }
LABEL_15:
    v2 = v4 + 1;
    if ( !v5 )
      return (unsigned int)-1;
    while ( v5 == 92 )
    {
      if ( !v4[1] )
        return (unsigned int)-1;
      v10 = v4[2];
      v2 = v4 + 2;
      v11 = v4 + 3;
      if ( !v10 )
        return (unsigned int)-1;
LABEL_22:
      v4 = v2;
      v5 = v10;
      v2 = v11;
    }
    v10 = *v2;
    if ( v5 != v3 )
    {
      v11 = v2 + 1;
      if ( !v10 )
        return (unsigned int)-1;
      goto LABEL_22;
    }
    v4 = v2 + 1;
    if ( v10 )
    {
      v3 = *v2;
      continue;
    }
    return v27;
  }
}

