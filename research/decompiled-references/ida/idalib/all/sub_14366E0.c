__int64 __fastcall sub_14366E0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _BYTE *v3; // rdi

  result = *(_QWORD *)(a1 + 1144);
  if ( result )
    return sub_1466A10(*(_QWORD *)(a1 + 1144));
  v3 = *(_BYTE **)(a1 + 1112);
  if ( v3 )
    return sub_13D2F20(v3, a2);
  return result;
}
