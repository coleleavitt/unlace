unsigned __int64 __fastcall sub_FFB50(__int64 a1, void *a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __m128i v9; // xmm0
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  __int64 v13; // rax
  __int64 v14; // rsi
  __m128i v16; // [rsp+0h] [rbp-58h] BYREF
  __int64 (**v17)(); // [rsp+10h] [rbp-48h]
  int v18; // [rsp+18h] [rbp-40h]
  __int64 v19; // [rsp+20h] [rbp-38h]
  unsigned __int64 v20; // [rsp+28h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  v16 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1, (__m128i)(unsigned __int64)a1);
  sub_15BFC0(a3, a4);
  sub_F93A0(a1, a2);
  v9 = _mm_load_si128(&v16);
  *(_QWORD *)(a1 + 1208) = 0;
  *(_QWORD *)a1 = &off_2376C0;
  *(_QWORD *)(a1 + 72) = &off_2379A8;
  *(_QWORD *)(a1 + 104) = off_2379C0;
  *(_QWORD *)(a1 + 160) = off_2379F0;
  *(_QWORD *)(a1 + 1280) = a1 + 1264;
  *(_QWORD *)(a1 + 1288) = a1 + 1264;
  *(_QWORD *)(a1 + 1232) = -1;
  *(_DWORD *)(a1 + 1240) = -1;
  *(_DWORD *)(a1 + 1264) = 0;
  *(_QWORD *)(a1 + 1272) = 0;
  *(_QWORD *)(a1 + 1296) = 0;
  *(_DWORD *)(a1 + 1312) = 0;
  *(_QWORD *)(a1 + 1320) = 0;
  *(_QWORD *)(a1 + 1328) = a1 + 1312;
  *(_QWORD *)(a1 + 1336) = a1 + 1312;
  *(_QWORD *)(a1 + 1344) = 0;
  *(_OWORD *)(a1 + 1216) = 0;
  *(_BYTE *)(a1 + 1200) = a6;
  *(_WORD *)(a1 + 1248) = 0;
  *(_BYTE *)(a1 + 1250) = 0;
  *(_DWORD *)(a1 + 1352) = -1;
  *(__m128i *)(a4 + 8) = v9;
  if ( a6 )
  {
    v10 = sub_FF6B0();
    v11 = 1;
    v12 = 4;
  }
  else
  {
    v10 = 1;
    v11 = 16;
    v12 = 1;
  }
  *(_DWORD *)(a4 + 24) = v10;
  *(_DWORD *)(a4 + 28) = v11;
  *(_DWORD *)(a4 + 36) = v12;
  *(_DWORD *)(a4 + 40) = 0;
  *(_BYTE *)(a4 + 32) = 0;
  *(_BYTE *)(a4 + 44) = 1;
  v18 = 0;
  v17 = off_230E18;
  v19 = -1;
  hexplace_t__name();
  idaplace_t__name();
  if ( !lookup_loc_converter2() )
  {
    hexplace_t__name();
    idaplace_t__name();
    register_loc_converter2();
  }
  sub_F50B0(a1);
  v13 = xmmword_252928;
  v17 = (__int64 (**)())a1;
  v14 = qword_252920;
  if ( *((_QWORD *)&xmmword_252928 + 1) < (unsigned __int64)(xmmword_252928 + 1) )
  {
    qword_252920 = qvector_reserve();
    v14 = qword_252920;
    v13 = xmmword_252928;
  }
  *(_QWORD *)(v14 + 8 * v13) = a1;
  *(_QWORD *)&xmmword_252928 = xmmword_252928 + 1;
  if ( *(_BYTE *)(a1 + 1200) )
  {
    *(_BYTE *)(a1 + 1248) = 0;
    *(_BYTE *)(a1 + 772) = 1;
    *(_DWORD *)(a1 + 1352) = dword_245170;
  }
  else
  {
    *(_BYTE *)(a1 + 1248) = 0;
    *(_BYTE *)(a1 + 772) = 1;
    sub_FFA40(a1);
  }
  sub_162290(a1, a3);
  return v20 - __readfsqword(0x28u);
}

