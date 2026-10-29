unsigned __int64 __fastcall sub_188E80(__int64 a1, __int64 *a2, __int64 a3)
{
  const char *v3; // rcx
  __m128i si128; // xmm1
  __m128i v5; // xmm1
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rsi
  unsigned __int64 v10; // [rsp+8h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a3 + 24) )
    v3 = *(const char **)(a3 + 16);
  else
    v3 = s1;
  TDialog::TDialog(a1, a2 + 1, a3, v3);
  sub_177480((_QWORD *)(a1 + 168), a1);
  si128 = _mm_load_si128((const __m128i *)&xmmword_1D3D80);
  *(_BYTE *)(a1 + 340) = 0;
  *(__m128i *)(a1 + 468) = si128;
  v5 = _mm_load_si128((const __m128i *)&xmmword_1D3D90);
  *(_QWORD *)(a1 + 192) = &off_235BB0;
  v6 = *a2;
  *(_DWORD *)(a1 + 336) = 0;
  *(_QWORD *)a1 = v6;
  *(_QWORD *)(a1 + 192) = &off_23CE48;
  *(_QWORD *)(a1 + 248) = off_23CAB8;
  *(_QWORD *)(a1 + 264) = a1 + 224;
  *(_QWORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 224) = 0;
  *(_QWORD *)(a1 + 256) = a1;
  *(_QWORD *)(a1 + 272) = a1 + 200;
  *(_QWORD *)(a1 + 280) = 0;
  *(_BYTE *)(a1 + 288) = 0;
  *(_QWORD *)(a1 + 296) = 0;
  *(_DWORD *)(a1 + 376) = 0;
  *(_QWORD *)(a1 + 384) = 0;
  *(_QWORD *)(a1 + 408) = 0;
  *(_QWORD *)(a1 + 500) = 0;
  *(_DWORD *)(a1 + 508) = 0;
  *(_QWORD *)(a1 + 512) = 0;
  *(_OWORD *)(a1 + 208) = 0;
  *(_OWORD *)(a1 + 232) = 0;
  *(_OWORD *)(a1 + 304) = 0;
  *(_OWORD *)(a1 + 320) = 0;
  *(_OWORD *)(a1 + 392) = 0;
  *(_OWORD *)(a1 + 416) = 0;
  *(__m128i *)(a1 + 484) = v5;
  *(_OWORD *)(a1 + 520) = 0;
  v7 = xmmword_2566B8;
  v8 = qword_2566B0;
  if ( *((_QWORD *)&xmmword_2566B8 + 1) < (unsigned __int64)(xmmword_2566B8 + 1) )
  {
    qword_2566B0 = qvector_reserve();
    v8 = qword_2566B0;
    v7 = xmmword_2566B8;
  }
  *(_QWORD *)(v8 + 8 * v7) = a1;
  *(_QWORD *)&xmmword_2566B8 = xmmword_2566B8 + 1;
  return v10 - __readfsqword(0x28u);
}

