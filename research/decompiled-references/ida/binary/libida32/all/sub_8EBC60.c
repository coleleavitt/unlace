unsigned __int64 __fastcall sub_8EBC60(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        _QWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        unsigned __int64 a7,
        int a8,
        unsigned int a9,
        unsigned int a10,
        _WORD *a11)
{
  unsigned __int64 result; // rax
  __int64 v15; // [rsp+0h] [rbp-48h]

  *(_QWORD *)(a1 + 5612) = 0x100000000LL;
  *(_DWORD *)(a1 + 2056) = 0;
  *(_QWORD *)(a1 + 5604) = 0;
  *(_QWORD *)(a1 + 5620) = 0x800000004LL;
  if ( a8 == 1 )
    return sub_8E6B30(a2, a3, a4, a5, (unsigned __int64)a6, a7, a9, a10);
  if ( *a6 != -332356553 )
  {
    if ( a8 )
    {
      result = -32;
      if ( a8 == 2 )
        return result;
      goto LABEL_5;
    }
    return sub_8E6B30(a2, a3, a4, a5, (unsigned __int64)a6, a7, a9, a10);
  }
LABEL_5:
  v15 = 0;
  if ( !a5[10] )
    v15 = (unsigned int)a6[1];
  result = sub_8EB950(a1, a11, (__int64)a6, a7);
  if ( result <= 0xFFFFFFFFFFFFFF88LL )
  {
    result = sub_8E6B30(a2, nullptr, a4, a5, (unsigned __int64)a6 + result, a7 - result, a9, a10);
    if ( result <= 0xFFFFFFFFFFFFFF88LL )
      return v15;
  }
  return result;
}

