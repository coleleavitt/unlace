__int64 __fastcall sub_8C9F60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  __m128 v8; // xmm0
  __int64 v9; // r15
  __m128i v10; // xmm0
  unsigned int v11; // ebp
  __int64 v12; // rsi
  __m128i v14; // [rsp+0h] [rbp-538h] BYREF
  __int64 v15; // [rsp+18h] [rbp-520h]
  _DWORD v16[16]; // [rsp+20h] [rbp-518h] BYREF
  _BYTE v17[8]; // [rsp+60h] [rbp-4D8h] BYREF
  _DWORD v18[14]; // [rsp+68h] [rbp-4D0h] BYREF
  char v19; // [rsp+A0h] [rbp-498h]
  int v20; // [rsp+A8h] [rbp-490h]
  _QWORD v21[103]; // [rsp+C0h] [rbp-478h] BYREF
  __m128i v22; // [rsp+3F8h] [rbp-140h]
  __int64 v23; // [rsp+408h] [rbp-130h]
  __int64 v24; // [rsp+410h] [rbp-128h]
  unsigned int v25; // [rsp+418h] [rbp-120h]
  __int64 v26; // [rsp+420h] [rbp-118h]
  __int64 v27; // [rsp+428h] [rbp-110h]
  int v28; // [rsp+430h] [rbp-108h]
  __int64 v29; // [rsp+438h] [rbp-100h]
  char v30; // [rsp+448h] [rbp-F0h]
  __int64 v31; // [rsp+450h] [rbp-E8h]
  __int16 v32; // [rsp+458h] [rbp-E0h]
  char v33; // [rsp+45Ah] [rbp-DEh]
  __int64 v34; // [rsp+460h] [rbp-D8h]
  void *ptr; // [rsp+468h] [rbp-D0h]
  __int64 v36; // [rsp+470h] [rbp-C8h]
  _BYTE v37[64]; // [rsp+478h] [rbp-C0h] BYREF
  __int64 v38; // [rsp+4B8h] [rbp-80h]
  __int64 v39; // [rsp+4C0h] [rbp-78h]
  int v40; // [rsp+4C8h] [rbp-70h]
  __int64 v41; // [rsp+4D0h] [rbp-68h]
  char v42; // [rsp+4DCh] [rbp-5Ch]
  __int64 v43; // [rsp+4E0h] [rbp-58h]
  char v44; // [rsp+4ECh] [rbp-4Ch]
  char v45; // [rsp+4F4h] [rbp-44h]

  ++*(_DWORD *)(a1 + 32);
  v7 = *(_QWORD *)(a1 + 24);
  v8 = _mm_loadh_ps((const double *)(a1 + 24));
  v15 = a4;
  v9 = *(_QWORD *)(a1 + 16);
  sub_8E96B0(v21, a1, v7, a2, a1 + 8, a6, v8.m128_u64[0], v8.m128_u64[1]);
  v10 = _mm_load_si128(&v14);
  v25 = 0;
  v23 = 0;
  v21[0] = &off_49F7368;
  v32 = 0;
  v24 = 0;
  v28 = 0;
  v26 = 0;
  v27 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v33 = 0;
  v34 = 0;
  ptr = v37;
  v36 = 0x300000000LL;
  v37[48] = 0;
  v37[56] = 0;
  v40 = 0;
  v38 = 0;
  v39 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v22 = v10;
  sub_8E9800(v17, v21, a3, 0, 1);
  if ( v20 == 3 )
  {
    v11 = 0;
    sub_8E97F0(v21);
    sub_A1A430(a1 + 8, v9);
  }
  else
  {
    if ( !v9 )
      sub_8E97F0(v21);
    sub_9A0B00(v16, v17);
    sub_6A01B0(v15, (__int64)v16);
    if ( v16[0] > 1u )
      sub_69F740((__int64)v16);
    v11 = 1;
  }
  if ( v19 != -1 )
  {
    if ( v19 == 1 )
    {
      sub_A1C0C0(v18);
    }
    else if ( (unsigned __int8)v19 > 2u && v18[0] > 1u )
    {
      sub_69F740((__int64)v18);
    }
    v19 = -1;
  }
  v21[0] = &off_49F7368;
  operator delete();
  if ( ptr != v37 )
    free(ptr);
  operator delete();
  v12 = 24LL * v25;
  operator delete();
  sub_93F7A0(v21, v12);
  return v11;
}

