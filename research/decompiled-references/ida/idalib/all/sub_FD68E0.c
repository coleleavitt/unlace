__int64 __fastcall sub_FD68E0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rax
  void *v5; // rax
  _BYTE *v6; // r12
  signed __int64 v7; // rbp
  __m128i si128; // xmm1
  __m128i v9; // xmm1
  bool v10; // zf
  __int64 result; // rax
  volatile signed __int32 *v12; // rdi
  volatile signed __int32 *v13; // [rsp+8h] [rbp-20h] BYREF

  v4 = *a3;
  *(_DWORD *)a1 = 0;
  *a3 = 0;
  *(_QWORD *)(a1 + 8) = v4;
  v5 = (void *)(a1 + 32);
  *(_QWORD *)(a1 + 16) = a1 + 32;
  v6 = *(_BYTE **)a2;
  v7 = *(_QWORD *)(a2 + 8);
  if ( v7 + *(_QWORD *)a2 && !v6 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v7 > 0xF )
  {
    if ( v7 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v5 = (void *)operator new(v7 + 1);
    *(_QWORD *)(a1 + 32) = v7;
    *(_QWORD *)(a1 + 16) = v5;
    goto LABEL_12;
  }
  if ( v7 != 1 )
  {
    if ( !v7 )
      goto LABEL_6;
LABEL_12:
    memcpy(v5, v6, v7);
    v5 = *(void **)(a1 + 16);
    goto LABEL_6;
  }
  *(_BYTE *)(a1 + 32) = *v6;
LABEL_6:
  *(_QWORD *)(a1 + 24) = v7;
  *((_BYTE *)v5 + v7) = 0;
  *(_QWORD *)(a1 + 64) = a1 + 80;
  *(_QWORD *)(a1 + 112) = a1 + 128;
  *(_QWORD *)(a1 + 160) = a1 + 176;
  *(_QWORD *)(a1 + 208) = a1 + 224;
  *(_QWORD *)(a1 + 288) = a1 + 304;
  *(_QWORD *)(a1 + 336) = a1 + 352;
  *(_QWORD *)(a1 + 384) = a1 + 400;
  *(_QWORD *)(a1 + 72) = 0x400000000LL;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 168) = 0x400000000LL;
  *(_QWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 248) = 0;
  *(_DWORD *)(a1 + 256) = 0;
  *(_QWORD *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 272) = 0;
  *(_DWORD *)(a1 + 280) = 0;
  *(_QWORD *)(a1 + 296) = 0x400000000LL;
  *(_QWORD *)(a1 + 344) = 0x400000000LL;
  *(_QWORD *)(a1 + 392) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 128) = 0;
  *(_OWORD *)(a1 + 144) = 0;
  *(_OWORD *)(a1 + 224) = 0;
  sub_2244B40(a1 + 400, 64, 32);
  *(_QWORD *)(a1 + 448) = 0x400000000LL;
  si128 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
  *(_QWORD *)(a1 + 440) = a1 + 456;
  *(_QWORD *)(a1 + 488) = a1 + 504;
  *(_QWORD *)(a1 + 496) = 0;
  *(_OWORD *)(a1 + 424) = 0;
  *(__m128i *)(a1 + 504) = si128;
  sub_2244B40(a1 + 520, 64, 32);
  v9 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
  *(_QWORD *)(a1 + 560) = a1 + 576;
  v10 = *(_QWORD *)(a1 + 8) == 0;
  *(_QWORD *)(a1 + 608) = a1 + 624;
  *(_OWORD *)(a1 + 544) = 0;
  *(_OWORD *)(a1 + 680) = 0;
  *(_QWORD *)(a1 + 696) = a1 + 712;
  result = a1 + 760;
  *(_QWORD *)(a1 + 568) = 0x400000000LL;
  *(_QWORD *)(a1 + 616) = 0;
  *(__m128i *)(a1 + 624) = v9;
  *(_QWORD *)(a1 + 640) = 0;
  *(_QWORD *)(a1 + 648) = 0;
  *(_QWORD *)(a1 + 656) = 0;
  *(_QWORD *)(a1 + 664) = 0;
  *(_DWORD *)(a1 + 672) = 0;
  *(_QWORD *)(a1 + 704) = 0x400000000LL;
  *(_QWORD *)(a1 + 744) = a1 + 760;
  *(_QWORD *)(a1 + 752) = 0;
  *(__m128i *)(a1 + 760) = v9;
  *(_OWORD *)(a1 + 776) = 0;
  *(_DWORD *)(a1 + 792) = 0;
  *(_QWORD *)(a1 + 800) = 0;
  if ( v10 )
  {
    sub_22603D0(&v13);
    result = (__int64)v13;
    v12 = *(volatile signed __int32 **)(a1 + 8);
    *(_QWORD *)(a1 + 8) = v13;
    v13 = v12;
    if ( v12 )
    {
      if ( !_InterlockedSub(v12 + 2, 1u) )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  return result;
}
