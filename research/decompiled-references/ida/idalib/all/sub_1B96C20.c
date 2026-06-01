__int64 __fastcall sub_1B96C20(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  _QWORD *v4; // rax
  __int64 v5; // r13
  _QWORD *v6; // r12
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r14

  v4 = sub_1B90E50(a1, *(_QWORD *)(a2 + 40), a3, a4);
  if ( v4 )
  {
    v5 = *a1;
    v6 = v4;
    sub_18C74E0(*a1, 0, 0, 4);
    v10 = sub_1B7CAD0(a1, *(unsigned __int16 **)(a2 + 24), a3, a4, v7, v8, v9);
    if ( v10 != 1 )
    {
      sub_190D5E0(v5, a3);
      return sub_1E885A0(
               *a1,
               (*(_BYTE *)(a2 + 2) >> 3) & 3,
               *(unsigned int *)(a2 + 32),
               v6,
               v10 & 0xFFFFFFFFFFFFFFFELL,
               *(unsigned int *)(a2 + 36));
    }
    sub_190D5E0(v5, a3);
  }
  return 1;
}
