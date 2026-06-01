__int64 __fastcall sub_176DE20(__int64 *a1, __int64 a2, __m128 a3)
{
  __int64 v3; // rbx
  void **v4; // rax
  __int64 v5; // r13
  void **v6; // r12
  __int64 v7; // r14

  v3 = a2;
  v4 = sub_176A140(a1, *(void ***)(a2 + 40), a3);
  if ( !v4 )
    return 1;
  v5 = *a1;
  v6 = v4;
  if ( !*(_DWORD *)(*a1 + 12632) && v4 == *(void ***)(a2 + 40) )
    return v3;
  sub_18C74E0(*a1, 0, 0, 4);
  v7 = sub_175B800(a1, *(unsigned __int16 **)(a2 + 24));
  sub_190D5E0(v5);
  if ( v7 == 1 )
    return 1;
  else
    return sub_1E885A0(
             *a1,
             (*(_BYTE *)(a2 + 2) >> 3) & 3,
             *(unsigned int *)(a2 + 32),
             v6,
             v7 & 0xFFFFFFFFFFFFFFFELL,
             *(unsigned int *)(a2 + 36));
}
