__int64 __fastcall sub_3FE0C0(__int64 a1, __int64 a2, __int64 a3, char a4, int a5, int a6, int a7, int *a8)
{
  bool v8; // zf
  char *v9; // rcx
  int *v10; // r13
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __m128i v15; // xmm1
  __m128 v16; // xmm0
  __int64 v17; // rax
  __int64 *v18; // r15
  __int64 v19; // rsi
  __int16 v20; // r12
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r14
  int v24; // ebx
  __int64 v25; // rax
  __int64 v26; // rbx
  unsigned __int8 v27; // [rsp+23h] [rbp-65h]
  __int16 v28; // [rsp+24h] [rbp-64h]
  __int64 v29; // [rsp+30h] [rbp-58h] BYREF
  __int64 v30; // [rsp+38h] [rbp-50h] BYREF
  __m128i v31; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v32; // [rsp+50h] [rbp-38h]

  v8 = (a4 & 2) == 0;
  v28 = a5;
  v9 = "int";
  v32 = __readfsqword(0x28u);
  v10 = a8;
  v29 = 0;
  if ( !v8 )
    v9 = "float";
  v27 = sub_3FDEB0(
          &v29,
          a2,
          (__int64)"%s%dx%dx%d_t",
          v9,
          (unsigned int)(8 * a6),
          (unsigned int)(a5 / a6),
          (unsigned int)a7);
  if ( v27 )
  {
    *(_BYTE *)a1 = 15;
    copy_tinfo_t(a1 + 24, &v29);
    *(_DWORD *)(a1 + 4) = get_tinfo_size(0, v29, 0);
    v30 = 0;
    v31 = 0;
    v12 = qvector_reserve(&v30, 0, 4, 1);
    v30 = v12;
    v31.m128i_i64[0] = 4;
    *(_WORD *)v12 = 24950;
    *(_BYTE *)(v12 + 2) = 108;
    *(_BYTE *)(v30 + 3) = 0;
    v13 = qalloc_or_throw(56);
    *(_DWORD *)v13 = 0;
    v14 = v29;
    *(_QWORD *)(v13 + 8) = 0;
    v15 = _mm_loadu_si128(&v31);
    *(_QWORD *)(v13 + 48) = v14;
    v16 = _mm_loadh_ps((const double *)&v30);
    *(__m128i *)(v13 + 32) = v15;
    *(__m128 *)(v13 + 16) = v16;
    *(_QWORD *)(a1 + 8) = v13;
    v30 = 0;
    v29 = 0;
    v31 = 0;
    v17 = qalloc_or_throw(24);
    *(_QWORD *)v17 = 0;
    v18 = (__int64 *)v17;
    *(_OWORD *)(v17 + 8) = 0;
    if ( a7 > 0 )
    {
      v19 = 0;
      v20 = 0;
      v21 = 0;
      v22 = 0;
      while ( 1 )
      {
        if ( v21 < v22 + 1 )
        {
          v25 = qvector_reserve(v18, v19, v22 + 1, 24);
          *v18 = v25;
          v19 = v25;
          v22 = v18[1];
        }
        v23 = v19 + 24 * v22;
        *(_QWORD *)v23 = 0;
        *(_DWORD *)(v23 + 16) = 0xFFFF;
        *(_QWORD *)(v23 + 8) = 0;
        ++v18[1];
        *(_WORD *)(v23 + 16) = v20;
        *(_WORD *)(v23 + 18) = v28;
        v24 = *v10;
        cleanup_argloc(v23);
        *(_DWORD *)v23 = 3;
        v20 += v28;
        ++v10;
        *(_DWORD *)(v23 + 8) = v24;
        if ( &a8[a7] == v10 )
          break;
        v22 = v18[1];
        v21 = v18[2];
        v19 = *v18;
      }
    }
    v26 = *(_QWORD *)(a1 + 8);
    cleanup_argloc(v26);
    if ( v18 )
    {
      *(_DWORD *)v26 = 2;
      *(_QWORD *)(v26 + 8) = v18;
    }
    if ( v30 )
    {
      v31.m128i_i64[0] = 0;
      qfree(v30);
    }
  }
  clear_tinfo_t(&v29);
  return v27;
}
