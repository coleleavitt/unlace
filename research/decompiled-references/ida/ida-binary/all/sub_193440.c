__int64 __fastcall sub_193440(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rbp
  __int64 result; // rax
  int v4; // eax

  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 == 58 || v1 == 25 )
    return sub_3AF1B0(a1, 3);
  v2 = sub_3ED590(*(_QWORD *)(a1 + 88), 3);
  result = 1;
  if ( v2 != -1 )
  {
    v4 = sub_192880(v2);
    return (unsigned __int8)sub_192AA0(a1, v2, v4, 1u);
  }
  return result;
}
