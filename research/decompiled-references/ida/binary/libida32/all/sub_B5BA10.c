__int64 __fastcall sub_B5BA10(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  __int64 result; // rax
  __int64 v8; // rax

  if ( !(unsigned __int8)sub_B5B8B0(a1, a2, a3, a4, a5, a6) )
    return 0;
  v6 = *a2;
  if ( (*(_BYTE *)(*a2 + 128LL) & 1) != 0 )
  {
    v8 = sub_B685F0(a1);
    *(_QWORD *)(v6 + 128) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v8 + 18360) + 40LL))(
                              *(_QWORD *)(v8 + 18360),
                              *(_QWORD *)(v6 + 128) >> 1);
  }
  else
  {
    result = *(_QWORD *)(v6 + 128);
    if ( !result )
      return result;
  }
  return *(_QWORD *)(v6 + 128);
}

