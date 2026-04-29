unsigned __int64 __fastcall sub_38F2D0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  const __m128i *v5; // rdi
  __m128i v6; // xmm0
  __int64 v7; // rax
  __int32 v9; // eax
  __int128 *v10; // r8
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r9
  void (__fastcall ***v16)(_QWORD); // rdi
  bool v17; // zf
  void (__fastcall ***v18)(_QWORD); // rdi
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // rdx
  int v23; // edx
  __int32 v24; // eax
  __int64 v25; // r8
  __int64 v26; // [rsp-8h] [rbp-118h]
  __int128 *v27; // [rsp+0h] [rbp-110h]
  __int64 v28; // [rsp+0h] [rbp-110h]
  __m128i v29; // [rsp+8h] [rbp-108h] BYREF
  __int64 v30; // [rsp+18h] [rbp-F8h]
  __int64 v31; // [rsp+20h] [rbp-F0h] BYREF
  __int64 v32; // [rsp+28h] [rbp-E8h] BYREF
  _QWORD v33[4]; // [rsp+30h] [rbp-E0h] BYREF
  __int64 (__fastcall **v34)(); // [rsp+50h] [rbp-C0h] BYREF
  int v35; // [rsp+58h] [rbp-B8h]
  int v36; // [rsp+5Ch] [rbp-B4h]
  __int64 v37; // [rsp+60h] [rbp-B0h]
  __int64 v38; // [rsp+68h] [rbp-A8h]
  __int128 v39; // [rsp+70h] [rbp-A0h] BYREF
  __m128i v40; // [rsp+80h] [rbp-90h]
  __int64 v41; // [rsp+90h] [rbp-80h]
  __int64 v42; // [rsp+98h] [rbp-78h]
  __m128i v43; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v44; // [rsp+B0h] [rbp-60h]
  __int64 v45; // [rsp+B8h] [rbp-58h]
  __int64 v46; // [rsp+C0h] [rbp-50h]
  __int64 v47; // [rsp+C8h] [rbp-48h]
  unsigned __int64 v48; // [rsp+D8h] [rbp-38h]

  HIDWORD(v30) = a3;
  v5 = (const __m128i *)a1[4];
  v48 = __readfsqword(0x28u);
  if ( v5 )
  {
    v6 = _mm_loadl_epi64(v5);
    v7 = v5[8].m128i_i64[1];
    v33[1] = 0;
    v33[0] = off_4B8F58;
    v36 = v7;
    v35 = 0;
    v34 = off_4B8F58;
    v33[2] = v6.m128i_i64[0];
    v33[3] = v6.m128i_i64[0];
    v37 = v6.m128i_i64[0];
    v38 = v6.m128i_i64[0];
    if ( a4 == -1 )
    {
      v9 = 0;
      v10 = &v39;
    }
    else
    {
      v29.m128i_i64[1] = v6.m128i_i64[0];
      sub_2535E0((__int64)v5, a2, a3);
      v20 = sub_37F830(a4);
      v6 = _mm_loadl_epi64((const __m128i *)&v29.m128i_u64[1]);
      v21 = v20;
      if ( v20 )
      {
        v22 = a1[1];
        v40.m128i_i64[0] = 0;
        v41 = 0;
        v40.m128i_i64[1] = -1;
        v42 = v20;
        v44 = 0;
        v45 = -1;
        v46 = 0;
        v47 = 0;
        v29.m128i_i64[1] = (__int64)&v39;
        v29.m128i_i64[0] = v6.m128i_i64[0];
        v39 = 0;
        v43 = 0;
        v23 = sub_38F140(&v43, (__int64)&v39, v22, 0);
        v24 = 0;
        v25 = v29.m128i_i64[1];
        if ( v23 )
          v24 = *(_DWORD *)(v47 + 12);
        if ( v47 )
        {
          v28 = v29.m128i_i64[1];
          v29.m128i_i32[2] = v24;
          v29.m128i_i64[0] = v6.m128i_i64[0];
          qfree(v47);
          v25 = v28;
          v24 = v29.m128i_i32[2];
        }
        v27 = (__int128 *)v25;
        v29.m128i_i32[2] = v24;
        v29.m128i_i64[0] = v6.m128i_i64[0];
        qfree(v21);
        v5 = (const __m128i *)a1[4];
        v9 = v29.m128i_i32[2];
        v6 = _mm_loadl_epi64(&v29);
        v10 = v27;
      }
      else
      {
        v5 = (const __m128i *)a1[4];
        v9 = 0;
        v10 = &v39;
      }
    }
    HIDWORD(v39) = v9;
    v40 = _mm_unpacklo_epi64(v6, v6);
    v45 = 0xFFFFFFFFLL;
    v43 = 0;
    DWORD2(v39) = 0;
    *(_QWORD *)&v39 = off_4B8F58;
    v44 = 0;
    LODWORD(v46) = 1;
    v11 = callui(148, a2, v33, &v34, v10, &v43, &v5[8], &unk_4B9660, a1, 0);
    *(__m128i *)(a1 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v11, (__m128i)(unsigned __int64)v11);
    callui(77, v11, 7, v12, v13, v14, v27, v29.m128i_i64[0], v29.m128i_i64[1], v30);
    if ( (v30 & 0x2000000000LL) == 0 )
    {
      sub_3A08A0(&v31, *(_QWORD *)(a1[16] + 112LL), *(_QWORD *)(a1[4] + 8LL) + 8LL);
      v15 = a1[4] + 128LL;
      v32 = v31;
      if ( v31 )
        ++*(_DWORD *)(v31 + 8);
      callui(111, a1 + 2, 0, a1[1], &v32, v15, 0, 0, 1, v26);
      v16 = (void (__fastcall ***)(_QWORD))v32;
      if ( v32 )
      {
        v17 = (*(_DWORD *)(v32 + 8))-- == 1;
        if ( v17 )
          (**v16)(v16);
      }
      v18 = (void (__fastcall ***)(_QWORD))v31;
      if ( v31 )
      {
        v17 = (*(_DWORD *)(v31 + 8))-- == 1;
        if ( v17 )
          (**v18)(v18);
      }
    }
  }
  return v48 - __readfsqword(0x28u);
}
