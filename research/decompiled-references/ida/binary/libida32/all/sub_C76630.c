__int16 *__fastcall sub_C76630(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const __m128i *a6,
        char a7,
        __int64 a8,
        void *src,
        __int64 a10,
        unsigned __int8 a11,
        unsigned __int8 a12)
{
  __int64 v15; // r10
  int v16; // ecx
  int v17; // edx
  unsigned int v18; // esi
  __int64 v19; // rdx
  __int16 *v20; // rax
  char *v21; // rcx
  char v23; // bp
  __int16 *v24; // [rsp+8h] [rbp-50h]
  int v25; // [rsp+8h] [rbp-50h]
  const __m128i *v26; // [rsp+10h] [rbp-48h]
  __int64 v27; // [rsp+18h] [rbp-40h]

  v15 = a8;
  if ( a8 )
  {
    v16 = 16;
    v17 = 32 * *(_DWORD *)(a8 + 8);
  }
  else
  {
    v17 = 0;
    v16 = 16 * ((_DWORD)a5 != 0);
  }
  v18 = v17 + v16 + 8 * ((a10 - (__int64)src) >> 3) + 64;
  v19 = a1[294];
  a1[304] += v18;
  v20 = (__int16 *)((v19 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  v21 = (char *)v20 + v18;
  if ( a1[295] >= (unsigned __int64)v21 && v19 )
  {
    a1[294] = v21;
  }
  else
  {
    v27 = a3;
    v26 = a6;
    v25 = a5;
    v20 = (__int16 *)sub_962430((__int64)(a1 + 294), v18, v18, 3, a5, (__int64)a6);
    a3 = v27;
    v15 = a8;
    a6 = v26;
    LODWORD(a5) = v25;
  }
  v24 = v20;
  sub_C70460(v20, 0x18u, (__int64)a1, a3, a4, (unsigned int)a5, a6, v15, src, a10, a11, a12, 0);
  v23 = *((_BYTE *)v24 + 2);
  *((_QWORD *)v24 + 7) = a2;
  *((_BYTE *)v24 + 2) = (16 * (a7 & 1)) | v23 & 0xEF;
  return v24;
}

