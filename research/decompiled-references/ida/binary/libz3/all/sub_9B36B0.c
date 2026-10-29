bool __fastcall sub_9B36B0(__int64 a1, unsigned int a2)
{
  __int64 v2; // r12
  int *v3; // r13
  __int64 v4; // r12
  bool result; // al
  int *v6; // rax

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 680) + 8LL * a2);
  if ( !v2
    || (v3 = sub_9AA900(a1, a2), !sub_3ED680((__int64)qword_1C7F2C0, (__int64)v3, v2 + 16))
    || !(result = sub_3ED680((__int64)qword_1C7F2C0, (__int64)(v3 + 8), v2 + 48)) )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 688) + 8LL * a2);
    result = 0;
    if ( v4 )
    {
      v6 = sub_9AA900(a1, a2);
      return sub_9B0850((__int64)v6, v4 + 16);
    }
  }
  return result;
}

