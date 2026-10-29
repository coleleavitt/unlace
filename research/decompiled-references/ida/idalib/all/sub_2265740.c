__m128 *__fastcall sub_2265740(__m128 *a1, __int64 a2, const char **a3, __int64 a4)
{
  __int64 v8; // r15
  __int64 v9; // rax
  __m128i *v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rdx
  bool v15; // zf
  void *v16; // rax
  __int64 v17; // rdx
  __int64 v19; // [rsp+8h] [rbp-130h] BYREF
  void *v20; // [rsp+10h] [rbp-128h] BYREF
  __int64 v21; // [rsp+18h] [rbp-120h]
  __m128i v22; // [rsp+20h] [rbp-118h] BYREF
  void *v23; // [rsp+30h] [rbp-108h]
  __int64 v24; // [rsp+38h] [rbp-100h]
  __m128i v25; // [rsp+40h] [rbp-F8h] BYREF
  void *ptr[3]; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v27; // [rsp+68h] [rbp-D0h] BYREF
  __int64 v28; // [rsp+E8h] [rbp-50h]
  char v29; // [rsp+F0h] [rbp-48h]

  sub_2264B90((__int64)ptr, a2, a3, 1, 0);
  if ( (v29 & 1) != 0 )
  {
    *(_DWORD *)a4 = ptr[0];
    v16 = ptr[1];
    goto LABEL_14;
  }
  v8 = v28;
  if ( *(_DWORD *)(v28 + 8) != 1 )
  {
    v16 = (void *)std::_V2::generic_category((std::_V2 *)ptr);
    *(_DWORD *)a4 = 20;
LABEL_14:
    *(_QWORD *)(a4 + 8) = v16;
    v17 = operator new(0x78u);
    *(_QWORD *)(v17 + 8) = 0x100000001LL;
    *(_QWORD *)v17 = off_2C76168;
    memset((void *)(v17 + 16), 0, 0x68u);
    *(_DWORD *)(v17 + 56) = 9;
    *(_QWORD *)(v17 + 24) = v17 + 40;
    *(_QWORD *)(v17 + 16) = &off_2BEB9C8;
    *(_QWORD *)(v17 + 88) = v17 + 104;
    *a1 = 0;
    sub_4343A0((volatile signed __int32 *)v17);
    goto LABEL_15;
  }
  sub_2253560(&v20, (_QWORD **)a3);
  v9 = operator new(0x78u);
  v10 = (__m128i *)v20;
  v11 = v9;
  *(_QWORD *)(v9 + 8) = 0x100000001LL;
  *(_QWORD *)v9 = off_2C76168;
  v19 = v9 + 16;
  v23 = &v25;
  if ( v10 == &v22 )
  {
    v10 = &v25;
    v25 = _mm_load_si128(&v22);
  }
  else
  {
    v23 = v10;
    v25.m128i_i64[0] = v22.m128i_i64[0];
  }
  v12 = v21;
  *(_BYTE *)(v9 + 40) = 0;
  v20 = &v22;
  *(_QWORD *)(v9 + 24) = v9 + 40;
  v24 = v12;
  v22.m128i_i8[0] = 0;
  *(_QWORD *)(v9 + 16) = &off_2BEB9C8;
  v13 = *(_QWORD *)(v8 + 160);
  *(_QWORD *)(v9 + 80) = v8 + 144;
  *(_QWORD *)(v9 + 88) = v9 + 104;
  v21 = 0;
  *(_QWORD *)(v9 + 32) = 0;
  *(_DWORD *)(v9 + 56) = 9;
  *(_QWORD *)(v9 + 64) = a2;
  *(_QWORD *)(v9 + 72) = v13;
  if ( v10 == &v25 )
  {
    *(__m128i *)(v9 + 104) = _mm_load_si128(&v25);
  }
  else
  {
    v14 = v25.m128i_i64[0];
    *(_QWORD *)(v9 + 88) = v10;
    *(_QWORD *)(v9 + 104) = v14;
  }
  *(_QWORD *)(v9 + 96) = v12;
  v23 = &v25;
  v24 = 0;
  v25.m128i_i8[0] = 0;
  sub_2265380(v9 + 16);
  if ( v23 != &v25 )
    operator delete(v23);
  v19 = v11;
  v15 = *(_QWORD *)(v11 + 32) == 0;
  *a1 = _mm_loadh_ps((const double *)&v19);
  if ( v15 )
  {
    *a1 = 0;
    sub_4343A0((volatile signed __int32 *)v11);
  }
  if ( v20 != &v22 )
    operator delete(v20);
LABEL_15:
  if ( (v29 & 1) == 0 && ptr[0] != &v27 )
    free(ptr[0]);
  return a1;
}
