__int64 __fastcall sub_1AF2AA0(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rsi
  _QWORD *v3; // rdx
  __m128i si128; // xmm0

  result = operator new(0x6C50u);
  v2 = *a1;
  v3 = (_QWORD *)(result + 8);
  for ( *(_QWORD *)result = 1; (_QWORD *)(result + 328) != v3; v3 += 5 )
    *v3 = -4096;
  a1[1] = result;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A9340);
  *(_QWORD *)(result + 336) = result + 352;
  *(_WORD *)(result + 27472) = 0;
  *(_QWORD *)(result + 27512) = result + 27528;
  *(_QWORD *)(result + 27464) = v2;
  *(__m128i *)(result + 27488) = si128;
  *(_QWORD *)(result + 27520) = 0x200000000LL;
  *(_QWORD *)(result + 27656) = 0x200000000LL;
  *(_QWORD *)(result + 328) = 0;
  *(_QWORD *)(result + 344) = 0x400000000LL;
  *(_DWORD *)(result + 27456) = 106;
  *(_QWORD *)(result + 27480) = 0;
  *(_DWORD *)(result + 27504) = 0;
  *(_QWORD *)(result + 27544) = 0;
  *(_QWORD *)(result + 27552) = 0;
  *(_QWORD *)(result + 27560) = 0;
  *(_QWORD *)(result + 27568) = 0;
  *(_OWORD *)(result + 27576) = 0;
  *(_OWORD *)(result + 27592) = 0;
  *(_OWORD *)(result + 27608) = 0;
  *(_OWORD *)(result + 27624) = 0;
  *(_QWORD *)(result + 27640) = 0;
  *(_QWORD *)(result + 27648) = result + 27664;
  *(_DWORD *)(result + 27672) = 0;
  *(_QWORD *)(result + 27680) = result + 27696;
  *(_QWORD *)(result + 27688) = 0x800000000LL;
  return result;
}
