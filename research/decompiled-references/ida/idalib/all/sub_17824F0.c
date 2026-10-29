unsigned __int64 __fastcall sub_17824F0(unsigned __int64 **a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rax

  v2 = sub_183D350(*a1);
  v3 = sub_E91C40((_QWORD *)(*a1)[31], 0, v2);
  v4 = sub_E91A00((_QWORD *)(*a1)[31], (__int64)v3, *(_QWORD *)(*a1[1] & 0xFFFFFFFFFFFFFFF0LL));
  return sub_A76250((*a1)[31], 6, (__int64)v4, *a1[2], 0);
}
