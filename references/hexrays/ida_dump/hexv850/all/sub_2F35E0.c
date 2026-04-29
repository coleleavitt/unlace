unsigned __int64 __fastcall sub_2F35E0(__int64 a1, __int64 a2, __int64 a3, const __m128i *a4)
{
  __int64 v5; // rbp
  const __m128i *v6; // r14
  __int64 v7; // r15
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rbp
  __m128i v10; // xmm0
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r14
  __m128i v14; // xmm0
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // r15
  __m128i v18; // xmm0
  __int64 v19; // rdi
  const __m128i *v20; // rbx
  __int64 v22; // r14
  __m128i v23; // [rsp+10h] [rbp-108h] BYREF
  __int64 v24; // [rsp+20h] [rbp-F8h]
  const __m128i *v25; // [rsp+28h] [rbp-F0h]
  __int64 v26; // [rsp+30h] [rbp-E8h]
  const __m128i *v27; // [rsp+38h] [rbp-E0h]
  __int64 (__fastcall **v28)(); // [rsp+40h] [rbp-D8h]
  __int64 v29; // [rsp+48h] [rbp-D0h]
  __int64 v30; // [rsp+50h] [rbp-C8h]
  __m128i v31; // [rsp+58h] [rbp-C0h] BYREF
  __int64 v32; // [rsp+68h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+70h] [rbp-A8h]
  int v34; // [rsp+78h] [rbp-A0h]
  __int64 v35; // [rsp+80h] [rbp-98h]
  char v36; // [rsp+90h] [rbp-88h] BYREF
  __m128i v37; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v38; // [rsp+C0h] [rbp-58h]
  int (__fastcall *v39)(__m128i *, unsigned __int64, __int64); // [rsp+C8h] [rbp-50h]
  unsigned __int64 v40; // [rsp+D8h] [rbp-40h]

  v24 = a2;
  v26 = a3;
  v5 = a2 - a1;
  v27 = a4;
  v40 = __readfsqword(0x28u);
  v25 = (const __m128i *)&v36;
  if ( a2 - a1 > 1152 )
  {
    while ( v26 )
    {
      v6 = v25;
      sub_2C8EC0((__int64)v25, v27);
      sub_2C8EC0((__int64)&v37, v6);
      v7 = v24;
      v8 = a1 + 72;
      sub_2F3500(a1, a1 + 72, a1 + 72 * ((__int64)(0x8E38E38E38E38E39LL * (v5 >> 3)) >> 1), v24 - 72, (__int64)&v37);
      sub_621D0((__int64)&v37);
      sub_2C8EC0((__int64)&v37, v6);
      v9 = v7;
      while ( 1 )
      {
        if ( !v38 )
LABEL_28:
          std::__throw_bad_function_call();
        while ( v39(&v37, v8, a1) < 0 )
        {
          v8 += 72LL;
          if ( !v38 )
            goto LABEL_28;
        }
        v9 -= 72LL;
        if ( !v38 )
LABEL_27:
          std::__throw_bad_function_call();
        while ( v39(&v37, a1, v9) < 0 )
        {
          v9 -= 72LL;
          if ( !v38 )
            goto LABEL_27;
        }
        if ( v8 >= v9 )
          break;
        v10 = _mm_loadu_si128((const __m128i *)(v8 + 24));
        v28 = off_4B4E50;
        v11 = *(_QWORD *)(v8 + 8);
        *(_OWORD *)(v8 + 24) = 0;
        v29 = v11;
        v12 = *(_QWORD *)(v8 + 16);
        *(_QWORD *)(v8 + 16) = 0;
        v30 = v12;
        v32 = 0;
        v31 = v10;
        copy_tinfo_t(&v32, v8 + 40);
        v33 = *(_QWORD *)(v8 + 48);
        v34 = *(_DWORD *)(v8 + 56);
        v28 = off_4B6678;
        v35 = *(_QWORD *)(v8 + 64);
        *(_QWORD *)(v8 + 8) = *(_QWORD *)(v9 + 8);
        v13 = *(_QWORD *)(v9 + 16);
        v14 = _mm_loadu_si128((const __m128i *)(v9 + 24));
        *(_QWORD *)(v9 + 16) = 0;
        *(_OWORD *)(v9 + 24) = 0;
        v15 = *(_QWORD *)(v8 + 16);
        if ( v15 )
        {
          *(_QWORD *)(v8 + 24) = 0;
          v23 = v14;
          qfree(v15);
          v14 = _mm_load_si128(&v23);
        }
        *(_QWORD *)(v8 + 16) = v13;
        *(__m128i *)(v8 + 24) = v14;
        copy_tinfo_t(v8 + 40, v9 + 40);
        v16 = *(_QWORD *)(v9 + 48);
        v17 = v30;
        v30 = 0;
        v18 = _mm_loadu_si128(&v31);
        v31 = 0;
        *(_QWORD *)(v8 + 48) = v16;
        *(_DWORD *)(v8 + 56) = *(_DWORD *)(v9 + 56);
        *(_QWORD *)(v8 + 64) = *(_QWORD *)(v9 + 64);
        v19 = *(_QWORD *)(v9 + 16);
        *(_QWORD *)(v9 + 8) = v29;
        if ( v19 )
        {
          *(_QWORD *)(v9 + 24) = 0;
          v23 = v18;
          qfree(v19);
          v18 = _mm_load_si128(&v23);
        }
        *(_QWORD *)(v9 + 16) = v17;
        *(__m128i *)(v9 + 24) = v18;
        copy_tinfo_t(v9 + 40, &v32);
        *(_QWORD *)(v9 + 48) = v33;
        *(_DWORD *)(v9 + 56) = v34;
        *(_QWORD *)(v9 + 64) = v35;
        v28 = off_4B4E50;
        clear_tinfo_t(&v32);
        if ( v30 )
        {
          v31.m128i_i64[0] = 0;
          qfree(v30);
        }
        v8 += 72LL;
      }
      v22 = --v26;
      sub_621D0((__int64)&v37);
      sub_621D0((__int64)v25);
      sub_2C8EC0((__int64)&v37, v27);
      sub_2F35E0(v8, v24, v22, &v37);
      sub_621D0((__int64)&v37);
      v5 = v8 - a1;
      if ( (__int64)(v8 - a1) <= 1152 )
        return v40 - __readfsqword(0x28u);
      v24 = v8;
    }
    v20 = v25;
    sub_2C8EC0((__int64)v25, v27);
    sub_2C8EC0((__int64)&v37, v20);
    sub_2F2CB0(a1, v24, &v37);
    sub_621D0((__int64)&v37);
    while ( v24 - a1 > 72 )
    {
      v24 -= 72;
      sub_2F2FE0(a1, v24, v24, v25);
    }
    sub_621D0((__int64)v25);
  }
  return v40 - __readfsqword(0x28u);
}
