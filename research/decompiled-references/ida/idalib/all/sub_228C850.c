__int64 __fastcall sub_228C850(__int64 a1)
{
  DIR *v2; // rdi
  _BYTE *v3; // rdx
  __m128i v4; // xmm1
  __m128i v5; // xmm2
  __m128i v6; // xmm3
  _BYTE v8[16]; // [rsp+10h] [rbp-58h] BYREF
  int v9; // [rsp+20h] [rbp-48h]
  __int128 v10; // [rsp+24h] [rbp-44h] BYREF
  __int128 v11; // [rsp+34h] [rbp-34h] BYREF
  __int128 v12; // [rsp+44h] [rbp-24h] BYREF
  int v13; // [rsp+54h] [rbp-14h]

  v2 = *(DIR **)a1;
  if ( v2 )
    closedir(v2);
  v3 = *(_BYTE **)(a1 + 8);
  v9 = 9;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  LOBYTE(v10) = 1;
  v13 = 0xFFFF;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *v3 = 0;
  v8[0] = 0;
  v4 = _mm_loadu_si128((const __m128i *)((char *)&v10 + 4));
  v5 = _mm_loadu_si128((const __m128i *)((char *)&v11 + 4));
  v6 = _mm_loadu_si128((const __m128i *)((char *)&v12 + 4));
  *(_DWORD *)(a1 + 40) = v9;
  LOBYTE(v3) = v10;
  *(__m128i *)(a1 + 48) = v4;
  *(__m128i *)(a1 + 64) = v5;
  *(_BYTE *)(a1 + 44) = (_BYTE)v3;
  *(__m128i *)(a1 + 80) = v6;
  std::_V2::system_category((std::_V2 *)v8);
  return 0;
}
