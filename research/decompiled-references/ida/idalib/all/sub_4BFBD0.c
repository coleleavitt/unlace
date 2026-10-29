unsigned __int64 __fastcall sub_4BFBD0(__int64 a1)
{
  int v1; // eax
  __int64 v2; // r12
  __int64 v3; // r13
  int v4; // ebp
  __int64 v5; // rbx
  __m128i v6; // xmm2
  __m128i v7; // xmm0
  void *v8; // rdi
  int v9; // eax
  __int64 v10; // rdi
  __m128i v11; // xmm0
  void *v12; // rdi
  __int64 v13; // r14
  __m128i v14; // xmm0
  __int64 v15; // rax
  void *v16; // rdi
  int v17; // eax
  __m128i v18; // xmm0
  void *v19; // rdi
  __int64 v20; // rax
  __m128i v21; // xmm3
  __m128i v23; // [rsp+0h] [rbp-B8h] BYREF
  __m128i v24; // [rsp+10h] [rbp-A8h] BYREF
  __m128i v25; // [rsp+20h] [rbp-98h] BYREF
  __m128i v26; // [rsp+30h] [rbp-88h] BYREF
  int v27; // [rsp+40h] [rbp-78h]
  __int64 v28; // [rsp+48h] [rbp-70h]
  __int64 v29; // [rsp+50h] [rbp-68h]
  __m128i v30; // [rsp+58h] [rbp-60h]
  __m128i v31; // [rsp+68h] [rbp-50h]
  int v32; // [rsp+78h] [rbp-40h]
  unsigned __int64 v33; // [rsp+88h] [rbp-30h]

  v1 = *(_DWORD *)(a1 + 32);
  v33 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 40);
  v25 = _mm_loadu_si128((const __m128i *)a1);
  v27 = v1;
  v26 = _mm_loadu_si128((const __m128i *)(a1 + 16));
  if ( v2 )
    v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *(_QWORD *)(a1 + 48);
  v4 = *(_DWORD *)(a1 + 88);
  v5 = a1 - 96;
  v6 = _mm_loadu_si128((const __m128i *)(a1 + 56));
  *(_OWORD *)(a1 + 56) = 0;
  v7 = _mm_loadu_si128((const __m128i *)(a1 + 72));
  v29 = v3;
  *(_QWORD *)(a1 + 48) = 0;
  v32 = v4;
  v24 = v6;
  v30 = v6;
  v31 = v7;
  if ( v4 >= *(_DWORD *)(a1 - 8) )
  {
    v5 = a1;
    v16 = *(void **)(a1 + 40);
    if ( !v16 )
      goto LABEL_15;
LABEL_14:
    qfree(v16);
    *(_QWORD *)(v5 + 40) = 0;
    goto LABEL_15;
  }
  while ( 1 )
  {
    v8 = *(void **)(v5 + 136);
    if ( v8 )
    {
      qfree(v8);
      *(_QWORD *)(v5 + 136) = 0;
    }
    v9 = *(_DWORD *)(v5 + 32);
    v10 = *(_QWORD *)(v5 + 40);
    *(__m128i *)(v5 + 96) = _mm_loadu_si128((const __m128i *)v5);
    v11 = _mm_loadu_si128((const __m128i *)(v5 + 16));
    *(_DWORD *)(v5 + 128) = v9;
    *(__m128i *)(v5 + 112) = v11;
    if ( v10 )
      *(_QWORD *)(v5 + 136) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v12 = *(void **)(v5 + 144);
    v13 = *(_QWORD *)(v5 + 48);
    *(_QWORD *)(v5 + 48) = 0;
    v14 = _mm_loadu_si128((const __m128i *)(v5 + 56));
    *(_OWORD *)(v5 + 56) = 0;
    if ( v12 )
    {
      *(_QWORD *)(v5 + 152) = 0;
      v23 = v14;
      qfree(v12);
      v14 = _mm_load_si128(&v23);
    }
    v15 = *(_QWORD *)(v5 + 72);
    *(_QWORD *)(v5 + 144) = v13;
    *(__m128i *)(v5 + 152) = v14;
    *(_QWORD *)(v5 + 168) = v15;
    *(_DWORD *)(v5 + 176) = *(_DWORD *)(v5 + 80);
    *(_DWORD *)(v5 + 184) = *(_DWORD *)(v5 + 88);
    if ( *(_DWORD *)(v5 - 8) <= v4 )
      break;
    v5 -= 96;
  }
  v16 = *(void **)(v5 + 40);
  if ( v16 )
    goto LABEL_14;
LABEL_15:
  v17 = v27;
  *(__m128i *)v5 = _mm_load_si128(&v25);
  v18 = _mm_load_si128(&v26);
  *(_DWORD *)(v5 + 32) = v17;
  *(__m128i *)(v5 + 16) = v18;
  if ( v2 )
    *(_QWORD *)(v5 + 40) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v19 = *(void **)(v5 + 48);
  v29 = 0;
  v30 = 0;
  if ( v19 )
  {
    *(_QWORD *)(v5 + 56) = 0;
    qfree(v19);
  }
  v20 = v31.m128i_i64[0];
  v21 = _mm_load_si128(&v24);
  *(_DWORD *)(v5 + 88) = v4;
  *(_QWORD *)(v5 + 48) = v3;
  *(_QWORD *)(v5 + 72) = v20;
  LODWORD(v20) = v31.m128i_i32[2];
  *(__m128i *)(v5 + 56) = v21;
  *(_DWORD *)(v5 + 80) = v20;
  v28 = v2;
  sub_4BED10(&v25);
  return v33 - __readfsqword(0x28u);
}
