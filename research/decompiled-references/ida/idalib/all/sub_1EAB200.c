__int64 __fastcall sub_1EAB200(__int64 a1)
{
  __int64 result; // rax

  result = 0;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 56LL) + 21LL) & 2) != 0 )
  {
    result = *(unsigned __int8 *)(a1 + 9265);
    if ( (_BYTE)result )
    {
      result = 0;
      if ( !*(_QWORD *)(a1 + 520) )
        return *(unsigned __int8 *)(a1 + 9266);
    }
  }
  return result;
}
