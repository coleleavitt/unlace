__int64 __fastcall sub_1C8CDA0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 result; // rax
  _QWORD *v5; // r12
  int v6; // r14d
  int v7; // r13d
  int v8; // ebx
  __int64 v9; // rax

  if ( (*(_DWORD *)a2 & 0x10000) == 0 )
    return a2;
  v5 = sub_1C8AA80(a1, *(_QWORD *)(a2 + 32), a3, a4);
  result = 1;
  if ( v5 )
  {
    v6 = *(_DWORD *)(a2 + 24);
    v7 = *(_DWORD *)(a2 + 20);
    v8 = *(_DWORD *)(a2 + 16);
    v9 = sub_168B6C0(*(_QWORD *)(*a1 + 800));
    return sub_BF8060(v9, v8, v7, v6, (__int64)v5);
  }
  return result;
}
