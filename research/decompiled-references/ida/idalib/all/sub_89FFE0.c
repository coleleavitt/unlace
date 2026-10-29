__int64 __fastcall sub_89FFE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 *v8; // rbx
  unsigned int v9; // eax
  __m128i *v10; // rax
  __int64 v11; // rax
  char *v13; // rsi
  __m128i si128; // xmm0
  __int64 v15; // rax
  int v16; // [rsp+8h] [rbp-40h] BYREF
  unsigned int v17; // [rsp+Ch] [rbp-3Ch] BYREF
  _BYTE v18[8]; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  v5 = sub_85E600(a2, -1, a3, &v16, v18, 0);
  if ( !v5 )
  {
    if ( v16 && a4 )
      sub_89FC40((char **)a4, v16);
    return 0;
  }
  v6 = v5;
  sub_8929F0(v5, 1);
  v7 = qalloc(48);
  *(_QWORD *)(v7 + 40) = 0;
  v8 = (__int64 *)v7;
  *(_QWORD *)v7 = v6;
  *(_OWORD *)(v7 + 8) = 0;
  *(_OWORD *)(v7 + 24) = 0;
  sub_89A7C0(v6, 4u, (int *)&v17);
  v9 = v17;
  v8[3] = v17;
  v10 = sub_89A4A0(v9 + 1, nullptr);
  v8[1] = (__int64)v10;
  if ( v10 )
  {
    v11 = v8[3];
    *(_QWORD *)(a1 + 24) = v8;
    *(_QWORD *)(a1 + 8) = v11;
    return 1;
  }
  sub_85D3B0(*v8);
  qfree(v8);
  if ( !a4 )
    return 0;
  v13 = *(char **)a4;
  if ( *(_QWORD *)(a4 + 16) <= 0x25u )
  {
    v15 = qvector_reserve(a4, v13, 38, 1);
    *(_QWORD *)a4 = v15;
    v13 = (char *)v15;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8920);
  *(_QWORD *)(a4 + 8) = 38;
  *(__m128i *)v13 = si128;
  *((__m128i *)v13 + 1) = _mm_load_si128((const __m128i *)&xmmword_23A8930);
  *(_QWORD *)(v13 + 29) = 0x726F727265206E6FLL;
  *(_BYTE *)(*(_QWORD *)a4 + 37LL) = 0;
  return 0;
}
