__int64 __fastcall sub_195C630(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rbx

  v4 = *a1;
  sub_18C79E0(*a1, 0, 4);
  v5 = sub_1944E10(a1, *(unsigned __int16 **)(a2 + 24), a3, a4);
  if ( v5 == 1 )
  {
    sub_190D5E0(v4, a3);
    return 1;
  }
  else
  {
    v6 = v5;
    sub_190D5E0(v4, a3);
    return sub_1E86580(
             *a1,
             *(_DWORD *)(a2 + 4) & 0x7FFFFFFF,
             *(unsigned int *)(a2 + 16),
             v6 & 0xFFFFFFFFFFFFFFFELL,
             *(unsigned int *)(a2 + 20));
  }
}
