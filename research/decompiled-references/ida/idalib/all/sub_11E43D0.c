__int64 __fastcall sub_11E43D0(_DWORD *a1, __int64 a2)
{
  if ( a1[12] == 38 )
    return 2;
  if ( (*(unsigned int (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 472LL))(a1) == 2
    || !(unsigned __int8)sub_21B7850(a2, 663, 1121, 1) )
  {
    return 0;
  }
  if ( ((a1[12] - 3) & 0xFFFFFFFD) != 0 )
    return 2;
  return 1;
}
