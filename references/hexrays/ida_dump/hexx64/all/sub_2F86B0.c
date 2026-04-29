unsigned __int64 __fastcall sub_2F86B0(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v4; // rax
  __m128i v5; // xmm0
  __int64 v6; // rax
  __int64 v7; // r14
  __m128i v8; // xmm0
  __int64 v9; // rdi
  __int64 v10; // rax
  __m128i v11; // xmm0
  __int64 v12; // rdi
  __int64 v13; // rbp
  __m128i v15; // [rsp+0h] [rbp-98h] BYREF
  __int64 (__fastcall **v16)(); // [rsp+10h] [rbp-88h]
  __int64 v17; // [rsp+18h] [rbp-80h]
  __int64 v18; // [rsp+20h] [rbp-78h]
  __m128i v19; // [rsp+28h] [rbp-70h] BYREF
  __int64 v20; // [rsp+38h] [rbp-60h] BYREF
  __int64 v21; // [rsp+40h] [rbp-58h]
  int v22; // [rsp+48h] [rbp-50h]
  __int64 v23; // [rsp+50h] [rbp-48h]
  unsigned __int64 v24; // [rsp+58h] [rbp-40h]

  v2 = a1 + 40;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  v24 = __readfsqword(0x28u);
  v16 = off_4E14B0;
  v17 = v4;
  v6 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0;
  v19 = v5;
  *(_OWORD *)(a1 + 24) = 0;
  v18 = v6;
  v20 = 0;
  copy_tinfo_t(&v20, a1 + 40);
  v21 = *(_QWORD *)(a1 + 48);
  v22 = *(_DWORD *)(a1 + 56);
  v16 = off_4E2CD8;
  v23 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  v7 = *(_QWORD *)(a2 + 16);
  v8 = _mm_loadu_si128((const __m128i *)(a2 + 24));
  *(_QWORD *)(a2 + 16) = 0;
  *(_OWORD *)(a2 + 24) = 0;
  v9 = *(_QWORD *)(a1 + 16);
  if ( v9 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    v15 = v8;
    qfree(v9);
    v8 = _mm_load_si128(&v15);
  }
  *(_QWORD *)(a1 + 16) = v7;
  *(__m128i *)(a1 + 24) = v8;
  copy_tinfo_t(v2, a2 + 40);
  v10 = *(_QWORD *)(a2 + 48);
  v11 = _mm_loadu_si128(&v19);
  v19 = 0;
  *(_QWORD *)(a1 + 48) = v10;
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 64);
  v12 = *(_QWORD *)(a2 + 16);
  v13 = v18;
  v18 = 0;
  *(_QWORD *)(a2 + 8) = v17;
  if ( v12 )
  {
    *(_QWORD *)(a2 + 24) = 0;
    v15 = v11;
    qfree(v12);
    v11 = _mm_load_si128(&v15);
  }
  *(_QWORD *)(a2 + 16) = v13;
  *(__m128i *)(a2 + 24) = v11;
  copy_tinfo_t(a2 + 40, &v20);
  v16 = off_4E14B0;
  *(_QWORD *)(a2 + 48) = v21;
  *(_DWORD *)(a2 + 56) = v22;
  *(_QWORD *)(a2 + 64) = v23;
  clear_tinfo_t(&v20);
  if ( v18 )
  {
    v19.m128i_i64[0] = 0;
    qfree(v18);
  }
  return v24 - __readfsqword(0x28u);
}
