_QWORD *__fastcall sub_10B77A0(
        _QWORD *a1,
        __int64 *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        __int64 a5,
        __int64 a6)
{
  _QWORD *v6; // r14
  unsigned int v7; // r15d
  __int64 v8; // rdx
  size_t v9; // rax
  _BYTE *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // [rsp+8h] [rbp-150h]
  void *v14[2]; // [rsp+10h] [rbp-148h] BYREF
  __int64 v15; // [rsp+20h] [rbp-138h] BYREF
  unsigned __int8 *v16[4]; // [rsp+30h] [rbp-128h] BYREF
  __int16 v17; // [rsp+50h] [rbp-108h]
  void *ptr; // [rsp+80h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+88h] [rbp-D0h]
  _BYTE v20[192]; // [rsp+98h] [rbp-C0h] BYREF

  v6 = a1 + 2;
  v16[0] = a3;
  v16[1] = a4;
  ptr = v20;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384D00);
  v17 = 261;
  v7 = sub_226C0A0(v16, a5, a6, &ptr, 0);
  v13 = v8;
  if ( v7 )
  {
    sub_FA3370((__int64)v16, *a2, 0, 78);
    (*(void (__fastcall **)(void **, __int64, _QWORD))(*(_QWORD *)v13 + 32LL))(v14, v13, v7);
    sub_AC84E0(v16, (_BYTE *)v14[0], (signed __int64)v14[1]);
    if ( v14[0] != &v15 )
      operator delete(v14[0]);
    sub_AC6300((__int64)v16);
    *a1 = v6;
    v9 = j__strlen(&byte_22CD811);
    sub_10B5070(a1, &byte_22CD811, (__int64)(&byte_22CD811 + v9));
  }
  else
  {
    v11 = ptr;
    v12 = si128.m128i_i64[0];
    *a1 = v6;
    sub_10B5070(a1, v11, (__int64)&v11[v12]);
  }
  if ( ptr != v20 )
    free(ptr);
  return a1;
}

