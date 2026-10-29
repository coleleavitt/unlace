__int64 __fastcall sub_5303A0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 result; // rax
  unsigned __int64 v5; // rsi
  __int64 v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *a1;
  v6[1] = __readfsqword(0x28u);
  v3 = sub_6B9860(*(_QWORD *)(v2 + 1672), a2, 0, 0);
  result = sub_5309C0(a1, v3, 0);
  if ( !result )
  {
    netnode_check(v6, a2, 0, 0);
    v5 = -1;
    if ( (unsigned __int8)sub_7BE6E0(*a1, v6) )
      v5 = sub_3BDE50(*(_QWORD **)(*a1 + 1672LL), v6[0]);
    return sub_5309C0(a1, v5, 0);
  }
  return result;
}
