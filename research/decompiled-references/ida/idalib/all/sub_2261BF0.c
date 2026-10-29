__int64 __fastcall sub_2261BF0(double *a1, double *a2, size_t a3, __int64 a4)
{
  double *v6; // r13
  double v8; // rcx
  __int64 *v9; // rbx
  __int64 v10; // rbp
  const void *v11; // rsi
  int v12; // eax
  __int64 v13; // rbx
  double v14; // rdx
  __int64 v15; // rax
  __m128i si128; // xmm1
  __int64 v17; // rbx
  double v18; // rcx
  __m128i *v19; // rdi
  __m128i v20; // xmm2
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 *v24; // rbx
  double v25; // rcx
  const void *v26; // rsi
  int v27; // eax
  double v28[3]; // [rsp+0h] [rbp-148h] BYREF
  __int64 v29; // [rsp+18h] [rbp-130h] BYREF
  _QWORD *v30; // [rsp+20h] [rbp-128h] BYREF
  __int16 v31; // [rsp+40h] [rbp-108h]
  void *v32; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v33; // [rsp+58h] [rbp-F0h]
  __m128i v34; // [rsp+60h] [rbp-E8h] BYREF
  __m128 v35; // [rsp+70h] [rbp-D8h] BYREF
  __int64 v36; // [rsp+80h] [rbp-C8h]
  __int64 v37; // [rsp+88h] [rbp-C0h]
  __int64 v38; // [rsp+90h] [rbp-B8h]
  __int64 v39; // [rsp+98h] [rbp-B0h]
  char v40; // [rsp+A0h] [rbp-A8h]
  __m128i *v41; // [rsp+B0h] [rbp-98h] BYREF
  __int64 v42; // [rsp+B8h] [rbp-90h]
  __m128i v43; // [rsp+C0h] [rbp-88h] BYREF
  __m128i v44; // [rsp+D0h] [rbp-78h] BYREF
  __int64 v45; // [rsp+E0h] [rbp-68h]
  __int64 v46; // [rsp+E8h] [rbp-60h]
  __int64 v47; // [rsp+F0h] [rbp-58h]
  __int64 v48; // [rsp+F8h] [rbp-50h]
  char v49; // [rsp+100h] [rbp-48h]

  v6 = a1;
  if ( a4 )
  {
    a1 = (double *)*(unsigned int *)(a4 + 8);
    if ( (_DWORD)a1 )
      BUG();
    v8 = *(double *)(a4 + 56);
    v9 = *(__int64 **)(a4 + 48);
    if ( v9 != *(__int64 **)&v8 )
    {
      if ( a3 )
      {
        while ( 1 )
        {
          v10 = *v9;
          if ( !*(_DWORD *)(*v9 + 8) && a3 == *(_QWORD *)(v10 + 24) )
          {
            v11 = *(const void **)(v10 + 16);
            a1 = a2;
            v28[0] = v8;
            v12 = memcmp(a2, v11, a3);
            v8 = v28[0];
            if ( !v12 )
              break;
          }
          if ( *(__int64 **)&v8 == ++v9 )
            goto LABEL_9;
        }
      }
      else
      {
        while ( 1 )
        {
          v10 = *v9;
          if ( !*(_DWORD *)(*v9 + 8) && !*(_QWORD *)(v10 + 24) )
            break;
          if ( *(__int64 **)&v8 == ++v9 )
            goto LABEL_9;
        }
      }
      return v10;
    }
LABEL_9:
    v13 = std::chrono::_V2::system_clock::now((std::chrono::_V2::system_clock *)a1);
    *(_QWORD *)&v28[1] = sub_225C160();
    v28[0] = v14;
    v31 = 257;
    sub_2253560(&v32, &v30);
    v39 = 0x1FF00000003LL;
    v41 = &v43;
    v35 = _mm_loadh_ps(v28);
    v36 = v13;
    v37 = 0;
    v38 = 0;
    v40 = 0;
    if ( v32 == &v34 )
    {
      v43 = _mm_load_si128(&v34);
    }
    else
    {
      v41 = (__m128i *)v32;
      v43.m128i_i64[0] = v34.m128i_i64[0];
    }
    v15 = v33;
    si128 = _mm_load_si128((const __m128i *)&v35);
    *(_QWORD *)&v28[0] = &v41;
    v33 = 0;
    v42 = v15;
    v32 = &v34;
    v44 = si128;
    v45 = v36;
    v34.m128i_i8[0] = 0;
    v46 = 0;
    v47 = 0;
    v48 = 0x1FF00000003LL;
    v49 = 0;
    v17 = operator new(0xA0u);
    *(_DWORD *)(v17 + 8) = 0;
    *(_QWORD *)v17 = &off_2BEB750;
    *(_QWORD *)(v17 + 16) = v17 + 32;
    sub_2259A00((_QWORD *)(v17 + 16), a2, (__int64)a2 + a3);
    v18 = v28[0];
    *(_OWORD *)(v17 + 48) = 0;
    *(_QWORD *)(v17 + 64) = 0;
    *(_QWORD *)v17 = &off_2BEB770;
    *(_QWORD *)(v17 + 72) = v17 + 88;
    if ( v41 == (__m128i *)(*(_QWORD *)&v18 + 16LL) )
    {
      *(__m128i *)(v17 + 88) = _mm_load_si128(&v43);
    }
    else
    {
      *(_QWORD *)(v17 + 72) = v41;
      *(_QWORD *)(v17 + 88) = v43.m128i_i64[0];
    }
    v19 = (__m128i *)v32;
    v29 = v17;
    v20 = _mm_load_si128(&v44);
    *(_QWORD *)(v17 + 80) = v42;
    v21 = v45;
    *(__m128i *)(v17 + 104) = v20;
    *(_QWORD *)(v17 + 120) = v21;
    *(_QWORD *)(v17 + 128) = v46;
    *(_QWORD *)(v17 + 136) = v47;
    *(_QWORD *)(v17 + 144) = v48;
    *(_BYTE *)(v17 + 152) = v49;
    if ( v19 != &v34 )
    {
      v28[0] = v18;
      operator delete(v19);
      v18 = v28[0];
    }
    if ( a4 )
    {
      v22 = v29;
      v29 = 0;
      v41 = (__m128i *)v22;
      sub_2261BB0(a4 + 48, *(__int64 **)&v18);
      if ( v41 )
        (*(void (__fastcall **)(__m128i *))(v41->m128i_i64[0] + 8))(v41);
      v10 = *(_QWORD *)(*(_QWORD *)(a4 + 56) - 8LL);
    }
    else
    {
      sub_2261BB0((__int64)(v6 + 2), &v29);
      v10 = *(_QWORD *)(*((_QWORD *)v6 + 3) - 8LL);
    }
    if ( v29 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 8LL))(v29);
    return v10;
  }
  v24 = *((__int64 **)a1 + 2);
  v25 = a1[3];
  if ( v24 == *(__int64 **)&v25 )
    goto LABEL_9;
  if ( a3 )
  {
    while ( 1 )
    {
      v10 = *v24;
      if ( a3 == *(_QWORD *)(*v24 + 24) )
      {
        v26 = *(const void **)(v10 + 16);
        a1 = a2;
        v28[0] = v25;
        v27 = memcmp(a2, v26, a3);
        v25 = v28[0];
        if ( !v27 )
          break;
      }
      if ( *(__int64 **)&v25 == ++v24 )
        goto LABEL_9;
    }
  }
  else
  {
    while ( 1 )
    {
      v10 = *v24;
      if ( !*(_QWORD *)(*v24 + 24) )
        break;
      if ( *(__int64 **)&v25 == ++v24 )
        goto LABEL_9;
    }
  }
  return v10;
}
