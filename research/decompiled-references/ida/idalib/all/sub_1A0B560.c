__int64 __fastcall sub_1A0B560(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4, __int64 a5)
{
  unsigned __int64 v6; // rsi
  __int64 *v7; // rax
  __int64 v8; // rdi
  unsigned __int64 v9; // rax
  __int64 v10; // rdx

  v6 = a3 & 0xFFFFFFFFFFFFFFFBLL;
  v7 = *(__int64 **)(a3 + 16);
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)a1 = 10;
  *(_QWORD *)(a1 + 32) = a3 & 0xFFFFFFFFFFFFFFFBLL | (4LL * a4);
  *(_QWORD *)(a1 + 8) = a5;
  v8 = *v7;
  v9 = *(_QWORD *)(*v7 & 0xFFFFFFFFFFFFFFF0LL);
  v10 = *(_QWORD *)(v9 + 8) & 7LL;
  if ( v10 | (*(__int64 *)(v9 + 8) >> 3) & 1 )
    v9 = sub_F64F00(v8, v6, v10, v10 | (*(__int64 *)(v9 + 8) >> 3) & 1, a5);
  *(_QWORD *)(a1 + 16) = v9 & 0xFFFFFFFFFFFFFFF0LL;
  return a1;
}
