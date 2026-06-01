_WORD *__fastcall sub_63A260(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        _WORD *a9)
{
  _WORD *result; // rax

  result = a9;
  if ( (unsigned int)(a7 - 40) <= 2 || !a9 )
    return nullptr;
  if ( ((*a9 + 509) & 0x1FFu) >= 0x80 )
    return nullptr;
  return result;
}

