unsigned __int64 __fastcall sub_4A8EB0(__int64 a1)
{
  int v1; // eax
  __m128i *v2; // r14
  __int64 v3; // r12
  __int64 v4; // rax
  __m128i v5; // xmm2
  unsigned __int64 v6; // r13
  unsigned __int32 v7; // ebp
  unsigned __int32 v8; // eax
  __m128i *v9; // rbx
  void *v10; // rdi
  __int32 v11; // eax
  __m128i v12; // xmm0
  void *v13; // rdi
  __int64 v14; // rax
  __m128i v15; // xmm3
  void *v17; // rdi
  __int32 v18; // eax
  __int64 v19; // rdi
  __m128i v20; // xmm0
  void *v21; // rdi
  __int64 v22; // r15
  __m128i v23; // xmm0
  __int64 v24; // rax
  __m128i v25; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v26; // [rsp+10h] [rbp-C8h]
  int v27; // [rsp+1Ch] [rbp-BCh]
  __m128i v28; // [rsp+20h] [rbp-B8h] BYREF
  __m128i v29; // [rsp+30h] [rbp-A8h] BYREF
  __m128i v30; // [rsp+40h] [rbp-98h] BYREF
  __int32 v31; // [rsp+50h] [rbp-88h]
  __int64 v32; // [rsp+58h] [rbp-80h]
  __int64 v33; // [rsp+60h] [rbp-78h]
  __m128i v34; // [rsp+68h] [rbp-70h]
  __m128i v35; // [rsp+78h] [rbp-60h]
  int v36; // [rsp+88h] [rbp-50h]
  unsigned __int64 v37; // [rsp+98h] [rbp-40h]

  v1 = *(_DWORD *)(a1 + 32);
  v37 = __readfsqword(0x28u);
  v2 = (__m128i *)a1;
  v3 = *(_QWORD *)(a1 + 40);
  v29 = _mm_loadu_si128((const __m128i *)a1);
  v31 = v1;
  v30 = _mm_loadu_si128((const __m128i *)(a1 + 16));
  if ( v3 )
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *(_QWORD *)(a1 + 48);
  v5 = _mm_loadu_si128((const __m128i *)(a1 + 56));
  *(_QWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  v6 = *(_QWORD *)(a1 + 72);
  v26 = v4;
  v7 = *(_DWORD *)(a1 + 80);
  v33 = v4;
  LODWORD(v4) = *(_DWORD *)(a1 + 88);
  v28 = v5;
  v27 = v4;
  v36 = v4;
  v34 = v5;
  v35 = _mm_loadu_si128((const __m128i *)(a1 + 72));
  while ( 1 )
  {
    v8 = v2[-1].m128i_u32[0];
    v9 = v2;
    if ( v7 >= v8 && (v8 < v7 || v6 >= v2[-2].m128i_i64[1]) )
      break;
    v17 = (void *)v2[2].m128i_i64[1];
    v2 -= 6;
    if ( v17 )
    {
      qfree(v17);
      v9[2].m128i_i64[1] = 0;
    }
    v18 = v9[-4].m128i_i32[0];
    v19 = v9[-4].m128i_i64[1];
    *v9 = _mm_loadu_si128(v9 - 6);
    v20 = _mm_loadu_si128(v9 - 5);
    v9[2].m128i_i32[0] = v18;
    v9[1] = v20;
    if ( v19 )
      v9[2].m128i_i64[1] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    v21 = (void *)v9[3].m128i_i64[0];
    v22 = v9[-3].m128i_i64[0];
    v9[-3].m128i_i64[0] = 0;
    v23 = _mm_loadu_si128((__m128i *)((char *)v9 - 40));
    *(__m128i *)((char *)&v9[-3] + 8) = 0;
    if ( v21 )
    {
      v9[3].m128i_i64[1] = 0;
      v25 = v23;
      qfree(v21);
      v23 = _mm_load_si128(&v25);
    }
    v24 = v9[-2].m128i_i64[1];
    v9[3].m128i_i64[0] = v22;
    *(__m128i *)((char *)v9 + 56) = v23;
    v9[4].m128i_i64[1] = v24;
    v9[5].m128i_i32[0] = v9[-1].m128i_i32[0];
    v9[5].m128i_i32[2] = v9[-1].m128i_i32[2];
  }
  v10 = (void *)v2[2].m128i_i64[1];
  if ( v10 )
  {
    qfree(v10);
    v2[2].m128i_i64[1] = 0;
  }
  v11 = v31;
  *v2 = _mm_load_si128(&v29);
  v12 = _mm_load_si128(&v30);
  v2[2].m128i_i32[0] = v11;
  v2[1] = v12;
  if ( v3 )
    v2[2].m128i_i64[1] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v13 = (void *)v2[3].m128i_i64[0];
  v33 = 0;
  v34 = 0;
  if ( v13 )
  {
    v2[3].m128i_i64[1] = 0;
    qfree(v13);
  }
  v14 = v26;
  v15 = _mm_load_si128(&v28);
  v2[4].m128i_i64[1] = v6;
  v2[5].m128i_i32[0] = v7;
  v2[3].m128i_i64[0] = v14;
  LODWORD(v14) = v27;
  *(__m128i *)((char *)v2 + 56) = v15;
  v2[5].m128i_i32[2] = v14;
  v32 = v3;
  v35.m128i_i64[0] = v6;
  v35.m128i_i32[2] = v7;
  sub_4A82A0(&v29);
  return v37 - __readfsqword(0x28u);
}

