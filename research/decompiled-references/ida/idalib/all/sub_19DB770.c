__int64 __fastcall sub_19DB770(__int64 *a1, unsigned int *a2, unsigned __int64 *a3, __int64 a4, __m128i si128)
{
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 *v9; // r13
  unsigned __int64 *v10; // rbx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r14
  __int64 v14; // rax
  signed __int64 v15; // rbp
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  unsigned int v18; // ebp
  __int64 v19; // rax
  unsigned __int8 v20; // r9
  unsigned __int16 v21; // r8
  unsigned __int64 v22; // rax
  __int64 v23; // r9
  __int64 result; // rax
  unsigned int v25; // [rsp+8h] [rbp-1E0h]
  unsigned __int64 v26; // [rsp+8h] [rbp-1E0h]
  _QWORD *v28; // [rsp+30h] [rbp-1B8h]
  __int64 v29; // [rsp+48h] [rbp-1A0h] BYREF
  void *ptr; // [rsp+50h] [rbp-198h] BYREF
  __int64 v31; // [rsp+58h] [rbp-190h]
  _BYTE v32[32]; // [rsp+60h] [rbp-188h] BYREF
  void *v33; // [rsp+80h] [rbp-168h] BYREF
  unsigned int v34; // [rsp+88h] [rbp-160h]
  void *v35; // [rsp+110h] [rbp-D8h] BYREF
  __m128 v36; // [rsp+118h] [rbp-D0h]
  _BYTE v37[192]; // [rsp+128h] [rbp-C0h] BYREF

  v7 = sub_168B6C0((__int64)a1);
  v8 = *a3;
  v28 = (_QWORD *)v7;
  if ( a4 == 1 )
    return sub_19DB3B0(a1, *a2, v8, *(double *)si128.m128i_i64);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  v9 = &a3[a4];
  v35 = v37;
  v36 = (__m128)si128;
  ptr = v32;
  v31 = 0x800000000LL;
  if ( a3 == v9 )
  {
LABEL_17:
    v19 = sub_A72040(v28, *(_QWORD *)(v8 + 8));
    if ( !v19 || (unsigned int)*(unsigned __int8 *)(v19 + 16) - 2 > 1 )
      BUG();
    v20 = *(_BYTE *)(v19 + 18);
    v21 = *(_WORD *)(v19 + 18);
    v34 = 32;
    v33 = (void *)(v36.m128_u64[0] + 1);
    v22 = sub_A70F70((__int64)v28, *(_QWORD *)(v19 + 32), (__int64)&v33, nullptr, (v21 >> 6) & 7, (v20 >> 3) & 7);
    v23 = v22;
    if ( v34 > 0x40 && v33 )
    {
      v26 = v22;
      operator delete[](v33);
      v23 = v26;
    }
    v8 = sub_C09810(v28, v35, v36.m128_u64[0], 0, 0, v23, (__int64)ptr, (unsigned int)v31);
    if ( ptr != v32 )
      free(ptr);
    if ( v35 != v37 )
      free(v35);
    return sub_19DB3B0(a1, *a2, v8, *(double *)si128.m128i_i64);
  }
  if ( (*(_BYTE *)(v8 + 2) & 0x38) == 0 )
  {
    v10 = a3 + 1;
    v11 = 128;
    v12 = 0;
    v13 = v8;
    while ( 1 )
    {
      v17 = *(unsigned int *)(v13 + 4);
      v18 = *(_DWORD *)(v13 + 16) * ((*(_WORD *)(v13 + 2) >> 6) & 7);
      if ( v18 + v12 > v11 )
      {
        v25 = *(_DWORD *)(v13 + 4);
        sub_2236E10(&v35, v37, v18 + v12, 1);
        v12 = v36.m128_u64[0];
        v17 = v25;
      }
      if ( v18 )
      {
        memcpy((char *)v35 + v12, (const void *)(v13 + 20 + 4 * v17), v18);
        v12 = v36.m128_u64[0];
      }
      v14 = (unsigned int)v31;
      v36.m128_u64[0] = v18 + v12;
      v15 = 4LL * *(unsigned int *)(v13 + 4);
      v16 = (v15 >> 2) + (unsigned int)v31;
      if ( v16 > HIDWORD(v31) )
      {
        sub_2237220(&ptr, v32, v16, 4);
        v14 = (unsigned int)v31;
      }
      if ( v15 )
      {
        memcpy((char *)ptr + 4 * v14, (const void *)(v13 + 20), v15);
        LODWORD(v14) = v31;
      }
      LODWORD(v31) = (v15 >> 2) + v14;
      if ( v9 == v10 )
      {
        v8 = v13;
        goto LABEL_17;
      }
      v13 = *v10++;
      if ( (*(_BYTE *)(v13 + 2) & 0x38) != 0 )
        break;
      v11 = v36.m128_u64[1];
      v12 = v36.m128_u64[0];
    }
    v8 = v13;
  }
  sub_168B9F0((__int64)&v33, a1, *(_DWORD *)(v8 + 20), 0xD69u, 0);
  v29 = sub_EEC8C0(v8, (__int64)a1, *(double *)si128.m128i_i64);
  sub_1587DB0((__int64)&v33, &v29);
  sub_15F7200(&v33);
  result = 1;
  if ( ptr != v32 )
  {
    free(ptr);
    result = 1;
  }
  if ( v35 != v37 )
  {
    free(v35);
    return 1;
  }
  return result;
}
