_BYTE *__fastcall sub_10879E0(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  _BYTE *result; // rax
  __int64 v8; // r8
  __int64 v9; // r9

  result = sub_10237B0(a3, "SPIRV", 5, a2, a5, a6);
  if ( (*(_BYTE *)(a2 + 89) & 1) != 0 )
    return sub_10237B0(a3, "spirv", 5, a2, v8, v9);
  return result;
}

