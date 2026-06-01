_BOOL8 __fastcall sub_3E9640(__int64 a1)
{
  _BOOL8 result; // rax

  result = 0;
  if ( *(int *)(a1 + 792) <= 0 )
  {
    if ( *(_QWORD *)(a1 + 768) )
      return (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 536LL) + 34LL) & 0x20) == 0;
  }
  return result;
}

