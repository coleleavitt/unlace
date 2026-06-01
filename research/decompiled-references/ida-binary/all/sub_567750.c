_BOOL8 __fastcall sub_567750(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9)
{
  _BOOL8 result; // rax

  result = (*(_BYTE *)a9 & 8) != 0;
  if ( (*(_QWORD *)a9 & 1) == 0 )
    return (*(_BYTE *)(*(_QWORD *)a9 + 44LL) & 4) != 0;
  return result;
}
