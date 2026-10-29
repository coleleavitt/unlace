bool __fastcall sub_9B1E20(__int64 a1, unsigned int a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  bool result; // al
  __int64 v5; // r12
  __int64 v6; // rax

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 8LL * a2);
  if ( !v2 || (v3 = sub_999800(a1, a2), !(result = sub_3ED680((__int64)qword_1C7F2C0, v3, v2 + 16))) )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 624) + 8LL * a2);
    result = 0;
    if ( v5 )
    {
      v6 = sub_999800(a1, a2);
      return sub_3ED680((__int64)qword_1C7F2C0, v6, v5 + 16);
    }
  }
  return result;
}

