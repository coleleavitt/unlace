__int64 __fastcall sub_1793730(unsigned int **a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdi
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rbp
  unsigned __int64 v13; // rax

  v7 = **(_QWORD **)(a3 + 16);
  v8 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL);
  v9 = *(_QWORD *)(v8 + 8) & 7LL;
  v10 = v9 | (*(__int64 *)(v8 + 8) >> 3) & 1;
  if ( v10 )
    v8 = sub_F64F00(v7, (__int64)a2, v9, v10, a5);
  v11 = sub_F63270(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, v9, v10, a5, a6);
  if ( !v11 )
    return 1;
  v12 = (_QWORD *)*a2;
  v13 = sub_B97300((__int64)v11);
  return sub_1793110(v12, **a1, v13, (__int64)*a1);
}
