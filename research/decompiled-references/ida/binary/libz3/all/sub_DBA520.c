__int64 __fastcall sub_DBA520(_QWORD *a1, __int64 a2, unsigned int *a3)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // r12
  __int64 v7; // kr00_8
  __int64 result; // rax
  _BYTE v10[16]; // [rsp-10h] [rbp-48h] BYREF
  _BYTE v11[32]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v12; // [rsp+20h] [rbp-18h]
  __int64 v13; // [rsp+28h] [rbp-10h]
  __int64 v14; // [rsp+30h] [rbp-8h]

  v7 = v3;
  v14 = v6;
  v13 = v5;
  v12 = v4;
  result = *a3;
  switch ( *a3 )
  {
    case 0u:
    case 0xBu:
      goto LABEL_2;
    case 1u:
    case 2u:
    case 3u:
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(v10, *((_QWORD *)a3 + 3), *a1, 0, 0, 0);
      sub_160E8B0(a2, v10);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_18572D0(v11);
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::__ostream_insert<char,std::char_traits<char>>();
      goto LABEL_4;
    case 4u:
      std::__ostream_insert<char,std::char_traits<char>>();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::__ostream_insert<char,std::char_traits<char>>();
      goto LABEL_5;
    case 5u:
      std::__ostream_insert<char,std::char_traits<char>>();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      goto LABEL_2;
    case 6u:
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(v10, *((_QWORD *)a3 + 3), *a1, 0, 0, 0);
      sub_160E8B0(a2, v10);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_18572D0(v11);
      std::__ostream_insert<char,std::char_traits<char>>();
      goto LABEL_5;
    case 7u:
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(v10, *((_QWORD *)a3 + 3), *a1, 0, 0, 0);
      sub_160E8B0(a2, v10);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_18572D0(v11);
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::__ostream_insert<char,std::char_traits<char>>();
      goto LABEL_5;
    case 8u:
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(v10, *((_QWORD *)a3 + 3), *a1, 0, 0, 0);
      sub_160E8B0(a2, v10);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_18572D0(v11);
      std::__ostream_insert<char,std::char_traits<char>>();
LABEL_4:
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::__ostream_insert<char,std::char_traits<char>>();
LABEL_5:
      std::ostream::_M_insert<unsigned long>();
LABEL_2:
      result = std::__ostream_insert<char,std::char_traits<char>>();
      break;
    case 9u:
    case 0xAu:
      return result;
    default:
      result = v7;
      break;
  }
  return result;
}

