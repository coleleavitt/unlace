__int64 __fastcall sub_146360(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int64 result; // rax

  if ( (unsigned int)del_idasgn() == 2 )
    sub_92200((__int64)"Cannot remove an applied signature from the list.");
  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL))(a1);
  v3 = v2;
  if ( !v2 )
    return -1;
  result = v2 - 1;
  if ( a2 < v3 )
    return a2;
  return result;
}

