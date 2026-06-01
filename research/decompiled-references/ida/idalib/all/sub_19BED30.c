__int64 __fastcall sub_19BED30(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  char v7; // r15
  unsigned int v9; // r13d
  unsigned __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 *v14; // rcx
  __int64 *v16; // [rsp+8h] [rbp-40h] BYREF

  v7 = a4;
  v9 = a6;
  v10 = sub_A7AC20(*(_QWORD *)(a1 + 248), *(_QWORD *)(*(_QWORD *)(a1 + 248) + 22744LL), a3, a4, a5, a6) | 1;
  v11 = v10;
  if ( !v7 )
    return sub_19BEAF0(a1, v10, a2, a5, v9, a7);
  v16 = nullptr;
  v12 = sub_1E5F010(a5, &v16);
  if ( (v12 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 1;
  v14 = v16;
  if ( !v16 )
  {
    v14 = sub_A81910(*(_QWORD **)(a1 + 248), v12, a2);
    v16 = v14;
  }
  return sub_19BE8F0(a1, v11, a2, v14, v9, v13);
}
