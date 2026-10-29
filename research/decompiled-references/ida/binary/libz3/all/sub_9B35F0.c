bool __fastcall sub_9B35F0(__int64 a1, unsigned int a2)
{
  __int64 v2; // r12
  int *v3; // r14
  __int64 v4; // r12
  int *v5; // rbx
  bool result; // al

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 744) + 8LL * a2);
  if ( !v2
    || (v3 = sub_9AD4F0(a1, a2), !sub_3ED680((__int64)qword_1C7F2C0, (__int64)v3, v2 + 16))
    || !(result = sub_9B0850((__int64)(v3 + 8), v2 + 48)) )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 752) + 8LL * a2);
    result = v4
          && (v5 = sub_9AD4F0(a1, a2), sub_3ED680((__int64)qword_1C7F2C0, (__int64)v5, v4 + 16))
          && sub_9B0850((__int64)(v5 + 8), v4 + 48);
  }
  return result;
}

