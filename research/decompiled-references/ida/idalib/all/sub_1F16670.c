__int64 __fastcall sub_1F16670(__int64 *a1)
{
  __int64 v2; // rbp
  _DWORD *v3; // r12
  unsigned __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // r8
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // [rsp+8h] [rbp-40h]
  void *v12; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v13; // [rsp+18h] [rbp-30h]

  v2 = *(_QWORD *)*a1;
  sub_1EAEC10((__int64)&v12, *a1);
  v3 = (_DWORD *)sub_1F68F80(*(_QWORD *)(*a1 + 8), *(_QWORD *)(*a1 + 16));
  v4 = sub_1F16500(*(_QWORD **)(*a1 + 8), *(_QWORD *)(*a1 + 16), (__int64 *)(*a1 + 32), (_DWORD *)(*a1 + 24));
  v5 = *(unsigned int *)(*a1 + 24);
  v6 = *(_QWORD *)(*a1 + 32);
  v7 = *(_QWORD *)(v6 + 8 * v5);
  v8 = (unsigned int)(*(_DWORD *)(*a1 + 24) + 1);
  *(_DWORD *)(*a1 + 24) = v5 + 2;
  v9 = sub_A70F70(v2, v4, (__int64)&v12, v3, v7, *(_QWORD *)(v6 + 8 * v8) & 7);
  result = sub_A75DA0(v2, v9);
  if ( v13 > 0x40 )
  {
    if ( v12 )
    {
      v11 = result;
      operator delete[](v12);
      return v11;
    }
  }
  return result;
}
