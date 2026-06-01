__int64 __fastcall sub_110CFE0(__int64 a1, _DWORD *a2, _BYTE *a3, __int64 a4)
{
  __int64 v5; // r14
  int v6; // eax
  int v8; // r8d
  __m128i v9; // kr00_16
  bool v10; // zf
  void *v11; // rdi
  unsigned int v12; // ecx
  __int64 v13; // rax
  int v14; // rdx^4
  int v15; // edx
  __int64 v16; // rax
  int v17; // rdx^4
  int v18; // edx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __m128i v25; // kr10_16
  __m128i v26; // kr20_16
  void *v27; // rdi
  __m128i v28; // kr30_16
  _BYTE *v29; // [rsp+0h] [rbp-168h] BYREF
  __int64 v30; // [rsp+8h] [rbp-160h]
  _QWORD *v31; // [rsp+10h] [rbp-158h]
  _DWORD *v32; // [rsp+18h] [rbp-150h] BYREF
  _QWORD v33[4]; // [rsp+20h] [rbp-148h] BYREF
  __int16 v34; // [rsp+40h] [rbp-128h]
  _QWORD v35[4]; // [rsp+50h] [rbp-118h] BYREF
  __int16 v36; // [rsp+70h] [rbp-F8h]
  _QWORD v37[4]; // [rsp+80h] [rbp-E8h] BYREF
  __int16 v38; // [rsp+A0h] [rbp-C8h]
  __m128i v39; // [rsp+B0h] [rbp-B8h] BYREF
  _BYTE v40[16]; // [rsp+C0h] [rbp-A8h] BYREF
  __m128i v41; // [rsp+D0h] [rbp-98h]
  __int64 v42; // [rsp+E0h] [rbp-88h]
  __m128i v43; // [rsp+F0h] [rbp-78h] BYREF
  _BYTE v44[16]; // [rsp+100h] [rbp-68h] BYREF
  __m128i v45; // [rsp+110h] [rbp-58h] BYREF
  __int64 v46; // [rsp+120h] [rbp-48h]

  v5 = (__int64)(a2 + 4);
  v29 = a3;
  v30 = a4;
  v31 = &v29;
  v32 = a2;
  sub_110C330(&v43, &v29, (__int64)&v32, (__int64)(a2 + 4));
  if ( v45.m128i_i8[0] )
  {
    v9 = v43;
    *(_QWORD *)a1 = a1 + 16;
    sub_11078F0((_QWORD *)a1, v9.m128i_i64[0], v9.m128i_i64[0] + v9.m128i_i64[1]);
    v10 = v45.m128i_i8[0] == 0;
    *(_BYTE *)(a1 + 32) = 1;
    if ( v10 )
      return a1;
    goto LABEL_18;
  }
  v6 = a2[15];
  if ( v6 != 20 )
  {
    if ( v6 != 16 )
      goto LABEL_4;
LABEL_25:
    v13 = sub_2293DC0(v5);
    if ( (v15 | HIDWORD(v13)) & 0x7FFFFFFF | (unsigned int)v13 | v14 & 0x7FFFFFFF
      || (v16 = sub_2293CE0(v5), (v18 | HIDWORD(v16)) & 0x7FFFFFFF | (unsigned int)v16 | v17 & 0x7FFFFFFF) )
    {
      sub_1109610((__int64)&v43, (__int64)a2);
      sub_110C330(&v39, v31, (__int64)&v32, (__int64)&v43);
      if ( v41.m128i_i8[0] )
      {
        v28 = v39;
        *(_QWORD *)a1 = a1 + 16;
        sub_11078F0((_QWORD *)a1, v28.m128i_i64[0], v28.m128i_i64[0] + v28.m128i_i64[1]);
        v10 = v41.m128i_i8[0] == 0;
        *(_BYTE *)(a1 + 32) = 1;
        if ( v10 || (v27 = (void *)v39.m128i_i64[0], (_BYTE *)v39.m128i_i64[0] == v40) )
        {
LABEL_18:
          v11 = (void *)v43.m128i_i64[0];
          if ( (_BYTE *)v43.m128i_i64[0] == v44 )
            return a1;
LABEL_19:
          operator delete(v11);
          return a1;
        }
LABEL_39:
        operator delete(v27);
        goto LABEL_18;
      }
      if ( (_BYTE *)v43.m128i_i64[0] != v44 )
        operator delete((void *)v43.m128i_i64[0]);
    }
LABEL_4:
    if ( a2[12] != 1 || (v12 = a2[13], v12 <= 0x1D) && ((1LL << v12) & 0x21B80000) != 0 )
    {
LABEL_5:
      if ( a2[16] == 17 )
      {
        sub_110C9D0((__m128i *)a1, (__int64)a2, v29, v30);
      }
      else
      {
        *(_QWORD *)(a1 + 32) = 0;
        *(_OWORD *)a1 = 0;
        *(_OWORD *)(a1 + 16) = 0;
      }
      return a1;
    }
    sub_10B74D0(&v43, v5);
    sub_2297580(&v43, 1, 0);
    sub_110C330(&v39, v31, (__int64)&v32, (__int64)&v43);
    if ( !v41.m128i_i8[0] )
    {
      if ( (_BYTE *)v43.m128i_i64[0] != v44 )
        operator delete((void *)v43.m128i_i64[0]);
      goto LABEL_5;
    }
    v26 = v39;
    *(_QWORD *)a1 = a1 + 16;
    sub_11078F0((_QWORD *)a1, v26.m128i_i64[0], v26.m128i_i64[0] + v26.m128i_i64[1]);
    v10 = v41.m128i_i8[0] == 0;
    *(_BYTE *)(a1 + 32) = 1;
    if ( v10 )
      goto LABEL_18;
    v27 = (void *)v39.m128i_i64[0];
    if ( (_BYTE *)v39.m128i_i64[0] == v40 )
      goto LABEL_18;
    goto LABEL_39;
  }
  v8 = a2[16];
  v39.m128i_i64[1] = 0;
  v40[0] = 0;
  v39.m128i_i64[0] = (__int64)v40;
  v41 = 0;
  v42 = 0;
  if ( v8 )
  {
    sub_1109610((__int64)&v43, (__int64)a2);
  }
  else
  {
    v19 = sub_2292A00(20);
    v38 = 261;
    v37[0] = v19;
    v37[1] = v20;
    v21 = sub_22937A0(v5);
    v36 = 261;
    v35[0] = v21;
    v35[1] = v22;
    v23 = sub_2293740(v5);
    v34 = 261;
    v33[1] = v24;
    v33[0] = v23;
    sub_2298050(&v43, v33, v35, v37);
  }
  sub_9E6D90((__int64)&v39, &v43);
  v41 = _mm_load_si128(&v45);
  v42 = v46;
  if ( (_BYTE *)v43.m128i_i64[0] != v44 )
    operator delete((void *)v43.m128i_i64[0]);
  sub_110C330(&v43, v31, (__int64)&v32, (__int64)&v39);
  if ( !v45.m128i_i8[0] )
  {
    if ( (_BYTE *)v39.m128i_i64[0] != v40 )
      operator delete((void *)v39.m128i_i64[0]);
    if ( a2[15] != 16 )
      goto LABEL_4;
    goto LABEL_25;
  }
  v25 = v43;
  *(_QWORD *)a1 = a1 + 16;
  sub_11078F0((_QWORD *)a1, v25.m128i_i64[0], v25.m128i_i64[0] + v25.m128i_i64[1]);
  v10 = v45.m128i_i8[0] == 0;
  *(_BYTE *)(a1 + 32) = 1;
  if ( !v10 && (_BYTE *)v43.m128i_i64[0] != v44 )
    operator delete((void *)v43.m128i_i64[0]);
  v11 = (void *)v39.m128i_i64[0];
  if ( (_BYTE *)v39.m128i_i64[0] != v40 )
    goto LABEL_19;
  return a1;
}

