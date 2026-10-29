char *__fastcall num2str_uint32(char *s, unsigned int a2, int a3, char a4)
{
  _BYTE *v5; // rbx
  unsigned int v6; // r8d
  char *v7; // rax
  char v8; // dl
  char *v9; // rdx
  char *result; // rax
  char *v11; // rax
  unsigned int v12; // esi
  unsigned __int8 v13; // r8
  char v14; // dl
  int v15; // eax
  size_t v16; // rdx
  size_t v17; // rbp
  char v18; // cl
  unsigned __int8 v19; // cl
  char v20; // dl
  char *v21; // rax
  char v22; // dl
  char *v23; // rdx
  char *v24; // rdx
  char v25; // al
  unsigned int v26; // esi
  char *v27; // rax

  v5 = s;
  if ( a2 )
  {
    v6 = a2;
    if ( a3 == 10 )
    {
      if ( a4 )
      {
        v24 = s + 9;
        do
        {
          v25 = v6;
          v26 = 10 * (v6 / 0xA);
          v6 /= 0xAu;
          *v24 = v25 - v26 + 48;
          v27 = v24--;
        }
        while ( v27 != s );
        result = s + 10;
      }
      else
      {
        result = sub_816620(s, a2);
      }
      goto LABEL_17;
    }
    if ( a3 > 10 )
    {
      if ( a3 == 16 )
      {
        v11 = s + 7;
        if ( a4 )
        {
          while ( 1 )
          {
            v18 = v6;
            v6 >>= 4;
            v19 = v18 & 0xF;
            v20 = v19 + 48;
            if ( v19 >= 0xAu )
              v20 = v19 + 55;
            *v11 = v20;
            if ( v11 == s )
              break;
            --v11;
          }
          result = v11 + 8;
        }
        else
        {
          v12 = a2 >> 4;
          if ( v12 )
            v5 = sub_816AC0(s, v12);
          v13 = v6 & 0xF;
          v14 = v13 + 48;
          if ( v13 >= 0xAu )
            v14 = v13 + 55;
          result = v5 + 1;
          *v5 = v14;
        }
        goto LABEL_17;
      }
    }
    else
    {
      if ( a3 == 2 )
      {
        if ( a4 )
        {
          v21 = s + 31;
          do
          {
            v22 = v6;
            v6 >>= 1;
            *v21 = (v22 & 1) + 48;
            v23 = v21--;
          }
          while ( v23 != s );
          result = s + 32;
        }
        else
        {
          result = sub_816810(s, a2);
        }
        goto LABEL_17;
      }
      if ( a3 == 8 )
      {
        if ( a4 )
        {
          v7 = s + 10;
          do
          {
            v8 = v6;
            v6 >>= 3;
            *v7 = (v8 & 7) + 48;
            v9 = v7--;
          }
          while ( v9 != s );
          result = s + 11;
        }
        else
        {
          result = sub_8165A0(s, a2);
        }
        goto LABEL_17;
      }
    }
    result = s;
LABEL_17:
    *result = 0;
    return result;
  }
  v15 = b2a_width(4, (unsigned int)a3);
  v16 = 1;
  if ( a4 )
    v16 = v15;
  v17 = v16;
  memset(s, 48, v16);
  s[v17] = 0;
  return &s[v17];
}

