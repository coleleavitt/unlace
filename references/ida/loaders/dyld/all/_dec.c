std::ios_base *__cdecl dec(std::ios_base *__str)
{
  __int64 (__fastcall *v1)(__int64); // x1
  __int64 v2; // x2
  int v3; // w3
  int v4; // w4
  int v5; // w22
  __int64 (__fastcall *v6)(__int64); // x19
  unsigned __int64 v8; // x23
  const char *v9; // x21
  unsigned __int64 v10; // x9
  bool v11; // cf
  int v12; // w24
  _BYTE *v13; // x0
  unsigned __int8 *v14; // x25
  _BYTE *v15; // x8
  int v16; // t1
  _BYTE *v17; // x8
  std::ios_base *result; // x0
  __int64 v19; // x24
  __int64 v20; // x22
  char v21; // w26
  unsigned __int8 *v22; // x27
  _BYTE *v23; // x8
  int v24; // t1
  _BYTE *v25; // x8
  char v27; // w22
  unsigned __int8 *v28; // x23
  _BYTE *v29; // x8
  int v30; // t1
  _BYTE *v31; // x8
  char v32; // w22
  unsigned __int8 *v33; // x23
  _BYTE *v34; // x8
  int v35; // t1
  char *v36; // x8
  char v37; // w22
  char v38; // [xsp+1Eh] [xbp-52h] BYREF
  char v39; // [xsp+1Fh] [xbp-51h] BYREF

  v5 = v4;
  v6 = v1;
  v8 = (unsigned __int64)v2 >> 63;
  v39 = 0;
  if ( v2 )
  {
    v9 = &v39;
    if ( v2 >= 0 )
      v10 = v2;
    else
      v10 = -v2;
    do
    {
      *--v9 = (v10 % 0xA) | 0x30;
      v11 = v10 >= 0xA;
      v10 /= 0xAu;
    }
    while ( v11 );
  }
  else
  {
    v9 = &v38;
    v38 = 48;
  }
  v12 = (v2 >> 63) + v3;
  if ( v2 < 0 && v4 )
  {
    if ( v1 && (v13 = (_BYTE *)v1(45)) != nullptr )
    {
      LODWORD(v8) = (unsigned __int8)*v13;
      if ( *v13 )
      {
        v14 = v13 + 1;
        do
        {
          v15 = *(_BYTE **)&__str->__fmtflags_;
          if ( (unsigned __int64)v15 >= __str->__precision_ )
          {
            (*(void (__fastcall **)(std::ios_base *))&__str->__rdstate_)(__str);
            v15 = *(_BYTE **)&__str->__fmtflags_;
          }
          *(_QWORD *)&__str->__fmtflags_ = v15 + 1;
          *v15 = v8;
          v16 = *v14++;
          LODWORD(v8) = v16;
        }
        while ( v16 );
      }
    }
    else
    {
      v17 = *(_BYTE **)&__str->__fmtflags_;
      if ( (unsigned __int64)v17 >= __str->__precision_ )
      {
        (*(void (__fastcall **)(std::ios_base *))&__str->__rdstate_)(__str);
        v17 = *(_BYTE **)&__str->__fmtflags_;
      }
      LODWORD(v8) = 0;
      *(_QWORD *)&__str->__fmtflags_ = v17 + 1;
      *v17 = 45;
    }
  }
  result = (std::ios_base *)_platform_strlen(v9);
  v19 = v12 - (_QWORD)result;
  if ( v19 >= 1 )
  {
    if ( v5 )
      v20 = 48;
    else
      v20 = 32;
    do
    {
      if ( v6 && (result = (std::ios_base *)v6(v20)) != nullptr )
      {
        v21 = (char)result->__vftable;
        if ( LOBYTE(result->__vftable) )
        {
          v22 = (unsigned __int8 *)&result->__vftable + 1;
          do
          {
            v23 = *(_BYTE **)&__str->__fmtflags_;
            if ( (unsigned __int64)v23 >= __str->__precision_ )
            {
              result = (std::ios_base *)(*(__int64 (__fastcall **)(std::ios_base *))&__str->__rdstate_)(__str);
              v23 = *(_BYTE **)&__str->__fmtflags_;
            }
            *(_QWORD *)&__str->__fmtflags_ = v23 + 1;
            *v23 = v21;
            v24 = *v22++;
            v21 = v24;
          }
          while ( v24 );
        }
      }
      else
      {
        v25 = *(_BYTE **)&__str->__fmtflags_;
        if ( (unsigned __int64)v25 >= __str->__precision_ )
        {
          result = (std::ios_base *)(*(__int64 (__fastcall **)(std::ios_base *))&__str->__rdstate_)(__str);
          v25 = *(_BYTE **)&__str->__fmtflags_;
        }
        *(_QWORD *)&__str->__fmtflags_ = v25 + 1;
        *v25 = v20;
      }
    }
    while ( v19-- > 1 );
  }
  if ( (_DWORD)v8 )
  {
    if ( v6 && (result = (std::ios_base *)v6(45)) != nullptr )
    {
      v27 = (char)result->__vftable;
      if ( LOBYTE(result->__vftable) )
      {
        v28 = (unsigned __int8 *)&result->__vftable + 1;
        do
        {
          v29 = *(_BYTE **)&__str->__fmtflags_;
          if ( (unsigned __int64)v29 >= __str->__precision_ )
          {
            result = (std::ios_base *)(*(__int64 (__fastcall **)(std::ios_base *))&__str->__rdstate_)(__str);
            v29 = *(_BYTE **)&__str->__fmtflags_;
          }
          *(_QWORD *)&__str->__fmtflags_ = v29 + 1;
          *v29 = v27;
          v30 = *v28++;
          v27 = v30;
        }
        while ( v30 );
      }
    }
    else
    {
      v31 = *(_BYTE **)&__str->__fmtflags_;
      if ( (unsigned __int64)v31 >= __str->__precision_ )
      {
        result = (std::ios_base *)(*(__int64 (__fastcall **)(std::ios_base *))&__str->__rdstate_)(__str);
        v31 = *(_BYTE **)&__str->__fmtflags_;
      }
      *(_QWORD *)&__str->__fmtflags_ = v31 + 1;
      *v31 = 45;
    }
  }
  while ( 1 )
  {
    v37 = *v9;
    if ( !*v9 )
      break;
    if ( v6 && (result = (std::ios_base *)v6(*(unsigned __int8 *)v9)) != nullptr )
    {
      v32 = (char)result->__vftable;
      if ( LOBYTE(result->__vftable) )
      {
        v33 = (unsigned __int8 *)&result->__vftable + 1;
        do
        {
          v34 = *(_BYTE **)&__str->__fmtflags_;
          if ( (unsigned __int64)v34 >= __str->__precision_ )
          {
            result = (std::ios_base *)(*(__int64 (__fastcall **)(std::ios_base *))&__str->__rdstate_)(__str);
            v34 = *(_BYTE **)&__str->__fmtflags_;
          }
          *(_QWORD *)&__str->__fmtflags_ = v34 + 1;
          *v34 = v32;
          v35 = *v33++;
          v32 = v35;
        }
        while ( v35 );
      }
    }
    else
    {
      v36 = *(char **)&__str->__fmtflags_;
      if ( (unsigned __int64)v36 >= __str->__precision_ )
      {
        result = (std::ios_base *)(*(__int64 (__fastcall **)(std::ios_base *))&__str->__rdstate_)(__str);
        v36 = *(char **)&__str->__fmtflags_;
      }
      *(_QWORD *)&__str->__fmtflags_ = v36 + 1;
      *v36 = v37;
    }
    ++v9;
  }
  return result;
}
