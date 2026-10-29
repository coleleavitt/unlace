unsigned __int64 __fastcall sub_1F4D840(__int64 *a1, __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // rax
  _QWORD *v4; // r12
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-30h]

  *(_QWORD *)(a2 + 144) = sub_1EE7800(a1[2]);
  sub_1F4D3E0((__int64)&v12, a1, a2);
  result = v13;
  if ( a1[5] == v13 )
  {
    v3 = a1[2];
    v4 = *(_QWORD **)(v3 + 8);
    v5 = sub_1EE13A0((__int64)v4, *(_QWORD *)(v3 + 16), (__int64 *)(v3 + 32), (_DWORD *)(v3 + 24));
    *(_QWORD *)(a2 + 152) = *(_QWORD *)(a2 + 152) & 7LL | sub_1EDB980(v4, v5, v6, v7, v8, v9);
    v10 = a1[2];
    v11 = *(unsigned int *)(v10 + 24);
    *(_DWORD *)(v10 + 24) = v11 + 1;
    result = *(_QWORD *)(a2 + 152) & 0xFFFFFFFFFFFFFFFBLL | (4LL * (*(_QWORD *)(*(_QWORD *)(v10 + 32) + 8 * v11) != 0));
    *(_QWORD *)(a2 + 152) = result;
  }
  return result;
}
