unsigned __int64 __fastcall sub_48BFB0(__int64 a1, __m128i *a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // rbp
  __int64 *v5; // rbx
  __int64 *v7; // rbp
  __int64 v8; // r9
  __int64 *v9; // r10
  __int64 v10; // rdi
  __m128i v11; // xmm0
  __int64 *v12; // rbx
  __int64 v13; // rax
  __m128i v14; // xmm0
  __m128i v16; // xmm0
  __m128i v17; // xmm0
  __int64 v19; // [rsp+0h] [rbp-108h]
  __int64 v20; // [rsp+8h] [rbp-100h]
  __int64 v21; // [rsp+10h] [rbp-F8h]
  __int64 *v22; // [rsp+18h] [rbp-F0h]
  __m128i v23; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v24; // [rsp+30h] [rbp-D8h]
  __m128i v25; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v26; // [rsp+50h] [rbp-B8h]
  __m128i v27; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+70h] [rbp-98h]
  __m128i v29; // [rsp+80h] [rbp-88h] BYREF
  __int64 v30; // [rsp+90h] [rbp-78h]
  __m128i v31; // [rsp+98h] [rbp-70h] BYREF
  __int64 v32; // [rsp+A8h] [rbp-60h]
  __int64 v33; // [rsp+B0h] [rbp-58h]
  __m128i *v34; // [rsp+B8h] [rbp-50h]
  __int64 v35; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v36; // [rsp+C8h] [rbp-40h]

  v3 = a1;
  v4 = *(_QWORD *)(a3 + 8);
  v5 = *(__int64 **)a3;
  v36 = __readfsqword(0x28u);
  v30 = 0;
  v7 = &v5[2 * v4];
  v29 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
  v31 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
  v32 = 0;
  v33 = -1;
  v34 = a2;
  v35 = a1;
  if ( v7 == v5 )
    goto LABEL_25;
  while ( 1 )
  {
    if ( *v5 == -1 )
      goto LABEL_21;
LABEL_3:
    sub_48B610((__int64)&v25, v35, v5);
    if ( (v25.m128i_i32[1] | v25.m128i_i32[0]) < 0 || !v26 )
      break;
    if ( (v29.m128i_i32[1] | v29.m128i_i32[0]) < 0 || !v30 )
    {
      v14 = _mm_load_si128(&v25);
      v32 = v26;
      v30 = v26;
      v31 = v14;
      v29 = v14;
      break;
    }
    v8 = *v5;
    if ( *v5 == v33 && v25.m128i_i32[0] == v31.m128i_i32[0] + 1 )
    {
      v31 = _mm_load_si128(&v25);
      v32 = v26;
      break;
    }
    v9 = &v34->m128i_i64[1];
    if ( v32 )
    {
      v10 = *(_QWORD *)(v35 + 32);
      if ( (_DWORD)v10 == v31.m128i_i32[1] )
      {
        v17 = _mm_loadu_si128(&v31);
        v28 = v32;
        v27 = v17;
      }
      else
      {
        v22 = &v34->m128i_i64[1];
        v21 = *v5;
        (*(void (__fastcall **)(__m128i *, __int64, _QWORD, _QWORD, __m128i *))(*(_QWORD *)v32 + 112LL))(
          &v27,
          v32,
          v31.m128i_u32[0],
          (unsigned int)v10,
          &v31);
        v8 = v21;
        v9 = v22;
      }
    }
    else
    {
      v27 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
      v28 = 0;
    }
    v20 = v8;
    v5 += 2;
    QT::QItemSelection::select(v9, &v29, &v27);
    v11 = _mm_load_si128(&v25);
    v30 = v26;
    v32 = v26;
    v33 = v20;
    v29 = v11;
    v31 = v11;
    if ( v7 == v5 )
      goto LABEL_13;
  }
  while ( 1 )
  {
    v5 += 2;
    if ( v7 == v5 )
      break;
    if ( *v5 != -1 )
      goto LABEL_3;
LABEL_21:
    if ( !v5[1] )
      goto LABEL_3;
  }
LABEL_13:
  v3 = a1;
  if ( (v29.m128i_i32[1] | v29.m128i_i32[0]) >= 0 && v30 )
  {
    v12 = &v34->m128i_i64[1];
    if ( v32 )
    {
      v13 = *(_QWORD *)(v35 + 32);
      if ( (_DWORD)v13 == v31.m128i_i32[1] )
      {
        v16 = _mm_loadu_si128(&v31);
        v28 = v32;
        v27 = v16;
      }
      else
      {
        (*(void (__fastcall **)(__m128i *, __int64, _QWORD, _QWORD, __m128i *))(*(_QWORD *)v32 + 112LL))(
          &v27,
          v32,
          v31.m128i_u32[0],
          (unsigned int)v13,
          &v31);
        v3 = a1;
      }
    }
    else
    {
      v27 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
      v28 = 0;
    }
    v19 = v3;
    QT::QItemSelection::select(v12, &v29, &v27);
    v3 = v19;
  }
LABEL_25:
  if ( *(_QWORD *)(a3 + 24) != -1 || !*(_QWORD *)(a3 + 32) )
  {
    sub_48B610((__int64)&v23, v3, (__int64 *)(a3 + 24));
    a2[2] = _mm_loadu_si128(&v23);
    a2[3].m128i_i64[0] = v24;
  }
  return v36 - __readfsqword(0x28u);
}
