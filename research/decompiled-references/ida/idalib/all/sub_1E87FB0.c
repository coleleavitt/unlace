char __fastcall sub_1E87FB0(__m128 **a1, unsigned int **a2, __int64 a3, __int64 a4, __int64 a5, __m128 a6, __m128 a7)
{
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax

  v7 = sub_1E85C80(*(__int64 **)(a3 + 16), (__int64)a2, a3, a4, a5);
  v12 = sub_F63270(*(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, v8, v9, v10, v11);
  if ( v12 )
    return sub_1E877D0(*a1, (__int64)v12, **a2, a6, a7);
  else
    return 1;
}
