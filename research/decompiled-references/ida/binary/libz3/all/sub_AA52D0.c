__int64 __fastcall sub_AA52D0(__int64 a1, __int64 a2)
{
  __int64 *v3; // r12
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 *v6; // r13
  const char *v7; // rax

  switch ( *(_DWORD *)(a1 + 10308) )
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 6:
    case 8:
      std::__ostream_insert<char,std::char_traits<char>>();
      return a2;
    case 5:
      v3 = *(__int64 **)(a1 + 10312);
      if ( !v3 )
        goto LABEL_2;
      v4 = *((unsigned int *)v3 - 1);
      if ( !(_DWORD)v4 )
        goto LABEL_2;
      v5 = *v3;
      v6 = &v3[v4];
      while ( 1 )
      {
        v7 = (const char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 360LL))(v5);
        if ( v7 )
        {
          strlen(v7);
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        else
        {
          std::ios::clear();
        }
        if ( v6 == ++v3 )
          break;
        v5 = *v3;
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      break;
    case 7:
LABEL_2:
      std::__ostream_insert<char,std::char_traits<char>>();
      break;
    default:
      sub_1872CE0("");
      sub_1873130(114, 62);
  }
  return a2;
}

