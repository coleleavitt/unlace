__int64 __fastcall sub_C180F0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // rax
  int v11; // edx
  unsigned int v12; // eax
  __int64 v14; // [rsp+8h] [rbp-430h] BYREF
  __int16 v15; // [rsp+10h] [rbp-428h] BYREF
  __int64 v16; // [rsp+18h] [rbp-420h]
  unsigned int v17; // [rsp+20h] [rbp-418h] BYREF
  char v18; // [rsp+24h] [rbp-414h]
  __int64 v19; // [rsp+28h] [rbp-410h] BYREF
  unsigned int v20; // [rsp+30h] [rbp-408h]
  char v21; // [rsp+34h] [rbp-404h]
  __m128 v22; // [rsp+60h] [rbp-3D8h] BYREF
  __int64 v23; // [rsp+70h] [rbp-3C8h]
  __int16 *v24; // [rsp+78h] [rbp-3C0h]
  _QWORD *v25; // [rsp+80h] [rbp-3B8h]
  int v26; // [rsp+88h] [rbp-3B0h]
  int v27; // [rsp+8Ch] [rbp-3ACh]
  int v28; // [rsp+90h] [rbp-3A8h]
  char v29; // [rsp+94h] [rbp-3A4h]
  _QWORD v30[10]; // [rsp+98h] [rbp-3A0h] BYREF
  int v31; // [rsp+E8h] [rbp-350h] BYREF
  __int64 v32; // [rsp+F0h] [rbp-348h]
  int *v33; // [rsp+F8h] [rbp-340h]
  int *v34; // [rsp+100h] [rbp-338h]
  __int64 v35; // [rsp+108h] [rbp-330h]
  __int64 v36; // [rsp+110h] [rbp-328h]
  int v37; // [rsp+118h] [rbp-320h]
  _DWORD *v38; // [rsp+120h] [rbp-318h]
  __int64 v39; // [rsp+128h] [rbp-310h]
  _DWORD v40[4]; // [rsp+130h] [rbp-308h] BYREF
  __int64 v41; // [rsp+140h] [rbp-2F8h]
  __int64 v42; // [rsp+148h] [rbp-2F0h]
  int v43; // [rsp+150h] [rbp-2E8h]
  __int64 v44; // [rsp+158h] [rbp-2E0h]
  char v45; // [rsp+160h] [rbp-2D8h]
  __int64 *v46; // [rsp+168h] [rbp-2D0h]
  __int64 v47; // [rsp+170h] [rbp-2C8h]
  __int64 v48; // [rsp+178h] [rbp-2C0h] BYREF
  _DWORD v49[6]; // [rsp+378h] [rbp-C0h] BYREF
  __int64 v50; // [rsp+390h] [rbp-A8h]
  __int64 v51; // [rsp+398h] [rbp-A0h]
  __int64 v52; // [rsp+3A0h] [rbp-98h]
  int v53; // [rsp+3A8h] [rbp-90h]
  int v54; // [rsp+3B8h] [rbp-80h] BYREF
  __int64 v55; // [rsp+3C0h] [rbp-78h]
  int *v56; // [rsp+3C8h] [rbp-70h]
  int *v57; // [rsp+3D0h] [rbp-68h]
  __int64 v58; // [rsp+3D8h] [rbp-60h]
  __int64 v59; // [rsp+3E0h] [rbp-58h]
  __int64 v60; // [rsp+3E8h] [rbp-50h]
  __int64 v61; // [rsp+3F0h] [rbp-48h]

  v14 = a3;
  v22 = _mm_loadh_ps((const double *)&v14);
  v8 = sub_22271F0("EvaluateKnownConstIntCheckOverflow", 34, sub_BEBB10, &v22, a5, a6);
  v16 = a4;
  v9 = v8;
  v23 = a3;
  v15 = 0;
  v22.m128_u64[0] = (unsigned __int64)&off_2B214A8;
  v10 = *(_QWORD *)(a3 + 2320);
  v24 = &v15;
  v11 = *(_DWORD *)(v10 + 136);
  v17 = 0;
  v18 &= ~1u;
  v28 = v11;
  LOBYTE(v10) = *(_BYTE *)(v10 + 140);
  v22.m128_i8[8] = 0;
  v30[1] = &v22;
  v29 = v10 & 1;
  v30[0] = &off_2B21540;
  v33 = &v31;
  v34 = &v31;
  v38 = v40;
  memset(&v30[2], 0, 56);
  v31 = 0;
  v32 = 0;
  v27 = 2;
  v35 = 0;
  v36 = 0;
  v37 = 1;
  v39 = 0x200000001LL;
  v25 = v30;
  v46 = &v48;
  v47 = 0x1000000000LL;
  v40[0] = 1;
  v40[2] = 1;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v26 = 1;
  sub_A2B560((__int64)v49, 0, 0, 0);
  v49[4] = 0;
  v56 = &v54;
  v57 = &v54;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v55 = 0;
  v22.m128_i8[8] = 1;
  v58 = 0;
  v59 = 0;
  v60 = -1;
  v61 = 0x301000000LL;
  sub_C167C0((__int64)&v22, (unsigned __int64)a2, &v17);
  v12 = v20;
  *(_DWORD *)(a1 + 8) = v20;
  if ( v12 > 0x40 )
  {
    a2 = &v19;
    sub_21E17D0(a1);
  }
  else
  {
    *(_QWORD *)a1 = v19;
  }
  *(_BYTE *)(a1 + 12) = v21;
  sub_C00040((__int64)&v22, (__int64)a2);
  if ( v17 > 1 )
    sub_A2BBA0((int *)&v17);
  if ( v9 )
    sub_2229990(v9);
  return a1;
}

