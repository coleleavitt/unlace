unsigned __int64 __fastcall sub_473270(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v5; // rdi
  __int64 v7; // rdi
  __int64 v8; // rax
  __m128i si128; // xmm3
  const char *v10; // rsi
  __int64 v11; // rbp
  void *v12; // r12
  void *v13; // rdi
  __m128i v14; // xmm0
  __int64 v15; // rbp
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  int v23; // r9d
  int v25[4]; // [rsp+0h] [rbp-168h] BYREF
  int v26; // [rsp+10h] [rbp-158h]
  int v27[2]; // [rsp+18h] [rbp-150h]
  void *v28; // [rsp+20h] [rbp-148h] BYREF
  int v29[4]; // [rsp+28h] [rbp-140h]
  void *v30; // [rsp+38h] [rbp-130h]
  __int64 v31; // [rsp+40h] [rbp-128h]
  int v32; // [rsp+48h] [rbp-120h]
  void *ptr; // [rsp+50h] [rbp-118h] BYREF
  int v34[4]; // [rsp+58h] [rbp-110h]
  int v35[2]; // [rsp+68h] [rbp-100h]
  int v36; // [rsp+70h] [rbp-F8h]
  int v37; // [rsp+78h] [rbp-F0h]
  int v38[2]; // [rsp+80h] [rbp-E8h] BYREF
  int v39[2]; // [rsp+88h] [rbp-E0h]
  int v40[2]; // [rsp+90h] [rbp-D8h]
  void *src; // [rsp+98h] [rbp-D0h] BYREF
  __int64 v42[2]; // [rsp+A0h] [rbp-C8h]
  int v43[2]; // [rsp+B0h] [rbp-B8h]
  int v44; // [rsp+B8h] [rbp-B0h]
  __int64 v45; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v46; // [rsp+C8h] [rbp-A0h]
  __int64 v47; // [rsp+D0h] [rbp-98h]
  void *v48; // [rsp+D8h] [rbp-90h] BYREF
  __int128 v49; // [rsp+E0h] [rbp-88h]
  __int64 v50; // [rsp+F0h] [rbp-78h]
  int v51; // [rsp+F8h] [rbp-70h]
  void *v52; // [rsp+100h] [rbp-68h] BYREF
  __int64 v53; // [rsp+108h] [rbp-60h]
  __m128i v54; // [rsp+110h] [rbp-58h]
  unsigned __int64 v55; // [rsp+128h] [rbp-40h]

  v5 = *(int *)(a1 + 8);
  v55 = __readfsqword(0x28u);
  *(_QWORD *)v38 = &off_2B01738;
  src = nullptr;
  *(_QWORD *)v43 = 0;
  v44 = -1;
  *(_OWORD *)v42 = 0;
  *(_QWORD *)v39 = switch_dbctx(v5);
  *(_QWORD *)v40 = a1;
  v53 = 0;
  *(_QWORD *)v27 = v38;
  v52 = v38;
  *(__m128i *)v25 = _mm_unpacklo_epi64(
                      _mm_loadl_epi64((const __m128i *)off_2B02450),
                      (__m128i)(unsigned __int64)sub_46AC70);
  v54 = *(__m128i *)v25;
  sub_471910(a1, a3, (__int64)&v52);
  if ( v54.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v54.m128i_i64[0])(&v52, &v52, 3);
  v7 = *(int *)(a2 + 8);
  v46 = 0;
  v47 = 0;
  v45 = (__int64)&off_2B01738;
  v48 = nullptr;
  v50 = 0;
  v51 = -1;
  v49 = 0;
  v8 = switch_dbctx(v7);
  si128 = _mm_load_si128((const __m128i *)v25);
  v10 = (const char *)a3;
  v46 = v8;
  v47 = a2;
  v53 = 0;
  v52 = &v45;
  v54 = si128;
  sub_471910(a2, a3, (__int64)&v52);
  if ( v54.m128i_i64[0] )
  {
    v10 = (const char *)&v52;
    ((void (__fastcall *)(void **, void **, __int64))v54.m128i_i64[0])(&v52, &v52, 3);
  }
  v11 = v42[0];
  v12 = nullptr;
  if ( v42[0] )
  {
    v12 = (void *)qalloc_or_throw(8 * v42[0], v10);
    memcpy(v12, src, 8 * v11);
  }
  v13 = *(void **)(a1 + 128);
  v14 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v11, (__m128i)(unsigned __int64)v11);
  if ( v13 )
  {
    *(_QWORD *)(a1 + 136) = 0;
    *(__m128i *)v25 = v14;
    qfree(v13);
    v14 = _mm_load_si128((const __m128i *)v25);
  }
  *(_QWORD *)(a1 + 128) = v12;
  *(_QWORD *)(a1 + 152) = 0;
  *(__m128i *)(a1 + 136) = v14;
  rangeset_t_sub2(a1 + 128);
  v15 = v49;
  v28 = nullptr;
  *(_OWORD *)v29 = 0;
  if ( (_QWORD)v49 )
  {
    v28 = (void *)qalloc_or_throw(8 * v49, (const char *)&v48);
    *(_QWORD *)&v29[2] = v15;
    memcpy(v28, v48, 8 * v15);
    *(_QWORD *)v29 = v15;
  }
  v30 = nullptr;
  LODWORD(v31) = -1;
  rangeset_t_sub2((int)&v28);
  rangeset_t_add2(a1 + 48);
  v36 = -1;
  *(_QWORD *)v35 = 0;
  rangeset_t_swap(
    (int)&ptr,
    (int)&src,
    v16,
    v17,
    v18,
    v19,
    v25[0],
    v25[2],
    v26,
    v27[0],
    (int)v28,
    v29[0],
    v29[2],
    v30,
    v31,
    v32,
    0,
    0,
    0);
  rangeset_t_intersect(
    (int)&ptr,
    (int)&v48,
    v20,
    v21,
    v22,
    v23,
    v25[0],
    v25[2],
    v26,
    v27[0],
    (int)v28,
    v29[0],
    v29[2],
    (int)v30,
    v31,
    v32,
    (int)ptr,
    v34[0],
    v34[2],
    v35[0],
    v36,
    v37,
    v38[0],
    v39[0],
    v40[0],
    src,
    v42[0],
    v42[1],
    v43[0],
    v44,
    v45);
  rangeset_t_add2(a1 + 88);
  if ( ptr )
  {
    *(_QWORD *)v34 = 0;
    qfree(ptr);
  }
  if ( v28 )
  {
    *(_QWORD *)v29 = 0;
    qfree(v28);
  }
  v45 = (__int64)&off_2B01738;
  if ( v48 )
  {
    *(_QWORD *)&v49 = 0;
    qfree(v48);
  }
  *(_QWORD *)v38 = &off_2B01738;
  if ( src )
  {
    v42[0] = 0;
    qfree(src);
  }
  return v55 - __readfsqword(0x28u);
}

