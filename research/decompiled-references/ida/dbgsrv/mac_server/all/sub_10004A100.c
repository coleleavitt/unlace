/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004A100
// Address: 0x000000010004A100

//----- (000000010004A100) ----------------------------------------------------
__int64 __fastcall sub_10004A100(__int64 a1)
{
  __int64 result; // rax
  char *v2; // r14
  __int64 v3; // r13
  char v4; // dl
  char *v5; // r8
  __int64 v6; // rbx
  const char *j; // r12
  __int64 v8; // r15
  size_t v9; // rax
  __int64 v10; // r11
  char *v11; // rdx
  char *i; // rsi
  char v13; // r8
  int v14; // r9d
  char *v15; // r9
  char *v16; // rsi
  int v17; // esi
  unsigned __int8 v18; // r8
  char v19; // dl
  __int64 v20; // [rsp+8h] [rbp-448h]
  void *__dst; // [rsp+10h] [rbp-440h]
  unsigned int v22; // [rsp+1Ch] [rbp-434h]
  char *__s1[128]; // [rsp+20h] [rbp-430h]

  result = 0;
  v2 = *(char **)(a1 + 8);
  if ( *(_BYTE *)(a1 + 516) == 40 )
  {
    if ( *v2 == 41 )
    {
      *(_QWORD *)(a1 + 8) = ++v2;
    }
    else
    {
      v10 = 0;
      v11 = *(char **)(a1 + 8);
      result = 0xFFFFFFFFLL;
      do
      {
        if ( v10 == 127 )
          return result;
        for ( i = v11 + 1; ; ++i )
        {
          v13 = *v11;
          v14 = (unsigned __int8)*v11;
          if ( (unsigned int)(v14 - 9) >= 5 && v14 != 32 )
            break;
          *(_QWORD *)(a1 + 8) = ++v11;
          v2 = v11;
        }
        if ( v13 >= 0 && (_DefaultRuneLocale.__runetype[(unsigned __int8)v13] & 0x100) != 0 || v14 == 95 || v14 == 36 )
        {
          v15 = v11;
          while ( v13 >= 0 && (_DefaultRuneLocale.__runetype[(unsigned __int8)v13] & 0x500) != 0
               || v13 == 95
               || v13 == 36 )
          {
            ++v15;
            *(_QWORD *)(a1 + 8) = i;
            v13 = *i++;
            v2 = v15;
          }
          v16 = i - 1;
        }
        else
        {
          v16 = v11;
        }
        *(_BYTE *)(a1 + 516) = v13;
        if ( *v16 )
        {
          *v16 = 0;
          v2 = *(char **)(a1 + 8);
          do
          {
            do
            {
              *(_QWORD *)(a1 + 8) = ++v2;
              v17 = (unsigned __int8)*v2;
            }
            while ( (unsigned int)(v17 - 9) < 5 );
          }
          while ( v17 == 32 );
          v16 = v2;
        }
        __s1[v10] = v11;
        if ( !*v11 )
        {
          if ( *(_BYTE *)(a1 + 516) == 46 )
            goto LABEL_76;
          return 0xFFFFFFFFLL;
        }
        v18 = *(_BYTE *)(a1 + 516);
        if ( (unsigned int)v18 - 9 < 5 || v18 == 32 )
        {
          v19 = *v2;
          *(_BYTE *)(a1 + 516) = *v2;
          if ( !v19 )
            return result;
          *v2 = 0;
          v2 = (char *)(*(_QWORD *)(a1 + 8) + 1LL);
          *(_QWORD *)(a1 + 8) = v2;
          v18 = *(_BYTE *)(a1 + 516);
          v16 = v2;
        }
        ++v10;
        v11 = v16;
      }
      while ( v18 == 44 );
      if ( v18 != 41 )
      {
        if ( v18 != 46 )
          return result;
LABEL_76:
        if ( *v2 != 46 )
          return 0xFFFFFFFFLL;
        result = 4294967294LL;
        if ( v2[1] != 46 )
          return 0xFFFFFFFFLL;
        return result;
      }
      result = (unsigned int)v10;
    }
  }
  LOBYTE(v3) = *v2;
  if ( *v2 )
  {
    v20 = (unsigned int)result;
    v4 = 0;
    do
    {
      while ( 1 )
      {
        v5 = v2 + 1;
        if ( v4 )
        {
          if ( (_BYTE)v3 == 92 )
          {
            if ( !v2[1] )
              return 0xFFFFFFFFLL;
            v5 = v2 + 2;
          }
          else if ( (_BYTE)v3 == v4 )
          {
            v4 = 0;
          }
          goto LABEL_8;
        }
        if ( (_BYTE)v3 != 34 && (unsigned __int8)v3 != 39 )
          break;
        v4 = v3;
LABEL_8:
        LOBYTE(v3) = *v5;
        v2 = v5;
        if ( !*v5 )
          return v4 != 0 ? -1 : (unsigned int)result;
      }
      if ( !(_DWORD)result
        || ((v3 & 0x80u) != 0LL || (_DefaultRuneLocale.__runetype[(unsigned __int8)v3] & 0x100) == 0)
        && (_BYTE)v3 != 95
        && (unsigned __int8)v3 != 36 )
      {
        v4 = 0;
        goto LABEL_8;
      }
      v6 = 0;
      for ( j = v2 + 1; ; ++j )
      {
        v3 = *j;
        if ( (v3 < 0 || (_DefaultRuneLocale.__runetype[v3] & 0x500) == 0)
          && (unsigned __int8)v3 != 95
          && (unsigned __int8)v3 != 36 )
        {
          break;
        }
        --v6;
      }
      *j = 0;
      if ( (int)result <= 0 )
      {
        v2 = (char *)j;
      }
      else
      {
        __dst = v2 + 1;
        v22 = result;
        v8 = 0;
        while ( strcmp(__s1[v8], v2) )
        {
          if ( v20 == ++v8 )
            goto LABEL_36;
        }
        *v2 = v8 + 0x80;
        if ( v6 )
        {
          v9 = strlen(j + 1);
          ++v2;
          memmove(__dst, j, v9 + 2);
          goto LABEL_37;
        }
LABEL_36:
        v2 = (char *)j;
LABEL_37:
        result = v22;
      }
      *v2 = v3;
      v4 = 0;
    }
    while ( (_BYTE)v3 );
  }
  return result;
}
