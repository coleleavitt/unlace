__int64 __fastcall sub_3342C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  int v11; // eax
  unsigned int v12; // ebp
  const char *v13; // rax
  double v14; // xmm4_8
  double v15; // xmm5_8
  void *v17[5]; // [rsp+0h] [rbp-28h] BYREF

  v17[1] = (void *)__readfsqword(0x28u);
  v11 = *(_DWORD *)(a1 + 8);
  if ( v11 == 25 || v11 == 58 )
    return sub_3AEDA0();
  v12 = 1;
  v13 = (const char *)itext(1102, a2, a3);
  sub_1ADE30(v17, v13);
  if ( LOBYTE(v17[0]) )
    v12 = (unsigned __int8)sub_32FB60(v17, 1, a4, a5, a6, a7, v14, v15, a10, a11);
  clear_tinfo_t(v17);
  return v12;
}
