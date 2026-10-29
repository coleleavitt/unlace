__int64 __fastcall sub_E93210(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rbp
  __int64 v4; // rax

  result = sub_971800(*a1, "destroy");
  v3 = *(_QWORD *)(a2 + 24);
  if ( v3 )
  {
    sub_971800(*a1, "(");
    v4 = sub_E90F10();
    sub_EE3EC0(v3, *a1, 0, a1[1], 0, 0, (__int64)"\n", v4);
    return sub_971800(*a1, ")");
  }
  return result;
}

