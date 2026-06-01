__int64 __fastcall sub_1CF1D40(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // rbx
  __int64 v5; // r13
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  unsigned __int64 v10; // rbp

  v4 = a2;
  v5 = *a1;
  sub_18C74E0(*a1, 0, 0, 4);
  v9 = sub_1CE88F0(a1, *(unsigned __int16 **)(a2 + 24), a3, a4, v6, v7, v8);
  if ( v9 == 1 )
  {
    v4 = 1;
  }
  else
  {
    v10 = v9 & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_DWORD *)(*a1 + 12632) || *(_QWORD *)(a2 + 24) != v10 )
    {
      sub_190D5E0(v5, a3);
      return sub_1E86580(
               *a1,
               *(_DWORD *)(a2 + 4) & 0x7FFFFFFF,
               *(unsigned int *)(a2 + 16),
               v10,
               *(unsigned int *)(a2 + 20));
    }
  }
  sub_190D5E0(v5, a3);
  return v4;
}
