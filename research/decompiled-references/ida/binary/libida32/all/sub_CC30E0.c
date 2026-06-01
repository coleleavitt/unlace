__int64 __fastcall sub_CC30E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r12
  __m128 v6; // xmm0
  unsigned int v7; // eax
  bool v8; // zf
  unsigned int v9; // r12d
  unsigned int v10; // eax
  _QWORD *v11; // rax
  __int64 v12; // rsi
  __int64 v14; // [rsp+0h] [rbp-738h] BYREF
  __int64 v15; // [rsp+8h] [rbp-730h]
  __int64 v16; // [rsp+10h] [rbp-728h] BYREF
  __int64 v17; // [rsp+18h] [rbp-720h] BYREF
  _QWORD *v18; // [rsp+28h] [rbp-710h] BYREF
  _QWORD v19[6]; // [rsp+30h] [rbp-708h] BYREF
  unsigned int v20; // [rsp+60h] [rbp-6D8h] BYREF
  char v21; // [rsp+64h] [rbp-6D4h]
  _QWORD *v22; // [rsp+68h] [rbp-6D0h]
  unsigned int v23; // [rsp+70h] [rbp-6C8h]
  char v24[64]; // [rsp+A0h] [rbp-698h] BYREF
  unsigned __int8 v25; // [rsp+E0h] [rbp-658h]
  int v26; // [rsp+E8h] [rbp-650h]
  _QWORD v27[158]; // [rsp+100h] [rbp-638h] BYREF
  __m128 v28; // [rsp+5F0h] [rbp-148h]
  __int64 v29; // [rsp+600h] [rbp-138h]
  __int64 v30; // [rsp+608h] [rbp-130h]
  unsigned int v31; // [rsp+610h] [rbp-128h]
  __int64 v32; // [rsp+618h] [rbp-120h]
  __int64 v33; // [rsp+620h] [rbp-118h]
  int v34; // [rsp+628h] [rbp-110h]
  __int64 v35; // [rsp+630h] [rbp-108h]
  char v36; // [rsp+640h] [rbp-F8h]
  __int64 v37; // [rsp+648h] [rbp-F0h]
  __int16 v38; // [rsp+650h] [rbp-E8h]
  char v39; // [rsp+652h] [rbp-E6h]
  __int64 v40; // [rsp+658h] [rbp-E0h]
  void *ptr; // [rsp+660h] [rbp-D8h]
  __int64 v42; // [rsp+668h] [rbp-D0h]
  _BYTE v43[64]; // [rsp+670h] [rbp-C8h] BYREF
  __int64 v44; // [rsp+6B0h] [rbp-88h]
  __int64 v45; // [rsp+6B8h] [rbp-80h]
  int v46; // [rsp+6C0h] [rbp-78h]
  __int64 v47; // [rsp+6C8h] [rbp-70h]
  char v48; // [rsp+6D4h] [rbp-64h]
  __int64 v49; // [rsp+6D8h] [rbp-60h]
  char v50; // [rsp+6E4h] [rbp-54h]
  char v51; // [rsp+6ECh] [rbp-4Ch]
  __int64 v52; // [rsp+6F0h] [rbp-48h]

  v5 = *(_QWORD *)(a1 + 24);
  v17 = a3;
  v16 = a4;
  v15 = a5;
  sub_CDB240(v27, a1, v5, a2, a1 + 8);
  v14 = v5;
  v29 = 0;
  v30 = 0;
  v27[0] = &off_2BDAB80;
  v6 = _mm_loadh_ps((const double *)&v14);
  v38 = 0;
  ptr = v43;
  v28 = v6;
  v42 = 0x300000000LL;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v39 = 0;
  v40 = 0;
  v43[48] = 0;
  v43[56] = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v20 = 0;
  v21 &= ~1u;
  v7 = sub_CC19B0(a1, a2, v17, (__int64)&v20);
  v8 = (_BYTE)v7 == 0;
  v9 = v7;
  v10 = v20;
  if ( !v8 )
  {
    if ( v20 == 2 )
    {
      v11 = v22;
      if ( v23 > 0x40 )
        v11 = (_QWORD *)*v22;
      v18 = v11;
      v19[0] = &v18;
      v19[2] = &v17;
      v19[3] = &v16;
      v19[4] = a1;
      v19[1] = a2;
      v19[5] = v15;
      sub_CDB480(v24, v27, v16, sub_CC30D0, v19);
      if ( v26 == 3 )
      {
        v9 = 0;
        sub_CDB380(v27);
        sub_DFD890(a1 + 8);
      }
      if ( v25 != 0xFF )
        funcs_CC1BB6[v25]();
      v10 = v20;
    }
    else
    {
      v9 = 0;
    }
  }
  if ( v10 > 1 )
    sub_A2BBA0((int *)&v20);
  v27[0] = &off_2BDAB80;
  operator delete();
  if ( ptr != v43 )
    free(ptr);
  operator delete();
  v12 = 24LL * v31;
  operator delete();
  sub_D65B70(v27, v12);
  return v9;
}

