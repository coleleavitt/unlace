__int64 __fastcall sub_684CE0(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        char a7)
{
  __int64 result; // rax

  result = a2;
  if ( a2 != -1 && (a6 || a2 >= a3 && a2 < a3 + a5) )
  {
    result = a4 - a3 + a2;
    if ( a7 )
      return *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) & result;
  }
  return result;
}
