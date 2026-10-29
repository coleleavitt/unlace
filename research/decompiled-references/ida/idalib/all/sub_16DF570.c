__int64 __fastcall sub_16DF570(__int64 a1, __int64 a2, unsigned int a3, int a4, int a5, double a6)
{
  unsigned int v9; // ebp
  unsigned __int64 v10; // r15
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // edx
  __int64 result; // rax
  int v15; // edx
  unsigned int v16; // r14d
  _BYTE *v17; // rax
  __int64 v18; // r9
  _BYTE *v19; // rax
  __int64 v20; // rsi
  int v21; // edx
  unsigned int v22; // r13d
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v28; // [rsp+28h] [rbp-E0h]
  __int64 v29; // [rsp+44h] [rbp-C4h]
  int v30; // [rsp+4Ch] [rbp-BCh]
  _BYTE *v31; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v32; // [rsp+58h] [rbp-B0h]
  _BYTE *v33; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v34; // [rsp+78h] [rbp-90h]
  _BYTE *v35; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int64 v36; // [rsp+98h] [rbp-70h]
  __m128i v37; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v38; // [rsp+C0h] [rbp-48h] BYREF

  v9 = *(_DWORD *)(a2 + 16);
  if ( v9 >= *(_DWORD *)(a1 + 40) )
  {
    v19 = (_BYTE *)sub_16B5B90(a1, a4, a5);
    v20 = *(_QWORD *)a2;
    v33 = v19;
    LODWORD(v19) = *(unsigned __int8 *)(a2 + 21);
    LODWORD(v34) = v21;
    v22 = sub_16B5B40(a1, (int)v20 - (int)v19);
    sub_168B9B0((__int64)&v35, *(_QWORD *)(a1 + 8) + 8LL, 7277);
    sub_16B6F70(&v35, a3);
    sub_1582CA0((__int64)&v37, &v35);
    v23 = *(unsigned int *)(a1 + 80);
    v24 = *(_QWORD *)(a1 + 64);
    v25 = *(unsigned __int8 *)(a1 + 98);
    v26 = *(_QWORD *)(a1 + 8);
    LODWORD(v32) = v34;
    v31 = v33;
    sub_16DE8D0(
      v26,
      v25,
      *(_QWORD *)(v24 + 8 * v23),
      (__int64)&v37,
      v22,
      a6,
      (__int64)v33,
      (__int64)v33,
      v34,
      nullptr,
      0);
    if ( v37.m128i_i64[0] && v37.m128i_i64[1] )
      sub_1580C40(v37.m128i_u64[1], v37.m128i_u64[0]);
    if ( v35 && v36 )
      sub_1580C40(v36, (unsigned __int64)v35);
  }
  else
  {
    sub_16C5130((unsigned __int64 *)(a1 + 88), v9);
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL * (*(_DWORD *)(a1 + 36) + v9));
    if ( v10 )
    {
      v28 = *(_QWORD *)(v10 + 8);
      sub_C9D980((__int64)&v35, a2, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 248LL));
      v13 = sub_C9CA70((__int64)&v35, *(__int64 **)(*(_QWORD *)(a1 + 8) + 248LL), v28, v11, v12);
      result = 1;
      if ( v13 )
        return result;
      v29 = sub_16B5B90(a1, a4, a5);
      v30 = v15;
      v16 = sub_16B5B40(a1, (unsigned int)*(_QWORD *)a2 - *(unsigned __int8 *)(a2 + 21));
      sub_168B9B0((__int64)&v31, *(_QWORD *)(a1 + 8) + 8LL, 7278);
      sub_16B6F70(&v31, a3);
      sub_C9E420(&v37, (__int64)&v35, *(__int64 **)(*(_QWORD *)(a1 + 8) + 248LL));
      sub_AEC220(&v31, v37.m128i_i64[0], v37.m128i_i64[1]);
      sub_AE9DF0(&v31, v28, 8u);
      v17 = (_BYTE *)sub_EEC8C0(v10, v28, a6);
      LOBYTE(v34) = 1;
      v33 = v17;
      sub_AEC610((__int64 *)&v31, (__int64 *)&v33);
      sub_1582CA0((__int64)&v33, &v31);
      sub_16DE8D0(
        *(_QWORD *)(a1 + 8),
        *(unsigned __int8 *)(a1 + 98),
        *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL * *(unsigned int *)(a1 + 80)),
        (__int64)&v33,
        v16,
        a6,
        v18,
        v29,
        v30,
        nullptr,
        0);
      if ( v33 && v34 )
        sub_1580C40(v34, (unsigned __int64)v33);
      if ( (__int64 *)v37.m128i_i64[0] != &v38 )
        operator delete((void *)v37.m128i_i64[0]);
      if ( v31 )
      {
        if ( v32 )
          sub_1580C40(v32, (unsigned __int64)v31);
      }
    }
  }
  return 0;
}
