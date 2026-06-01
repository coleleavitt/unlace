_QWORD *__fastcall sub_10DB630(_QWORD *a1, __int64 *a2, unsigned __int8 *a3, unsigned __int8 *a4)
{
  _QWORD *v4; // r14
  unsigned int v5; // r15d
  __int64 v6; // rdx
  size_t v7; // rax
  _BYTE *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // [rsp+8h] [rbp-150h]
  void *v12[2]; // [rsp+10h] [rbp-148h] BYREF
  __int64 v13; // [rsp+20h] [rbp-138h] BYREF
  unsigned __int8 *v14[4]; // [rsp+30h] [rbp-128h] BYREF
  __int16 v15; // [rsp+50h] [rbp-108h]
  void *ptr; // [rsp+80h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+88h] [rbp-D0h]
  _BYTE v18[192]; // [rsp+98h] [rbp-C0h] BYREF

  v4 = a1 + 2;
  v14[0] = a3;
  v14[1] = a4;
  ptr = v18;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  v15 = 261;
  v5 = sub_228FE30(v14, &ptr);
  v11 = v6;
  if ( v5 )
  {
    sub_FC70B0((__int64)v14, *a2, 0, 78);
    (*(void (__fastcall **)(void **, __int64, _QWORD))(*(_QWORD *)v11 + 32LL))(v12, v11, v5);
    sub_AEC220(v14, (_BYTE *)v12[0], (signed __int64)v12[1]);
    if ( v12[0] != &v13 )
      operator delete(v12[0]);
    sub_AEA040((__int64)v14);
    *a1 = v4;
    v7 = j__strlen(&byte_22F0C30);
    sub_10D8DB0(a1, &byte_22F0C30, (__int64)(&byte_22F0C30 + v7));
  }
  else
  {
    v9 = ptr;
    v10 = si128.m128i_i64[0];
    *a1 = v4;
    sub_10D8DB0(a1, v9, (__int64)&v9[v10]);
  }
  if ( ptr != v18 )
    free(ptr);
  return a1;
}
