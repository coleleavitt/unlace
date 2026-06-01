std::string *__fastcall sub_23D1F0(std::string *this, const char *a2)
{
  const char *v3; // rdi
  char *v4; // rbx
  char v5; // al
  bool v6; // r8
  char *v7; // rdx
  char *v8; // rax
  char v9; // bp
  char *v10; // rdx
  size_t v11; // rax
  FILE *v13; // rdx
  char *v14; // rdi
  bool v15; // si
  char v16; // dl
  char *v17; // rcx

  v3 = a2;
  v4 = (char *)qword_4D6DE0;
  *(_QWORD *)this = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
  if ( !a2 )
    v3 = "Eh? ";
  if ( v4 )
  {
    v5 = *v4;
    v6 = *v4 != 9;
    goto LABEL_5;
  }
  v13 = stream;
  if ( stream == stdin )
  {
    fputs(v3, stdout);
    fflush(stdout);
    v13 = stream;
  }
  if ( fgets(&byte_4D6E00, 1000, v13) )
  {
    v5 = byte_4D6E00;
    v6 = byte_4D6E00 != 9;
    if ( byte_4D6E00 )
    {
      if ( byte_4D6E00 > 31 || (v14 = &byte_4D6DFF, byte_4D6E00 == 9) )
      {
        v14 = &byte_4D6DFF;
        v15 = byte_4D6E00 != 9;
        v16 = byte_4D6E00;
        v17 = &byte_4D6E00;
        do
        {
          if ( v16 != 32 && v15 )
            v14 = v17;
          v16 = *++v17;
          if ( !*v17 )
            break;
          v15 = v16 != 9;
        }
        while ( v16 > 31 || v16 == 9 );
      }
    }
    else
    {
      v14 = &byte_4D6DFF;
    }
    v14[1] = 0;
    qword_4D6DE0 = (__int64)&byte_4D6E00;
    v4 = &byte_4D6E00;
LABEL_5:
    if ( v5 != 32 && v6 )
    {
      if ( v5 == 9 )
      {
LABEL_20:
        qword_4D6DE0 = 0;
        std::string::assign(this, "EOL", 3u);
        return this;
      }
    }
    else
    {
      v7 = v4 + 1;
      do
      {
        do
        {
          v5 = *v7;
          v4 = v7++;
        }
        while ( v5 == 32 );
      }
      while ( v5 == 9 );
      qword_4D6DE0 = (__int64)v4;
    }
    if ( v5 )
    {
      v8 = v4 + 1;
      while ( 1 )
      {
        v9 = *v8;
        v10 = v8;
        if ( *v8 == 32 || v9 == 9 )
          break;
        ++v8;
        if ( !v9 )
        {
          qword_4D6DE0 = (__int64)v10;
          if ( v10 == v4 )
            goto LABEL_20;
          goto LABEL_17;
        }
      }
      qword_4D6DE0 = (__int64)v8;
      if ( v8 != v4 )
      {
LABEL_17:
        *v10 = 0;
        v11 = strlen(v4);
        std::string::assign(this, v4, v11);
        *(_BYTE *)qword_4D6DE0 = v9;
        return this;
      }
    }
    goto LABEL_20;
  }
  qword_4D6DE0 = 0;
  return this;
}

