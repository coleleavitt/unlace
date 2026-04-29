unsigned __int64 __fastcall sub_2F43F0(__int64 a1, __int64 a2, const __m128i *a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbx
  __int64 i; // r15
  __int64 v7; // rax
  __m128i v8; // xmm0
  __int64 v9; // rax
  __int64 v10; // rax
  void (__fastcall *v11)(__int128 *, const __m128i *, __int64); // rax
  __m128i v12; // xmm0
  __int64 *v14; // [rsp+18h] [rbp-110h]
  __int64 v15; // [rsp+28h] [rbp-100h]
  __int64 v16; // [rsp+30h] [rbp-F8h] BYREF
  __m128i v17; // [rsp+38h] [rbp-F0h] BYREF
  __int64 v18; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v19; // [rsp+50h] [rbp-D8h]
  int v20; // [rsp+58h] [rbp-D0h]
  __int64 v21; // [rsp+60h] [rbp-C8h]
  _QWORD v22[2]; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+80h] [rbp-A8h]
  __m128i v24; // [rsp+88h] [rbp-A0h]
  _QWORD v25[2]; // [rsp+98h] [rbp-90h] BYREF
  int v26; // [rsp+A8h] [rbp-80h]
  __int64 v27; // [rsp+B0h] [rbp-78h]
  __int128 v28; // [rsp+C0h] [rbp-68h] BYREF
  __m128i v29; // [rsp+D0h] [rbp-58h]
  unsigned __int64 v30; // [rsp+E8h] [rbp-40h]

  v3 = a2 - a1;
  v30 = __readfsqword(0x28u);
  if ( v3 > 72 )
  {
    v14 = (__int64 *)(0x8E38E38E38E38E39LL * (v3 >> 3));
    v5 = ((__int64)v14 - 2) / 2;
    for ( i = a1 + 72 * v5 + 40; ; i -= 72 )
    {
      v7 = *(_QWORD *)(i - 32);
      v18 = 0;
      v8 = _mm_loadu_si128((const __m128i *)(i - 16));
      v15 = v7;
      v9 = *(_QWORD *)(i - 24);
      *(_QWORD *)(i - 24) = 0;
      v17 = v8;
      *(_OWORD *)(i - 16) = 0;
      v16 = v9;
      copy_tinfo_t(&v18, i);
      v10 = *(_QWORD *)(i + 8);
      v29 = 0u;
      v19 = v10;
      LODWORD(v10) = *(_DWORD *)(i + 16);
      v28 = 0;
      v20 = v10;
      v21 = *(_QWORD *)(i + 24);
      v11 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))a3[1].m128i_i64[0];
      if ( v11 )
      {
        v11(&v28, a3, 2);
        v29 = _mm_loadu_si128(a3 + 1);
      }
      v12 = _mm_loadu_si128(&v17);
      v22[0] = off_4CE5D0;
      v25[0] = 0;
      v22[1] = v15;
      v24 = v12;
      v23 = v16;
      v16 = 0;
      v17 = 0;
      copy_tinfo_t(v25, &v18);
      v25[1] = v19;
      v26 = v20;
      v22[0] = off_4CFDF8;
      v27 = v21;
      sub_2F3ED0(a1, v5, v14, (__int64)v22, (__int64)&v28);
      v22[0] = off_4CE5D0;
      clear_tinfo_t(v25);
      if ( v23 )
      {
        v24.m128i_i64[0] = 0;
        qfree(v23);
      }
      if ( v29.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v29.m128i_i64[0])(&v28, &v28, 3);
      if ( !v5 )
        break;
      --v5;
      clear_tinfo_t(&v18);
    }
    sub_2B14E0(&v16);
  }
  return v30 - __readfsqword(0x28u);
}
