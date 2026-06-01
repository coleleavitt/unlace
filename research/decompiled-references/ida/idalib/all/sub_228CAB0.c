__int64 __fastcall sub_228CAB0(__int64 a1, const void *a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v7; // rax
  char *v8; // rdi
  DIR *v9; // rax
  _BYTE *v10; // rdi
  __int64 v11; // rdx
  __m128i v12; // xmm1
  _QWORD *v13; // rdi
  __m128i v14; // xmm2
  __m128i v15; // xmm3
  char v16; // al
  unsigned int v17; // r12d
  char *v19; // rdi
  size_t v20; // rdx
  __int64 v21; // [rsp+8h] [rbp-1C0h] BYREF
  char *v22; // [rsp+10h] [rbp-1B8h] BYREF
  __int16 v23; // [rsp+30h] [rbp-198h]
  _BYTE v24[32]; // [rsp+40h] [rbp-188h] BYREF
  __int16 v25; // [rsp+60h] [rbp-168h]
  _QWORD *v26[4]; // [rsp+70h] [rbp-158h] BYREF
  __int16 v27; // [rsp+90h] [rbp-138h]
  void *src; // [rsp+A0h] [rbp-128h] BYREF
  size_t n; // [rsp+A8h] [rbp-120h]
  _QWORD v30[2]; // [rsp+B0h] [rbp-118h] BYREF
  int v31; // [rsp+C0h] [rbp-108h]
  char v32; // [rsp+C4h] [rbp-104h]
  __m128i v33; // [rsp+C8h] [rbp-100h] BYREF
  __m128i v34; // [rsp+D8h] [rbp-F0h] BYREF
  __m128i v35; // [rsp+E8h] [rbp-E0h] BYREF
  char *name; // [rsp+100h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+108h] [rbp-C0h]
  _BYTE v38[176]; // [rsp+118h] [rbp-B0h] BYREF

  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  name = v38;
  if ( a3 > 0x80 )
  {
    sub_2236E10((__int64)&name, v38, a3, 1);
    v19 = &name[si128.m128i_i64[0]];
  }
  else
  {
    if ( !a3 )
    {
      si128.m128i_i64[0] = 0;
      v7 = 0;
      goto LABEL_4;
    }
    v19 = v38;
  }
  memcpy(v19, a2, a3);
  v7 = a3 + si128.m128i_i64[0];
  si128.m128i_i64[0] = v7;
  if ( si128.m128i_i64[1] < v7 + 1 )
  {
    sub_2236E10((__int64)&name, v38, v7 + 1, 1);
    v7 = si128.m128i_i64[0];
  }
LABEL_4:
  name[v7] = 0;
  v8 = name;
  v9 = opendir(name);
  if ( !v9 )
  {
    std::_V2::generic_category((std::_V2 *)v8);
    v17 = *__errno_location();
    goto LABEL_12;
  }
  *(_QWORD *)a1 = v9;
  LOWORD(v31) = 257;
  v25 = 257;
  v27 = 257;
  v23 = 259;
  v22 = ".";
  sub_2288C30(&name, (__int64)&v22, (__int64)v24, (__int64)v26, (__int64)&src);
  v27 = 261;
  v26[0] = name;
  v26[1] = (_QWORD *)si128.m128i_i64[0];
  sub_2253560(&src, v26);
  v10 = *(_BYTE **)(a1 + 8);
  v33 = 0;
  v35.m128i_i64[1] = 0xFFFF00000000LL;
  v31 = 9;
  v32 = a4;
  v34 = 0;
  v35.m128i_i64[0] = 0;
  if ( src == v30 )
  {
    v20 = n;
    if ( n )
    {
      if ( n == 1 )
        *v10 = v30[0];
      else
        memcpy(v10, src, n);
      v20 = n;
      v10 = *(_BYTE **)(a1 + 8);
    }
    *(_QWORD *)(a1 + 16) = v20;
    v10[v20] = 0;
    v10 = src;
    goto LABEL_9;
  }
  if ( v10 == (_BYTE *)(a1 + 24) )
  {
    v21 = v30[0];
    *(_QWORD *)(a1 + 8) = src;
    *(__m128 *)(a1 + 16) = _mm_loadh_ps((const double *)&v21);
    goto LABEL_26;
  }
  v21 = v30[0];
  v11 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 8) = src;
  *(__m128 *)(a1 + 16) = _mm_loadh_ps((const double *)&v21);
  if ( !v10 )
  {
LABEL_26:
    v10 = v30;
    src = v30;
    goto LABEL_9;
  }
  src = v10;
  v30[0] = v11;
LABEL_9:
  n = 0;
  *v10 = 0;
  v12 = _mm_loadu_si128(&v33);
  v13 = src;
  v14 = _mm_loadu_si128(&v34);
  *(_DWORD *)(a1 + 40) = v31;
  v15 = _mm_loadu_si128(&v35);
  v16 = v32;
  *(__m128i *)(a1 + 48) = v12;
  *(__m128i *)(a1 + 64) = v14;
  *(_BYTE *)(a1 + 44) = v16;
  *(__m128i *)(a1 + 80) = v15;
  if ( v13 != v30 )
    operator delete(v13);
  v17 = sub_228C920((DIR **)a1);
LABEL_12:
  if ( name != v38 )
    free(name);
  return v17;
}
