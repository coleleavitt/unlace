unsigned __int64 __fastcall sub_B9FBF0(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 result; // rax
  _QWORD *v3; // r12
  __int64 v4; // r13
  char *v5; // rax
  __int64 v6; // rdx
  __int64 v7[6]; // [rsp+8h] [rbp-30h] BYREF

  v1 = *(_QWORD *)(a1 + 80);
  if ( !v1 )
    v1 = sub_B9F7C0((_QWORD *)a1);
  result = *(_QWORD *)(v1 + 200);
  if ( (result & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    v3 = (_QWORD *)sub_B685F0(a1);
    sub_EFED60(v7, a1);
    v4 = sub_A5CF60((__int64)v3, 0, 0, v7[0]);
    v5 = (char *)sub_B9D550(*(__int64 **)(a1 + 56), (__int64)v3);
    result = sub_A93F70(v3, v4, v5, v6, nullptr, 0, 0);
    *(_QWORD *)(v1 + 200) = result;
  }
  return result;
}

