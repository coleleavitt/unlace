__int64 __fastcall sub_CC1C90(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r14
  __m128 v7; // xmm0
  unsigned int v8; // r12d
  __int64 v9; // rsi
  double v11[2]; // [rsp+0h] [rbp-6E8h] BYREF
  int v12[16]; // [rsp+10h] [rbp-6D8h] BYREF
  _BYTE v13[64]; // [rsp+50h] [rbp-698h] BYREF
  unsigned __int8 v14; // [rsp+90h] [rbp-658h]
  int v15; // [rsp+98h] [rbp-650h]
  _QWORD v16[158]; // [rsp+B0h] [rbp-638h] BYREF
  __m128 v17; // [rsp+5A0h] [rbp-148h]
  __int64 v18; // [rsp+5B0h] [rbp-138h]
  __int64 v19; // [rsp+5B8h] [rbp-130h]
  unsigned int v20; // [rsp+5C0h] [rbp-128h]
  __int64 v21; // [rsp+5C8h] [rbp-120h]
  __int64 v22; // [rsp+5D0h] [rbp-118h]
  int v23; // [rsp+5D8h] [rbp-110h]
  __int64 v24; // [rsp+5E0h] [rbp-108h]
  char v25; // [rsp+5F0h] [rbp-F8h]
  __int64 v26; // [rsp+5F8h] [rbp-F0h]
  __int16 v27; // [rsp+600h] [rbp-E8h]
  char v28; // [rsp+602h] [rbp-E6h]
  __int64 v29; // [rsp+608h] [rbp-E0h]
  void *ptr; // [rsp+610h] [rbp-D8h]
  __int64 v31; // [rsp+618h] [rbp-D0h]
  _BYTE v32[64]; // [rsp+620h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+660h] [rbp-88h]
  __int64 v34; // [rsp+668h] [rbp-80h]
  int v35; // [rsp+670h] [rbp-78h]
  __int64 v36; // [rsp+678h] [rbp-70h]
  char v37; // [rsp+684h] [rbp-64h]
  __int64 v38; // [rsp+688h] [rbp-60h]
  char v39; // [rsp+694h] [rbp-54h]
  char v40; // [rsp+69Ch] [rbp-4Ch]
  __int64 v41; // [rsp+6A0h] [rbp-48h]

  ++*(_DWORD *)(a1 + 32);
  v6 = *(_QWORD *)(a1 + 16);
  v11[0] = *(double *)(a1 + 24);
  sub_CDB240(v16, a1, *(_QWORD *)&v11[0], a2, a1 + 8);
  *(_QWORD *)&v11[1] = a1;
  v18 = 0;
  v7 = _mm_loadh_ps(v11);
  v19 = 0;
  v27 = 0;
  v16[0] = &off_2BDAB80;
  ptr = v32;
  v17 = v7;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v28 = 0;
  v29 = 0;
  v31 = 0x300000000LL;
  v32[48] = 0;
  v32[56] = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  sub_CDB390(v13, v16, a3, 0, 1);
  if ( v15 == 3 )
  {
    sub_CDB380(v16);
    v8 = 0;
    sub_DFD8C0(a1 + 8, v6);
  }
  else
  {
    if ( !v6 )
      sub_CDB380(v16);
    sub_D86A00(v12, v13);
    sub_A2BFE0(a4, (__int64)v12);
    if ( v12[0] > 1u )
      sub_A2BBA0(v12);
    v8 = 1;
  }
  if ( v14 != 0xFF )
    funcs_CC1BB6[v14]();
  v16[0] = &off_2BDAB80;
  operator delete();
  if ( ptr != v32 )
    free(ptr);
  operator delete();
  v9 = 24LL * v20;
  operator delete();
  sub_D65B70(v16, v9);
  return v8;
}

