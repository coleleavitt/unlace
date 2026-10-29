__int64 __fastcall sub_CAFF10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 v7[4]; // [rsp+8h] [rbp-20h] BYREF

  v5 = sub_A68200(**(_QWORD **)(a1 + 488), *(_QWORD *)(a2 + 8), a3, a4, a5);
  v7[0] = a2 | 4;
  return sub_CAAB50((_QWORD *)a1, v5, 0, v7);
}
