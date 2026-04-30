__int64 __fastcall sub_3AEDA0(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  int v9; // eax
  unsigned int v10; // ebp
  _QWORD *v12; // r12
  __int64 v13; // r13
  unsigned __int64 v14; // r14
  double v15; // xmm4_8
  double v16; // xmm5_8
  unsigned int v17; // eax
  double v18; // xmm4_8
  double v19; // xmm5_8
  const char *v20[7]; // [rsp+0h] [rbp-38h] BYREF

  v9 = *(_DWORD *)(a1 + 8);
  v20[1] = (const char *)__readfsqword(0x28u);
  if ( v9 == 58 || (v10 = 0, v9 == 25) )
  {
    v12 = *(_QWORD **)(a1 + 208);
    v10 = 0;
    if ( (get_tinfo_property(v12[1], 2) & 0x3F) == 0xD )
    {
      v13 = v12[4];
      v14 = v12[29];
      sub_1ADE30(v20, "Choose a structure (not the current!)");
      v10 = 1;
      if ( LOBYTE(v20[0]) )
      {
        v17 = sub_3ABF10(
                a1,
                (__int64)"Directly convert to structure?",
                v13,
                v20,
                v14,
                0,
                *(double *)a2.m128_u64,
                a3,
                a4,
                a5,
                v15,
                v16,
                a8,
                a9);
        v10 = (unsigned __int8)sub_3AC490(
                                 (__int64 *)a1,
                                 v17,
                                 (__int64)"Failed to create a structure instance",
                                 a2,
                                 a3,
                                 a4,
                                 a5,
                                 v18,
                                 v19,
                                 a8,
                                 a9);
      }
      clear_tinfo_t(v20);
    }
  }
  return v10;
}
