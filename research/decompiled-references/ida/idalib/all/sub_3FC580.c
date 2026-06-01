_BOOL8 __fastcall sub_3FC580(__int64 a1)
{
  _BOOL8 result; // rax

  result = 0;
  if ( *(int *)(a1 + 800) <= 0 )
  {
    if ( *(_QWORD *)(a1 + 776) )
      return (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 624LL) + 34LL) & 0x20) == 0;
  }
  return result;
}
