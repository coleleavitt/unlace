__int64 __fastcall sub_1FC94E0(__int64 a1, __int64 a2)
{
  int v3; // ecx
  _QWORD *v4; // rdi
  __int64 v5; // rdx
  char v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 result; // rax

  sub_1FC2690(a1, a2);
  v3 = *(_DWORD *)(a1 + 236);
  v4 = *(_QWORD **)(a1 + 16);
  v5 = *(_QWORD *)(a1 + 24);
  v6 = HIWORD(*(_DWORD *)a2) & 8;
  *(_DWORD *)(a1 + 232) |= (v6 != 0) << v3;
  *(_DWORD *)(a1 + 236) = v3 + 1;
  sub_1F6F570(v4, *(_DWORD *)(a2 + 32), v5);
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 36), *(_QWORD *)(a1 + 24));
  sub_1F9A760((__int64 *)(a1 + 8), *(__int64 **)(a2 + 24), v7, v8, v9, v10);
  result = sub_183F100(a1 + 32, *(_QWORD *)(a2 + 16));
  *(_DWORD *)(a1 + 224) = 210;
  if ( v6 )
    return sub_9B9C90(
             *(_QWORD *)(a1 + 24),
             *(unsigned int *)(a2 + 44) | ((unsigned __int64)*(unsigned int *)(a2 + 40) << 32));
  return result;
}
