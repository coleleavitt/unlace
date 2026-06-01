void __fastcall sub_1238A80(__int64 a1, __int64 **a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rbx
  __int16 v6; // ax
  int v7; // ebx
  __int64 *v8; // rbx
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rbx
  _QWORD *v12; // r12
  __int64 v13; // r15
  __int64 *v14; // rbx
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rbx
  _QWORD *v18; // r12
  __int64 v19; // r13
  bool v20; // zf
  __int64 v21; // r12
  __int64 v22; // r13
  char *v23; // rsi
  __int64 i; // rbx
  __int64 v25; // rax
  __int64 v26; // rax
  _BYTE *v27; // rdx
  __m128i *v28; // rcx
  __m128i si128; // xmm0
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 j; // rbx
  __int64 v33; // rax
  __m128i *v34; // rcx
  __int64 v35; // rax
  _BYTE *v36; // rdx
  __m128i v37; // xmm0
  double v38[2]; // [rsp+0h] [rbp-98h] BYREF
  _QWORD v39[2]; // [rsp+10h] [rbp-88h] BYREF
  __m128i v40; // [rsp+20h] [rbp-78h] BYREF
  _DWORD v41[2]; // [rsp+30h] [rbp-68h] BYREF
  void *v42; // [rsp+38h] [rbp-60h]
  __int64 v43; // [rsp+40h] [rbp-58h]
  _OWORD v44[5]; // [rsp+48h] [rbp-50h] BYREF

  v3 = a1;
  *(_QWORD *)&v38[0] = a3;
  *(_QWORD *)&v38[1] = a2;
  *(__m128 *)a1 = _mm_loadh_ps(v38);
  v4 = **a2;
  v39[0] = &v40;
  v5 = *(_QWORD *)(v4 + 32);
  sub_1232590(v39, "Error collecting HIP undefined fatbin symbols: %0", (__int64)"");
  v41[1] = 0;
  HIBYTE(v6) = BYTE1(v41[0]) & 0xFE;
  LOBYTE(v6) = -20;
  LOWORD(v41[0]) = v6;
  v42 = v44;
  if ( (__m128i *)v39[0] == &v40 )
  {
    v44[0] = _mm_load_si128(&v40);
  }
  else
  {
    v42 = (void *)v39[0];
    *(_QWORD *)&v44[0] = v40.m128i_i64[0];
  }
  v43 = v39[1];
  v7 = sub_FD5980(v5, (__int64)v41);
  if ( v42 != v44 )
    operator delete(v42);
  *(_DWORD *)(a1 + 16) = v7;
  v8 = a2[10];
  v41[0] = 72;
  v9 = sub_21B6DA0(v8, v41, 1);
  v10 = v8[1];
  v11 = (_QWORD *)(v10 + 8LL * (unsigned int)v9);
  v12 = (_QWORD *)(v10 + 8 * HIDWORD(v9));
  if ( v11 == v12 )
    goto LABEL_9;
  while ( !*v11 || !(unsigned __int8)sub_21B9810(*v11, 72) )
  {
    if ( v12 == ++v11 )
      goto LABEL_9;
  }
  if ( v12 == v11 )
  {
LABEL_9:
    v13 = 0;
  }
  else
  {
    do
    {
      v13 = *v11;
      v30 = *(_QWORD *)(*v11 + 16LL);
      if ( !v30 )
        v30 = *v11;
      ++v11;
      *(_BYTE *)(v30 + 44) |= 1u;
      if ( v11 == v12 )
        break;
      while ( !*v11 || !(unsigned __int8)sub_21B9810(*v11, 72) )
      {
        if ( v12 == ++v11 )
          goto LABEL_10;
      }
    }
    while ( v12 != v11 );
  }
LABEL_10:
  v41[0] = 3397;
  *(_BYTE *)(a1 + 20) = v13 != 0;
  v14 = a2[10];
  v15 = sub_21B6DA0(v14, v41, 1);
  v16 = v14[1];
  v17 = (_QWORD *)(v16 + 8LL * (unsigned int)v15);
  v18 = (_QWORD *)(v16 + 8 * HIDWORD(v15));
  if ( v17 == v18 )
    goto LABEL_14;
  while ( !*v17 || !(unsigned __int8)sub_21B9810(*v17, 3397) )
  {
    if ( v18 == ++v17 )
      goto LABEL_14;
  }
  if ( v18 == v17 )
  {
LABEL_14:
    v19 = 0;
  }
  else
  {
    do
    {
      v19 = *v17;
      v31 = *(_QWORD *)(*v17 + 16LL);
      if ( !v31 )
        v31 = *v17;
      ++v17;
      *(_BYTE *)(v31 + 44) |= 1u;
      if ( v17 == v18 )
        break;
      while ( !*v17 || !(unsigned __int8)sub_21B9810(*v17, 3397) )
      {
        if ( v18 == ++v17 )
          goto LABEL_15;
      }
    }
    while ( v17 != v18 );
  }
LABEL_15:
  v20 = v19 == 0;
  v21 = a1 + 80;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 144) = a1 + 128;
  v22 = a1 + 32;
  *(_QWORD *)(a1 + 48) = a1 + 32;
  *(_QWORD *)(a1 + 152) = a1 + 128;
  *(_QWORD *)(a1 + 192) = a1 + 176;
  *(_QWORD *)(a1 + 200) = a1 + 176;
  *(_QWORD *)(a1 + 216) = a1 + 232;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 56) = a1 + 32;
  *(_QWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = a1 + 80;
  *(_QWORD *)(a1 + 104) = a1 + 80;
  *(_QWORD *)(a1 + 112) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 160) = 0;
  *(_DWORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 208) = 0;
  *(_BYTE *)(a1 + 21) = !v20;
  sub_1232590((_QWORD *)(a1 + 216), "__hip_fatbin", (__int64)"");
  *(_QWORD *)(a1 + 248) = a1 + 264;
  v23 = "__hip_gpubin_handle";
  sub_1232590((_QWORD *)(a1 + 248), "__hip_gpubin_handle", (__int64)"");
  sub_1238180((__int64 *)a1);
  sub_1234780(a1);
  if ( *(_BYTE *)(a1 + 21) )
  {
    for ( i = *(_QWORD *)(a1 + 48); v22 != i; i = std::_Rb_tree_increment(i) )
    {
      while ( 1 )
      {
        v25 = sub_227D6D0(a1, v23);
        v28 = *(__m128i **)(v25 + 32);
        if ( *(_QWORD *)(v25 + 24) - (_QWORD)v28 <= 0x22u )
        {
          v25 = sub_227BF10(v25, "Found undefined HIP fatbin symbol: ", 35);
        }
        else
        {
          si128 = _mm_load_si128((const __m128i *)&xmmword_23A9CC0);
          v28[2].m128i_i8[2] = 32;
          v28[2].m128i_i16[0] = 14956;
          *v28 = si128;
          v28[1] = _mm_load_si128((const __m128i *)&xmmword_23A9C70);
          *(_QWORD *)(v25 + 32) += 35LL;
        }
        v23 = *(char **)(i + 32);
        v26 = sub_227BF10(v25, v23, *(_QWORD *)(i + 40));
        v27 = *(_BYTE **)(v26 + 32);
        if ( *(_BYTE **)(v26 + 24) != v27 )
          break;
        v23 = "\n";
        sub_227BF10(v26, "\n", 1);
        a1 = i;
        i = std::_Rb_tree_increment(i);
        if ( v22 == i )
          goto LABEL_45;
      }
      *v27 = 10;
      a1 = i;
      ++*(_QWORD *)(v26 + 32);
    }
LABEL_45:
    for ( j = *(_QWORD *)(v3 + 96); v21 != j; j = std::_Rb_tree_increment(j) )
    {
      v33 = sub_227D6D0(a1, v23);
      v34 = *(__m128i **)(v33 + 32);
      if ( *(_QWORD *)(v33 + 24) - (_QWORD)v34 > 0x29u )
      {
        v37 = _mm_load_si128((const __m128i *)&xmmword_23A9CC0);
        qmemcpy(&v34[2], "e symbol: ", 10);
        *v34 = v37;
        v34[1] = _mm_load_si128((const __m128i *)&xmmword_23A9CD0);
        *(_QWORD *)(v33 + 32) += 42LL;
      }
      else
      {
        v33 = sub_227BF10(v33, "Found undefined HIP gpubin handle symbol: ", 42);
      }
      v23 = *(char **)(j + 32);
      v35 = sub_227BF10(v33, v23, *(_QWORD *)(j + 40));
      v36 = *(_BYTE **)(v35 + 32);
      if ( *(_BYTE **)(v35 + 24) == v36 )
      {
        v23 = "\n";
        sub_227BF10(v35, "\n", 1);
      }
      else
      {
        *v36 = 10;
        ++*(_QWORD *)(v35 + 32);
      }
      a1 = j;
    }
  }
}
