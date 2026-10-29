__int64 __fastcall sub_176AEC0(__int64 *a1, __int64 a2, __m128 a3)
{
  __int64 v3; // rax
  unsigned __int64 v5; // rbx
  void **v6; // rax

  v3 = sub_175B800(a1, *(unsigned __int16 **)(a2 + 16));
  if ( v3 == 1 )
    return 1;
  v5 = v3 & 0xFFFFFFFFFFFFFFFELL;
  v6 = sub_176A2F0(a1, *(_QWORD *)(a2 + 8), a3);
  return sub_18D0F50(*a1, v5, v6, *(unsigned int *)(a2 + 24), *(unsigned int *)(a2 + 28));
}
