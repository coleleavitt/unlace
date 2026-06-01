__m128i *__fastcall sub_620580(__m128i *a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r13
  unsigned int v5; // ebx
  __int64 v7; // rdi
  __m128 v8; // xmm0
  void ***v9; // rbx
  void ***v10; // r13
  void **v11; // r12
  unsigned int v12; // [rsp+0h] [rbp-168h] BYREF
  char v13; // [rsp+4h] [rbp-164h]
  char v14; // [rsp+5h] [rbp-163h]
  int v15; // [rsp+8h] [rbp-160h]
  __m128i *v16; // [rsp+10h] [rbp-158h]
  __m128i v17; // [rsp+20h] [rbp-148h] BYREF
  __m128i v18; // [rsp+30h] [rbp-138h] BYREF
  __m128 v19; // [rsp+40h] [rbp-128h] BYREF
  int v20; // [rsp+50h] [rbp-118h]
  __int128 v21; // [rsp+58h] [rbp-110h]
  __int128 v22; // [rsp+68h] [rbp-100h]
  __int64 (__fastcall *v23)(__int64, __int64, int, unsigned __int64, int, int, __int128, __int128); // [rsp+78h] [rbp-F0h]
  __int64 v24; // [rsp+80h] [rbp-E8h]
  unsigned int *v25; // [rsp+88h] [rbp-E0h]
  __int16 v26; // [rsp+90h] [rbp-D8h]
  unsigned __int64 v27; // [rsp+94h] [rbp-D4h]
  char v28; // [rsp+9Ch] [rbp-CCh]
  __int128 v29; // [rsp+A0h] [rbp-C8h]
  __int64 v30; // [rsp+B0h] [rbp-B8h]
  void *ptr; // [rsp+C0h] [rbp-A8h]
  __int64 v32; // [rsp+C8h] [rbp-A0h]
  _BYTE v33[40]; // [rsp+D0h] [rbp-98h] BYREF
  void ***v34; // [rsp+F8h] [rbp-70h]
  __int64 v35; // [rsp+100h] [rbp-68h]
  _BYTE v36[96]; // [rsp+108h] [rbp-60h] BYREF

  if ( a3 )
  {
    if ( !a2 )
      BUG();
    v4 = *(_QWORD *)(a2 + 8);
    v5 = sub_1168EB0(a3, *(_QWORD *)(v4 + 32), *(_QWORD *)(*(_QWORD *)(v4 + 80) + 2160LL));
    sub_638F50(&v17, 71, 0);
    if ( v5 )
    {
      v7 = *(_QWORD *)(v4 + 32);
      v12 = v5;
      v16 = &v17;
      v15 = 0;
      v13 = sub_CAC7C0(v7, v5, 0);
      v8 = _mm_loadh_ps((const double *)(a2 + 8));
      v23 = sub_600560;
      v26 = 1;
      v19 = v8;
      v27 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v5), 224).m128i_u64[0];
      v14 = 0;
      v24 = 0;
      v25 = &v12;
      v28 = 0;
      v30 = 0;
      ptr = v33;
      v32 = 0x500000000LL;
      v34 = (void ***)v36;
      v35 = 0x500000000LL;
      v20 = 71;
      v29 = 0;
      v21 = 0;
      v22 = 0;
      sub_61ED80((__int64)&v19);
      v9 = v34;
      v10 = &v34[(unsigned int)v35];
      if ( v34 != v10 )
      {
        do
        {
          v11 = *v9;
          if ( *v9 )
          {
            if ( *v11 != v11 + 2 )
              free(*v11);
            operator delete(v11, 0x290u);
          }
          ++v9;
        }
        while ( v10 != v9 );
        v10 = v34;
      }
      if ( v10 != (void ***)v36 )
        free(v10);
      if ( ptr != v33 )
        free(ptr);
    }
    *a1 = _mm_load_si128(&v17);
    a1[1] = _mm_load_si128(&v18);
  }
  else
  {
    sub_638F50(a1, 70, 0);
  }
  return a1;
}

