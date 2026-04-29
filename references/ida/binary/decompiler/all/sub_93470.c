__int64 __fastcall sub_93470(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax

  result = sub_63E80(a1, a2);
  if ( !(_BYTE)result )
    return sub_314F20(a1 + 2, a2 + 2);
  return result;
}
