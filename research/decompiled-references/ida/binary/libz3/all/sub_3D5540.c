__int64 __fastcall sub_3D5540(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // r14
  __m128i v6; // xmm1
  _QWORD *v7; // rbx
  _QWORD *i; // r13
  __int64 v9; // r15
  __int64 v10; // rsi
  __int64 v11; // rdi
  _QWORD *v13; // rbx
  void *v14; // rdi
  unsigned __int8 v17; // [rsp+Fh] [rbp-F9h]
  __m128i v18; // [rsp+10h] [rbp-F8h] BYREF
  __int64 v19; // [rsp+20h] [rbp-E8h]
  __int64 v20; // [rsp+28h] [rbp-E0h]
  _QWORD v21[2]; // [rsp+30h] [rbp-D8h] BYREF
  __m128i v22; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B8h]
  __int64 v24[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+68h] [rbp-A0h]
  __int64 v26; // [rsp+70h] [rbp-98h]
  __int64 v27; // [rsp+78h] [rbp-90h]
  __int64 v28[2]; // [rsp+80h] [rbp-88h] BYREF
  void *s; // [rsp+90h] [rbp-78h]
  __int64 v30; // [rsp+98h] [rbp-70h]
  void *v31; // [rsp+A0h] [rbp-68h]
  __int64 v32; // [rsp+A8h] [rbp-60h]
  int v33; // [rsp+B0h] [rbp-58h]
  __int64 v34; // [rsp+B8h] [rbp-50h]
  _QWORD v35[9]; // [rsp+C0h] [rbp-48h] BYREF

  v4 = a3 + 128;
  v20 = a1;
  v18 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1, (__m128i)(unsigned __int64)a1);
  v19 = a3 + 128;
  v17 = sub_13608A0(a3 + 128);
  sub_1360B80(v4, 1);
  v6 = _mm_load_si128(&v18);
  v7 = *(_QWORD **)(a2 + 8);
  v18.m128i_i64[0] = (__int64)v35;
  v23 = 0;
  v24[1] = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28[1] = 0;
  s = v35;
  v30 = 1;
  v31 = nullptr;
  v32 = 0;
  v33 = 1065353216;
  v34 = 0;
  v35[0] = 0;
  v22 = v6;
  v24[0] = a1;
  v28[0] = a1;
  if ( v7 )
  {
    for ( i = &v7[*((unsigned int *)v7 - 1)]; i != v7; ++v7 )
    {
      while ( 1 )
      {
        v9 = *v7;
        sub_1374250(v21, a3, *v7);
        sub_14EA0D0(&v22, v9, v21[0]);
        v10 = v21[0];
        if ( v21[0] )
        {
          v11 = v21[1];
          if ( (*(_DWORD *)(v21[0] + 8LL))-- == 1 )
            break;
        }
        if ( i == ++v7 )
          goto LABEL_8;
      }
      sub_15D7BC0(v11, v10);
    }
  }
LABEL_8:
  sub_14EA2A0(&v22, *a4, a4);
  v13 = v31;
  if ( v31 )
  {
    do
    {
      v14 = v13;
      v13 = (_QWORD *)*v13;
      operator delete(v14, 0x18u);
    }
    while ( v13 );
  }
  memset(s, 0, 8 * v30);
  v32 = 0;
  v31 = nullptr;
  if ( s != (void *)v18.m128i_i64[0] )
    operator delete(s, 8 * v30);
  sub_2334C0(v28);
  if ( v27 )
    sub_186B220((void *)(v27 - 8));
  if ( v26 )
    sub_186B220((void *)(v26 - 8));
  if ( v25 )
    sub_186B220((void *)(v25 - 8));
  sub_2334C0(v24);
  sub_2334C0(&v22.m128i_i64[1]);
  return sub_1360B80(v19, v17);
}

