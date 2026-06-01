__int64 __fastcall sub_C1BEF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 result; // rax
  __int64 v7; // rdi

  v5 = *(_QWORD *)(*(_QWORD *)a1 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v5 + 16) - 43 > 1 )
  {
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 > 1 )
      return *(_QWORD *)a1;
    v5 = sub_F63050(v5, a2, a3, a4);
    if ( !v5 )
      return *(_QWORD *)a1;
  }
  while ( 1 )
  {
    result = *(_QWORD *)(v5 + 32);
    if ( (*(_BYTE *)(v5 + 18) & 0x10) == 0 )
      break;
    while ( 1 )
    {
      v5 = *(_QWORD *)(result & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(v5 + 16) - 43 <= 1 )
        break;
      v7 = sub_F63050(v5, a2, a3, a4);
      result = *(_QWORD *)(v7 + 32);
      if ( (*(_BYTE *)(v7 + 18) & 0x10) == 0 )
        return result;
    }
  }
  return result;
}
