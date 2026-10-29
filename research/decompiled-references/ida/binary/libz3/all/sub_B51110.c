__int64 __fastcall sub_B51110(__int64 a1, __int64 a2)
{
  __m128 v2; // xmm0
  __int64 result; // rax

  *(_BYTE *)(a1 + 16) = 1;
  v2 = _mm_loadh_ps((const double *)(a2 + 104));
  *(_QWORD *)(a1 + 40) = 0;
  *(__m128 *)a1 = v2;
  *(_OWORD *)(a1 + 24) = 0;
  result = sub_186B270(0x100u);
  *(_QWORD *)result = 0;
  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 32) = 0;
  *(_QWORD *)(result + 40) = 0;
  *(_QWORD *)(result + 48) = 0;
  *(_QWORD *)(result + 64) = 0;
  *(_QWORD *)(result + 72) = 0;
  *(_QWORD *)(result + 80) = 0;
  *(_QWORD *)(result + 96) = 0;
  *(_QWORD *)(result + 104) = 0;
  *(_QWORD *)(result + 112) = 0;
  *(_QWORD *)(result + 128) = 0;
  *(_QWORD *)(result + 136) = 0;
  *(_QWORD *)(result + 144) = 0;
  *(_QWORD *)(result + 160) = 0;
  *(_QWORD *)(result + 168) = 0;
  *(_QWORD *)(result + 176) = 0;
  *(_QWORD *)(result + 192) = 0;
  *(_QWORD *)(result + 200) = 0;
  *(_QWORD *)(result + 208) = 0;
  *(_QWORD *)(result + 224) = 0;
  *(_QWORD *)(result + 232) = 0;
  *(_QWORD *)(result + 240) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 56) = 0;
  *(_DWORD *)(result + 88) = 0;
  *(_DWORD *)(result + 120) = 0;
  *(_DWORD *)(result + 152) = 0;
  *(_DWORD *)(result + 184) = 0;
  *(_DWORD *)(result + 216) = 0;
  *(_DWORD *)(result + 248) = 0;
  *(_QWORD *)(a1 + 48) = result;
  *(_QWORD *)(a1 + 56) = 8;
  *(_DWORD *)(a1 + 64) = 0;
  return result;
}

