__int64 __fastcall sub_3B8B90(
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
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 module_data; // rbx
  __int64 v21; // r8
  __int64 v22; // r9
  __m128 v23; // xmm4
  __m128 v24; // xmm5
  char v25; // [rsp+0h] [rbp-8h]

  if ( (*(_BYTE *)(get_ph(a1, a2) + 9) & 0x10) == 0 )
  {
    module_data = get_module_data((unsigned int)dword_8CD7F0);
    if ( (*(_BYTE *)(module_data + 896) & 1) == 0 )
    {
      sub_169700(
        (int)"NOTE: The current processor does not have full support of the type system\n"
             "Some function prototypes and other things may be wrong.\n",
        (__int64)a2,
        v18,
        v19,
        v21,
        v22,
        a3,
        a4,
        a5,
        a6,
        v23,
        v24,
        a9,
        a10,
        v25);
      *(_DWORD *)(module_data + 896) |= 1u;
    }
  }
  result = getinf(57);
  if ( (result & 0xF) == 0 )
  {
    result = get_module_data((unsigned int)dword_8CD7F0);
    v17 = result;
    if ( (*(_BYTE *)(result + 896) & 2) == 0 )
    {
      result = sub_169700(
                 (int)"NOTE: The current compiler is not known, which can cause the layout of some types to be wrong.\n"
                      "Please setup the compiler options in \"Options > Compiler\" to correct that.\n",
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
                 v25);
      *(_DWORD *)(v17 + 896) |= 2u;
    }
  }
  return result;
}
