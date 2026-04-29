unsigned __int64 __fastcall sub_2D8C80(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __m128i v5; // xmm0
  bool v6; // zf
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // r13
  __m128i v12; // xmm0
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rbp
  __m128i v17; // xmm1
  __int64 v18; // rax
  __m128i v19; // xmm1
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v23; // rax
  __m128i v24; // [rsp+0h] [rbp-A8h] BYREF
  __int64 (__fastcall **v25)(); // [rsp+10h] [rbp-98h] BYREF
  __m128i v26; // [rsp+18h] [rbp-90h]
  __int64 v27; // [rsp+28h] [rbp-80h]
  __int64 v28; // [rsp+30h] [rbp-78h]
  __m128i v29; // [rsp+38h] [rbp-70h] BYREF
  __int64 v30; // [rsp+48h] [rbp-60h]
  __m128i v31; // [rsp+50h] [rbp-58h]
  int v32; // [rsp+60h] [rbp-48h]
  __int64 v33; // [rsp+68h] [rbp-40h]
  unsigned __int64 v34; // [rsp+78h] [rbp-30h]

  v34 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 24);
  v26 = _mm_loadu_si128((const __m128i *)(a1 + 8));
  v27 = v2;
  v3 = *(_QWORD *)(a1 + 32);
  v29 = _mm_loadu_si128((const __m128i *)(a1 + 40));
  v28 = v3;
  v4 = *(_QWORD *)(a1 + 56);
  *(_OWORD *)(a1 + 40) = 0;
  v5 = _mm_loadu_si128((const __m128i *)(a1 + 64));
  v30 = v4;
  LODWORD(v4) = *(_DWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 32) = 0;
  v6 = *(_QWORD *)(a2 + 16) == 0;
  v32 = v4;
  v25 = off_4CFD08;
  v7 = *(_QWORD *)(a1 + 88);
  v31 = v5;
  v33 = v7;
  if ( v6 )
LABEL_12:
    std::__throw_bad_function_call();
  v8 = a1 - 96;
  while ( (*(int (__fastcall **)(__int64, __int64 (__fastcall ***)(), __int64))(a2 + 24))(a2, &v25, v8) < 0 )
  {
    v9 = *(_QWORD *)(v8 + 8);
    v10 = *(_QWORD *)(v8 + 128);
    v11 = *(_QWORD *)(v8 + 32);
    v12 = _mm_loadu_si128((const __m128i *)(v8 + 40));
    *(_OWORD *)(v8 + 40) = 0;
    *(_QWORD *)(v8 + 104) = v9;
    LODWORD(v9) = *(_DWORD *)(v8 + 16);
    *(_QWORD *)(v8 + 32) = 0;
    *(_DWORD *)(v8 + 112) = v9;
    *(_DWORD *)(v8 + 120) = *(_DWORD *)(v8 + 24);
    *(_BYTE *)(v8 + 124) = *(_BYTE *)(v8 + 28);
    *(_BYTE *)(v8 + 125) = *(_BYTE *)(v8 + 29);
    *(_BYTE *)(v8 + 126) = *(_BYTE *)(v8 + 30);
    *(_BYTE *)(v8 + 127) = *(_BYTE *)(v8 + 31);
    if ( v10 )
    {
      *(_QWORD *)(v8 + 136) = 0;
      v24 = v12;
      qfree(v10);
      v12 = _mm_load_si128(&v24);
    }
    v13 = *(_QWORD *)(v8 + 56);
    *(_QWORD *)(v8 + 128) = v11;
    v8 -= 96;
    *(__m128i *)(v8 + 232) = v12;
    *(_QWORD *)(v8 + 248) = v13;
    *(_QWORD *)(v8 + 256) = *(_QWORD *)(v8 + 160);
    *(_DWORD *)(v8 + 264) = *(_DWORD *)(v8 + 168);
    *(_DWORD *)(v8 + 272) = *(_DWORD *)(v8 + 176);
    *(_QWORD *)(v8 + 280) = *(_QWORD *)(v8 + 184);
    if ( !*(_QWORD *)(a2 + 16) )
      goto LABEL_12;
  }
  v14 = *(_QWORD *)(v8 + 128);
  v15 = v8 + 96;
  v16 = v28;
  v17 = _mm_loadu_si128(&v29);
  v29 = 0;
  *(_QWORD *)(v15 + 8) = v26.m128i_i64[0];
  v28 = 0;
  *(_DWORD *)(v15 + 16) = v26.m128i_i32[2];
  *(_QWORD *)(v15 + 24) = v27;
  if ( v14 )
  {
    *(_QWORD *)(v15 + 40) = 0;
    v24 = v17;
    qfree(v14);
    v18 = v30;
    v19 = _mm_load_si128(&v24);
    *(_QWORD *)(v15 + 32) = v16;
    v20 = v28;
    *(_QWORD *)(v15 + 56) = v18;
    v21 = v31.m128i_i64[0];
    *(__m128i *)(v15 + 40) = v19;
    *(_QWORD *)(v15 + 64) = v21;
    *(_DWORD *)(v15 + 72) = v31.m128i_i32[2];
    *(_DWORD *)(v15 + 80) = v32;
    *(_QWORD *)(v15 + 88) = v33;
    v25 = off_4CE3C8;
    if ( v20 )
    {
      v29.m128i_i64[0] = 0;
      qfree(v20);
    }
  }
  else
  {
    v23 = v30;
    *(_QWORD *)(v15 + 32) = v16;
    *(__m128i *)(v15 + 40) = v17;
    *(_QWORD *)(v15 + 56) = v23;
    *(_QWORD *)(v15 + 64) = v31.m128i_i64[0];
    *(_DWORD *)(v15 + 72) = v31.m128i_i32[2];
    *(_DWORD *)(v15 + 80) = v32;
    *(_QWORD *)(v15 + 88) = v33;
  }
  return v34 - __readfsqword(0x28u);
}
