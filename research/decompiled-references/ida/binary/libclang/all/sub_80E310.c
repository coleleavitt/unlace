void __fastcall sub_80E310(__int64 a1, _QWORD *a2, unsigned int a3, __int64 a4, int a5, int a6)
{
  __int64 v10; // r14
  bool v11; // zf
  __int64 v13; // rsi
  __int64 v14; // rbx
  unsigned int v15; // eax
  unsigned __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // r13
  void *v19; // r14
  char *v20; // rdi
  bool v21; // cc
  __int64 v22; // [rsp+0h] [rbp-58h]
  int v23; // [rsp+Ch] [rbp-4Ch]
  void *src; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v25; // [rsp+18h] [rbp-40h]

  v10 = a2[2320];
  v11 = byte_4AD234C == 0;
  *(_WORD *)a1 = *(_WORD *)a1 & 0xFE00 | 0x43;
  if ( !v11 )
  {
    v23 = a5;
    v22 = a4;
    sub_AC4570(67);
    a5 = v23;
    a4 = v22;
  }
  *(_WORD *)(a1 + 1) &= 0xF801u;
  *(_QWORD *)(a1 + 8) = v10;
  *(_DWORD *)(a1 + 16) = a3;
  v13 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = a2;
  *(_QWORD *)(a1 + 40) = a4;
  *(_DWORD *)(a1 + 48) = a5;
  *(_DWORD *)(a1 + 52) = a6;
  v25 = sub_6F6DE0((__int64)a2, v13);
  if ( v25 > 0x40 )
    sub_2585A50(&src, 0, 0);
  else
    src = nullptr;
  v14 = sub_AC40C0(32, a2, 8);
  v11 = byte_4AD234C == 0;
  *(_WORD *)v14 = *(_WORD *)v14 & 0xFE00 | 0x35;
  if ( !v11 )
    sub_AC4570(53);
  *(_WORD *)(v14 + 1) &= 0xF801u;
  *(_QWORD *)(v14 + 8) = v10;
  v15 = v25;
  *(_QWORD *)(v14 + 16) = 0;
  *(_QWORD *)(v14 + 24) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v15), _mm_cvtsi32_si128(a3)).m128i_u64[0];
  v16 = ((unsigned __int64)v15 + 63) >> 6;
  if ( v15 <= 0x40 )
  {
    if ( v16 == 1 )
      *(_QWORD *)(v14 + 16) = src;
  }
  else
  {
    v17 = a2[274];
    v18 = 8 * v16;
    v19 = src;
    a2[284] += v18;
    v20 = (char *)((v17 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( a2[275] >= (unsigned __int64)&v20[v18] && v17 )
      a2[274] = &v20[v18];
    else
      v20 = (char *)sub_804090((__int64)(a2 + 274), v18, 3);
    *(_QWORD *)(v14 + 16) = v20;
    memmove(v20, v19, v18);
  }
  *(_BYTE *)(v14 + 1) &= 0x3Fu;
  *(_BYTE *)(v14 + 2) &= 0xF8u;
  v21 = v25 <= 0x40;
  *(_QWORD *)(a1 + 24) = v14;
  if ( !v21 )
  {
    if ( src )
      operator delete[](src);
  }
}

