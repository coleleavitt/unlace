__int64 __fastcall operator<<(__int64 a1, CoinParam *a2)
{
  __int64 result; // rax
  int v3; // ecx
  __int64 v4; // [rsp+8h] [rbp-20h]
  _QWORD v5[2]; // [rsp+18h] [rbp-10h] BYREF

  switch ( *((_DWORD *)a2 + 2) )
  {
    case 2:
      CoinParam::intVal(a2);
      result = std::ostream::operator<<();
      break;
    case 3:
      CoinParam::dblVal(a2);
      result = std::ostream::_M_insert<double>();
      break;
    case 4:
      CoinParam::strVal((CoinParam *)v5);
      result = std::__ostream_insert<char,std::char_traits<char>>();
      goto LABEL_3;
    case 5:
      CoinParam::kwdVal((CoinParam *)v5);
      result = std::__ostream_insert<char,std::char_traits<char>>();
LABEL_3:
      if ( (_UNKNOWN *)(v5[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
      {
        if ( &_pthread_key_create )
        {
          v3 = _InterlockedExchangeAdd((volatile signed __int32 *)(v5[0] - 8LL), 0xFFFFFFFF);
        }
        else
        {
          v3 = *(_DWORD *)(v5[0] - 8LL);
          *(_DWORD *)(v5[0] - 8LL) = v3 - 1;
        }
        if ( v3 <= 0 )
        {
          v4 = result;
          std::string::_Rep::_M_destroy();
          result = v4;
        }
      }
      break;
    default:
      std::__ostream_insert<char,std::char_traits<char>>();
      result = a1;
      break;
  }
  return result;
}

