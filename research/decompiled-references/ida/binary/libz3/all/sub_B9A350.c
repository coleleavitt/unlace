__int64 __fastcall sub_B9A350(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v3; // r13d
  unsigned int v4; // r13d
  __int64 v5; // rdx
  const char *v6; // rsi
  __int64 v7; // r13
  int v8; // r15d
  __int64 v9; // r13
  unsigned __int64 v10; // rax
  unsigned int v11; // r13d
  __int64 *v12; // r14
  __int64 v13; // rbx
  unsigned __int64 v14; // rax

  switch ( *(_DWORD *)a2 )
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( *(int *)a2 > 5 )
        std::operator<<<std::char_traits<char>>();
      else
        std::ostream::operator<<();
      goto LABEL_20;
    case 7:
    case 8:
    case 9:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0xD:
      std::operator<<<std::char_traits<char>>();
      if ( *(_WORD *)(a2 + 24) <= 6u )
        std::ostream::_M_insert<unsigned long>();
      else
        std::operator<<<std::char_traits<char>>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_39A600(a1, *(const char **)(*(_QWORD *)(a2 + 16) + 16LL));
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      goto LABEL_20;
    case 0xE:
    case 0xF:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
      std::operator<<<std::char_traits<char>>();
      if ( *(_WORD *)(a2 + 32) <= 6u )
        std::ostream::_M_insert<unsigned long>();
      else
        std::operator<<<std::char_traits<char>>();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      if ( *(_WORD *)(a2 + 32) )
      {
        v4 = 0;
        do
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          ++v4;
          std::ostream::_M_insert<unsigned long>();
        }
        while ( v4 < *(unsigned __int16 *)(a2 + 32) );
      }
      goto LABEL_20;
    case 0x15:
    case 0x16:
    case 0x1D:
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      goto LABEL_20;
    case 0x17:
      v5 = a2;
      v6 = "FILTER";
      return sub_B99890(a1, v6, v5);
    case 0x18:
      v5 = a2;
      v6 = "CFILTER";
      return sub_B99890(a1, v6, v5);
    case 0x19:
      v5 = a2;
      v6 = "PFILTER";
      return sub_B99890(a1, v6, v5);
    case 0x1A:
    case 0x1B:
      goto LABEL_20;
    case 0x1C:
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_39A600(a1, *(const char **)(*(_QWORD *)(a2 + 16) + 16LL));
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      v7 = std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_17E8D00(a2 + 32, v7);
      std::operator<<<std::char_traits<char>>();
      v8 = *(unsigned __int16 *)(a2 + 24);
      if ( *(_WORD *)(a2 + 24) )
      {
        v9 = *(_QWORD *)(a2 + 40);
        v10 = v9 & 7;
        if ( v10 == 2 )
        {
          std::ostream::operator<<();
        }
        else if ( v10 > 2 )
        {
          if ( v10 == 3 )
          {
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_39A600(a1, *(const char **)(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF8LL) + 16LL));
            std::__ostream_insert<char,std::char_traits<char>>();
            std::ostream::_M_insert<unsigned long>();
            std::__ostream_insert<char,std::char_traits<char>>();
            std::ostream::_M_insert<unsigned long>();
            std::__ostream_insert<char,std::char_traits<char>>();
          }
        }
        else
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          if ( (v9 & 7) != 0 )
            std::ostream::_M_insert<unsigned long>();
        }
        if ( v8 != 1 )
        {
          v12 = (__int64 *)(a2 + 48);
          do
          {
            std::__ostream_insert<char,std::char_traits<char>>();
            v13 = *v12;
            v14 = *v12 & 7;
            if ( v14 == 2 )
            {
              std::ostream::operator<<();
            }
            else if ( v14 > 2 )
            {
              if ( v14 == 3 )
              {
                std::__ostream_insert<char,std::char_traits<char>>();
                sub_39A600(a1, *(const char **)(*(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF8LL) + 16LL));
                std::__ostream_insert<char,std::char_traits<char>>();
                std::ostream::_M_insert<unsigned long>();
                std::__ostream_insert<char,std::char_traits<char>>();
                std::ostream::_M_insert<unsigned long>();
                std::__ostream_insert<char,std::char_traits<char>>();
              }
            }
            else if ( v14 )
            {
              std::__ostream_insert<char,std::char_traits<char>>();
              std::ostream::_M_insert<unsigned long>();
            }
            else
            {
              std::__ostream_insert<char,std::char_traits<char>>();
            }
            ++v12;
          }
          while ( (__int64 *)(a2 + 8LL * (unsigned int)(v8 - 2) + 56) != v12 );
        }
      }
      goto LABEL_20;
    case 0x1E:
    case 0x1F:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
      std::operator<<<std::char_traits<char>>();
      if ( *(_WORD *)(a2 + 32) <= 6u )
        std::ostream::_M_insert<unsigned long>();
      else
        std::operator<<<std::char_traits<char>>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_39A600(a1, *(const char **)(*(_QWORD *)(a2 + 16) + 16LL));
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      if ( *(_WORD *)(a2 + 32) )
      {
        v3 = 0;
        do
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          ++v3;
          std::ostream::_M_insert<unsigned long>();
        }
        while ( v3 < *(unsigned __int16 *)(a2 + 32) );
      }
      goto LABEL_20;
    case 0x25:
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_39A600(a1, *(const char **)(*(_QWORD *)(a2 + 24) + 16LL));
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      if ( *(_WORD *)(a2 + 32) )
      {
        v11 = 0;
        do
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          ++v11;
          std::ostream::_M_insert<unsigned long>();
        }
        while ( v11 < *(unsigned __int16 *)(a2 + 32) );
      }
LABEL_20:
      result = std::operator<<<std::char_traits<char>>();
      break;
    default:
      return result;
  }
  return result;
}

