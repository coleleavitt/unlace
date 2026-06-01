unsigned __int64 __fastcall sub_2A66D0(__int64 *a1, __int64 a2, unsigned __int64 a3, char a4, __int64 a5)
{
  const char *v7; // rsi
  __int64 v8; // r14
  int v9; // r12d
  char v10; // r13
  bool v11; // bp
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdx
  __m128i v18; // xmm1
  __int64 v19; // r12
  __m128i *v20; // rbp
  __int64 v21; // rdi
  double v22; // xmm0_8
  __m128i v23; // xmm1
  __int64 v24; // rdi
  double v25; // xmm0_8
  __int64 v26; // rdx
  __int64 v27; // rbp
  __int64 v28; // rbx
  __int64 *v29; // rax
  __int64 v30; // rdi
  __int64 v32; // rax
  __m128i v34; // [rsp+10h] [rbp-E8h] BYREF
  __int64 *v35; // [rsp+20h] [rbp-D8h] BYREF
  int v36; // [rsp+28h] [rbp-D0h]
  __int64 v37; // [rsp+30h] [rbp-C8h]
  __int64 v38; // [rsp+40h] [rbp-B8h] BYREF
  __m128i v39; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v40; // [rsp+60h] [rbp-98h] BYREF
  __int128 v41; // [rsp+68h] [rbp-90h]
  __int64 v42; // [rsp+78h] [rbp-80h]
  char v43; // [rsp+88h] [rbp-70h]
  int v44; // [rsp+8Ch] [rbp-6Ch]
  __int64 v45; // [rsp+90h] [rbp-68h]
  __int128 v46; // [rsp+98h] [rbp-60h]
  int v47; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v48; // [rsp+B8h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  v37 = a2;
  v36 = 0;
  v40 = 0;
  v45 = 0;
  v41 = 0;
  v35 = &idaplace_t___vtable;
  v46 = 0;
  linearray_t_ctr(&v40, a5);
  v7 = (const char *)&v35;
  linearray_t_set_place(&v40, &v35);
LABEL_2:
  if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v42 + 128LL))(v42) < a3 )
  {
    while ( 1 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
      v9 = v44;
      v10 = v43;
      v11 = *(_DWORD *)(v8 + 8) == v47;
      v12 = linearray_t_down(&v40);
      if ( !v12 )
        break;
      v13 = a1[1];
      v14 = *a1;
      if ( a1[2] < (unsigned __int64)(v13 + 1) )
      {
        v34.m128i_i64[0] = v12;
        v32 = qvector_reserve(a1, v14, v13 + 1, 48);
        *a1 = v32;
        v14 = v32;
        v12 = v34.m128i_i64[0];
        v13 = a1[1];
      }
      v15 = 48 * v13 + v14;
      *(_QWORD *)v15 = v8;
      *(_QWORD *)(v15 + 8) = 0;
      *(_BYTE *)(v15 + 32) = v10;
      *(_DWORD *)(v15 + 36) = v9;
      *(_BYTE *)(v15 + 40) = v11;
      *(_OWORD *)(v15 + 16) = 0;
      v7 = &s1;
      ++a1[1];
      if ( *(_QWORD *)(v12 + 8) )
        v7 = *(const char **)v12;
      sub_2A6440(&v38, v7, a4);
      v16 = a1[1];
      v17 = *a1;
      v18 = _mm_loadu_si128(&v39);
      v39 = 0;
      v19 = v38;
      v38 = 0;
      v20 = (__m128i *)(v17 + 48 * v16 - 48);
      v21 = v20->m128i_i64[1];
      if ( !v21 )
      {
        v20->m128i_i64[1] = v19;
        v20[1] = v18;
        goto LABEL_2;
      }
      v20[1].m128i_i64[0] = 0;
      v34 = v18;
      v22 = qfree(v21, v7);
      v23 = _mm_load_si128(&v34);
      v24 = v38;
      v20->m128i_i64[1] = v19;
      v20[1] = v23;
      if ( !v24 )
        goto LABEL_2;
      v39.m128i_i64[0] = 0;
      v25 = qfree(v24, v7, v22);
      if ( (*(__int64 (__fastcall **)(__int64, double))(*(_QWORD *)v42 + 128LL))(v42, v25) >= a3 )
        goto LABEL_11;
    }
    qfree(v8, v7);
  }
LABEL_11:
  linearray_t_dtr(&v40);
  if ( v45 )
  {
    *(_QWORD *)&v46 = 0;
    qfree(v45, v7);
  }
  v26 = v40;
  if ( v40 )
  {
    v27 = v41;
    if ( (_QWORD)v41 )
    {
      v28 = 0;
      do
      {
        v29 = (__int64 *)(v26 + 24 * v28);
        v30 = *v29;
        if ( *v29 )
        {
          v29[1] = 0;
          qfree(v30, v7);
          v26 = v40;
        }
        ++v28;
      }
      while ( v27 != v28 );
    }
    *(_QWORD *)&v41 = 0;
    qfree(v26, v7);
  }
  return v48 - __readfsqword(0x28u);
}
