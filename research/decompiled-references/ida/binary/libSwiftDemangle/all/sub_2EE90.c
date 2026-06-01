void __fastcall sub_2EE90(std::string *this, _BYTE *a2, __int64 a3, const char *a4)
{
  _BYTE *v5; // rbx
  __int64 v6; // r12
  size_t v7; // rax

  if ( a2 )
  {
    v5 = sub_C020(a2);
    v6 = sub_C050((__int64)a2);
    if ( v5 != (_BYTE *)v6 )
    {
      while ( 1 )
      {
        v5 += 8;
        sub_24010(this);
        if ( (_BYTE *)v6 == v5 )
          break;
        if ( a4 )
        {
          v7 = strlen(a4);
          std::string::append(this, a4, v7);
        }
        else if ( (_BYTE *)v6 == v5 )
        {
          return;
        }
      }
    }
  }
}

