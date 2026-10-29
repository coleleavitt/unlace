void __fastcall sub_9CEAE0(__int64 a1, __int64 a2, std::ostream *a3)
{
  if ( *(_BYTE *)(a1 + 2) )
  {
    sub_9CB080(a1, *(_QWORD *)(a2 + 16), a3, 2u, 1);
  }
  else
  {
    std::operator<<<std::char_traits<char>>(a3, "cast[");
    switch ( (unsigned __int8)*(_WORD *)(a2 + 2) )
    {
      case 0u:
        std::operator<<<std::char_traits<char>>(a3, "none");
        break;
      case 1u:
        std::operator<<<std::char_traits<char>>(a3, "extendNum");
        break;
      case 2u:
        std::operator<<<std::char_traits<char>>(a3, "truncNum");
        break;
      case 3u:
        std::operator<<<std::char_traits<char>>(a3, "toFloat");
        break;
      case 4u:
        std::operator<<<std::char_traits<char>>(a3, "toInt");
        break;
      case 5u:
        std::operator<<<std::char_traits<char>>(a3, "objToPtr");
        break;
      default:
        break;
    }
    std::operator<<<std::char_traits<char>>(a3, "](");
    sub_9CB080(a1, *(_QWORD *)(a2 + 16), a3, 2u, 1);
    std::operator<<<std::char_traits<char>>(a3, ")");
  }
}
