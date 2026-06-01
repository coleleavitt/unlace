__int64 __fastcall sub_195A1E0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // rax

  v4 = sub_1944E10(a1, *(unsigned __int16 **)(a2 + 24), a3, a4);
  if ( v4 == 1 )
    return 1;
  else
    return sub_1E53EF0(*a1, v4 & 0xFFFFFFFFFFFFFFFELL);
}
