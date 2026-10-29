bool __fastcall sub_9B2990(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rbp
  int *v3; // rbx
  bool result; // al

  v2 = *(_QWORD *)(a1[94] + 8LL * a2);
  result = v2
        && (a2 != -1 && ((*(_BYTE *)(a1[90] + 4LL * a2 + 3) >> 4) & 3) == 2
          ? (v3 = sub_9ACE50((__int64)a1, a2))
          : (v3 = (int *)(a1[91] + 96LL * a2)),
            sub_3ED680((__int64)qword_1C7F2C0, (__int64)v3, v2 + 16))
        && sub_9B0850((__int64)(v3 + 8), v2 + 48);
  return result;
}

