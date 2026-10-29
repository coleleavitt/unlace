unsigned __int64 __fastcall sub_2EA10(
        std::string *this,
        _BYTE *a2,
        const char *a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        const char *a7,
        unsigned __int64 a8)
{
  __int64 *v9; // r15
  __int64 v10; // rbx
  const char *v11; // r14
  size_t v12; // rax
  __int16 v13; // ax
  __int64 v14; // r13
  __int16 v15; // ax
  size_t v16; // rax
  const char *v17; // rsi
  unsigned __int64 v18; // rdx
  const char *v19; // rsi
  size_t v20; // rax
  int v21; // [rsp+Ch] [rbp-7Ch]
  char s[40]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v23; // [rsp+48h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  if ( *((_BYTE *)this + 13) )
  {
    std::string::append(this, a3, a4);
    std::string::append(this, " <", 2u);
    v9 = (__int64 *)sub_C020(a2);
    v10 = sub_C050((__int64)a2);
    if ( v9 == (__int64 *)v10 )
      return std::string::append(this, "> of ", 5u);
    v21 = 0;
    v11 = "";
    while ( 1 )
    {
      while ( 1 )
      {
        v14 = *v9;
        v15 = *(_WORD *)(*v9 + 16);
        if ( v15 != 206 )
          break;
        ++v9;
        v16 = strlen(v11);
        v17 = v11;
        v11 = ", ";
        std::string::append(this, v17, v16);
        sub_24010(this);
        if ( (__int64 *)v10 == v9 )
          return std::string::append(this, "> of ", 5u);
      }
      if ( v15 != 327 && v15 != 205 )
        break;
LABEL_14:
      if ( (__int64 *)v10 == ++v9 )
        return std::string::append(this, "> of ", 5u);
    }
    if ( sub_BFF0(*v9) )
    {
      v12 = strlen(v11);
      std::string::append(this, v11, v12);
      std::string::append(this, a7, a8);
      v13 = *(_WORD *)(v14 + 16);
      if ( v13 == 75 )
      {
        std::string::append(this, "Arg[", 4u);
        __snprintf_chk(s, 32, 1, 32, "%lld", v21);
        v20 = strlen(s);
        std::string::append(this, s, v20);
        v18 = 4;
        v19 = "] = ";
      }
      else
      {
        if ( v13 != 76 )
        {
          sub_24010(this);
          v11 = ", ";
          goto LABEL_13;
        }
        v18 = 9;
        v19 = "Return = ";
      }
      v11 = ", ";
      std::string::append(this, v19, v18);
      sub_2E350(this, (_BYTE *)v14);
    }
LABEL_13:
    ++v21;
    goto LABEL_14;
  }
  if ( !*((_BYTE *)this + 80) )
  {
    std::string::append(this, "specialized ", 0xCu);
    *((_BYTE *)this + 80) = 1;
  }
  return v23 - __readfsqword(0x28u);
}

