__m128i *__fastcall sub_10C3350(__m128i *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  size_t v7; // rax
  __int64 v8; // rsi
  __m128i *v9; // r15
  int v10; // eax
  __m128i *v11; // rax
  bool v13; // zf
  __int64 v14; // rax
  __m128i v15; // kr00_16
  _QWORD *v16; // [rsp+8h] [rbp-A0h] BYREF
  __m128 v17; // [rsp+10h] [rbp-98h] BYREF
  void *v18; // [rsp+20h] [rbp-88h] BYREF
  __int64 v19; // [rsp+28h] [rbp-80h]
  __m128i v20; // [rsp+30h] [rbp-78h] BYREF
  __m128i v21; // [rsp+40h] [rbp-68h] BYREF
  __m128i v22; // [rsp+50h] [rbp-58h] BYREF
  char v23; // [rsp+60h] [rbp-48h]

  v18 = &v20;
  v7 = j__strlen("<NOT PRESENT>");
  sub_10B5070(&v18, "<NOT PRESENT>", (__int64)&aNotPresent[v7]);
  v8 = *(_QWORD *)(a3 + 80);
  v9 = a1 + 1;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a4 + 608LL))(a4, v8);
  if ( v10 )
  {
    if ( v10 != 1 )
    {
      v11 = (__m128i *)v18;
      a1->m128i_i64[0] = (__int64)v9;
      if ( v11 == &v20 )
      {
        a1[1] = _mm_load_si128(&v20);
      }
      else
      {
        a1->m128i_i64[0] = (__int64)v11;
        a1[1].m128i_i64[0] = v20.m128i_i64[0];
      }
      a1->m128i_i64[1] = v19;
      return a1;
    }
    v16 = a2;
    v17 = _mm_loadh_ps((const double *)&v16);
    sub_10C3100(&v21, (__int64 *)&v17, a2, "libstdc++.so");
    if ( v23 )
    {
LABEL_15:
      v15 = v21;
      a1->m128i_i64[0] = (__int64)v9;
      sub_10B4F90(a1, v15.m128i_i64[0], v15.m128i_i64[0] + v15.m128i_i64[1]);
      if ( v23 )
        goto LABEL_16;
      goto LABEL_12;
    }
    sub_10C3100(&v21, (__int64 *)&v17, (_QWORD *)v17.m128_u64[1], "libstdc++.a");
    v13 = v23 == 0;
    a1->m128i_i64[0] = (__int64)v9;
    if ( !v13 )
    {
      v14 = v21.m128i_i64[0];
      if ( (__m128i *)v21.m128i_i64[0] == &v22 )
      {
LABEL_20:
        a1[1] = _mm_load_si128(&v22);
        goto LABEL_11;
      }
LABEL_10:
      a1->m128i_i64[0] = v14;
      a1[1].m128i_i64[0] = v22.m128i_i64[0];
LABEL_11:
      a1->m128i_i64[1] = v21.m128i_i64[1];
      goto LABEL_12;
    }
  }
  else
  {
    v16 = a2;
    v17 = _mm_loadh_ps((const double *)&v16);
    sub_10C2EB0(&v21, (__int64 *)&v17, a2, "libc++.so");
    if ( v23 )
      goto LABEL_15;
    sub_10C2EB0(&v21, (__int64 *)&v17, (_QWORD *)v17.m128_u64[1], "libc++.a");
    v13 = v23 == 0;
    a1->m128i_i64[0] = (__int64)v9;
    if ( !v13 )
    {
      v14 = v21.m128i_i64[0];
      if ( (__m128i *)v21.m128i_i64[0] == &v22 )
        goto LABEL_20;
      goto LABEL_10;
    }
  }
  sub_10B4F90(a1, v18, (__int64)v18 + v19);
  if ( v23 )
  {
LABEL_16:
    if ( (__m128i *)v21.m128i_i64[0] != &v22 )
      operator delete((void *)v21.m128i_i64[0]);
  }
LABEL_12:
  if ( v18 != &v20 )
    operator delete(v18);
  return a1;
}

