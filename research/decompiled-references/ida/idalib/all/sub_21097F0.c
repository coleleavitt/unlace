unsigned __int64 __fastcall sub_21097F0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        char a8,
        _BYTE *a9)
{
  unsigned __int64 v9; // r13
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  void *v13; // r15
  size_t v14; // rbp
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 *v18; // r8
  __int64 *v19; // rbx
  unsigned __int64 v20; // r12
  __int64 v22; // rax
  unsigned int v23; // r9d
  __int64 *v24; // r8
  _QWORD *v25; // rcx
  unsigned int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 *v30; // rbp
  unsigned __int64 v31; // rax
  int v32; // r14d
  unsigned __int64 v33; // rax
  int v34; // [rsp+8h] [rbp-180h]
  unsigned int v36; // [rsp+18h] [rbp-170h]
  __int64 *v37; // [rsp+20h] [rbp-168h]
  _QWORD *v38; // [rsp+28h] [rbp-160h]
  __int64 *v39; // [rsp+38h] [rbp-150h] BYREF
  void *src; // [rsp+40h] [rbp-148h] BYREF
  size_t n; // [rsp+48h] [rbp-140h]
  _BYTE v42[16]; // [rsp+50h] [rbp-138h] BYREF
  __m128i v43[2]; // [rsp+60h] [rbp-128h] BYREF
  __int16 v44; // [rsp+80h] [rbp-108h]
  __m128i v45; // [rsp+90h] [rbp-F8h] BYREF
  __int16 v46; // [rsp+B0h] [rbp-D8h]
  __m128i v47[3]; // [rsp+C0h] [rbp-C8h] BYREF
  __m128i v48; // [rsp+F0h] [rbp-98h] BYREF
  __int16 v49; // [rsp+110h] [rbp-78h]
  __m128i v50[2]; // [rsp+120h] [rbp-68h] BYREF
  __int16 v51; // [rsp+140h] [rbp-48h]

  v9 = a5;
  v34 = a3;
  v49 = 261;
  v48.m128i_i64[1] = a5;
  v45.m128i_i64[0] = a2;
  v45.m128i_i64[1] = a3;
  v44 = 264;
  v46 = 261;
  v48.m128i_i64[0] = a4;
  v43[0].m128i_i8[0] = 44;
  sub_A41580(v47, &v45, v43, a4, 264, 261);
  sub_A41580(v50, v47, &v48, v10, v11, v12);
  sub_2253560(&src, v50);
  v13 = src;
  v14 = n;
  v15 = sub_2244B30(src, n);
  v16 = (unsigned int)sub_2244CB0(a1 + 1952, v13, v14, v15);
  v18 = (__int64 *)(*(_QWORD *)(a1 + 1952) + 8 * v16);
  if ( *v18 )
  {
    if ( *v18 != -8 )
    {
      sub_21097B0(&v39, v18, 0);
      v19 = v39;
      if ( src != v42 )
        operator delete(src);
      return *(_QWORD *)(*v19 + 8);
    }
    --*(_DWORD *)(a1 + 1968);
  }
  v37 = v18;
  v36 = v16;
  v22 = sub_22300B0(v14 + 17, 8, v16, v17, v18, v16);
  v23 = v36;
  v24 = v37;
  v25 = (_QWORD *)v22;
  if ( v14 )
  {
    v38 = (_QWORD *)v22;
    memcpy((void *)(v22 + 16), v13, v14);
    v25 = v38;
    v24 = v37;
    v23 = v36;
  }
  *((_BYTE *)v25 + v14 + 16) = 0;
  *v25 = v14;
  v25[1] = 0;
  *v24 = (__int64)v25;
  ++*(_DWORD *)(a1 + 1964);
  v26 = sub_22450D0(a1 + 1952, v23);
  sub_21097B0(&v39, (__int64 *)(*(_QWORD *)(a1 + 1952) + 8LL * v26), 0);
  v30 = v39;
  if ( src != v42 )
    operator delete(src);
  if ( a9 )
  {
    v51 = 257;
    if ( *a9 )
    {
      v50[0].m128i_i64[0] = (__int64)a9;
      LOBYTE(v51) = 3;
    }
    a9 = (_BYTE *)sub_21085E0(a1, v50, 0, v27, v28, v29);
  }
  v31 = *(_QWORD *)*v30;
  if ( v31 < v9 )
    LODWORD(v9) = 0;
  else
    LODWORD(v31) = v31 - v9;
  v32 = *v30 + v31 + 16;
  v20 = sub_2105F40((__int64 *)(a1 + 672), 216, 3u);
  sub_2117530(v20, a2, v34, v32, v9, a6, a7, a8, (__int64)a9);
  *(_QWORD *)(*v30 + 8) = v20;
  v33 = sub_2105F80(a1);
  *(_QWORD *)(v33 + 8) = v20;
  **(_QWORD **)(v20 + 8) = v33;
  *(_QWORD *)(*(_QWORD *)(v20 + 8) + 8LL) = v33;
  return v20;
}
