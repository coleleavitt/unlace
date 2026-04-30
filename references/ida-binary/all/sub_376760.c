_BOOL8 __fastcall sub_376760(__int64 a1, __int16 a2)
{
  _BOOL8 result; // rax

  result = 0;
  if ( (unsigned int)HIBYTE(a2) - 4 <= 1 )
    return (*(_BYTE *)(*(_QWORD *)(a1 + 16) + 955LL) & 4) == 0;
  return result;
}
