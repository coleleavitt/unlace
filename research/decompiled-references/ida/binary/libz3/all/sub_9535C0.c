__int64 __fastcall sub_9535C0(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v4; // rax
  __int64 result; // rax
  _QWORD *v6; // r12
  __int64 (__fastcall *v7)(); // rax
  __int64 v8; // rdi

  v4 = *(_QWORD *)(*(_QWORD *)a1 + 1184LL);
  if ( !v4 || !*(_DWORD *)(v4 - 4) )
    return 0;
  v6 = *(_QWORD **)(*(_QWORD *)a1 + 1192LL);
  v7 = *(__int64 (__fastcall **)())(*v6 + 144LL);
  if ( v7 != sub_956430 )
    return ((__int64 (__fastcall *)(_QWORD, __int64, __int64))v7)(*(_QWORD *)(*(_QWORD *)a1 + 1192LL), a2, a3);
  result = 1;
  if ( *(_BYTE *)(v6[2] + 215LL) )
  {
    if ( (unsigned int)sub_180B130(a1) > 9 )
    {
      if ( (unsigned __int8)sub_186A530(a4) )
      {
        sub_186A4C0(a4);
        v8 = sub_180B150(a1, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_186A500(v8, "(smt.mbqi)\n");
      }
      else
      {
        sub_180B150(a1, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
    if ( !(unsigned __int8)sub_AE8CE0(v6[7]) )
      return (unsigned int)(unsigned __int8)sub_AE0350(v6[7], a2) + 1;
    return 0;
  }
  return result;
}

