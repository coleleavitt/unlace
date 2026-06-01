__int64 *__fastcall sub_6BCF00(__int64 *a1, _QWORD *a2, __int64 a3, char a4)
{
  _QWORD v7[7]; // [rsp+0h] [rbp-38h] BYREF

  v7[1] = __readfsqword(0x28u);
  *a1 = 0;
  if ( !(unsigned __int8)sub_6BC100((__int64)a2, a1, "wchar_t") )
  {
    if ( !(unsigned __int8)sub_6BC100((__int64)a2, a1, "WCHAR")
      && !(unsigned __int8)sub_6BC100((__int64)a2, a1, "__darwin_wchar_t") )
    {
      if ( a3 == (unsigned __int8)getinf(59) )
      {
        v7[0] = a4 == 0 ? 39LL : 7LL;
      }
      else
      {
        switch ( a3 )
        {
          case 1LL:
            v7[0] = a4 == 0 ? 34LL : 2LL;
            break;
          case 2LL:
            v7[0] = a4 == 0 ? 35LL : 3LL;
            break;
          case 4LL:
            v7[0] = a4 == 0 ? 36LL : 4LL;
            break;
          case 8LL:
            v7[0] = a4 == 0 ? 37LL : 5LL;
            break;
          case 16LL:
            v7[0] = a4 == 0 ? 38LL : 6LL;
            break;
          default:
            v7[0] = 0;
            break;
        }
      }
      copy_tinfo_t(a1);
      clear_tinfo_t(v7);
    }
    sub_6BB7E0(a2, (__int64)a1, "wchar_t", nullptr, 1, 0);
  }
  return a1;
}

