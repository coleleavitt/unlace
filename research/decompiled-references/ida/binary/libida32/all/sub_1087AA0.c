_BYTE *__fastcall sub_1087AA0(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r8
  __int64 v8; // r9

  sub_10237B0(a3, "SPIRV", 5, a2, a5, a6);
  if ( (*(_BYTE *)(a2 + 89) & 1) != 0 )
    sub_10237B0(a3, "spirv", 5, a2, v7, v8);
  return sub_10237B0(a3, "SPIRV32", 7, a2, v7, v8);
}

