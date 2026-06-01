_BOOL8 __fastcall sub_496300(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rcx
  __int64 v4; // rsi
  _BOOL8 result; // rax

  if ( a3 >= *(_QWORD *)(a1 + 48)
    || (v3 = 424 * a3 + *(_QWORD *)(a1 + 40), !*(_DWORD *)(v3 + 176))
    || (v4 = *(_QWORD *)(a2 + 40) + 424 * a3, !*(_DWORD *)(v4 + 176)) )
  {
    if ( !under_debugger )
      interr(1936);
    BUG();
  }
  result = 1;
  if ( (*(_BYTE *)(v3 + 408) & 1) == (*(_BYTE *)(v4 + 408) & 1) )
    return !sub_496040(v3, v4, 1);
  return result;
}
