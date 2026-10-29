unsigned __int64 __fastcall sub_DFA810(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v2; // rdx

  result = *(_QWORD *)(a1 + 32);
  if ( result )
  {
    v2 = *(_QWORD *)(result + 16);
    result = v2 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v2 & 4) != 0 )
      return 0;
  }
  return result;
}

