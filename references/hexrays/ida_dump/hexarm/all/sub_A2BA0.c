_QWORD *__fastcall sub_A2BA0(__int64 a1, _QWORD *a2, __int64 a3)
{
  int v3; // ecx
  __int64 v4; // rcx
  _QWORD *result; // rax
  __int64 v6; // rdx
  __int64 v7; // rsi

  v3 = *(_DWORD *)(a1 + 76);
  if ( v3 == 6 )
  {
    if ( !under_debugger )
      sub_3835A0(51810);
LABEL_20:
    BUG();
  }
  if ( v3 == 1 )
  {
    if ( !under_debugger )
      sub_3835A0(52576);
    goto LABEL_20;
  }
  a2[2] = a3;
  v4 = a2[3];
  result = a2;
  if ( a3 )
  {
    if ( v4 == -1 )
      a2[3] = *(_QWORD *)(a3 + 24);
    a2[1] = *(_QWORD *)(a3 + 8);
    *(_QWORD *)(a3 + 8) = a2;
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 48);
    if ( v4 == -1 && v7 )
    {
      result[3] = *(_QWORD *)(v7 + 24);
      v7 = *(_QWORD *)(a1 + 48);
    }
    result[1] = v7;
    *(_QWORD *)(a1 + 48) = result;
  }
  if ( *(_QWORD *)(a1 + 56) == a3 )
  {
    *(_QWORD *)(a1 + 56) = result;
  }
  else
  {
    v6 = result[1];
    if ( v6 )
      *(_QWORD *)(v6 + 16) = result;
  }
  return result;
}
