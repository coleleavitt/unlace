char __fastcall sub_1BE62E0(__int64 **a1, __int64 a2)
{
  char result; // al
  __int64 v3; // rbx
  unsigned __int64 v4; // rbp
  __int64 *v5; // r12
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // r11
  bool v12; // dl

  result = 0;
  v3 = (__int64)a1[1];
  v4 = *(_QWORD *)(a2 + 8);
  if ( v3 != v4 )
  {
    v5 = *a1;
    v6 = (*a1)[3];
    if ( *(_QWORD *)(*(_QWORD *)&byte_8[v6 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(v3 + 48) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) )
    {
      v12 = sub_1BE5710(**a1, *(_QWORD *)(v3 + 48), (*a1)[3], nullptr, nullptr);
      result = 1;
      if ( !v12 )
        return result;
      v6 = v5[3];
    }
    if ( sub_1BC70C0(v6, *(_QWORD *)(v4 + 48)) )
      return (unsigned int)sub_1BC8F70(v10, v3, v4, v7, v8, v9) != 1;
    result = sub_1BE5710(v10, v11, v9, nullptr, nullptr);
    if ( result )
    {
      v10 = *v5;
      return (unsigned int)sub_1BC8F70(v10, v3, v4, v7, v8, v9) != 1;
    }
  }
  return result;
}
