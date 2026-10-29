__int64 __fastcall sub_1FCC6C0(__int64 a1, __int64 a2)
{
  int v3; // ecx
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 result; // rax
  __int64 v10[7]; // [rsp+0h] [rbp-38h] BYREF

  sub_1FC2690(a1, a2);
  sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 16), *(_QWORD *)(a1 + 24));
  v3 = *(_DWORD *)(a1 + 236);
  v4 = *(_QWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 232) |= (unsigned int)*(char *)(a2 + 33) >> 31 << v3;
  *(_DWORD *)(a1 + 236) = v3 + 1;
  sub_9B9C90(v4, *(unsigned __int16 *)(a2 + 34));
  sub_C95B30((__int64)v10, a2);
  sub_1F992F0((__int64 *)(a1 + 8), a2, v5, v6, v7, v8, v10[0], (void *)v10[1], v10[2]);
  result = sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 36), *(_QWORD *)(a1 + 24));
  *(_DWORD *)(a1 + 224) = 287;
  return result;
}
