__int64 __fastcall sub_20AFF40(__int64 a1)
{
  unsigned __int8 v1; // al
  const __m128i *v2; // rax
  unsigned int v3; // ebx
  __int64 v5; // [rsp+8h] [rbp-60h]
  int v6; // [rsp+20h] [rbp-48h] BYREF
  int v7[3]; // [rsp+24h] [rbp-44h] BYREF
  void *v8; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v9; // [rsp+38h] [rbp-30h]
  void *v10; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v11; // [rsp+48h] [rbp-20h]

  sub_206CE80(a1);
  v1 = *(_BYTE *)(a1 - 16);
  if ( (v1 & 2) != 0 )
    v2 = *(const __m128i **)(a1 - 32);
  else
    v2 = (const __m128i *)(a1 - 8LL * ((v1 >> 2) & 0xF) - 16);
  v5 = _mm_loadu_si128(v2 + 1).m128i_u64[0];
  sub_206CE70(a1);
  v6 = *(_DWORD *)(a1 + 20);
  *(_QWORD *)v7 = *(_QWORD *)(a1 + 32);
  v9 = *(_DWORD *)(a1 + 48);
  if ( v9 > 0x40 )
    sub_2205510(&v8);
  else
    v8 = *(void **)(a1 + 40);
  v11 = *(_DWORD *)(a1 + 64);
  if ( v11 > 0x40 )
    sub_2205510(&v10);
  else
    v10 = *(void **)(a1 + 56);
  v3 = sub_20A87B0(v5, &v6, v7, &v7[1], (__int64)&v8, (__int64)&v10);
  if ( v11 > 0x40 && v10 )
    operator delete[](v10);
  if ( v9 > 0x40 && v8 )
    operator delete[](v8);
  return v3;
}
