/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002D4F0
// Address: 0x000000014002D4F0

//----- (000000014002D4F0) ----------------------------------------------------
const char *__fastcall sub_14002D4F0(char *Str1)
{
  char *v1; // rbx
  __int8 *v2; // rdi
  __int8 *v3; // rsi
  char v4; // al
  __int8 *v5; // r9
  char *v6; // r11
  int v7; // ebp
  char v8; // r8
  char v9; // di
  int v10; // r10d
  int v11; // edx
  char i; // al
  char v13; // cl
  char *v14; // rax
  const char *v15; // rbx
  char v16; // al
  const char **j; // rsi
  size_t v19; // r14
  char v20; // di

  v1 = Str1;
  v2 = sub_14006CA14((__int64)Str1, 0);
  if ( v2 <= v1 )
  {
LABEL_5:
    if ( v2 == v1 )
      return nullptr;
  }
  else
  {
    while ( 1 )
    {
      v3 = v2 - 1;
      if ( *(v2 - 1) < 0 )
        break;
      if ( isspace((unsigned __int8)*(v2 - 1)) )
      {
        --v2;
        if ( v3 > v1 )
          continue;
      }
      goto LABEL_5;
    }
  }
  v4 = *(v2 - 1);
  v5 = v2 - 1;
  if ( v4 == 125 )
    return nullptr;
  v6 = v1;
  if ( v4 != 59 )
    v5 = v2;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  while ( v1 < v5 )
  {
    v11 = *v1++;
    if ( v8 )
    {
      if ( (_BYTE)v11 == v8 )
      {
        v8 = 0;
      }
      else if ( (_BYTE)v11 == 92 )
      {
        if ( !*v1 )
          break;
        ++v1;
      }
    }
    else
    {
      switch ( v11 )
      {
        case '"':
        case '\'':
          v8 = v11;
          break;
        case '(':
          ++v10;
          break;
        case ')':
          if ( --v10 < 0 )
            v9 = 1;
          break;
        case '/':
          if ( *v1 == 47 )
          {
            for ( i = *++v1; i; i = *++v1 )
            {
              if ( i == 10 )
                break;
            }
          }
          else if ( *v1 == 42 )
          {
            v13 = *++v1;
            if ( v13 )
            {
              while ( 1 )
              {
                v14 = v1 + 1;
                if ( v13 == 42 && *v14 == 47 )
                  break;
                v13 = *v14;
                ++v1;
                if ( !*v14 )
                  goto LABEL_35;
              }
              v1 += 2;
            }
          }
          break;
        case ';':
        case '}':
          v6 = v1;
          v10 = 0;
          v9 = 0;
          break;
        case '{':
          v6 = nullptr;
          break;
        default:
          break;
      }
    }
LABEL_35:
    ;
  }
  v15 = nullptr;
  if ( !v9 )
    v15 = v6;
  if ( v15 )
  {
    while ( 1 )
    {
      while ( *v15 >= 0 && isspace(*(unsigned __int8 *)v15) )
        ++v15;
      if ( *v15 != 47 || v15[1] != 47 )
        break;
      v16 = 47;
      do
      {
        if ( v16 == 10 )
          break;
        v16 = *++v15;
      }
      while ( v16 );
      if ( !*v15 )
        return nullptr;
    }
    for ( j = (const char **)off_140094B90; ; ++j )
    {
      v19 = strlen(*j);
      if ( !strncmp(v15, *j, v19) )
      {
        v20 = v15[v19];
        if ( (v20 < 0 || !isalnum((unsigned __int8)v15[v19])) && v20 != 95 )
          break;
      }
      if ( (unsigned int)++v7 >= 0xB )
        return v15;
    }
    return nullptr;
  }
  return v15;
}
// 140094B90: using guessed type char *off_140094B90[11];
