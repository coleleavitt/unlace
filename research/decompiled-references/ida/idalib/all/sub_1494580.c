__int64 __fastcall sub_1494580(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        __m128i a7,
        __m128 a8,
        unsigned int a9,
        int a10)
{
  unsigned int v13; // eax
  __int64 result; // rax

  v13 = sub_F963B0(a2, a6, a10 & 0xF);
  if ( v13 == 131 )
  {
    sub_14831E0(a1, a2, a3, a4, a5, a6, a9, a10);
    result = *(unsigned int *)(a4 + 16);
    if ( !(_DWORD)result )
      return result;
    return *(unsigned __int16 *)(**(_QWORD **)(a4 + 8) + 56LL);
  }
  if ( v13 <= 0x83 )
  {
    if ( v13 == 48 )
    {
      sub_14837B0(a1, a2, a3, (__int64 *)a4, a5, a6, a9, a10);
      result = *(unsigned int *)(a4 + 16);
      if ( !(_DWORD)result )
        return result;
    }
    else
    {
      if ( v13 != 80 )
        return sub_148B990(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
      sub_14A6B90(a1, a4, a2, a3, a6, a9, (__int64)a5, a10);
      result = *(unsigned int *)(a4 + 16);
      if ( !(_DWORD)result )
        return result;
    }
    return *(unsigned __int16 *)(**(_QWORD **)(a4 + 8) + 56LL);
  }
  if ( v13 == 368 )
  {
    sub_1481580(a1, a2, a3, a4, a5, a6, a9, a10);
    result = *(unsigned int *)(a4 + 16);
    if ( !(_DWORD)result )
      return result;
    return *(unsigned __int16 *)(**(_QWORD **)(a4 + 8) + 56LL);
  }
  if ( v13 == 386 )
  {
    sub_148F1B0(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    result = *(unsigned int *)(a4 + 16);
    if ( !(_DWORD)result )
      return result;
    return *(unsigned __int16 *)(**(_QWORD **)(a4 + 8) + 56LL);
  }
  if ( v13 != 255 )
    return sub_148B990(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  sub_1481190(a1, a2, a3, a4, a5, a6, a9, a10);
  result = *(unsigned int *)(a4 + 16);
  if ( (_DWORD)result )
    return *(unsigned __int16 *)(**(_QWORD **)(a4 + 8) + 56LL);
  return result;
}
