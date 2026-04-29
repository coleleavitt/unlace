unsigned __int64 __fastcall sub_2F1590(__int64 a1, const __m128i *a2, __int64 a3, const __m128i *a4)
{
  __int64 v4; // rax
  const __m128i *v6; // r13
  unsigned __int64 v7; // rbx
  const __m128i *i; // r15
  __m128i v9; // xmm0
  __int32 v10; // edi
  __int32 v11; // edx
  __int32 v12; // r9d
  __int64 v13; // r8
  __m128i v14; // xmm0
  __int64 v15; // rax
  __int32 v16; // r9d
  __m128i v17; // xmm0
  __int32 v18; // edx
  __int32 v19; // r15d
  __int32 v20; // ecx
  __m128i v21; // xmm0
  __int64 v22; // rbx
  __int64 v23; // rcx
  __m128i v24; // xmm0
  __m128i si128; // xmm0
  __int64 v27; // [rsp+8h] [rbp-120h]
  __int32 v28; // [rsp+8h] [rbp-120h]
  __m128i v31; // [rsp+28h] [rbp-100h] BYREF
  __m128i v32[2]; // [rsp+40h] [rbp-E8h] BYREF
  __int64 (__fastcall **v33)(); // [rsp+60h] [rbp-C8h] BYREF
  __m128i v34; // [rsp+68h] [rbp-C0h]
  __int32 v35; // [rsp+78h] [rbp-B0h]
  __m128i v36; // [rsp+80h] [rbp-A8h]
  __int32 v37; // [rsp+90h] [rbp-98h]
  __int64 v38; // [rsp+98h] [rbp-90h]
  __m128i v39[2]; // [rsp+A0h] [rbp-88h] BYREF
  __m128i v40; // [rsp+C0h] [rbp-68h] BYREF
  __int64 v41; // [rsp+D0h] [rbp-58h]
  int (__fastcall *v42)(__m128i *, unsigned __int64, __int64); // [rsp+D8h] [rbp-50h]
  unsigned __int64 v43; // [rsp+E8h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  v4 = (__int64)a2->m128i_i64 - a1;
  if ( (__int64)a2->m128i_i64 - a1 > 1024 )
  {
    v6 = a2;
    while ( a3 )
    {
      v27 = v4;
      sub_2CE520((__int64)v39, a4);
      sub_2CE520((__int64)&v40, v39);
      v7 = a1 + 64;
      sub_2F14B0(a1, a1 + 64, a1 + (v27 >> 7 << 6), (__int64)v6[-4].m128i_i64, (__int64)&v40);
      sub_66650((__int64)&v40);
      sub_2CE520((__int64)&v40, v39);
      for ( i = v6; ; i[2].m128i_i64[0] = v14.m128i_i64[0] )
      {
        if ( !v41 )
LABEL_22:
          std::__throw_bad_function_call();
        while ( v42(&v40, v7, a1) < 0 )
        {
          v7 += 64LL;
          if ( !v41 )
            goto LABEL_22;
        }
        i -= 4;
        if ( !v41 )
LABEL_21:
          std::__throw_bad_function_call();
        while ( v42(&v40, a1, (__int64)i) < 0 )
        {
          i -= 4;
          if ( !v41 )
            goto LABEL_21;
        }
        if ( v7 >= (unsigned __int64)i )
          break;
        v9 = _mm_loadu_si128((const __m128i *)(v7 + 8));
        v7 += 64LL;
        v10 = *(_DWORD *)(v7 - 40);
        v11 = *(_DWORD *)(v7 - 16);
        *(_QWORD *)(v7 - 56) = i->m128i_i64[1];
        v12 = i[1].m128i_i32[0];
        v13 = v9.m128i_i64[0];
        v34 = v9;
        v14 = _mm_loadu_si128((const __m128i *)(v7 - 32));
        v15 = *(_QWORD *)(v7 - 8);
        *(_DWORD *)(v7 - 48) = v12;
        v16 = i[1].m128i_i32[2];
        v36 = v14;
        *(_DWORD *)(v7 - 40) = v16;
        *(_QWORD *)(v7 - 32) = i[2].m128i_i64[0];
        *(_DWORD *)(v7 - 24) = i[2].m128i_i32[2];
        *(_DWORD *)(v7 - 16) = i[3].m128i_i32[0];
        *(_QWORD *)(v7 - 8) = i[3].m128i_i64[1];
        i->m128i_i64[1] = v13;
        LODWORD(v13) = v34.m128i_i32[2];
        i[1].m128i_i32[2] = v10;
        i[1].m128i_i32[0] = v13;
        i[2].m128i_i32[2] = v14.m128i_i32[2];
        i[3].m128i_i32[0] = v11;
        i[3].m128i_i64[1] = v15;
      }
      --a3;
      sub_66650((__int64)&v40);
      sub_66650((__int64)v39);
      sub_2CE520((__int64)&v40, a4);
      sub_2F1590(v7, v6, a3, &v40);
      sub_66650((__int64)&v40);
      v4 = v7 - a1;
      if ( (__int64)(v7 - a1) <= 1024 )
        return v43 - __readfsqword(0x28u);
      v6 = (const __m128i *)v7;
    }
    sub_2CE520((__int64)v39, a4);
    sub_2CE520((__int64)&v40, v39);
    sub_2F1260(a1, (__int64)v6, &v40);
    sub_66650((__int64)&v40);
    while ( (__int64)v6->m128i_i64 - a1 > 64 )
    {
      v17 = _mm_loadu_si128((const __m128i *)((char *)v6 - 56));
      v18 = v6[-3].m128i_i32[2];
      v19 = v6[-1].m128i_i32[0];
      v6 -= 4;
      v6->m128i_i64[1] = *(_QWORD *)(a1 + 8);
      v20 = *(_DWORD *)(a1 + 16);
      v31 = v17;
      v21 = _mm_loadu_si128(v6 + 2);
      v22 = v6[3].m128i_i64[1];
      v6[1].m128i_i32[0] = v20;
      v28 = v18;
      v6[1].m128i_i32[2] = *(_DWORD *)(a1 + 24);
      v23 = *(_QWORD *)(a1 + 32);
      v32[0] = v21;
      v6[2].m128i_i64[0] = v23;
      v6[2].m128i_i32[2] = *(_DWORD *)(a1 + 40);
      v6[3].m128i_i32[0] = *(_DWORD *)(a1 + 48);
      v6[3].m128i_i64[1] = *(_QWORD *)(a1 + 56);
      sub_2CE520((__int64)&v40, v39);
      v24 = _mm_loadu_si128(&v31);
      v38 = v22;
      v35 = v28;
      v34 = v24;
      si128 = _mm_load_si128(v32);
      v37 = v19;
      v33 = off_4DD348;
      v36 = si128;
      sub_2F0EF0(a1, 0, ((__int64)v6->m128i_i64 - a1) >> 6, (__int64)&v33, (__int64)&v40);
      sub_66650((__int64)&v40);
    }
    sub_66650((__int64)v39);
  }
  return v43 - __readfsqword(0x28u);
}
