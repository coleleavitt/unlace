_BOOL8 __fastcall sub_481610(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rcx
  __int64 v4; // rsi
  _BOOL8 result; // rax

  if ( a3 >= *(_QWORD *)(a1 + 48)
    || (v3 = 416 * a3 + *(_QWORD *)(a1 + 40), !*(_DWORD *)(v3 + 176))
    || (v4 = *(_QWORD *)(a2 + 40) + 416 * a3, !*(_DWORD *)(v4 + 176)) )
  {
    if ( !under_debugger )
      interr(1936);
    BUG();
  }
  result = 1;
  if ( (*(_BYTE *)(v3 + 400) & 1) == (*(_BYTE *)(v4 + 400) & 1) )
    return !sub_481350(v3, v4, 1);
  return result;
}

