void __fastcall sub_A0D770(__int64 *a1, int a2, const void *a3, size_t a4, __int64 a5, __int64 a6, __int128 a7)
{
  unsigned __int64 v8; // rax
  _DWORD *v9; // rbp
  __int64 *v10; // r14
  __int64 v11; // r8
  __int64 v12; // r9
  int *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rax
  __m128i *v17; // r13
  __m128i *v18; // rbp
  __int64 v19; // rdx
  int *v20; // rbx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int *v24; // rax
  __int64 v25; // rbp
  int *v26; // [rsp+0h] [rbp-188h] BYREF
  __int64 v27; // [rsp+8h] [rbp-180h] BYREF
  __m128i v28; // [rsp+10h] [rbp-178h] BYREF
  _BYTE v29[176]; // [rsp+20h] [rbp-168h] BYREF
  __int64 v30; // [rsp+D0h] [rbp-B8h] BYREF

  v8 = sub_A00840(*a1, a3, a4);
  LODWORD(v27) = a2;
  v9 = (_DWORD *)*a1;
  v10 = (__int64 *)(*a1 + 736);
  HIDWORD(v27) = v8 >> 33;
  if ( (unsigned __int8)sub_9FEB80(v10, &v27, &v26) )
  {
    v13 = v26 + 2;
    goto LABEL_3;
  }
  v19 = (unsigned int)v9[188];
  v20 = v26;
  v21 = v9[186] + 1;
  v22 = (unsigned int)(3 * v19);
  v28.m128i_i64[0] = (__int64)v26;
  if ( 4 * v21 >= (unsigned int)v22 )
  {
    sub_A0D500((__int64)v10, 2 * v19, v19, v22, v11, v12);
  }
  else
  {
    v23 = (unsigned int)(v19 - v9[187] - v21);
    if ( (unsigned int)v23 > (unsigned int)v19 >> 3 )
      goto LABEL_8;
    sub_A0D500((__int64)v10, v19, v19, v23, v11, v12);
  }
  sub_9FEB80(v10, &v27, (int **)&v28);
  v20 = (int *)v28.m128i_i64[0];
  v21 = v9[186] + 1;
LABEL_8:
  v9[186] = v21;
  if ( *v20 != -1 || v20[1] != -1 )
    --v9[187];
  *(_QWORD *)v20 = v27;
  v24 = v20 + 6;
  v13 = v20 + 2;
  *(_QWORD *)v13 = v24;
  *((_QWORD *)v13 + 1) = 0x100000000LL;
LABEL_3:
  v28 = _mm_loadu_si128((const __m128i *)&a7);
  sub_9F0070((__int64)v29, a5);
  sub_9F03A0((__int64)&v30, a5 + 176);
  v14 = (unsigned int)v13[2];
  v15 = v14 + 1;
  if ( v14 + 1 > (unsigned __int64)(unsigned int)v13[3] )
  {
    v25 = *(_QWORD *)v13;
    if ( *(_QWORD *)v13 > (unsigned __int64)&v28 )
    {
      v17 = &v28;
      sub_9F3700((__int64)v13, v15);
      v16 = *(_QWORD *)v13;
      v14 = (unsigned int)v13[2];
    }
    else if ( (unsigned __int64)&v28 >= v25 + 320 * v14 )
    {
      sub_9F3700((__int64)v13, v15);
      v17 = &v28;
      v16 = *(_QWORD *)v13;
      v14 = (unsigned int)v13[2];
    }
    else
    {
      sub_9F3700((__int64)v13, v15);
      v16 = *(_QWORD *)v13;
      v14 = (unsigned int)v13[2];
      v17 = (__m128i *)((char *)&v28 + *(_QWORD *)v13 - v25);
    }
  }
  else
  {
    v16 = *(_QWORD *)v13;
    v17 = &v28;
  }
  v18 = (__m128i *)(v16 + 320 * v14);
  *v18 = _mm_loadu_si128(v17);
  sub_9E6510((__int64)v18[1].m128i_i64, (__int64)v17[1].m128i_i64);
  sub_9FD280(v18 + 12, v17 + 12);
  ++v13[2];
  sub_9FC080((__int64)v29);
}

