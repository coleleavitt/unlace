__int64 __fastcall sub_FBC0E0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v4; // rax
  __int64 v5; // rdx
  char v6; // al
  int v8; // [rsp+Ch] [rbp-3Ch] BYREF
  unsigned int *v9; // [rsp+10h] [rbp-38h] BYREF
  __int64 v10; // [rsp+18h] [rbp-30h]
  int v11; // [rsp+20h] [rbp-28h]
  int v12; // [rsp+24h] [rbp-24h]

  v4 = *(unsigned int **)(a2 + 16);
  v5 = *v4;
  v12 = 0;
  v9 = v4 + 4;
  v10 = v5;
  if ( v5 == 4 && v4[4] == 1869903201 )
  {
    v11 = 469755903;
    LOBYTE(v12) = 1;
  }
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "break", 5);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "case", 4);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "char", 4);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "const", 5);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "continue", 8);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "default", 7);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "do", 2);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "double", 6);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "else", 4);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "enum", 4);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "extern", 6);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "float", 5);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "for", 3);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "goto", 4);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "if", 2);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "int", 3);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "_ExtInt", 7);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "_BitInt", 7);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "long", 4);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "register", 8);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "return", 6);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "short", 5);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "signed", 6);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "sizeof", 6);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__datasizeof", 12);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "static", 6);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "struct", 6);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "switch", 6);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "typedef", 7);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "union", 5);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "unsigned", 8);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "void", 4);
  if ( !(_BYTE)v12 )
  {
    if ( v10 == 8 )
    {
      if ( *(_QWORD *)v9 == 0x656C6974616C6F76LL )
        goto LABEL_95;
    }
    else if ( v10 == 5 && *v9 == 1818847351 && *((_BYTE *)v9 + 4) == 101 )
    {
      goto LABEL_95;
    }
    if ( v10 == 8 )
    {
      if ( *(_QWORD *)v9 == 0x73616E67696C415FLL || *(_QWORD *)v9 == 0x666F6E67696C415FLL )
        goto LABEL_95;
    }
    else if ( v10 == 7 )
    {
      if ( *v9 == 1869889887 && *((_WORD *)v9 + 2) == 26989 && *((_BYTE *)v9 + 6) == 99 )
      {
        v11 = 469759999;
        LOBYTE(v12) = 1;
        goto LABEL_63;
      }
      goto LABEL_13;
    }
    if ( v10 == 5 && *v9 == 1869562463 && *((_BYTE *)v9 + 4) == 108 )
      goto LABEL_183;
LABEL_13:
    switch ( v10 )
    {
      case 8LL:
        if ( *(_QWORD *)v9 == 0x78656C706D6F435FLL || *(_QWORD *)v9 == 0x636972656E65475FLL )
          goto LABEL_95;
        break;
      case 10LL:
        if ( *(_QWORD *)v9 == 0x616E6967616D495FLL && *((_WORD *)v9 + 4) == 31090 )
          goto LABEL_95;
        break;
      case 9LL:
        if ( *(_QWORD *)v9 == 0x72757465726F4E5FLL && *((_BYTE *)v9 + 8) == 110 )
          goto LABEL_95;
        goto LABEL_18;
    }
    if ( v10 == 14 )
    {
      if ( *(_QWORD *)v9 == 0x5F6369746174535FLL && v9[2] == 1702064993 && *((_WORD *)v9 + 6) == 29810 )
        goto LABEL_95;
LABEL_93:
      if ( v10 != 8 )
        goto LABEL_20;
      if ( *(_QWORD *)v9 != 0x5F5F636E75665F5FLL )
        goto LABEL_22;
LABEL_95:
      v11 = 469755903;
      LOBYTE(v12) = 1;
      goto LABEL_63;
    }
LABEL_18:
    if ( v10 == 13 )
    {
      if ( *(_QWORD *)v9 == 0x5F6461657268545FLL && v9[2] == 1633906540 && *((_BYTE *)v9 + 12) == 108 )
        goto LABEL_95;
LABEL_20:
      if ( v10 == 10 && *(_QWORD *)v9 == 0x795F636A626F5F5FLL && *((_WORD *)v9 + 4) == 29541 )
        goto LABEL_95;
LABEL_22:
      switch ( v10 )
      {
        case 9LL:
          if ( *(_QWORD *)v9 == 0x6E5F636A626F5F5FLL && *((_BYTE *)v9 + 8) == 111
            || *(_QWORD *)v9 == 0x7475617274705F5FLL && *((_BYTE *)v9 + 8) == 104 )
          {
            goto LABEL_95;
          }
          break;
        case 8LL:
          if ( *(_QWORD *)v9 == 0x666F746E756F435FLL )
          {
LABEL_183:
            v11 = 128;
            LOBYTE(v12) = 1;
            goto LABEL_63;
          }
          break;
        case 3LL:
          if ( *(_WORD *)v9 == 29537 && *((_BYTE *)v9 + 2) == 109 )
          {
            v11 = 10;
            LOBYTE(v12) = 1;
            goto LABEL_63;
          }
          goto LABEL_27;
      }
      if ( v10 == 4 && *v9 == 1819242338 )
        goto LABEL_134;
LABEL_27:
      switch ( v10 )
      {
        case 5LL:
          if ( *v9 == 1668571491 && *((_BYTE *)v9 + 4) == 104 || *v9 == 1935764579 && *((_BYTE *)v9 + 4) == 115 )
            goto LABEL_160;
          break;
        case 10LL:
          if ( *(_QWORD *)v9 == 0x61635F74736E6F63LL && *((_WORD *)v9 + 4) == 29811 )
            goto LABEL_160;
          break;
        case 6LL:
          if ( *v9 == 1701602660 && *((_WORD *)v9 + 2) == 25972 )
            goto LABEL_160;
          goto LABEL_32;
      }
      if ( v10 == 12 )
      {
        if ( *(_QWORD *)v9 == 0x5F63696D616E7964LL && v9[2] == 1953718627 )
          goto LABEL_160;
        goto LABEL_139;
      }
LABEL_32:
      if ( v10 == 8 )
      {
        if ( *(_QWORD *)v9 == 0x746963696C707865LL )
          goto LABEL_160;
        goto LABEL_34;
      }
LABEL_139:
      if ( v10 == 6 )
      {
        if ( *v9 == 1869641829 && *((_WORD *)v9 + 2) == 29810 )
          goto LABEL_160;
        goto LABEL_141;
      }
LABEL_34:
      if ( v10 == 5 )
      {
        if ( *v9 == 1936482662 && *((_BYTE *)v9 + 4) == 101 )
          goto LABEL_134;
        goto LABEL_36;
      }
LABEL_141:
      if ( v10 == 6 )
      {
        if ( *v9 == 1701409382 && *((_WORD *)v9 + 2) == 25710 )
          goto LABEL_160;
        goto LABEL_143;
      }
LABEL_36:
      if ( v10 == 7 )
      {
        if ( *v9 == 1635022189 && *((_WORD *)v9 + 2) == 27746 && *((_BYTE *)v9 + 6) == 101 )
          goto LABEL_160;
        goto LABEL_38;
      }
LABEL_143:
      if ( v10 == 9 )
      {
        if ( *(_QWORD *)v9 == 0x63617073656D616ELL && *((_BYTE *)v9 + 8) == 101 )
          goto LABEL_160;
        goto LABEL_145;
      }
LABEL_38:
      if ( v10 == 3 )
      {
        if ( *(_WORD *)v9 == 25966 && *((_BYTE *)v9 + 2) == 119 )
          goto LABEL_160;
        goto LABEL_40;
      }
LABEL_145:
      if ( v10 == 8 )
      {
        if ( *(_QWORD *)v9 == 0x726F74617265706FLL )
          goto LABEL_160;
        goto LABEL_147;
      }
LABEL_40:
      if ( v10 == 7 )
      {
        if ( *v9 == 1986622064 && *((_WORD *)v9 + 2) == 29793 && *((_BYTE *)v9 + 6) == 101 )
          goto LABEL_160;
        goto LABEL_42;
      }
LABEL_147:
      if ( v10 == 9 )
      {
        if ( *(_QWORD *)v9 == 0x65746365746F7270LL && *((_BYTE *)v9 + 8) == 100 )
          goto LABEL_160;
        goto LABEL_149;
      }
LABEL_42:
      if ( v10 == 6 )
      {
        if ( *v9 == 1818391920 && *((_WORD *)v9 + 2) == 25449 )
          goto LABEL_160;
        goto LABEL_44;
      }
LABEL_149:
      if ( v10 == 16 )
      {
        if ( !(*(_QWORD *)v9 ^ 0x707265746E696572LL | *((_QWORD *)v9 + 1) ^ 0x747361635F746572LL) )
          goto LABEL_160;
        goto LABEL_151;
      }
LABEL_44:
      if ( v10 == 11 )
      {
        if ( *(_QWORD *)v9 == 0x635F636974617473LL && *((_WORD *)v9 + 4) == 29537 && *((_BYTE *)v9 + 10) == 116 )
          goto LABEL_160;
        goto LABEL_46;
      }
LABEL_151:
      if ( v10 == 8 )
      {
        if ( *(_QWORD *)v9 == 0x6574616C706D6574LL )
          goto LABEL_160;
        goto LABEL_153;
      }
LABEL_46:
      if ( v10 == 4 )
      {
        if ( *v9 == 1936287860 )
          goto LABEL_160;
        goto LABEL_48;
      }
LABEL_153:
      if ( v10 == 5 )
      {
        if ( *v9 == 1869768820 && *((_BYTE *)v9 + 4) == 119 )
          goto LABEL_160;
        goto LABEL_155;
      }
LABEL_48:
      if ( v10 == 4 )
      {
        if ( *v9 == 1702195828 )
        {
LABEL_134:
          v11 = 1056;
          LOBYTE(v12) = 1;
          goto LABEL_63;
        }
        goto LABEL_50;
      }
LABEL_155:
      if ( v10 == 3 )
      {
        if ( *(_WORD *)v9 == 29300 && *((_BYTE *)v9 + 2) == 121 )
          goto LABEL_160;
        goto LABEL_157;
      }
LABEL_50:
      if ( v10 == 8 )
      {
        if ( *(_QWORD *)v9 != 0x656D616E65707974LL )
          goto LABEL_52;
LABEL_160:
        v11 = 2;
        LOBYTE(v12) = 1;
        goto LABEL_63;
      }
LABEL_157:
      if ( v10 == 6 )
      {
        if ( *v9 == 1701869940 && *((_WORD *)v9 + 2) == 25705 )
          goto LABEL_160;
        goto LABEL_54;
      }
LABEL_52:
      if ( v10 == 5 && *v9 == 1852404597 && *((_BYTE *)v9 + 4) == 103 )
        goto LABEL_160;
LABEL_54:
      if ( v10 == 7 )
      {
        if ( *v9 == 1953655158 && *((_WORD *)v9 + 2) == 24949 && *((_BYTE *)v9 + 6) == 108 )
          goto LABEL_160;
        if ( *v9 == 1634231159 && *((_WORD *)v9 + 2) == 24434 && *((_BYTE *)v9 + 6) == 116 )
        {
          v11 = 0x2000;
          LOBYTE(v12) = 1;
          goto LABEL_63;
        }
      }
      else if ( v10 == 8 )
      {
        if ( *(_QWORD *)v9 == 0x7463697274736572LL )
        {
          v11 = 1;
          LOBYTE(v12) = 1;
          goto LABEL_63;
        }
LABEL_59:
        if ( v10 == 7 )
        {
          if ( *v9 == 1734962273 && *((_WORD *)v9 + 2) == 24942 && *((_BYTE *)v9 + 6) == 115
            || *v9 == 1734962273 && *((_WORD *)v9 + 2) == 28526 && *((_BYTE *)v9 + 6) == 102 )
          {
            v11 = 1028;
            LOBYTE(v12) = 1;
          }
        }
        else if ( v10 == 8 && *(_QWORD *)v9 == 0x745F363172616863LL )
        {
          v11 = 2052;
          LOBYTE(v12) = 1;
        }
        goto LABEL_63;
      }
      if ( v10 == 6 && *v9 == 1768713833 && *((_WORD *)v9 + 2) == 25966 )
      {
        v11 = 11;
        LOBYTE(v12) = 1;
        goto LABEL_63;
      }
      goto LABEL_59;
    }
    goto LABEL_93;
  }
LABEL_63:
  v8 = 2052;
  sub_FBC070((__int64)&v9, &v8, "char32_t", 8);
  v8 = 1028;
  sub_FBC070((__int64)&v9, &v8, "constexpr", 9);
  v8 = 4;
  sub_FBC070((__int64)&v9, &v8, "decltype", 8);
  v8 = 4;
  sub_FBC070((__int64)&v9, &v8, "noexcept", 8);
  v8 = 1028;
  sub_FBC070((__int64)&v9, &v8, "nullptr", 7);
  v8 = 4195332;
  sub_FBC070((__int64)&v9, &v8, "static_assert", 13);
  v8 = 1028;
  sub_FBC070((__int64)&v9, &v8, "thread_local", 12);
  v8 = 1310720;
  sub_FBC070((__int64)&v9, &v8, "co_await", 8);
  v8 = 1310720;
  sub_FBC070((__int64)&v9, &v8, "co_return", 9);
  v8 = 1310720;
  sub_FBC070((__int64)&v9, &v8, "co_yield", 8);
  v8 = 0x80000;
  sub_FBC070((__int64)&v9, &v8, "module", 6);
  v8 = 0x80000;
  sub_FBC070((__int64)&v9, &v8, "import", 6);
  v8 = (int)&stru_100000;
  sub_FBC070((__int64)&v9, &v8, "consteval", 9);
  v8 = (int)&stru_100000;
  sub_FBC070((__int64)&v9, &v8, "constinit", 9);
  v8 = (int)&stru_100000;
  sub_FBC070((__int64)&v9, &v8, "concept", 7);
  v8 = (int)&stru_100000;
  sub_FBC070((__int64)&v9, &v8, "requires", 8);
  v8 = 0x8000;
  sub_FBC070((__int64)&v9, &v8, "char8_t", 7);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "_Float16", 8);
  v8 = 1032;
  sub_FBC070((__int64)&v9, &v8, "typeof", 6);
  v8 = 1024;
  sub_FBC070((__int64)&v9, &v8, "typeof_unqual", 13);
  v8 = 0x10000000;
  sub_FBC070((__int64)&v9, &v8, "_Accum", 6);
  v8 = 0x10000000;
  sub_FBC070((__int64)&v9, &v8, "_Fract", 6);
  v8 = 0x10000000;
  sub_FBC070((__int64)&v9, &v8, "_Sat", 4);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "_Decimal32", 10);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "_Decimal64", 10);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "_Decimal128", 11);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__null", 6);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "__alignof", 9);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "__attribute", 11);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "__builtin_choose_expr", 21);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "__builtin_offsetof", 18);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "__builtin_FILE", 14);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "__builtin_FILE_NAME", 19);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "__builtin_FUNCTION", 18);
  v8 = 16;
  sub_FBC070((__int64)&v9, &v8, "__builtin_FUNCSIG", 17);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "__builtin_LINE", 14);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "__builtin_COLUMN", 16);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__builtin_source_location", 25);
  v8 = 128;
  sub_FBC070((__int64)&v9, &v8, "__builtin_types_compatible_p", 28);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "__builtin_va_arg", 16);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "__extension__", 13);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "__float128", 10);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "__ibm128", 8);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "__imag", 6);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "__int128", 8);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "__label__", 9);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "__real", 6);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "__thread", 8);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "__FUNCTION__", 12);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "__PRETTY_FUNCTION__", 19);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "__auto_type", 11);
  v8 = 16;
  sub_FBC070((__int64)&v9, &v8, "__FUNCDNAME__", 13);
  v8 = 16;
  sub_FBC070((__int64)&v9, &v8, "__FUNCSIG__", 11);
  v8 = 16;
  sub_FBC070((__int64)&v9, &v8, "L__FUNCTION__", 13);
  v8 = 16;
  sub_FBC070((__int64)&v9, &v8, "L__FUNCSIG__", 12);
  v8 = 16;
  sub_FBC070((__int64)&v9, &v8, "__is_interface_class", 20);
  v8 = 16;
  sub_FBC070((__int64)&v9, &v8, "__is_sealed", 11);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "__is_destructible", 17);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_trivially_destructible", 27);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "__is_nothrow_destructible", 25);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_nothrow_assignable", 23);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_constructible", 18);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_nothrow_constructible", 26);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_assignable", 15);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__has_nothrow_move_assign", 25);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__has_trivial_move_assign", 25);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__has_trivial_move_constructor", 30);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__builtin_is_implicit_lifetime", 30);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__builtin_is_virtual_base_of", 28);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__has_nothrow_assign", 20);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__has_nothrow_copy", 18);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__has_nothrow_constructor", 25);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__has_trivial_assign", 20);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__has_trivial_copy", 18);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__has_trivial_constructor", 25);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__has_trivial_destructor", 24);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__has_virtual_destructor", 24);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_abstract", 13);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_aggregate", 14);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_base_of", 12);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_class", 10);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_convertible_to", 19);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_empty", 10);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_enum", 9);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_final", 10);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_literal", 12);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_pod", 8);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_polymorphic", 16);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_standard_layout", 20);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_trivial", 12);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_trivially_assignable", 25);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_trivially_constructible", 28);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_trivially_copyable", 23);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_union", 10);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__has_unique_object_representations", 35);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_layout_compatible", 22);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_pointer_interconvertible_base_of", 37);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__add_lvalue_reference", 22);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__add_pointer", 13);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__add_rvalue_reference", 22);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__decay", 7);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__make_signed", 13);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__make_unsigned", 15);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__remove_all_extents", 20);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__remove_const", 14);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__remove_cv", 11);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__remove_cvref", 14);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__remove_extent", 15);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__remove_pointer", 16);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__remove_reference_t", 20);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__remove_restrict", 17);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__remove_volatile", 17);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__underlying_type", 17);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_trivially_equality_comparable", 34);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_bounded_array", 18);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_unbounded_array", 20);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_scoped_enum", 16);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__can_pass_in_regs", 18);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__reference_binds_to_temporary", 30);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__reference_constructs_from_temporary", 37);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__reference_converts_from_temporary", 35);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, &byte_22CD811, 0);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__builtin_is_cpp_trivially_relocatable", 38);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_trivially_relocatable", 26);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "__is_bitwise_cloneable", 22);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__builtin_is_replaceable", 24);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__builtin_structured_binding_size", 33);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_lvalue_expr", 16);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_rvalue_expr", 16);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_arithmetic", 15);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_floating_point", 19);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_integral", 13);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_complete_type", 18);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_void", 9);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_array", 10);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_function", 13);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_reference", 14);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_lvalue_reference", 21);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_rvalue_reference", 21);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_fundamental", 16);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_object", 11);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_scalar", 11);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_compound", 13);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_pointer", 12);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_member_object_pointer", 26);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_member_function_pointer", 28);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_member_pointer", 19);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_const", 10);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_volatile", 13);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_signed", 11);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_unsigned", 13);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_same", 9);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_convertible", 16);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__is_nothrow_convertible", 24);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__array_rank", 12);
  v8 = 2;
  sub_FBC070((__int64)&v9, &v8, "__array_extent", 14);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "__private_extern__", 18);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "__module_private__", 18);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "__builtin_ptrauth_type_discriminator", 36);
  v8 = 0;
  sub_FBC070((__int64)&v9, &v8, "__declspec", 10);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "__cdecl", 7);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "__stdcall", 9);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "__fastcall", 10);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "__thiscall", 10);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "__regcall", 9);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "__vectorcall", 12);
  v8 = 16;
  sub_FBC070((__int64)&v9, &v8, "__forceinline", 13);
  v8 = 16;
  sub_FBC070((__int64)&v9, &v8, "__unaligned", 11);
  v8 = 16;
  sub_FBC070((__int64)&v9, &v8, "__super", 7);
  v8 = (int)&stru_200200;
  sub_FBC070((__int64)&v9, &v8, "__global", 8);
  v8 = (int)&stru_200200;
  sub_FBC070((__int64)&v9, &v8, "__local", 7);
  v8 = (int)&stru_200200;
  sub_FBC070((__int64)&v9, &v8, "__constant", 10);
  v8 = (int)&stru_200200;
  sub_FBC070((__int64)&v9, &v8, "__private", 9);
  v8 = (int)&stru_200200;
  sub_FBC070((__int64)&v9, &v8, "__generic", 9);
  v8 = (int)&stru_200200;
  sub_FBC070((__int64)&v9, &v8, "__kernel", 8);
  v8 = (int)&stru_200200;
  sub_FBC070((__int64)&v9, &v8, "__read_only", 11);
  v8 = (int)&stru_200200;
  sub_FBC070((__int64)&v9, &v8, "__write_only", 12);
  v8 = (int)&stru_200200;
  sub_FBC070((__int64)&v9, &v8, "__read_write", 12);
  v8 = (int)&stru_200200;
  sub_FBC070((__int64)&v9, &v8, "__builtin_astype", 16);
  v8 = (int)&stru_220240;
  sub_FBC070((__int64)&v9, &v8, "vec_step", 8);
  v8 = (int)&stru_200200;
  sub_FBC070((__int64)&v9, &v8, "image1d_t", 9);
  v8 = (int)&stru_200200;
  sub_FBC070((__int64)&v9, &v8, "image1d_array_t", 15);
  v8 = (int)&stru_200200;
  sub_FBC070((__int64)&v9, &v8, "image1d_buffer_t", 16);
  v8 = (int)&stru_200200;
  sub_FBC070((__int64)&v9, &v8, "image2d_t", 9);
  v8 = (int)&stru_200200;
  sub_FBC070((__int64)&v9, &v8, "image2d_array_t", 15);
  v8 = (int)&stru_200200;
  sub_FBC070((__int64)&v9, &v8, "image2d_depth_t", 15);
  v8 = (int)&stru_200200;
  sub_FBC070((__int64)&v9, &v8, "image2d_array_depth_t", 21);
  v8 = (int)&stru_200200;
  sub_FBC070((__int64)&v9, &v8, "image2d_msaa_t", 14);
  v8 = (int)&stru_200200;
  sub_FBC070((__int64)&v9, &v8, "image2d_array_msaa_t", 20);
  v8 = (int)&stru_200200;
  sub_FBC070((__int64)&v9, &v8, "image2d_msaa_depth_t", 20);
  v8 = (int)&stru_200200;
  sub_FBC070((__int64)&v9, &v8, "image2d_array_msaa_depth_t", 26);
  v8 = (int)&stru_200200;
  sub_FBC070((__int64)&v9, &v8, "image3d_t", 9);
  v8 = (int)&stru_200200;
  sub_FBC070((__int64)&v9, &v8, "pipe", 4);
  v8 = 0x200000;
  sub_FBC070((__int64)&v9, &v8, "addrspace_cast", 14);
  v8 = 0x1000000;
  sub_FBC070((__int64)&v9, &v8, "__noinline__", 12);
  v8 = 0x8000000;
  sub_FBC070((__int64)&v9, &v8, "cbuffer", 7);
  v8 = 0x8000000;
  sub_FBC070((__int64)&v9, &v8, "tbuffer", 7);
  v8 = 0x8000000;
  sub_FBC070((__int64)&v9, &v8, "groupshared", 11);
  v8 = 0x8000000;
  sub_FBC070((__int64)&v9, &v8, "in", 2);
  v8 = 0x8000000;
  sub_FBC070((__int64)&v9, &v8, "inout", 5);
  v8 = 0x8000000;
  sub_FBC070((__int64)&v9, &v8, "out", 3);
  v8 = 0x8000000;
  sub_FBC070((__int64)&v9, &v8, "__hlsl_resource_t", 17);
  v8 = 0x8000000;
  sub_FBC070((__int64)&v9, &v8, "__builtin_hlsl_is_scalarized_layout_compatible", 46);
  v8 = 0x8000000;
  sub_FBC070((__int64)&v9, &v8, "__builtin_hlsl_is_intangible", 28);
  v8 = 0x8000000;
  sub_FBC070((__int64)&v9, &v8, "__builtin_hlsl_is_typed_resource_element_compatible", 51);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "__builtin_omp_required_simd_align", 33);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "__pascal", 8);
  v8 = 131136;
  sub_FBC070((__int64)&v9, &v8, "__vector", 8);
  v8 = 64;
  sub_FBC070((__int64)&v9, &v8, "__pixel", 7);
  v8 = 131136;
  sub_FBC070((__int64)&v9, &v8, "__bool", 6);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "__bf16", 6);
  v8 = 0x4000;
  sub_FBC070((__int64)&v9, &v8, "half", 4);
  v8 = 0x10000;
  sub_FBC070((__int64)&v9, &v8, "__bridge", 8);
  v8 = 0x10000;
  sub_FBC070((__int64)&v9, &v8, "__bridge_transfer", 17);
  v8 = 0x10000;
  sub_FBC070((__int64)&v9, &v8, "__bridge_retained", 17);
  v8 = 0x10000;
  sub_FBC070((__int64)&v9, &v8, "__bridge_retain", 15);
  v8 = 0x10000;
  sub_FBC070((__int64)&v9, &v8, "__covariant", 11);
  v8 = 0x10000;
  sub_FBC070((__int64)&v9, &v8, "__contravariant", 15);
  v8 = 0x10000;
  sub_FBC070((__int64)&v9, &v8, "__kindof", 8);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "_Nonnull", 8);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "_Nullable", 9);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "_Nullable_result", 16);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "_Null_unspecified", 17);
  v8 = 469755903;
  sub_FBC070((__int64)&v9, &v8, "__funcref", 9);
  v8 = 16;
  sub_FBC070((__int64)&v9, &v8, "__ptr64", 7);
  v8 = 33554448;
  sub_FBC070((__int64)&v9, &v8, "__ptr32", 7);
  v8 = 16;
  sub_FBC070((__int64)&v9, &v8, "__sptr", 6);
  v8 = 16;
  sub_FBC070((__int64)&v9, &v8, "__uptr", 6);
  v8 = 16;
  sub_FBC070((__int64)&v9, &v8, "__w64", 5);
  v8 = 272;
  sub_FBC070((__int64)&v9, &v8, "__uuidof", 8);
  v8 = 272;
  sub_FBC070((__int64)&v9, &v8, "__try", 5);
  v8 = 272;
  sub_FBC070((__int64)&v9, &v8, "__finally", 9);
  v8 = 272;
  sub_FBC070((__int64)&v9, &v8, "__leave", 7);
  v8 = 16;
  sub_FBC070((__int64)&v9, &v8, "__int64", 7);
  v8 = 16;
  sub_FBC070((__int64)&v9, &v8, "__if_exists", 11);
  v8 = 16;
  sub_FBC070((__int64)&v9, &v8, "__if_not_exists", 15);
  if ( !(_BYTE)v12 )
  {
    switch ( v10 )
    {
      case 20LL:
        if ( !(*(_QWORD *)v9 ^ 0x656C676E69735F5FLL | *((_QWORD *)v9 + 1) ^ 0x74697265686E695FLL) && v9[4] == 1701015137 )
          goto LABEL_176;
        break;
      case 22LL:
        if ( !(*(_QWORD *)v9 ^ 0x7069746C756D5F5FLL | *((_QWORD *)v9 + 1) ^ 0x7265686E695F656CLL)
          && v9[4] == 1851880553
          && *((_WORD *)v9 + 10) == 25955 )
        {
          goto LABEL_176;
        }
        break;
      case 21LL:
        if ( !(*(_QWORD *)v9 ^ 0x6175747269765F5FLL | *((_QWORD *)v9 + 1) ^ 0x697265686E695F6CLL)
          && v9[4] == 1668178292
          && *((_BYTE *)v9 + 20) == 101 )
        {
          goto LABEL_176;
        }
        goto LABEL_107;
    }
    if ( v10 == 11 )
    {
      if ( *(_QWORD *)v9 == 0x667265746E695F5FLL && *((_WORD *)v9 + 4) == 25441 && *((_BYTE *)v9 + 10) == 101 )
      {
LABEL_176:
        v11 = 16;
        goto LABEL_85;
      }
      goto LABEL_69;
    }
LABEL_107:
    if ( v10 == 23 )
    {
      if ( !(*(_QWORD *)v9 ^ 0x69746C6975625F5FLL | *((_QWORD *)v9 + 1) ^ 0x7265766E6F635F6ELL)
        && v9[4] == 1667593844
        && *((_WORD *)v9 + 10) == 28532
        && *((_BYTE *)v9 + 22) == 114 )
      {
        goto LABEL_124;
      }
      goto LABEL_112;
    }
LABEL_69:
    if ( v10 == 24 )
    {
      if ( !(*(_QWORD *)v9 ^ 0x69746C6975625F5FLL | *((_QWORD *)v9 + 1) ^ 0x726F746365765F6ELL)
        && *((_QWORD *)v9 + 2) == 0x73746E656D656C65LL )
      {
        goto LABEL_124;
      }
      goto LABEL_71;
    }
LABEL_112:
    if ( v10 == 18 )
    {
      if ( !(*(_QWORD *)v9 ^ 0x69746C6975625F5FLL | *((_QWORD *)v9 + 1) ^ 0x61635F7469625F6ELL)
        && *((_WORD *)v9 + 8) == 29811 )
      {
        goto LABEL_124;
      }
      goto LABEL_115;
    }
LABEL_71:
    if ( v10 == 19 )
    {
      if ( !(*(_QWORD *)v9 ^ 0x69746C6975625F5FLL | *((_QWORD *)v9 + 1) ^ 0x616C696176615F6ELL)
        && *((_WORD *)v9 + 8) == 27746
        && *((_BYTE *)v9 + 18) == 101 )
      {
        goto LABEL_124;
      }
      goto LABEL_73;
    }
LABEL_115:
    if ( v10 == 33 )
    {
      if ( !(*(_QWORD *)v9 ^ 0x69746C6975625F5FLL | *((_QWORD *)v9 + 1) ^ 0x755F6C6379735F6ELL)
        && !(*((_QWORD *)v9 + 2) ^ 0x74735F657571696ELL | *((_QWORD *)v9 + 3) ^ 0x6D616E5F656C6261LL)
        && *((_BYTE *)v9 + 32) == 101 )
      {
        v11 = 0x800000;
        goto LABEL_85;
      }
      goto LABEL_117;
    }
LABEL_73:
    if ( v10 == 14 )
    {
      if ( *(_QWORD *)v9 == 0x67615F6D72615F5FLL && v9[2] == 1953722222 && *((_WORD *)v9 + 6) == 25449 )
        goto LABEL_124;
      goto LABEL_75;
    }
LABEL_117:
    if ( v10 == 8 )
    {
      if ( *(_QWORD *)v9 == 0x6E695F6D72615F5FLL )
      {
LABEL_124:
        v11 = 469755903;
        goto LABEL_85;
      }
      goto LABEL_119;
    }
LABEL_75:
    if ( v10 == 11 )
    {
      if ( *(_QWORD *)v9 == 0x6E695F6D72615F5FLL && *((_WORD *)v9 + 4) == 30063 && *((_BYTE *)v9 + 10) == 116 )
        goto LABEL_124;
LABEL_77:
      if ( v10 == 9
        && (*(_QWORD *)v9 == 0x656E5F6D72615F5FLL && *((_BYTE *)v9 + 8) == 119
         || *(_QWORD *)v9 == 0x756F5F6D72615F5FLL && *((_BYTE *)v9 + 8) == 116) )
      {
        goto LABEL_124;
      }
      if ( v10 == 15 )
      {
        if ( *(_QWORD *)v9 == 0x72705F6D72615F5FLL
          && v9[2] == 1919251301
          && *((_WORD *)v9 + 6) == 25974
          && *((_BYTE *)v9 + 14) == 115
          || *(_QWORD *)v9 == 0x74735F6D72615F5FLL
          && v9[2] == 1835099506
          && *((_WORD *)v9 + 6) == 28265
          && *((_BYTE *)v9 + 14) == 103 )
        {
          goto LABEL_124;
        }
      }
      else if ( v10 == 26 )
      {
        if ( !(*(_QWORD *)v9 ^ 0x74735F6D72615F5FLL | *((_QWORD *)v9 + 1) ^ 0x5F676E696D616572LL)
          && *((_QWORD *)v9 + 2) == 0x62697461706D6F63LL )
        {
          v6 = -1;
          if ( *((_WORD *)v9 + 12) == 25964 )
            goto LABEL_86;
        }
        goto LABEL_85;
      }
      if ( v10 == 17
        && !(*(_QWORD *)v9 ^ 0x776F6E6B6E755F5FLL | *((_QWORD *)v9 + 1) ^ 0x707974796E615F6ELL)
        && *((_BYTE *)v9 + 16) == 101 )
      {
        return (*(_BYTE *)(a3 + 1) & 8) == 0 ? 1323 : 1330;
      }
      goto LABEL_85;
    }
LABEL_119:
    if ( v10 == 23
      && !(*(_QWORD *)v9 ^ 0x6F6C5F6D72615F5FLL | *((_QWORD *)v9 + 1) ^ 0x74735F796C6C6163LL)
      && v9[4] == 1835099506
      && *((_WORD *)v9 + 10) == 28265
      && *((_BYTE *)v9 + 22) == 103 )
    {
      goto LABEL_124;
    }
    goto LABEL_77;
  }
LABEL_85:
  v6 = v11;
LABEL_86:
  if ( (*(_BYTE *)(a3 + 1) & 8) != 0 )
    return (v6 & 4) == 0 ? 1336 : 1330;
  else
    return (v6 & 1) == 0 ? 1320 : 1323;
}

