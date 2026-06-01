unsigned __int64 __fastcall sub_14E6700(__int64 a1, __m128i a2)
{
  __int64 v2; // r12
  char v3; // r13
  __int64 v5; // rax
  __int64 v6; // rdx
  __m128i v7; // xmm0
  __int64 v8; // rax
  _QWORD v9[6]; // [rsp+8h] [rbp-30h] BYREF

  v9[0] = 0xE0000000DLL;
  if ( (unsigned __int8)sub_14E53D0(a1, v9, 2) && *(_DWORD *)(a1 + 88) == 14 )
  {
    LODWORD(v9[0]) = 2;
    v3 = 1;
    if ( !(unsigned __int8)sub_14E53D0(a1, v9, 1) )
      goto LABEL_4;
    v5 = sub_14E1D10(a1, 1);
    v6 = 0;
    if ( !BYTE4(v5) )
      return (v6 << 32) | v2 & 0xFFFFFF00FFFFFFFFLL;
LABEL_8:
    v7 = 0;
    v6 = 1;
    *(float *)v7.m128i_i32 = (float)(int)v5;
    v2 = (unsigned int)_mm_cvtsi128_si32(v7);
    return (v6 << 32) | v2 & 0xFFFFFF00FFFFFFFFLL;
  }
  v3 = 0;
  LODWORD(v9[0]) = 2;
  if ( (unsigned __int8)sub_14E53D0(a1, v9, 1) )
  {
    v5 = sub_14E15D0(a1);
    v6 = 0;
    if ( !BYTE4(v5) )
      return (v6 << 32) | v2 & 0xFFFFFF00FFFFFFFFLL;
    goto LABEL_8;
  }
LABEL_4:
  LODWORD(v9[0]) = 3;
  if ( !(unsigned __int8)sub_14E53D0(a1, v9, 1) )
    return 0;
  v8 = sub_14E2610(a1, v3, a2);
  v6 = 0;
  if ( BYTE4(v8) )
  {
    v2 = (unsigned int)v8;
    v6 = 1;
  }
  return (v6 << 32) | v2 & 0xFFFFFF00FFFFFFFFLL;
}
