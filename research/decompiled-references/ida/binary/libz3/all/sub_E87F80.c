_BOOL8 __fastcall sub_E87F80(__int64 a1, __int64 a2)
{
  _BOOL8 result; // rax
  char v3; // dl

  result = 0;
  if ( *(char *)(*(_QWORD *)a2 + 40LL) >= 0 )
  {
    v3 = *(_BYTE *)(*(_QWORD *)a2 + 41LL);
    if ( (v3 & 1) == 0 )
    {
      result = 1;
      if ( (*(_BYTE *)(*(_QWORD *)a2 + 40LL) & 0x48) == 0 )
        return (v3 & 2) == 0;
    }
  }
  return result;
}

