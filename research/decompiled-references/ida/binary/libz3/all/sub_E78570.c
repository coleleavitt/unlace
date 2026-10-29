__int64 __fastcall sub_E78570(__m128i *a1, __m128i *a2, __m128i *a3, __int64 a4, char **a5)
{
  char *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r13
  __m128i *v11; // rsi
  __int64 v13; // r15
  bool v14; // zf
  __int64 v15; // r15
  char *v16; // r15
  __int64 result; // rax
  char *v18; // r12
  __int64 v19; // [rsp-10h] [rbp-80h]
  __int64 v22; // [rsp+20h] [rbp-50h] BYREF
  __int64 v23; // [rsp+28h] [rbp-48h] BYREF
  char *v24; // [rsp+30h] [rbp-40h] BYREF
  char *v25[7]; // [rsp+38h] [rbp-38h] BYREF

  v8 = *a5;
  v9 = ((((char *)a2 - (char *)a1) >> 3) + 1) / 2;
  v10 = 8 * v9;
  v11 = (__m128i *)((char *)a1 + 8 * v9);
  if ( v9 <= a4 )
  {
    if ( v8 )
    {
      v25[0] = nullptr;
      sub_C7B020(v25, a5);
      v18 = v25[0];
      result = sub_E783A0(a1, v11, a2, a3, v25);
      if ( v18 )
        return sub_186B220(v18 - 8);
    }
    else
    {
      v25[0] = nullptr;
      return sub_E783A0(a1, v11, a2, a3, v25);
    }
  }
  else
  {
    v22 = 0;
    if ( v8 )
    {
      sub_C7B020(&v22, a5);
      v13 = v22;
      sub_E78570(a1, v11, a3, a4, &v22);
      if ( v13 )
        sub_186B220((void *)(v13 - 8));
    }
    else
    {
      sub_E78570(a1, v11, a3, a4, &v22);
    }
    v14 = *a5 == nullptr;
    v23 = 0;
    if ( v14 )
    {
      sub_E78570(v11, a2, a3, a4, &v23);
    }
    else
    {
      sub_C7B020(&v23, a5);
      v15 = v23;
      sub_E78570(v11, a2, a3, a4, &v23);
      if ( v15 )
        sub_186B220((void *)(v15 - 8));
    }
    v16 = *a5;
    if ( *a5 )
    {
      v24 = nullptr;
      sub_C7B020(&v24, a5);
      v16 = v24;
    }
    v24 = v16;
    sub_E75920(a1, v11, a2, v10 >> 3, ((char *)a2 - (char *)v11) >> 3, a3, a4, &v24);
    result = v19;
    if ( v16 )
      return sub_186B220(v16 - 8);
  }
  return result;
}

