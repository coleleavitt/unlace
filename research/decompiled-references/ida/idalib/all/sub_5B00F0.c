unsigned __int64 __fastcall sub_5B00F0(__int64 a1, __int64 a2, const __m128i *a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbx
  __int64 v6; // r13
  void *v7; // r14
  int v8; // r8d
  __m128i v9; // xmm0
  __int64 v10; // r15
  void (__fastcall *v11)(__int128 *, const __m128i *, __int64); // rax
  int v13; // [rsp+Ch] [rbp-BCh]
  __m128i v14; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+20h] [rbp-A8h]
  __int64 v16; // [rsp+28h] [rbp-A0h]
  void *ptr; // [rsp+30h] [rbp-98h] BYREF
  __m128i v18; // [rsp+38h] [rbp-90h]
  int v19; // [rsp+48h] [rbp-80h]
  __int64 v20; // [rsp+50h] [rbp-78h]
  __int128 v21; // [rsp+60h] [rbp-68h] BYREF
  __m128i v22; // [rsp+70h] [rbp-58h]
  unsigned __int64 v23; // [rsp+88h] [rbp-40h]

  v3 = a2 - a1;
  v15 = a1;
  v23 = __readfsqword(0x28u);
  if ( v3 > 40 )
  {
    v16 = 0xCCCCCCCCCCCCCCCDLL * (v3 >> 3);
    v5 = (v16 - 2) / 2;
    v6 = a1 + 40 * v5;
    while ( 1 )
    {
      v7 = *(void **)v6;
      v8 = *(_DWORD *)(v6 + 24);
      v9 = _mm_loadu_si128((const __m128i *)(v6 + 8));
      *(_OWORD *)(v6 + 8) = 0;
      v10 = *(_QWORD *)(v6 + 32);
      *(_QWORD *)v6 = 0;
      v11 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))a3[1].m128i_i64[0];
      v22 = 0u;
      v21 = 0;
      if ( v11 )
      {
        v13 = v8;
        v14 = v9;
        v11(&v21, a3, 2);
        v9 = _mm_load_si128(&v14);
        v8 = v13;
        v22 = _mm_loadu_si128(a3 + 1);
      }
      v19 = v8;
      v20 = v10;
      ptr = v7;
      v18 = v9;
      sub_5AFC20(v15, v5, v16, (__int64)&ptr, (__int64)&v21);
      if ( ptr )
        qfree(ptr);
      if ( v22.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v22.m128i_i64[0])(&v21, &v21, 3);
      v6 -= 40;
      if ( !v5 )
        break;
      --v5;
    }
  }
  return v23 - __readfsqword(0x28u);
}
