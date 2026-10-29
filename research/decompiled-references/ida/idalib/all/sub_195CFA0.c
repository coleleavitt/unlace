__int64 __fastcall sub_195CFA0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  void **v4; // rax
  void **v5; // r12
  __int64 v6; // rax

  v4 = sub_1946B40(a1, *(void ***)(a2 + 24), a3, a4);
  if ( v4 && (v5 = v4, v6 = sub_1944E10(a1, *(unsigned __int16 **)(a2 + 16), a3, a4), v6 != 1) )
    return sub_19DD340(
             *(_QWORD *)(*a1 + 736),
             *(unsigned int *)(a2 + 32),
             *(_BYTE *)(a2 + 40) & 3,
             *(unsigned int *)(a2 + 36),
             v5,
             v6 & 0xFFFFFFFFFFFFFFFELL);
  else
    return 1;
}
