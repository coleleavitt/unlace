__int64 __fastcall sub_CC19B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r14
  bool v7; // zf
  __m128 v8; // xmm0
  unsigned int v9; // r13d
  __int64 v10; // rsi
  double v12[2]; // [rsp+0h] [rbp-6E8h] BYREF
  int v13[16]; // [rsp+10h] [rbp-6D8h] BYREF
  _BYTE v14[64]; // [rsp+50h] [rbp-698h] BYREF
  unsigned __int8 v15; // [rsp+90h] [rbp-658h]
  int v16; // [rsp+98h] [rbp-650h]
  _QWORD v17[158]; // [rsp+B0h] [rbp-638h] BYREF
  __m128 v18; // [rsp+5A0h] [rbp-148h]
  __int64 v19; // [rsp+5B0h] [rbp-138h]
  __int64 v20; // [rsp+5B8h] [rbp-130h]
  unsigned int v21; // [rsp+5C0h] [rbp-128h]
  __int64 v22; // [rsp+5C8h] [rbp-120h]
  __int64 v23; // [rsp+5D0h] [rbp-118h]
  int v24; // [rsp+5D8h] [rbp-110h]
  __int64 v25; // [rsp+5E0h] [rbp-108h]
  char v26; // [rsp+5F0h] [rbp-F8h]
  __int64 v27; // [rsp+5F8h] [rbp-F0h]
  __int16 v28; // [rsp+600h] [rbp-E8h]
  char v29; // [rsp+602h] [rbp-E6h]
  __int64 v30; // [rsp+608h] [rbp-E0h]
  void *ptr; // [rsp+610h] [rbp-D8h]
  __int64 v32; // [rsp+618h] [rbp-D0h]
  _BYTE v33[64]; // [rsp+620h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+660h] [rbp-88h]
  __int64 v35; // [rsp+668h] [rbp-80h]
  int v36; // [rsp+670h] [rbp-78h]
  __int64 v37; // [rsp+678h] [rbp-70h]
  char v38; // [rsp+684h] [rbp-64h]
  __int64 v39; // [rsp+688h] [rbp-60h]
  char v40; // [rsp+694h] [rbp-54h]
  char v41; // [rsp+69Ch] [rbp-4Ch]
  __int64 v42; // [rsp+6A0h] [rbp-48h]

  ++*(_DWORD *)(a1 + 32);
  v6 = *(_QWORD *)(a1 + 16);
  v12[0] = *(double *)(a1 + 24);
  sub_CDB240(v17, a1, *(_QWORD *)&v12[0], a2, a1 + 8);
  *(_QWORD *)&v12[1] = a1;
  v19 = 0;
  v20 = 0;
  v7 = (*(_BYTE *)(a3 + 1) & 6) == 0;
  v21 = 0;
  v28 = 0;
  v8 = _mm_loadh_ps(v12);
  v17[0] = &off_2BDAB80;
  ptr = v33;
  v18 = v8;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v29 = 0;
  v30 = 0;
  v32 = 0x300000000LL;
  v33[48] = 0;
  v33[56] = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  sub_CDB390(v14, v17, a3, !v7, 0);
  if ( v16 == 3 )
  {
    sub_CDB380(v17);
    v9 = 0;
    sub_DFD8C0(a1 + 8, v6);
  }
  else
  {
    if ( !v6 )
      sub_CDB380(v17);
    sub_D86A00(v13, v14);
    sub_A2BFE0(a4, (__int64)v13);
    if ( v13[0] > 1u )
      sub_A2BBA0(v13);
    v9 = 1;
  }
  if ( v15 != 0xFF )
    funcs_CC1BB6[v15]();
  v17[0] = &off_2BDAB80;
  operator delete();
  if ( ptr != v33 )
    free(ptr);
  operator delete();
  v10 = 24LL * v21;
  operator delete();
  sub_D65B70(v17, v10);
  return v9;
}

