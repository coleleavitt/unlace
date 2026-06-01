_BYTE *__fastcall udec(__int64 a1, __int64 (__fastcall *a2)(__int64), unsigned __int64 a3, int a4, int a5)
{
  const char *v8; // x21
  bool v9; // cf
  __int64 v10; // x23
  _BYTE *result; // x0
  __int64 v12; // x23
  __int64 v13; // x22
  char v14; // w25
  unsigned __int8 *v15; // x26
  _BYTE *v16; // x8
  int v17; // t1
  _BYTE *v18; // x8
  char v20; // w22
  unsigned __int8 *v21; // x23
  _BYTE *v22; // x8
  int v23; // t1
  char *v24; // x8
  char v25; // w22
  char v26; // [xsp+1Eh] [xbp-42h] BYREF
  char v27; // [xsp+1Fh] [xbp-41h] BYREF

  v27 = 0;
  if ( a3 )
  {
    v8 = &v27;
    do
    {
      *--v8 = (a3 % 0xA) | 0x30;
      v9 = a3 >= 0xA;
      a3 /= 0xAu;
    }
    while ( v9 );
  }
  else
  {
    v8 = &v26;
    v26 = 48;
  }
  v10 = a4;
  result = (_BYTE *)_platform_strlen(v8);
  v12 = v10 - (_QWORD)result;
  if ( v12 >= 1 )
  {
    if ( a5 )
      v13 = 48;
    else
      v13 = 32;
    do
    {
      if ( a2 && (result = (_BYTE *)a2(v13)) != nullptr )
      {
        v14 = *result;
        if ( *result )
        {
          v15 = result + 1;
          do
          {
            v16 = *(_BYTE **)(a1 + 8);
            if ( (unsigned __int64)v16 >= *(_QWORD *)(a1 + 16) )
            {
              result = (_BYTE *)(*(__int64 (__fastcall **)(__int64))(a1 + 32))(a1);
              v16 = *(_BYTE **)(a1 + 8);
            }
            *(_QWORD *)(a1 + 8) = v16 + 1;
            *v16 = v14;
            v17 = *v15++;
            v14 = v17;
          }
          while ( v17 );
        }
      }
      else
      {
        v18 = *(_BYTE **)(a1 + 8);
        if ( (unsigned __int64)v18 >= *(_QWORD *)(a1 + 16) )
        {
          result = (_BYTE *)(*(__int64 (__fastcall **)(__int64))(a1 + 32))(a1);
          v18 = *(_BYTE **)(a1 + 8);
        }
        *(_QWORD *)(a1 + 8) = v18 + 1;
        *v18 = v13;
      }
    }
    while ( v12-- > 1 );
  }
  while ( 1 )
  {
    v25 = *v8;
    if ( !*v8 )
      break;
    if ( a2 && (result = (_BYTE *)a2(*(unsigned __int8 *)v8)) != nullptr )
    {
      v20 = *result;
      if ( *result )
      {
        v21 = result + 1;
        do
        {
          v22 = *(_BYTE **)(a1 + 8);
          if ( (unsigned __int64)v22 >= *(_QWORD *)(a1 + 16) )
          {
            result = (_BYTE *)(*(__int64 (__fastcall **)(__int64))(a1 + 32))(a1);
            v22 = *(_BYTE **)(a1 + 8);
          }
          *(_QWORD *)(a1 + 8) = v22 + 1;
          *v22 = v20;
          v23 = *v21++;
          v20 = v23;
        }
        while ( v23 );
      }
    }
    else
    {
      v24 = *(char **)(a1 + 8);
      if ( (unsigned __int64)v24 >= *(_QWORD *)(a1 + 16) )
      {
        result = (_BYTE *)(*(__int64 (__fastcall **)(__int64))(a1 + 32))(a1);
        v24 = *(char **)(a1 + 8);
      }
      *(_QWORD *)(a1 + 8) = v24 + 1;
      *v24 = v25;
    }
    ++v8;
  }
  return result;
}
