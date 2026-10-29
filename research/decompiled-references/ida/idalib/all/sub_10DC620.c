void __fastcall sub_10DC620(
        __int64 a1,
        _BYTE *a2,
        __int64 a3,
        _BYTE *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8)
{
  _QWORD *v9; // r13
  __int64 v13; // rdx
  __int64 v14; // rax
  _QWORD *v15; // rdi
  size_t v16; // rax
  char v17; // al
  __m128i si128; // xmm0
  bool v19; // zf
  _BYTE *v20; // rax
  __int64 v21; // rdx
  _BYTE *v22; // rax
  __int64 v23; // rdx
  _BYTE *v24; // rsi
  __int64 v25; // rdx
  volatile signed __int32 *v26; // rdi
  _QWORD *v28; // [rsp+10h] [rbp-198h] BYREF
  __int16 v29; // [rsp+30h] [rbp-178h]
  _BYTE v30[32]; // [rsp+40h] [rbp-168h] BYREF
  __int16 v31; // [rsp+60h] [rbp-148h]
  _BYTE v32[32]; // [rsp+70h] [rbp-138h] BYREF
  __int16 v33; // [rsp+90h] [rbp-118h]
  void *v34[2]; // [rsp+A0h] [rbp-108h] BYREF
  _WORD v35[16]; // [rsp+B0h] [rbp-F8h] BYREF
  void *ptr; // [rsp+D0h] [rbp-D8h] BYREF
  __m128i v37; // [rsp+D8h] [rbp-D0h] BYREF
  _WORD v38[96]; // [rsp+E8h] [rbp-C0h] BYREF

  v9 = (_QWORD *)(a1 + 488);
  *(_OWORD *)(a1 + 16) = 0;
  *(_QWORD *)a1 = a6;
  *(_DWORD *)(a1 + 32) = 0;
  v13 = *a8;
  *a8 = 0;
  *(_QWORD *)(a1 + 72) = a1 + 88;
  v14 = a1 + 120;
  v15 = (_QWORD *)(a1 + 136);
  *(v15 - 4) = v14;
  *(v15 - 16) = v13;
  *((_BYTE *)v15 - 100) = 0;
  *((_DWORD *)v15 - 24) = 0;
  *((_DWORD *)v15 - 22) = 3;
  *(v15 - 10) = 0;
  *(v15 - 9) = 0;
  *(v15 - 7) = 0;
  *((_BYTE *)v15 - 48) = 0;
  *(v15 - 3) = 0;
  *((_BYTE *)v15 - 16) = 0;
  *(_QWORD *)(a1 + 136) = a1 + 152;
  sub_10D8DB0(v15, a2, (__int64)&a2[a3]);
  *(_QWORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 168) = a1 + 184;
  *(_QWORD *)(a1 + 200) = a1 + 216;
  *(_QWORD *)(a1 + 248) = a1 + 264;
  *(_QWORD *)(a1 + 280) = a1 + 296;
  *(_QWORD *)(a1 + 312) = a1 + 328;
  *(_QWORD *)(a1 + 344) = a1 + 360;
  *(_BYTE *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 208) = 0;
  *(_BYTE *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  *(_BYTE *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  *(_BYTE *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 288) = 0;
  *(_BYTE *)(a1 + 296) = 0;
  *(_QWORD *)(a1 + 320) = 0;
  *(_BYTE *)(a1 + 328) = 0;
  *(_QWORD *)(a1 + 352) = 0x400000000LL;
  *(_QWORD *)(a1 + 488) = a1 + 504;
  v16 = j__strlen(&byte_22F0C30);
  sub_10D8DB0(v9, &byte_22F0C30, (__int64)(&byte_22F0C30 + v16));
  *(_QWORD *)(a1 + 528) = 0;
  *(_QWORD *)(a1 + 520) = a1 + 536;
  *(_QWORD *)(a1 + 552) = a1 + 568;
  *(_BYTE *)(a1 + 536) = 0;
  sub_10D8CD0((_QWORD *)(a1 + 552), *(_BYTE **)a7, *(_QWORD *)a7 + *(_QWORD *)(a7 + 8));
  *(_BYTE *)(a1 + 872) &= 0xFCu;
  *(_QWORD *)(a1 + 584) = a1 + 600;
  *(_QWORD *)(a1 + 616) = a1 + 632;
  *(_QWORD *)(a1 + 648) = a1 + 664;
  *(_QWORD *)(a1 + 680) = a1 + 696;
  *(_QWORD *)(a1 + 712) = a1 + 728;
  *(_QWORD *)(a1 + 744) = a1 + 760;
  *(_QWORD *)(a1 + 776) = a1 + 792;
  *(_QWORD *)(a1 + 808) = a1 + 824;
  *(_QWORD *)(a1 + 840) = a1 + 856;
  *(_QWORD *)(a1 + 888) = a1 + 904;
  *(_QWORD *)(a1 + 592) = 0;
  *(_BYTE *)(a1 + 600) = 0;
  *(_QWORD *)(a1 + 624) = 0;
  *(_BYTE *)(a1 + 632) = 0;
  *(_QWORD *)(a1 + 656) = 0;
  *(_BYTE *)(a1 + 664) = 0;
  *(_QWORD *)(a1 + 688) = 0;
  *(_BYTE *)(a1 + 696) = 0;
  *(_QWORD *)(a1 + 720) = 0;
  *(_BYTE *)(a1 + 728) = 0;
  *(_QWORD *)(a1 + 752) = 0;
  *(_BYTE *)(a1 + 760) = 0;
  *(_QWORD *)(a1 + 784) = 0;
  *(_BYTE *)(a1 + 792) = 0;
  *(_QWORD *)(a1 + 816) = 0;
  *(_BYTE *)(a1 + 824) = 0;
  *(_QWORD *)(a1 + 848) = 0;
  *(_BYTE *)(a1 + 856) = 0;
  *(_QWORD *)(a1 + 876) = 0;
  *(_QWORD *)(a1 + 896) = 0;
  *(_BYTE *)(a1 + 904) = 0;
  *(_BYTE *)(a1 + 920) &= 0xF0u;
  *(_QWORD *)(a1 + 944) = a1 + 960;
  *(_QWORD *)(a1 + 928) = 0;
  sub_10D8DB0((_QWORD *)(a1 + 944), a4, (__int64)&a4[a5]);
  *(_QWORD *)(a1 + 984) = 0;
  *(_QWORD *)(a1 + 976) = a1 + 992;
  *(_QWORD *)(a1 + 1048) = a1 + 1064;
  *(_QWORD *)(a1 + 1096) = a1 + 1112;
  *(_QWORD *)(a1 + 1128) = a1 + 1032;
  v17 = *(_BYTE *)(a1 + 1168);
  *(_OWORD *)(a1 + 1008) = 0;
  *(_OWORD *)(a1 + 1024) = 0;
  si128 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
  v19 = *(_QWORD *)(a1 + 8) == 0;
  *(_BYTE *)(a1 + 992) = 0;
  *(_BYTE *)(a1 + 1168) = v17 & 0xF8 | 3;
  *(_QWORD *)(a1 + 1040) = 0;
  *(_QWORD *)(a1 + 1056) = 0x400000000LL;
  *(_QWORD *)(a1 + 1104) = 0;
  *(__m128i *)(a1 + 1112) = si128;
  *(_QWORD *)(a1 + 1136) = 0;
  *(_QWORD *)(a1 + 1144) = 0;
  *(_QWORD *)(a1 + 1152) = 0;
  *(_QWORD *)(a1 + 1160) = 0;
  *(_QWORD *)(a1 + 1176) = 0;
  *(_QWORD *)(a1 + 1184) = 0;
  *(_QWORD *)(a1 + 1192) = 0x1000000000LL;
  *(_QWORD *)(a1 + 1200) = 0;
  *(_QWORD *)(a1 + 1208) = 0;
  *(_DWORD *)(a1 + 1216) = 0;
  if ( v19 )
  {
    sub_22603D0(&ptr);
    v26 = *(volatile signed __int32 **)(a1 + 8);
    *(_QWORD *)(a1 + 8) = ptr;
    ptr = (void *)v26;
    if ( v26 )
    {
      if ( !_InterlockedSub(v26 + 2, 1u) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
    }
  }
  v20 = (_BYTE *)sub_228AA60(a2, a3, 0);
  ptr = &v37.m128i_u64[1];
  sub_10D8DB0(&ptr, v20, (__int64)&v20[v21]);
  sub_A0AAD0(a1 + 72, &ptr);
  if ( ptr != &v37.m128i_u64[1] )
    operator delete(ptr);
  v22 = (_BYTE *)sub_228A4B0(a2, a3, 0);
  ptr = &v37.m128i_u64[1];
  sub_10D8DB0(&ptr, v22, (__int64)&v22[v23]);
  sub_A0AAD0(a1 + 104, &ptr);
  if ( ptr != &v37.m128i_u64[1] )
    operator delete(ptr);
  if ( *(_QWORD *)(a1 + 496) )
  {
    ptr = v9;
    v38[4] = 260;
    if ( (unsigned __int8)sub_228B190(&ptr, 0) )
    {
      v24 = *(_BYTE **)(a1 + 104);
      v25 = *(_QWORD *)(a1 + 112);
      ptr = v38;
      v37 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      sub_A1FE50(&ptr, v24, &v24[v25]);
      v33 = 257;
      v31 = 257;
      v29 = 260;
      v35[8] = 257;
      v28 = v9;
      sub_228A3B0(&ptr, &v28, v30, v32, v34);
      v34[0] = v35;
      sub_10D8DB0(v34, ptr, (__int64)ptr + v37.m128i_i64[0]);
      sub_A0AAD0((__int64)v9, v34);
      if ( v34[0] != v35 )
        operator delete(v34[0]);
      if ( ptr != v38 )
        free(ptr);
    }
  }
  sub_10DAE60(&ptr, (__int64)a2, a3);
  sub_A0AAD0(a1 + 248, &ptr);
  if ( ptr != &v37.m128i_u64[1] )
    operator delete(ptr);
}
