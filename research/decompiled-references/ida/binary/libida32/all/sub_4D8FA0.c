unsigned __int64 __fastcall sub_4D8FA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // r12
  __int64 v4; // rbp
  unsigned __int64 v5; // rbx
  void *v6; // rdx
  void *v7; // rax
  __m128i v8; // xmm1
  __m128i v9; // xmm0
  void *v10; // r14
  void *v12; // [rsp+0h] [rbp-78h] BYREF
  __m128i v13; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+18h] [rbp-60h]
  __m128i v15; // [rsp+20h] [rbp-58h]
  unsigned __int64 v16; // [rsp+38h] [rbp-40h]

  v2 = a2 - a1;
  v16 = __readfsqword(0x28u);
  if ( v2 > 48 )
  {
    v3 = 0xAAAAAAAAAAAAAAABLL * (v2 >> 4);
    v4 = (v3 - 2) / 2;
    v5 = a1 + 16 * (v4 + ((v3 - 2 + ((unsigned __int64)(v3 - 2) >> 63)) & 0xFFFFFFFFFFFFFFFELL));
    while ( 1 )
    {
      v6 = *(void **)v5;
      v7 = *(void **)(v5 + 24);
      v8 = _mm_loadu_si128((const __m128i *)(v5 + 8));
      v9 = _mm_loadu_si128((const __m128i *)(v5 + 32));
      *(_QWORD *)v5 = 0;
      *(_QWORD *)(v5 + 24) = 0;
      v12 = v6;
      *(_OWORD *)(v5 + 8) = 0;
      *(_OWORD *)(v5 + 32) = 0;
      ptr = v7;
      v13 = v8;
      v15 = v9;
      sub_4D8B80(a1, v4, v3, (const __m128i *)&v12);
      v10 = v12;
      if ( ptr )
        qfree(ptr);
      if ( v10 )
        qfree(v10);
      v5 -= 48LL;
      if ( !v4 )
        break;
      --v4;
    }
  }
  return v16 - __readfsqword(0x28u);
}

