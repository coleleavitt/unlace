bool __fastcall sub_713F00(_DWORD *a1, __int16 *a2)
{
  bool result; // al

  result = 0;
  if ( a2[4] >= 0 && *(_WORD *)(*(_QWORD *)a2 + 2LL) && *(__int16 *)(*(_QWORD *)a2 + 2LL) <= *a1 >> 3 )
  {
    if ( **(_WORD **)a2 )
      return (unsigned int)sub_717960() == 0;
    else
      return (unsigned int)sub_717A80() == 0;
  }
  return result;
}

