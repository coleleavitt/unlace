__int64 __fastcall sub_16FAA0(const __m128i *a1)
{
  int v1; // eax
  __int64 v2; // rbx
  __int64 v4; // rax
  __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // r12
  __m128i v12; // xmm0
  __m128i v13; // xmm0
  __int64 v14; // rax
  __m128i *v15; // rax
  _OWORD *v16; // rax
  __m128i v17; // xmm0
  __int32 v18; // eax
  __m128i *v19; // rax
  __int64 v20; // rax
  int v21; // edx
  __m128i v22; // [rsp+0h] [rbp-128h] BYREF
  __m128i v23; // [rsp+10h] [rbp-118h] BYREF
  __m128i v24; // [rsp+20h] [rbp-108h] BYREF
  __m128i v25; // [rsp+30h] [rbp-F8h] BYREF
  int v26; // [rsp+40h] [rbp-E8h]
  unsigned __int64 v27; // [rsp+50h] [rbp-D8h] BYREF
  __int128 v28; // [rsp+58h] [rbp-D0h]
  __int128 v29; // [rsp+68h] [rbp-C0h]
  __int128 v30; // [rsp+78h] [rbp-B0h]
  __int64 v31; // [rsp+88h] [rbp-A0h]
  __m128i v32; // [rsp+90h] [rbp-98h]
  __m128i v33; // [rsp+A0h] [rbp-88h]
  __int64 v34; // [rsp+B0h] [rbp-78h]
  __int128 v35; // [rsp+B8h] [rbp-70h]
  _OWORD *v36; // [rsp+C8h] [rbp-60h]
  __int64 v37; // [rsp+D0h] [rbp-58h]
  char v38; // [rsp+D8h] [rbp-50h]
  __int128 v39; // [rsp+DCh] [rbp-4Ch]
  unsigned __int64 v40; // [rsp+F8h] [rbp-30h]

  v40 = __readfsqword(0x28u);
  v1 = internal_register_place_class();
  v2 = qword_255530;
  dword_251378 = v1;
  if ( !qword_255530 )
  {
    v4 = qalloc_or_throw();
    *(_OWORD *)(v4 + 8) = 0;
    v5 = (__int64 *)v4;
    *(_QWORD *)v4 = 0;
    netnode_check();
    if ( netnode_supfirst() != -1 )
    {
      do
      {
        v6 = node2ea();
        v7 = *v5;
        v8 = v6;
        v9 = v5[1];
        if ( v5[2] < (unsigned __int64)(v9 + 1) )
        {
          v10 = qvector_reserve();
          *v5 = v10;
          v7 = v10;
          v9 = v5[1];
        }
        *(_QWORD *)(v7 + 8 * v9) = v8;
        ++v5[1];
      }
      while ( netnode_supnext() != -1 );
    }
    v27 = 0;
    v11 = -1;
    if ( netnode_valobj() > 0 )
      v11 = v27;
    v27 = 0;
    v31 = 0;
    v33.m128i_i64[0] = 0;
    v33.m128i_i64[1] = -1;
    v34 = 0;
    v36 = nullptr;
    v37 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v32 = 0;
    v35 = 0;
    sub_15BF80((__int64)&v24, 1);
    v12 = _mm_load_si128(&v24);
    v38 = 0;
    v32 = v12;
    v13 = _mm_load_si128(&v25);
    LODWORD(v34) = v26;
    v33 = v13;
    v39 = 0;
    v22 = _mm_loadu_si128(a1);
    v22.m128i_i32[1] = v22.m128i_i32[3] - 4;
    sub_15BEB0((__int64)&v27, &v22, 0);
    *((_QWORD *)&v30 + 1) = v5;
    v14 = v5[1];
    v23.m128i_i64[0] = (__int64)off_2356F8;
    v23.m128i_i32[2] = 0x7FFFFFFF;
    v23.m128i_i32[3] = ((_DWORD)v14 == 0) + (_DWORD)v14 - 1;
    v15 = (__m128i *)qalloc();
    if ( !v15 )
      sub_98FF0((__int64)"watchplace");
    *v15 = _mm_load_si128((const __m128i *)&xmmword_255510);
    *((_QWORD *)&v35 + 1) = v15;
    v16 = (_OWORD *)qalloc();
    if ( !v16 )
      sub_98FF0((__int64)"watchplace");
    v17 = _mm_load_si128(&v23);
    v24.m128i_i64[0] = (__int64)off_2356F8;
    v24.m128i_i32[2] = 0;
    *v16 = v17;
    v36 = v16;
    v18 = v23.m128i_i32[3];
    if ( v23.m128i_u32[3] > v11 )
      v18 = v11;
    v24.m128i_i32[3] = v18;
    if ( (_QWORD)v35 )
    {
      qfree();
      *(_QWORD *)&v35 = 0;
    }
    v19 = (__m128i *)qalloc();
    if ( !v19 )
      sub_98FF0((__int64)"watchplace");
    *v19 = _mm_load_si128(&v24);
    *(_QWORD *)&v35 = v19;
    v2 = operator new(0x490u);
    sub_169490((TView *)v2, "Watch List", (int *)&v27);
    *(_QWORD *)v2 = &off_23BBB0;
    *(_QWORD *)(v2 + 72) = &off_23BE80;
    *(_QWORD *)(v2 + 104) = off_23BE98;
    *(_QWORD *)(v2 + 160) = off_23BEC8;
    sub_162290(v2, (const __m128i *)&v27);
    qword_255530 = v2;
    *(_WORD *)(v2 + 50) = 1409;
    v20 = sub_163F30(v2, 0);
    v21 = -1;
    if ( v20 && (unsigned __int64)*(unsigned int *)(v20 + 12) < *(_QWORD *)(*(_QWORD *)(v2 + 760) + 8LL) )
      v21 = *(_DWORD *)(v20 + 12);
    dword_25137C = v21;
    qfree();
    *((_QWORD *)&v35 + 1) = 0;
    qfree();
    v36 = nullptr;
    if ( (_QWORD)v35 )
      qfree();
  }
  return v2;
}

