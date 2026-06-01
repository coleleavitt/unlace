__int64 __fastcall sub_184B570(__int64 *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  char *v9; // rdx
  const __m128i *v10; // rcx
  __m128i *v11; // rax
  __m128i v12; // xmm2
  __int64 v13; // r9
  unsigned int v14; // r13d
  __int64 v16; // r13
  char *v17; // rsi
  char *p_ptr; // [rsp+0h] [rbp-268h] BYREF
  __int64 v19; // [rsp+8h] [rbp-260h]
  _UNKNOWN **v20; // [rsp+10h] [rbp-258h] BYREF
  char v21; // [rsp+18h] [rbp-250h]
  __m128 v22; // [rsp+20h] [rbp-248h]
  __int128 v23; // [rsp+30h] [rbp-238h] BYREF
  void *v24[2]; // [rsp+40h] [rbp-228h]
  __int128 v25; // [rsp+50h] [rbp-218h]
  _QWORD v26[2]; // [rsp+60h] [rbp-208h] BYREF
  __int64 v27; // [rsp+70h] [rbp-1F8h]
  _OWORD v28[5]; // [rsp+78h] [rbp-1F0h] BYREF
  __int64 v29; // [rsp+C8h] [rbp-1A0h]
  __int64 *v30; // [rsp+D0h] [rbp-198h]
  __int64 v31; // [rsp+D8h] [rbp-190h]
  unsigned int v32; // [rsp+E0h] [rbp-188h]
  __int64 v33; // [rsp+E8h] [rbp-180h] BYREF
  __int128 v34; // [rsp+F0h] [rbp-178h]
  __int64 v35; // [rsp+100h] [rbp-168h]
  void *ptr; // [rsp+110h] [rbp-158h] BYREF
  __int64 v37; // [rsp+118h] [rbp-150h]
  _DWORD v38[82]; // [rsp+120h] [rbp-148h] BYREF

  v19 = a4;
  sub_18C74E0(a1, 4, 0, 4);
  v6 = sub_6F3470(a1[30] + 552, "value", 5u);
  v26[1] = v28;
  v27 = 0x800000000LL;
  v28[4] = 0;
  v31 = v6;
  v26[0] = 0;
  v29 = 0;
  v30 = a1;
  v32 = a2;
  sub_B85890(&v33, v6);
  v35 = 0x101010000LL;
  v34 = 0;
  sub_1A395A0(v26);
  v37 = 0x800000000LL;
  ptr = v38;
  p_ptr = (char *)v38;
  v38[64] = a2;
  v38[65] = a2;
  sub_F1D250((__int64)&v20, a3, 0, 0);
  sub_1D3AAD0(&v23, a1, &v20, 0, a2, 0);
  v7 = (unsigned int)v37;
  v8 = (unsigned int)v37 + 1LL;
  if ( v8 > HIDWORD(v37) )
  {
    if ( ptr > &v23 || &v23 >= (__int128 *)((char *)ptr + 32 * (unsigned int)v37) )
    {
      sub_2237220(&ptr, p_ptr, v8, 32);
      v9 = (char *)ptr;
      v7 = (unsigned int)v37;
      v10 = (const __m128i *)&v23;
    }
    else
    {
      v17 = p_ptr;
      p_ptr = (char *)ptr;
      sub_2237220(&ptr, v17, v8, 32);
      v9 = (char *)ptr;
      v7 = (unsigned int)v37;
      v10 = (const __m128i *)((char *)ptr + (char *)&v23 - p_ptr);
    }
  }
  else
  {
    v9 = (char *)ptr;
    v10 = (const __m128i *)&v23;
  }
  v11 = (__m128i *)&v9[32 * v7];
  *v11 = _mm_loadu_si128(v10);
  v12 = _mm_loadu_si128(v10 + 1);
  LODWORD(v37) = v37 + 1;
  v11[1] = v12;
  if ( !(unsigned __int8)sub_184B0C0(a1, v26, a2, "tuple_size", 0xAu, (__int64)&ptr, 0) && (_DWORD)v27 )
  {
    p_ptr = (char *)&ptr;
    v21 = 0;
    v20 = &off_2C52F38;
    v22 = _mm_loadh_ps((const double *)&p_ptr);
    v23 = 0;
    *(_OWORD *)v24 = 0;
    v25 = 0;
    v16 = sub_190B490(a1, &v23, v26, 0, 0, v13);
    if ( HIDWORD(v24[1]) )
      free(v24[0]);
    if ( v16 == 1 || sub_1914D50(a1, v16 & 0xFFFFFFFFFFFFFFFELL, v19, &v20, 0) == 1 )
      v14 = 2;
    else
      v14 = 0;
  }
  else
  {
    v14 = 1;
  }
  if ( ptr != v38 )
    free(ptr);
  sub_169D230((__int64)v26);
  sub_190D5E0(a1);
  return v14;
}
