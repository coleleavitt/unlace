unsigned __int16 *__fastcall sub_8C4A20(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        const __m128i *a4,
        const void *a5,
        unsigned int a6,
        __int64 a7,
        unsigned __int8 a8,
        unsigned __int8 a9,
        unsigned __int8 a10,
        unsigned __int8 a11)
{
  __int64 v15; // rsi
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int16 *v18; // rbx
  __int64 v19; // rsi
  __int64 v20; // rdx
  int v21; // ecx
  int v22; // edi
  unsigned int v23; // eax
  void *v24; // rdi
  unsigned __int8 v25; // al
  unsigned int v28; // [rsp+1Ch] [rbp-4Ch]
  __m128i v29[4]; // [rsp+20h] [rbp-48h] BYREF

  v15 = 8 * a6 + 48LL;
  a1[284] += v15;
  v16 = a1[274];
  v17 = v15 + ((v16 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a1[275] >= v17 && v16 )
  {
    a1[274] = v17;
    v18 = (unsigned __int16 *)((v16 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  }
  else
  {
    v18 = (unsigned __int16 *)sub_8C1090((__int64)(a1 + 274), v15, 3);
  }
  v29[0] = _mm_unpacklo_epi64(_mm_loadl_epi64(a4), (__m128i)(unsigned __int64)&a4->m128i_u64[1]);
  v19 = 115;
  v20 = (unsigned int)sub_B1E2D0(v29);
  *v18 = *v18 & 0xFE00 | 0x73;
  if ( byte_4AD234C )
  {
    v28 = v20;
    sub_AC4570(115);
    v19 = *v18;
    v20 = v28;
    LOWORD(v19) = v19 & 0x1FF;
  }
  v22 = *(_DWORD *)v18;
  *((_QWORD *)v18 + 1) = a3;
  *((_QWORD *)v18 + 2) = a2;
  *((_QWORD *)v18 + 3) = a7;
  *((_DWORD *)v18 + 8) = a6;
  *((_DWORD *)v18 + 1) = v20;
  v23 = v22 & 0xF00001FF | ((a11 << 23) | (a10 << 22) | (a8 << 20) | (a9 << 21)) & 0xFFFFE00;
  v24 = v18 + 24;
  *(_DWORD *)v18 = v23;
  if ( (_WORD)v19 != 115 )
    v24 = v18 + 20;
  if ( a6 )
  {
    v19 = (__int64)a5;
    memmove(v24, a5, 8LL * a6);
  }
  *((_QWORD *)v18 + 5) = a4;
  v25 = sub_76CF40((__int64)v18, v19, v20, v21);
  *((_BYTE *)v18 + 1) = (v25 << 6) | *((_BYTE *)v18 + 1) & 0x3F;
  *((_BYTE *)v18 + 2) = v18[1] & 0xF8 | (v25 >> 2) & 7;
  return v18;
}

