__int64 __fastcall sub_B05190(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rbp

  if ( *(_WORD *)(a2 + 4) )
    return 0;
  v3 = a1 + 712;
  if ( (unsigned __int8)sub_168DB10(a1 + 712, *(_QWORD *)(a2 + 16)) )
  {
    if ( *(_WORD *)(a2 + 4) )
      return 0;
    result = sub_168E4C0(v3);
    if ( (_BYTE)result )
      return result;
  }
  if ( !*(_WORD *)(a2 + 4) )
    return sub_168DAD0(v3, *(_QWORD *)(a2 + 16));
  return 0;
}

