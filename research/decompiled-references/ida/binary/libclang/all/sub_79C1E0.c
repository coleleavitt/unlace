__int64 __fastcall sub_79C1E0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v2 = *(_QWORD *)(v2 + 8);
  result = 0;
  if ( a1 == v2 )
  {
    LOBYTE(result) = *(_QWORD *)(a1 + 24) == a2;
    LOBYTE(v2) = *(_QWORD *)(a2 + 8) > 7u;
    return (unsigned int)v2 | (unsigned int)result;
  }
  return result;
}

