__int64 __fastcall sub_1F9E180(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  int v7; // eax

  result = a3 & 7;
  if ( (_DWORD)result == 7 )
  {
    a3 &= 0xFFFFFFFFFFFFFFF8LL;
    v7 = 3;
    if ( *(_DWORD *)a3 <= 3u )
      v7 = *(_DWORD *)a3;
    result = (unsigned int)(v7 + 8);
  }
  if ( (_DWORD)result == 6 )
    return sub_1F6F5B0(*(_QWORD **)(a1 + 8), *a2, *(_QWORD *)(a1 + 16));
  if ( (unsigned int)result > 6 )
  {
    if ( (_DWORD)result == 9 )
      return sub_1F6F570(*(_QWORD **)(a1 + 8), *(_DWORD *)a2, *(_QWORD *)(a1 + 16));
  }
  else if ( (unsigned int)result >= 3 )
  {
    return sub_1F9A760((__int64 *)a1, (__int64 *)*a2, a3, a4, a5, a6);
  }
  return result;
}
