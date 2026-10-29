_QWORD *__fastcall sub_12EE6B0(
        _QWORD *a1,
        __int64 *a2,
        unsigned __int8 a3,
        _BYTE *a4,
        size_t a5,
        unsigned __int8 a6,
        __int64 a7,
        __int64 a8,
        char a9,
        char a10)
{
  char v11; // r11
  __int64 v12; // rbp
  void *v13; // r13
  std::_V2 *v14; // rdx
  size_t v16; // rax
  size_t v17; // r8
  size_t v18; // rdx
  int v19; // eax
  unsigned __int8 v21; // [rsp+18h] [rbp-120h]
  size_t v22; // [rsp+18h] [rbp-120h]
  unsigned __int8 v23; // [rsp+18h] [rbp-120h]
  unsigned __int8 na; // [rsp+20h] [rbp-118h]
  unsigned __int8 nb; // [rsp+20h] [rbp-118h]
  unsigned __int8 v27; // [rsp+28h] [rbp-110h]
  char v28; // [rsp+28h] [rbp-110h]
  _QWORD v29[4]; // [rsp+30h] [rbp-108h] BYREF
  __int16 v30; // [rsp+50h] [rbp-E8h]
  void *ptr[27]; // [rsp+60h] [rbp-D8h] BYREF

  v11 = a10;
  v12 = *(_QWORD *)(a2[2] + 160);
  v13 = *(void **)(v12 + 80);
  v14 = *(std::_V2 **)(v12 + 72);
  memset(ptr, 0, 0xA0u);
  if ( !v13 )
  {
    v27 = a6;
    v21 = a3;
    v16 = j__strlen("-");
    v17 = a5;
    a3 = v21;
    v13 = (void *)v16;
    a6 = v27;
    v11 = a10;
    if ( (a5 != v16
       || a5
       && (v18 = a5, na = v21, v22 = v17, v19 = memcmp(a4, "-", v18), v17 = v22, a3 = na, a6 = v27, v11 = a10, v19))
      && a8 )
    {
      v28 = v11;
      nb = a6;
      v23 = a3;
      ptr[0] = &ptr[3];
      *(__m128i *)&ptr[1] = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      sub_A1FE50(ptr, a4, &a4[v17]);
      LOBYTE(ptr[19]) = 1;
      v29[0] = a7;
      v30 = 261;
      v29[1] = a8;
      sub_228A730(ptr, v29, 0);
      v13 = ptr[1];
      v14 = (std::_V2 *)ptr[0];
      a3 = v23;
      v12 = *(_QWORD *)(a2[2] + 160);
      a6 = nb;
      v11 = v28;
    }
    else
    {
      v14 = (std::_V2 *)"-";
    }
  }
  sub_12EDAB0(a1, a2, v14, (size_t)v13, a3, a6, *(_BYTE *)(v12 + 3) & 1 | v11, a9);
  if ( LOBYTE(ptr[19]) && ptr[0] != &ptr[3] )
    free(ptr[0]);
  return a1;
}
