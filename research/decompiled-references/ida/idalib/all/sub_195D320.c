__int64 __fastcall sub_195D320(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v5; // rsi
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rbx
  void **v10; // rax

  v5 = *(_QWORD *)(a2 + 16);
  if ( (v5 & 4) != 0 )
  {
    v10 = sub_1946B40(a1, (void **)(v5 & 0xFFFFFFFFFFFFFFF8LL), a3, a4);
    if ( v10 )
      return sub_19BE8F0(*a1, *(_QWORD *)(a2 + 8), *(unsigned int *)(a2 + 32), v10, *(unsigned int *)(a2 + 36));
    else
      return 1;
  }
  else
  {
    v6 = *a1;
    sub_18C79E0(*a1, 0, 4);
    v7 = sub_1944E10(a1, (unsigned __int16 *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL), a3, a4);
    if ( v7 == 1 )
      v8 = 1;
    else
      v8 = sub_19BEAF0(
             *a1,
             *(_QWORD *)(a2 + 8),
             *(unsigned int *)(a2 + 32),
             v7 & 0xFFFFFFFFFFFFFFFELL,
             *(unsigned int *)(a2 + 36));
    sub_190D5E0(v6, a3);
    return v8;
  }
}
