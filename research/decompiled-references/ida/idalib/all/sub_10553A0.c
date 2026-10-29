__int64 __fastcall sub_10553A0(__int64 a1, const __m128i *a2, __int64 a3)
{
  unsigned int v3; // ecx
  __int64 result; // rax

  sub_1054F20(a1, a2, a3);
  v3 = a2[2].m128i_u32[0];
  result = (__int64)&off_2C15300;
  *(_DWORD *)(a1 + 156) = 6;
  *(_QWORD *)a1 = &off_2C15300;
  if ( v3 <= 0x26 )
  {
    result = 1LL << v3;
    if ( ((1LL << v3) & 0x1EF0000) != 0 )
    {
      *(_QWORD *)(a1 + 328) = "_mcount";
      return (__int64)"_mcount";
    }
    else if ( (result & 0x6000000000LL) != 0 )
    {
      *(_BYTE *)(a1 + 278) = 1;
    }
  }
  return result;
}
