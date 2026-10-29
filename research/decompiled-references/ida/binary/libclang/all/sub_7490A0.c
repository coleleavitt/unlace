unsigned __int64 __fastcall sub_7490A0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdx
  unsigned __int64 result; // rax
  __m128i v5; // xmm0
  int v6; // ecx
  char v7; // si
  __int64 v8; // rdi
  __int64 v9; // r8
  char v10; // dl
  __m128i v11; // xmm0
  char v12; // dl
  char v13; // dl

  v2 = a2[274];
  a2[284] += 64LL;
  result = (v2 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a2[275] >= result + 64 && v2 )
    a2[274] = result + 64;
  else
    result = sub_722150((__int64)(a2 + 274), 64, 3);
  v5 = _mm_loadu_si128((const __m128i *)a1);
  v6 = *(_DWORD *)(a1 + 60);
  v7 = *(_BYTE *)(a1 + 56);
  v8 = *(_QWORD *)(a1 + 48);
  v9 = *(_QWORD *)(a1 + 36);
  *(_WORD *)(result + 32) = 287;
  v10 = *(_BYTE *)(result + 34);
  *(__m128i *)result = v5;
  v11 = _mm_loadu_si128((const __m128i *)(a1 + 16));
  *(_QWORD *)(result + 36) = v9;
  v10 &= 0xE0u;
  *(_QWORD *)(result + 48) = v8;
  *(_BYTE *)(result + 34) = v10;
  *(_BYTE *)(result + 56) = v7;
  *(_DWORD *)(result + 60) = v6;
  *(__m128i *)(result + 16) = v11;
  v12 = *(_BYTE *)(a1 + 34) & 1 | v10;
  *(_BYTE *)(result + 34) = v12;
  v13 = *(_BYTE *)(a1 + 34) & 2 | v12;
  *(_BYTE *)(result + 34) = v13;
  *(_BYTE *)(result + 34) = *(_BYTE *)(a1 + 34) & 4 | v13;
  return result;
}

