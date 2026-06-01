std::ios_base *__cdecl hex(std::ios_base *__str)
{
  __int64 (__fastcall *v1)(__int64); // x1
  unsigned __int64 v2; // x2
  int v3; // w3
  int v4; // w4
  int v5; // w5
  int v6; // w6
  int v7; // w22
  int v8; // w23
  __int64 (__fastcall *v9)(__int64); // x19
  const char *v11; // x8
  const char *v12; // x21
  bool v13; // cf
  char *v14; // x24
  unsigned __int8 v15; // w26
  _BYTE *v16; // x0
  char v17; // w26
  unsigned __int8 *v18; // x27
  _BYTE *v19; // x8
  int v20; // t1
  unsigned __int8 *v21; // x8
  unsigned __int8 v22; // t1
  char v23; // w24
  std::ios_base *result; // x0
  int v25; // w23
  __int64 v26; // x22
  char v27; // w26
  unsigned __int8 *v28; // x27
  _BYTE *v29; // x8
  int v30; // t1
  _BYTE *v31; // x8
  char *v33; // x22
  unsigned __int8 v34; // w24
  char v35; // w24
  unsigned __int8 *v36; // x25
  _BYTE *v37; // x8
  int v38; // t1
  unsigned __int8 *v39; // x8
  unsigned __int8 v40; // t1
  char v41; // w22
  unsigned __int8 *v42; // x23
  _BYTE *v43; // x8
  int v44; // t1
  char *v45; // x8
  char v46; // w22
  char v47; // [xsp+1Eh] [xbp-52h] BYREF
  char v48; // [xsp+1Fh] [xbp-51h] BYREF

  v7 = v4;
  v8 = v3;
  v9 = v1;
  v11 = "0123456789ABCDEF";
  if ( !v5 )
    v11 = "0123456789abcdef";
  v48 = 0;
  if ( v2 )
  {
    v12 = &v48;
    do
    {
      *--v12 = v11[v2 & 0xF];
      v13 = v2 >= 0x10;
      v2 >>= 4;
    }
    while ( v13 );
    if ( !v6 )
      goto LABEL_23;
  }
  else
  {
    v12 = &v47;
    v47 = 48;
    if ( !v6 )
    {
LABEL_23:
      v23 = 1;
      goto LABEL_25;
    }
  }
  v8 = v3 - 2;
  if ( v4 )
  {
    v14 = (char *)&_0x;
    v15 = 48;
    do
    {
      if ( v9 && (v16 = (_BYTE *)v9(v15)) != nullptr )
      {
        v17 = *v16;
        if ( *v16 )
        {
          v18 = v16 + 1;
          do
          {
            v19 = *(_BYTE **)&__str->__fmtflags_;
            if ( (unsigned __int64)v19 >= __str->__precision_ )
            {
              (*(void (__fastcall **)(std::ios_base *))&__str->__rdstate_)(__str);
              v19 = *(_BYTE **)&__str->__fmtflags_;
            }
            *(_QWORD *)&__str->__fmtflags_ = v19 + 1;
            *v19 = v17;
            v20 = *v18++;
            v17 = v20;
          }
          while ( v20 );
        }
      }
      else
      {
        v21 = *(unsigned __int8 **)&__str->__fmtflags_;
        if ( (unsigned __int64)v21 >= __str->__precision_ )
        {
          (*(void (__fastcall **)(std::ios_base *))&__str->__rdstate_)(__str);
          v21 = *(unsigned __int8 **)&__str->__fmtflags_;
        }
        *(_QWORD *)&__str->__fmtflags_ = v21 + 1;
        *v21 = v15;
      }
      v22 = *++v14;
      v15 = v22;
    }
    while ( v14 != (char *)&unk_7C94A );
    goto LABEL_23;
  }
  v23 = 0;
LABEL_25:
  result = (std::ios_base *)_platform_strlen(v12);
  v25 = v8 - (_DWORD)result;
  if ( v25 >= 1 )
  {
    if ( v7 )
      v26 = 48;
    else
      v26 = 32;
    do
    {
      if ( v9 && (result = (std::ios_base *)v9(v26)) != nullptr )
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
        *v31 = v26;
      }
    }
    while ( v25-- > 1 );
  }
  if ( (v23 & 1) == 0 )
  {
    v33 = (char *)&_0x;
    v34 = 48;
    do
    {
      if ( v9 && (result = (std::ios_base *)v9(v34)) != nullptr )
      {
        v35 = (char)result->__vftable;
        if ( LOBYTE(result->__vftable) )
        {
          v36 = (unsigned __int8 *)&result->__vftable + 1;
          do
          {
            v37 = *(_BYTE **)&__str->__fmtflags_;
            if ( (unsigned __int64)v37 >= __str->__precision_ )
            {
              result = (std::ios_base *)(*(__int64 (__fastcall **)(std::ios_base *))&__str->__rdstate_)(__str);
              v37 = *(_BYTE **)&__str->__fmtflags_;
            }
            *(_QWORD *)&__str->__fmtflags_ = v37 + 1;
            *v37 = v35;
            v38 = *v36++;
            v35 = v38;
          }
          while ( v38 );
        }
      }
      else
      {
        v39 = *(unsigned __int8 **)&__str->__fmtflags_;
        if ( (unsigned __int64)v39 >= __str->__precision_ )
        {
          result = (std::ios_base *)(*(__int64 (__fastcall **)(std::ios_base *))&__str->__rdstate_)(__str);
          v39 = *(unsigned __int8 **)&__str->__fmtflags_;
        }
        *(_QWORD *)&__str->__fmtflags_ = v39 + 1;
        *v39 = v34;
      }
      v40 = *++v33;
      v34 = v40;
    }
    while ( v33 != (char *)&unk_7C94A );
  }
  while ( 1 )
  {
    v46 = *v12;
    if ( !*v12 )
      break;
    if ( v9 && (result = (std::ios_base *)v9(*(unsigned __int8 *)v12)) != nullptr )
    {
      v41 = (char)result->__vftable;
      if ( LOBYTE(result->__vftable) )
      {
        v42 = (unsigned __int8 *)&result->__vftable + 1;
        do
        {
          v43 = *(_BYTE **)&__str->__fmtflags_;
          if ( (unsigned __int64)v43 >= __str->__precision_ )
          {
            result = (std::ios_base *)(*(__int64 (__fastcall **)(std::ios_base *))&__str->__rdstate_)(__str);
            v43 = *(_BYTE **)&__str->__fmtflags_;
          }
          *(_QWORD *)&__str->__fmtflags_ = v43 + 1;
          *v43 = v41;
          v44 = *v42++;
          v41 = v44;
        }
        while ( v44 );
      }
    }
    else
    {
      v45 = *(char **)&__str->__fmtflags_;
      if ( (unsigned __int64)v45 >= __str->__precision_ )
      {
        result = (std::ios_base *)(*(__int64 (__fastcall **)(std::ios_base *))&__str->__rdstate_)(__str);
        v45 = *(char **)&__str->__fmtflags_;
      }
      *(_QWORD *)&__str->__fmtflags_ = v45 + 1;
      *v45 = v46;
    }
    ++v12;
  }
  return result;
}
