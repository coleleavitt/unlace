__int64 __fastcall sub_1FCFD20(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _BYTE *a4,
        signed __int64 a5,
        __int64 *a6,
        _BYTE *a7,
        __int64 a8,
        _QWORD *a9,
        __int64 a10,
        char a11,
        char a12,
        char a13,
        char a14,
        char a15)
{
  _BYTE *v16; // r11
  void *v17; // rax
  __int64 v18; // r10
  _QWORD *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rax
  __m128i si128; // xmm1
  __int64 result; // rax
  __int64 *v25; // [rsp+8h] [rbp-60h]
  signed __int64 v26; // [rsp+8h] [rbp-60h]
  signed __int64 v27; // [rsp+8h] [rbp-60h]
  _BYTE *v28; // [rsp+10h] [rbp-58h]
  __int64 *v29; // [rsp+10h] [rbp-58h]
  __int64 *v30; // [rsp+18h] [rbp-50h]
  _BYTE *v31; // [rsp+18h] [rbp-50h]
  __int64 v32; // [rsp+20h] [rbp-48h]

  v16 = a7;
  *(_QWORD *)a1 = &off_2C71120;
  v17 = (void *)(a1 + 48);
  *(_QWORD *)(a1 + 16) = a2;
  v18 = a8;
  *(_BYTE *)(a1 + 8) = 1;
  *(_QWORD *)(a1 + 24) = a2 | 4;
  *(_QWORD *)(a1 + 32) = a1 + 48;
  if ( &a4[a5] && !a4 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)a5 > 0xF )
  {
    if ( a5 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v30 = a6;
    v28 = a4;
    v26 = a5;
    v17 = (void *)operator new(a5 + 1);
    a5 = v26;
    a4 = v28;
    a6 = v30;
    v16 = a7;
    *(_QWORD *)(a1 + 32) = v17;
    *(_QWORD *)(a1 + 48) = v26;
    v18 = a8;
LABEL_14:
    v32 = v18;
    v31 = v16;
    v29 = a6;
    v27 = a5;
    memcpy(v17, a4, a5);
    v17 = *(void **)(a1 + 32);
    v18 = v32;
    v16 = v31;
    a6 = v29;
    a5 = v27;
    goto LABEL_6;
  }
  if ( a5 == 1 )
  {
    *(_BYTE *)(a1 + 48) = *a4;
    goto LABEL_6;
  }
  if ( a5 )
    goto LABEL_14;
LABEL_6:
  *(_QWORD *)(a1 + 40) = a5;
  v19 = (_QWORD *)(a1 + 64);
  *((_BYTE *)v17 + a5) = 0;
  *(_QWORD *)(a1 + 64) = a1 + 80;
  if ( v16 )
  {
    v25 = a6;
    sub_1FCFB70(v19, v16, (__int64)&v16[v18]);
    a6 = v25;
  }
  else
  {
    *(_QWORD *)(a1 + 72) = 0;
    *(_BYTE *)(a1 + 80) = 0;
  }
  v20 = *a6;
  v21 = a6[1];
  *(_OWORD *)a6 = 0;
  *(_QWORD *)(a1 + 96) = v20;
  v20 += 24;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DA0);
  *(_QWORD *)(a1 + 104) = v21;
  *(_QWORD *)(a1 + 112) = a1 + 136;
  *(_QWORD *)(a1 + 136) = v20;
  *(_BYTE *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 224) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  *(_OWORD *)(a1 + 120) = 0;
  *(__m128i *)(a1 + 160) = si128;
  *(_OWORD *)(a1 + 176) = 0;
  sub_1F79370(a1 + 264, a1 + 112, v20, a3, a9, a10, a12, a13, a15);
  result = *(_QWORD *)(a1 + 96);
  *(_BYTE *)(a1 + 3856) = a11;
  *(_BYTE *)(a1 + 3857) = a14;
  *(_BYTE *)(result + 48) = 0;
  return result;
}
