unsigned __int64 __fastcall sub_487AD0(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 v4; // rdi
  __int64 v6; // rdi
  __int64 v7; // rax
  __m128i si128; // xmm3
  unsigned __int64 v9; // rbp
  void *v10; // r12
  void *v11; // rdi
  __m128i v12; // xmm0
  __int64 v13; // rbp
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  __int64 v23[2]; // [rsp+0h] [rbp-168h] BYREF
  int v24; // [rsp+10h] [rbp-158h]
  int v25[2]; // [rsp+18h] [rbp-150h]
  void *v26; // [rsp+20h] [rbp-148h] BYREF
  int v27[4]; // [rsp+28h] [rbp-140h]
  int v28[2]; // [rsp+38h] [rbp-130h]
  int v29; // [rsp+40h] [rbp-128h]
  int v30; // [rsp+48h] [rbp-120h]
  void *ptr; // [rsp+50h] [rbp-118h] BYREF
  void *v32[2]; // [rsp+58h] [rbp-110h]
  int v33[2]; // [rsp+68h] [rbp-100h]
  int v34; // [rsp+70h] [rbp-F8h]
  int v35; // [rsp+78h] [rbp-F0h]
  __int64 v36; // [rsp+80h] [rbp-E8h] BYREF
  int v37[2]; // [rsp+88h] [rbp-E0h]
  int v38[2]; // [rsp+90h] [rbp-D8h]
  void *src; // [rsp+98h] [rbp-D0h] BYREF
  int v40[4]; // [rsp+A0h] [rbp-C8h]
  int v41[2]; // [rsp+B0h] [rbp-B8h]
  int v42; // [rsp+B8h] [rbp-B0h]
  int v43[2]; // [rsp+C0h] [rbp-A8h] BYREF
  int v44[2]; // [rsp+C8h] [rbp-A0h]
  int v45[2]; // [rsp+D0h] [rbp-98h]
  void *v46; // [rsp+D8h] [rbp-90h] BYREF
  int v47[4]; // [rsp+E0h] [rbp-88h]
  int v48[2]; // [rsp+F0h] [rbp-78h]
  int v49; // [rsp+F8h] [rbp-70h]
  int v50[2]; // [rsp+100h] [rbp-68h] BYREF
  void *v51; // [rsp+108h] [rbp-60h]
  __int64 v52[2]; // [rsp+110h] [rbp-58h]
  int v53; // [rsp+120h] [rbp-48h]
  int v54[2]; // [rsp+128h] [rbp-40h]
  __int64 v55; // [rsp+130h] [rbp-38h]

  v4 = *(int *)(a1 + 8);
  *(_QWORD *)v54 = __readfsqword(0x28u);
  v36 = (__int64)&off_2B2B6F8;
  src = nullptr;
  *(_QWORD *)v41 = 0;
  v42 = -1;
  *(_OWORD *)v40 = 0;
  *(_QWORD *)v37 = switch_dbctx(v4);
  *(_QWORD *)v38 = a1;
  v51 = nullptr;
  *(_QWORD *)v25 = &v36;
  *(_QWORD *)v50 = &v36;
  *(__m128i *)v23 = _mm_unpacklo_epi64(
                      _mm_loadl_epi64((const __m128i *)off_2B2C410),
                      (__m128i)(unsigned __int64)sub_47F1C0);
  *(_OWORD *)v52 = *(_OWORD *)v23;
  sub_486110(a1, a3, (__int64)v50);
  if ( v52[0] )
    ((void (__fastcall *)(int *, int *, __int64))v52[0])(v50, v50, 3);
  v6 = *(int *)(a2 + 8);
  *(_QWORD *)v44 = 0;
  *(_QWORD *)v45 = 0;
  *(_QWORD *)v43 = &off_2B2B6F8;
  v46 = nullptr;
  *(_QWORD *)v48 = 0;
  v49 = -1;
  *(_OWORD *)v47 = 0;
  v7 = switch_dbctx(v6);
  si128 = _mm_load_si128((const __m128i *)v23);
  *(_QWORD *)v44 = v7;
  *(_QWORD *)v45 = a2;
  v51 = nullptr;
  *(_QWORD *)v50 = v43;
  *(__m128i *)v52 = si128;
  sub_486110(a2, a3, (__int64)v50);
  if ( v52[0] )
    ((void (__fastcall *)(int *, int *, __int64))v52[0])(v50, v50, 3);
  v9 = *(_QWORD *)v40;
  v10 = nullptr;
  if ( *(_QWORD *)v40 )
  {
    v10 = (void *)qalloc_or_throw(16LL * *(_QWORD *)v40);
    memcpy(v10, src, 16 * v9);
  }
  v11 = *(void **)(a1 + 128);
  v12 = _mm_unpacklo_epi64((__m128i)v9, (__m128i)v9);
  if ( v11 )
  {
    *(_QWORD *)(a1 + 136) = 0;
    *(__m128i *)v23 = v12;
    qfree(v11);
    v12 = _mm_load_si128((const __m128i *)v23);
  }
  *(_QWORD *)(a1 + 128) = v10;
  *(_QWORD *)(a1 + 152) = 0;
  *(__m128i *)(a1 + 136) = v12;
  rangeset_t_sub2(a1 + 128);
  v13 = *(_QWORD *)v47;
  v26 = nullptr;
  *(_OWORD *)v27 = 0;
  if ( *(_QWORD *)v47 )
  {
    v26 = (void *)qalloc_or_throw(16LL * *(_QWORD *)v47);
    *(_QWORD *)&v27[2] = v13;
    memcpy(v26, v46, 16 * v13);
    *(_QWORD *)v27 = v13;
  }
  *(_QWORD *)v28 = 0;
  v29 = -1;
  rangeset_t_sub2((int)&v26);
  rangeset_t_add2(a1 + 48);
  rangeset_t_swap(
    (int)&ptr,
    (int)&src,
    v14,
    v15,
    v16,
    v17,
    v23[0],
    v23[1],
    v24,
    v25[0],
    (int)v26,
    v27[0],
    v27[2],
    v28[0],
    v29,
    v30,
    0,
    nullptr,
    0,
    0,
    -1,
    v35,
    v36);
  rangeset_t_intersect(
    (int)&ptr,
    (int)&v46,
    v18,
    v19,
    v20,
    v21,
    v23[0],
    v23[1],
    v24,
    v25[0],
    (int)v26,
    v27[0],
    v27[2],
    v28[0],
    v29,
    v30,
    (int)ptr,
    (int)v32[0],
    (int)v32[1],
    v33[0],
    v34,
    v35,
    v36,
    v37[0],
    v38[0],
    (int)src,
    v40[0],
    v40[2],
    v41[0],
    v42,
    v43[0],
    v44[0],
    v45[0],
    (int)v46,
    v47[0],
    v47[2],
    v48[0],
    v49,
    v50[0],
    v51,
    v52[0],
    v52[1],
    v53,
    v54[0],
    v55);
  rangeset_t_add2(a1 + 88);
  if ( ptr )
  {
    v32[0] = nullptr;
    qfree(ptr);
  }
  if ( v26 )
  {
    *(_QWORD *)v27 = 0;
    qfree(v26);
  }
  *(_QWORD *)v43 = &off_2B2B6F8;
  if ( v46 )
  {
    *(_QWORD *)v47 = 0;
    qfree(v46);
  }
  v36 = (__int64)&off_2B2B6F8;
  if ( src )
  {
    *(_QWORD *)v40 = 0;
    qfree(src);
  }
  return *(_QWORD *)v54 - __readfsqword(0x28u);
}
