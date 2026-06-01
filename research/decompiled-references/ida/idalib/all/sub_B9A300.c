__int64 __fastcall sub_B9A300(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(_QWORD *)(a2 + 72);
  v4 = v2 & 0xFFFFFFFFFFFFFFF8LL;
  if ( a2 == (v2 & 0xFFFFFFFFFFFFFFF8LL) )
  {
    if ( (*(_BYTE *)(v3 + 28) & 0x7Fu) - 53 > 1 )
      v3 = 0;
    result = v3 | v2 & 7;
    *(_QWORD *)(a1 + 48) = result;
    *(_QWORD *)(a2 + 72) = a1;
  }
  else
  {
    while ( 1 )
    {
      result = *(_QWORD *)(v4 + 72);
      if ( result == a2 )
        break;
      v4 = *(_QWORD *)(v4 + 72);
    }
    *(_QWORD *)(v4 + 72) = v3;
    *(_QWORD *)(a2 + 72) = a1;
  }
  return result;
}
