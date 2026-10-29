__int64 __fastcall sub_1654AC0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 == a1 )
    return 1;
  if ( (*(_BYTE *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
    return 1;
  result = 0;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
    return 1;
  return result;
}
