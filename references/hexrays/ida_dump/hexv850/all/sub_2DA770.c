unsigned __int64 __fastcall sub_2DA770(__int64 a1, __int64 a2, const __m128i *a3)
{
  __int64 v4; // rbp
  const __m128i *v5; // r15
  __int64 v6; // rbx
  __m128i v7; // xmm0
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  unsigned __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // r15
  __int64 v17; // r13
  __m128i v18; // xmm0
  __int64 v19; // rdi
  __int64 v20; // rbx
  __m128i v21; // xmm0
  __int64 *v22; // rbx
  __m128i v24; // [rsp+0h] [rbp-118h] BYREF
  const __m128i *v25; // [rsp+18h] [rbp-100h]
  __int64 v26; // [rsp+20h] [rbp-F8h]
  const __m128i *v27; // [rsp+28h] [rbp-F0h]
  __int64 v28; // [rsp+30h] [rbp-E8h]
  __int64 *v29; // [rsp+38h] [rbp-E0h]
  __int64 (__fastcall **v30)(); // [rsp+40h] [rbp-D8h]
  __int64 v31; // [rsp+48h] [rbp-D0h]
  __int64 v32; // [rsp+50h] [rbp-C8h]
  __m128i v33; // [rsp+58h] [rbp-C0h] BYREF
  __int64 v34; // [rsp+68h] [rbp-B0h] BYREF
  __int64 v35; // [rsp+70h] [rbp-A8h]
  int v36; // [rsp+78h] [rbp-A0h]
  __int64 v37; // [rsp+80h] [rbp-98h]
  char v38; // [rsp+90h] [rbp-88h] BYREF
  _BYTE v39[16]; // [rsp+B0h] [rbp-68h] BYREF
  void (__fastcall *v40)(_BYTE *, _BYTE *, __int64); // [rsp+C0h] [rbp-58h]
  unsigned __int64 v41; // [rsp+D8h] [rbp-40h]

  v28 = a2;
  v25 = a3;
  v41 = __readfsqword(0x28u);
  if ( a1 != a2 && a2 != a1 + 72 )
  {
    v4 = a1 + 144;
    v27 = (const __m128i *)&v38;
    while ( 1 )
    {
      v6 = v4 - 72;
      if ( !v25[1].m128i_i64[0] )
        std::__throw_bad_function_call();
      if ( ((int (__fastcall *)(const __m128i *, __int64, __int64))v25[1].m128i_i64[1])(v25, v4 - 72, a1) >= 0 )
        break;
      v7 = _mm_loadu_si128((const __m128i *)(v4 - 48));
      v8 = v4 - 32;
      v26 = v4;
      v30 = off_4B4E50;
      v9 = *(_QWORD *)(v4 - 64);
      v33 = v7;
      v31 = v9;
      v10 = *(_QWORD *)(v4 - 56);
      *(_QWORD *)(v4 - 56) = 0;
      v32 = v10;
      *(_OWORD *)(v4 - 48) = 0;
      v34 = 0;
      v29 = &v34;
      copy_tinfo_t(&v34, v4 - 32);
      v11 = *(_QWORD *)(v4 - 24);
      v30 = off_4B6678;
      v35 = v11;
      v36 = *(_DWORD *)(v4 - 16);
      v37 = *(_QWORD *)(v4 - 8);
      v12 = v6 - a1;
      v13 = 0x8E38E38E38E38E39LL * ((v6 - a1) >> 3);
      if ( v12 > 0 )
      {
        do
        {
          v14 = *(_QWORD *)(v8 - 104);
          v15 = *(_QWORD *)(v8 - 24);
          v16 = v8;
          v17 = *(_QWORD *)(v8 - 96);
          v18 = _mm_loadu_si128((const __m128i *)(v8 - 88));
          *(_QWORD *)(v8 - 96) = 0;
          *(_QWORD *)(v8 - 32) = v14;
          *(_OWORD *)(v8 - 88) = 0;
          if ( v15 )
          {
            *(_QWORD *)(v8 - 16) = 0;
            v24 = v18;
            qfree(v15);
            v18 = _mm_load_si128(&v24);
          }
          *(_QWORD *)(v8 - 24) = v17;
          v8 -= 72;
          *(__m128i *)(v8 + 56) = v18;
          copy_tinfo_t(v16, v8);
          *(_QWORD *)(v16 + 8) = *(_QWORD *)(v16 - 64);
          *(_DWORD *)(v16 + 16) = *(_DWORD *)(v16 - 56);
          *(_QWORD *)(v16 + 24) = *(_QWORD *)(v16 - 48);
          --v13;
        }
        while ( v13 );
      }
      v19 = *(_QWORD *)(a1 + 16);
      v20 = v32;
      v21 = _mm_loadu_si128(&v33);
      v33 = 0;
      *(_QWORD *)(a1 + 8) = v31;
      v32 = 0;
      if ( v19 )
      {
        *(_QWORD *)(a1 + 24) = 0;
        v24 = v21;
        qfree(v19);
        v21 = _mm_load_si128(&v24);
      }
      *(_QWORD *)(a1 + 16) = v20;
      v22 = v29;
      *(__m128i *)(a1 + 24) = v21;
      copy_tinfo_t(a1 + 40, v22);
      *(_QWORD *)(a1 + 48) = v35;
      *(_DWORD *)(a1 + 56) = v36;
      *(_QWORD *)(a1 + 64) = v37;
      v30 = off_4B4E50;
      clear_tinfo_t(v22);
      if ( v32 )
      {
        v33.m128i_i64[0] = 0;
        v4 += 72;
        qfree(v32);
        if ( v26 == v28 )
          return v41 - __readfsqword(0x28u);
      }
      else
      {
LABEL_7:
        v4 += 72;
        if ( v26 == v28 )
          return v41 - __readfsqword(0x28u);
      }
    }
    v5 = v27;
    sub_2C8EC0((__int64)v27, v25);
    sub_2C8EC0((__int64)v39, v5);
    sub_2DA4F0(v4 - 72, (__int64)v39);
    if ( v40 )
      v40(v39, v39, 3);
    sub_621D0((__int64)v27);
    v26 = v4;
    goto LABEL_7;
  }
  return v41 - __readfsqword(0x28u);
}
