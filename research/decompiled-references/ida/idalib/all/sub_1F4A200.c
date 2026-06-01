__int64 __fastcall sub_1F4A200(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rsi
  _QWORD *v6; // rbx
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 result; // rax

  sub_1F43F90((__int64 *)a1, a2);
  *(_QWORD *)(a2 + 40) = sub_1F16D80(*(_QWORD *)(a1 + 16));
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(unsigned int *)(v3 + 24);
  v5 = *(_QWORD *)(v3 + 16);
  *(_DWORD *)(v3 + 24) = v4 + 1;
  *(_DWORD *)(a1 + 64) = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 8 * v4);
  v6 = *(_QWORD **)(v3 + 8);
  v7 = sub_1EE13A0((__int64)v6, v5, (__int64 *)(v3 + 32), (_DWORD *)(v3 + 24));
  result = sub_1EDB980(v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(a2 + 48) = result;
  return result;
}
