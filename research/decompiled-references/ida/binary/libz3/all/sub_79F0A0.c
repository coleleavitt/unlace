__int64 __fastcall sub_79F0A0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 24) = a2;
  if ( a2 )
  {
    if ( *(_BYTE *)(a2 + 352) )
      return sub_7A4170(a1);
  }
  return result;
}

