__int64 __fastcall sub_7CA3B0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  sub_15B6B30(a1 + 832, a2);
  result = *(_QWORD *)(a1 + 24);
  if ( result )
  {
    if ( *(_BYTE *)(result + 352) )
      return sub_7A4170(a1);
  }
  return result;
}

