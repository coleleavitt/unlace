__int64 __fastcall sub_6CA580(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  unsigned __int64 v4; // rbx
  __int64 v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *a1;
  v6[1] = __readfsqword(0x28u);
  v3 = *(_QWORD **)(v2 + 1672);
  netnode_check(v6, a2, 0, 0);
  v4 = sub_3BDE50(v3, v6[0]);
  if ( !sub_7BE710(*(_QWORD *)(*a1 + 1672LL) + 2448LL, *a1, v4, 345) )
    return -1;
  return v4;
}
