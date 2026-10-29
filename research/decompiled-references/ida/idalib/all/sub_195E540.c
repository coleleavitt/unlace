__int64 __fastcall sub_195E540(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  void **v4; // rax
  __int64 v5; // r13
  void **v6; // r12
  __int64 v7; // r14

  v4 = sub_1946B40(a1, *(void ***)(a2 + 40), a3, a4);
  if ( v4 )
  {
    v5 = *a1;
    v6 = v4;
    sub_18C79E0(*a1, 0, 4);
    v7 = sub_1944E10(a1, *(unsigned __int16 **)(a2 + 24), a3, a4);
    if ( v7 != 1 )
    {
      sub_190D5E0(v5, a3);
      return sub_1E885A0(
               *a1,
               (*(_BYTE *)(a2 + 2) >> 3) & 3,
               *(unsigned int *)(a2 + 32),
               v6,
               v7 & 0xFFFFFFFFFFFFFFFELL,
               *(unsigned int *)(a2 + 36));
    }
    sub_190D5E0(v5, a3);
  }
  return 1;
}
