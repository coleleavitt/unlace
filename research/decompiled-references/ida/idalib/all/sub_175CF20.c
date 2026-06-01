__int64 __fastcall sub_175CF20(__int64 *a1, __int64 a2, double a3)
{
  __int64 v4; // rax
  __int64 result; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned int v8; // ebp
  __int64 v9; // rdi
  unsigned __int64 v10; // rcx

  v4 = sub_175C980(a1, *(_QWORD *)(a2 + 24), 0, a3);
  if ( v4 == 1 )
    return 1;
  v6 = v4 & 0xFFFFFFFFFFFFFFFELL;
  v7 = sub_1783A50(*a1, *(_QWORD *)(*a1 + 608), *(unsigned int *)(a2 + 16));
  v8 = *(_DWORD *)(a2 + 16);
  v9 = *a1;
  v10 = v7 & 0xFFFFFFFFFFFFFFFELL;
  if ( (*(_DWORD *)a2 & 0x80000) == 0 )
    return sub_178D010(v9, v8, v6, v10);
  result = sub_1783580(v9, v8, v6, v10);
  if ( result != 1 )
    return sub_178C3D0(*a1, v8, v6, result & 0xFFFFFFFFFFFFFFFELL, 1);
  return result;
}
