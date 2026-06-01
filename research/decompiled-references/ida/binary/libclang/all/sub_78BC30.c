__int64 __fastcall sub_78BC30(_QWORD *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rbx
  __int64 result; // rax
  __int64 v4; // rax

  if ( !(unsigned __int8)sub_78B990(a1, a2) )
    return 0;
  v2 = *a2;
  if ( (*(_BYTE *)(*a2 + 128) & 1) != 0 )
  {
    v4 = sub_798D40(a1);
    *(_QWORD *)(v2 + 128) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v4 + 18200) + 40LL))(
                              *(_QWORD *)(v4 + 18200),
                              *(_QWORD *)(v2 + 128) >> 1);
  }
  else
  {
    result = *(_QWORD *)(v2 + 128);
    if ( !result )
      return result;
  }
  return *(_QWORD *)(v2 + 128);
}

