__int64 __fastcall sub_1A0B50(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 24);
  if ( !v3 )
  {
    if ( !under_debugger )
      sub_3835A0(51386);
    BUG();
  }
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16 * v3 - 16) - *(_QWORD *)(a2 + 1440);
  result = 0;
  if ( v4 >= a3 )
    return (v4 + *(int *)(a1 + 60) - a3 - 1) / *(int *)(a1 + 60);
  return result;
}
