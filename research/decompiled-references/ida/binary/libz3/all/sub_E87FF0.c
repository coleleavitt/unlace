_BOOL8 __fastcall sub_E87FF0(__int64 a1, __int64 a2)
{
  _BOOL8 result; // rax

  result = 0;
  if ( *(char *)(*(_QWORD *)a2 + 40LL) >= 0 )
    return !(*(_BYTE *)(*(_QWORD *)a2 + 41LL) & 1);
  return result;
}

