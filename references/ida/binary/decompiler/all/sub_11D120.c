__int64 __fastcall sub_11D120(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 result; // rax

  v1 = *a1;
  v2 = *(_QWORD *)(*a1 + 496LL);
  if ( !v2 || *(_QWORD *)(*(_QWORD *)(v1 + 488) + 8 * v2 - 8) != a1[1] )
  {
    if ( !under_debugger )
      sub_37EA20(52515);
    BUG();
  }
  result = v2 - 1;
  *(_QWORD *)(v1 + 496) = result;
  return result;
}
