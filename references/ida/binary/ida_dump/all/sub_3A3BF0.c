__int64 *__fastcall sub_3A3BF0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx

  v2 = operator new(0x38u);
  v3 = **(_QWORD **)(a2 + 24);
  v4 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)v2 = &off_4E6CD0;
  *(_DWORD *)(v2 + 8) = 1;
  *(_QWORD *)(v2 + 16) = v4;
  *(_QWORD *)(v2 + 24) = 0;
  *(_DWORD *)(v2 + 48) = -1;
  *(_OWORD *)(v2 + 32) = 0;
  v5 = qvector_reserve();
  v6 = *(_QWORD *)(v2 + 32);
  *(_QWORD *)(v2 + 24) = v5;
  *(_QWORD *)(v5 + 8 * v6) = v3;
  ++*(_QWORD *)(v2 + 32);
  *a1 = v2;
  return a1;
}
