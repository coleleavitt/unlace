__int64 __fastcall sub_3B8B40(
        __int64 a1,
        const char *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __m128 v15; // xmm4
  __m128 v16; // xmm5
  __int64 v17; // rbx
  char v18; // [rsp+0h] [rbp-8h]

  result = get_ph(a1, a2);
  if ( (*(_BYTE *)(result + 9) & 0x10) == 0 )
  {
    result = get_module_data((unsigned int)dword_8CD7F0);
    v17 = result;
    if ( (*(_BYTE *)(result + 896) & 1) == 0 )
    {
      result = sub_169700(
                 (int)"NOTE: The current processor does not have full support of the type system\n"
                      "Some function prototypes and other things may be wrong.\n",
                 (__int64)a2,
                 v11,
                 v12,
                 v13,
                 v14,
                 a3,
                 a4,
                 a5,
                 a6,
                 v15,
                 v16,
                 a9,
                 a10,
                 v18);
      *(_DWORD *)(v17 + 896) |= 1u;
    }
  }
  return result;
}
