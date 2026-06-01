_WORD *__fastcall sub_1460F90(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rax
  size_t v3; // rdx
  _WORD *v4; // r12
  void *ptr; // [rsp+0h] [rbp-E8h] BYREF
  __m128i si128; // [rsp+8h] [rbp-E0h]
  _BYTE v8[72]; // [rsp+18h] [rbp-D0h] BYREF
  void *v9; // [rsp+60h] [rbp-88h] BYREF
  __m128i v10; // [rsp+68h] [rbp-80h]
  _BYTE v11[112]; // [rsp+78h] [rbp-70h] BYREF

  if ( (*(_BYTE *)(a2 + 18) & 0x48) != 0 )
  {
    ptr = v8;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
    v2 = (_BYTE *)sub_145C740(a1, a2, (__int64 *)&ptr, nullptr);
    if ( (*(_BYTE *)(a2 + 18) & 0x40) != 0 )
    {
      v10 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
      v9 = v11;
      sub_13DFFE0(&v9, v2, v3);
      v4 = (_WORD *)sub_6F3470(a1 + 552, v9, v10.m128i_u64[0]);
      if ( v9 != v11 )
        free(v9);
    }
    else
    {
      v4 = (_WORD *)sub_6F3470(a1 + 552, v2, v3);
    }
    if ( ptr != v8 )
      free(ptr);
  }
  else
  {
    v4 = (_WORD *)sub_6F3470(a1 + 552, *(const void **)(a2 + 8), *(unsigned int *)(a2 + 4));
  }
  *(_QWORD *)(a2 + 8) = v4;
  *(_WORD *)(a2 + 16) = *v4 & 0x1FF;
  return v4;
}
