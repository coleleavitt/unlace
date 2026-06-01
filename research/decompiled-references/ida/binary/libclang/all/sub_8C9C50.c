__int64 __fastcall sub_8C9C50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  __m128 v8; // xmm0
  __int64 v9; // r15
  __m128i v10; // xmm0
  bool v11; // zf
  unsigned int v12; // ebp
  __int64 v13; // rsi
  __m128i v15; // [rsp+0h] [rbp-538h] BYREF
  __int64 v16; // [rsp+18h] [rbp-520h]
  _DWORD v17[16]; // [rsp+20h] [rbp-518h] BYREF
  _BYTE v18[8]; // [rsp+60h] [rbp-4D8h] BYREF
  _DWORD v19[14]; // [rsp+68h] [rbp-4D0h] BYREF
  char v20; // [rsp+A0h] [rbp-498h]
  int v21; // [rsp+A8h] [rbp-490h]
  _QWORD v22[103]; // [rsp+C0h] [rbp-478h] BYREF
  __m128i v23; // [rsp+3F8h] [rbp-140h]
  __int64 v24; // [rsp+408h] [rbp-130h]
  __int64 v25; // [rsp+410h] [rbp-128h]
  unsigned int v26; // [rsp+418h] [rbp-120h]
  __int64 v27; // [rsp+420h] [rbp-118h]
  __int64 v28; // [rsp+428h] [rbp-110h]
  int v29; // [rsp+430h] [rbp-108h]
  __int64 v30; // [rsp+438h] [rbp-100h]
  char v31; // [rsp+448h] [rbp-F0h]
  __int64 v32; // [rsp+450h] [rbp-E8h]
  __int16 v33; // [rsp+458h] [rbp-E0h]
  char v34; // [rsp+45Ah] [rbp-DEh]
  __int64 v35; // [rsp+460h] [rbp-D8h]
  void *ptr; // [rsp+468h] [rbp-D0h]
  __int64 v37; // [rsp+470h] [rbp-C8h]
  _BYTE v38[64]; // [rsp+478h] [rbp-C0h] BYREF
  __int64 v39; // [rsp+4B8h] [rbp-80h]
  __int64 v40; // [rsp+4C0h] [rbp-78h]
  int v41; // [rsp+4C8h] [rbp-70h]
  __int64 v42; // [rsp+4D0h] [rbp-68h]
  char v43; // [rsp+4DCh] [rbp-5Ch]
  __int64 v44; // [rsp+4E0h] [rbp-58h]
  char v45; // [rsp+4ECh] [rbp-4Ch]
  char v46; // [rsp+4F4h] [rbp-44h]

  ++*(_DWORD *)(a1 + 32);
  v7 = *(_QWORD *)(a1 + 24);
  v8 = _mm_loadh_ps((const double *)(a1 + 24));
  v16 = a4;
  v9 = *(_QWORD *)(a1 + 16);
  sub_8E96B0(v22, a1, v7, a2, a1 + 8, a6, v8.m128_u64[0], v8.m128_u64[1]);
  v10 = _mm_load_si128(&v15);
  v26 = 0;
  v24 = 0;
  v11 = (*(_BYTE *)(a3 + 1) & 6) == 0;
  v25 = 0;
  v22[0] = &off_49F7368;
  v29 = 0;
  v37 = 0x300000000LL;
  v27 = 0;
  v28 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  ptr = v38;
  v38[48] = 0;
  v38[56] = 0;
  v41 = 0;
  v39 = 0;
  v40 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v23 = v10;
  sub_8E9800(v18, v22, a3, !v11, 0);
  if ( v21 == 3 )
  {
    v12 = 0;
    sub_8E97F0(v22);
    sub_A1A430(a1 + 8, v9);
  }
  else
  {
    if ( !v9 )
      sub_8E97F0(v22);
    sub_9A0B00(v17, v18);
    sub_6A01B0(v16, (__int64)v17);
    if ( v17[0] > 1u )
      sub_69F740((__int64)v17);
    v12 = 1;
  }
  if ( v20 != -1 )
  {
    if ( v20 == 1 )
    {
      sub_A1C0C0(v19);
    }
    else if ( (unsigned __int8)v20 > 2u && v19[0] > 1u )
    {
      sub_69F740((__int64)v19);
    }
    v20 = -1;
  }
  v22[0] = &off_49F7368;
  operator delete();
  if ( ptr != v38 )
    free(ptr);
  operator delete();
  v13 = 24LL * v26;
  operator delete();
  sub_93F7A0(v22, v13);
  return v12;
}

