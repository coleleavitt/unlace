const char *__fastcall sub_1031D40(__int64 a1, const __m128i *a2, __int64 a3)
{
  unsigned int v3; // ecx
  const char *result; // rax

  sub_10316E0(a1, a2, a3);
  v3 = a2[2].m128i_u32[0];
  *(_DWORD *)(a1 + 140) = 9;
  *(_QWORD *)a1 = &off_2BEF9E0;
  *(_QWORD *)(a1 + 152) = 0x500000005LL;
  *(_DWORD *)(a1 + 168) = 9;
  if ( v3 > 0x26 )
    goto LABEL_6;
  result = (const char *)(1LL << v3);
  if ( ((1LL << v3) & 0x41AC0000) != 0 )
  {
    *(_QWORD *)(a1 + 328) = "_mcount";
    return "_mcount";
  }
  if ( ((unsigned int)result & 0x10004000) == 0 )
  {
    if ( ((unsigned __int64)result & 0x6000000000LL) != 0 )
      *(_BYTE *)(a1 + 278) = 1;
LABEL_6:
    result = "__mcount";
    *(_QWORD *)(a1 + 328) = "__mcount";
  }
  return result;
}

