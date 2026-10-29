bool __fastcall sub_A7C6D0(__int64 a1, unsigned int a2, unsigned int a3)
{
  _QWORD *v3; // r13
  __int64 v4; // rbx

  v3 = *(_QWORD **)(a1 + 56);
  v4 = (unsigned int)sub_FF9E10(v3[63], a3);
  return *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v3 + 32LL)
                               + 8LL * (unsigned int)sub_FF9E10(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 504LL), a2))
                   + 8LL) == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v3 + 32LL) + 8 * v4) + 8LL);
}

