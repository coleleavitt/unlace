__int64 __fastcall sub_3EAC80(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( *(_BYTE *)a3 == 1 )
  {
    result = 0;
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 56) + 656LL) == *(_DWORD *)(a3 + 8) )
      return (unsigned int)((*(_BYTE *)(a1 + 192) & 2) == 0) + 1;
  }
  else
  {
    result = 0;
    if ( *(_BYTE *)a3 == 5 && (*(_BYTE *)(a1 + 192) & 1) != 0 )
      return 2 * (unsigned int)(*(_QWORD *)(a2 + 136) - *(_QWORD *)(a1 + 184) == *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL));
  }
  return result;
}
