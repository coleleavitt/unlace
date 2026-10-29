std::ios_base *__cdecl oct(std::ios_base *__str)
{
  __int64 (__fastcall *v1)(__int64); // x1
  unsigned __int64 v2; // x2
  int v3; // w3
  int v4; // w4
  int v5; // w22
  __int64 (__fastcall *v6)(__int64); // x19
  const char *v8; // x21
  bool v9; // cf
  __int64 v10; // x23
  std::ios_base *result; // x0
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

  v5 = v4;
  v6 = v1;
  v27 = 0;
  if ( v2 )
  {
    v8 = &v27;
    do
    {
      *--v8 = v2 & 7 | 0x30;
      v9 = v2 >= 8;
      v2 >>= 3;
    }
    while ( v9 );
  }
  else
  {
    v8 = &v26;
    v26 = 48;
  }
  v10 = v3;
  result = (std::ios_base *)_platform_strlen(v8);
  v12 = v10 - (_QWORD)result;
  if ( v12 >= 1 )
  {
    if ( v5 )
      v13 = 48;
    else
      v13 = 32;
    do
    {
      if ( v6 && (result = (std::ios_base *)v6(v13)) != nullptr )
      {
        v14 = (char)result->__vftable;
        if ( LOBYTE(result->__vftable) )
        {
          v15 = (unsigned __int8 *)&result->__vftable + 1;
          do
          {
            v16 = *(_BYTE **)&__str->__fmtflags_;
            if ( (unsigned __int64)v16 >= __str->__precision_ )
            {
              result = (std::ios_base *)(*(__int64 (__fastcall **)(std::ios_base *))&__str->__rdstate_)(__str);
              v16 = *(_BYTE **)&__str->__fmtflags_;
            }
            *(_QWORD *)&__str->__fmtflags_ = v16 + 1;
            *v16 = v14;
            v17 = *v15++;
            v14 = v17;
          }
          while ( v17 );
        }
      }
      else
      {
        v18 = *(_BYTE **)&__str->__fmtflags_;
        if ( (unsigned __int64)v18 >= __str->__precision_ )
        {
          result = (std::ios_base *)(*(__int64 (__fastcall **)(std::ios_base *))&__str->__rdstate_)(__str);
          v18 = *(_BYTE **)&__str->__fmtflags_;
        }
        *(_QWORD *)&__str->__fmtflags_ = v18 + 1;
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
    if ( v6 && (result = (std::ios_base *)v6(*(unsigned __int8 *)v8)) != nullptr )
    {
      v20 = (char)result->__vftable;
      if ( LOBYTE(result->__vftable) )
      {
        v21 = (unsigned __int8 *)&result->__vftable + 1;
        do
        {
          v22 = *(_BYTE **)&__str->__fmtflags_;
          if ( (unsigned __int64)v22 >= __str->__precision_ )
          {
            result = (std::ios_base *)(*(__int64 (__fastcall **)(std::ios_base *))&__str->__rdstate_)(__str);
            v22 = *(_BYTE **)&__str->__fmtflags_;
          }
          *(_QWORD *)&__str->__fmtflags_ = v22 + 1;
          *v22 = v20;
          v23 = *v21++;
          v20 = v23;
        }
        while ( v23 );
      }
    }
    else
    {
      v24 = *(char **)&__str->__fmtflags_;
      if ( (unsigned __int64)v24 >= __str->__precision_ )
      {
        result = (std::ios_base *)(*(__int64 (__fastcall **)(std::ios_base *))&__str->__rdstate_)(__str);
        v24 = *(char **)&__str->__fmtflags_;
      }
      *(_QWORD *)&__str->__fmtflags_ = v24 + 1;
      *v24 = v25;
    }
    ++v8;
  }
  return result;
}
