__int64 __fastcall sub_1B90F70(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  _QWORD *v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // r9

  v4 = sub_1B90E50(a1, *(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFF8LL, a3, a4);
  if ( v4 && (v8 = (__int64)v4, v9 = sub_1B7CAD0(a1, *(unsigned __int16 **)(a2 + 16), a3, a4, v5, v6, v7), v9 != 1) )
    return sub_191BDF0(
             (__int64 *)*a1,
             *(unsigned int *)(a2 + 32),
             (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFELL),
             v8,
             *(unsigned int *)(a2 + 36),
             v10,
             a3,
             a4);
  else
    return 1;
}
