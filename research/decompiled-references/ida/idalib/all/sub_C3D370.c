__int64 __fastcall sub_C3D370(__int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r12
  __m128 v9; // xmm0
  __m128 v10; // xmm1
  __int64 v11; // rax
  __m128i v12; // xmm0
  __int64 v13; // r14
  __int64 v14; // rax
  int v15; // edx
  int v16; // r8d
  int v17; // r9d
  unsigned int v18; // ebp
  __int64 (__fastcall ***v20)(); // [rsp+0h] [rbp-408h] BYREF
  __int64 v21; // [rsp+8h] [rbp-400h] BYREF
  __m128i v22; // [rsp+10h] [rbp-3F8h] BYREF
  __m128 v23; // [rsp+20h] [rbp-3E8h] BYREF
  __int64 (__fastcall **v24)(); // [rsp+30h] [rbp-3D8h] BYREF
  char v25; // [rsp+38h] [rbp-3D0h]
  __int64 v26; // [rsp+40h] [rbp-3C8h]
  __int64 v27; // [rsp+48h] [rbp-3C0h]
  _OWORD *v28; // [rsp+50h] [rbp-3B8h]
  int v29; // [rsp+58h] [rbp-3B0h]
  int v30; // [rsp+5Ch] [rbp-3ACh]
  int v31; // [rsp+60h] [rbp-3A8h]
  char v32; // [rsp+64h] [rbp-3A4h]
  _OWORD v33[3]; // [rsp+68h] [rbp-3A0h] BYREF
  __int64 v34; // [rsp+98h] [rbp-370h]
  __int64 v35; // [rsp+A0h] [rbp-368h]
  __int64 v36; // [rsp+A8h] [rbp-360h]
  int v37; // [rsp+B8h] [rbp-350h] BYREF
  __int64 v38; // [rsp+C0h] [rbp-348h]
  int *v39; // [rsp+C8h] [rbp-340h]
  int *v40; // [rsp+D0h] [rbp-338h]
  __int64 v41; // [rsp+D8h] [rbp-330h]
  __int64 v42; // [rsp+E0h] [rbp-328h]
  int v43; // [rsp+E8h] [rbp-320h]
  _DWORD *v44; // [rsp+F0h] [rbp-318h]
  __int64 v45; // [rsp+F8h] [rbp-310h]
  _DWORD v46[4]; // [rsp+100h] [rbp-308h] BYREF
  __int64 v47; // [rsp+110h] [rbp-2F8h]
  __int64 v48; // [rsp+118h] [rbp-2F0h]
  int v49; // [rsp+120h] [rbp-2E8h]
  __int64 v50; // [rsp+128h] [rbp-2E0h]
  char v51; // [rsp+130h] [rbp-2D8h]
  __int64 *v52; // [rsp+138h] [rbp-2D0h]
  __int64 v53; // [rsp+140h] [rbp-2C8h]
  __int64 v54; // [rsp+148h] [rbp-2C0h] BYREF
  _DWORD v55[6]; // [rsp+348h] [rbp-C0h] BYREF
  __int64 v56; // [rsp+360h] [rbp-A8h]
  __int64 v57; // [rsp+368h] [rbp-A0h]
  __int64 v58; // [rsp+370h] [rbp-98h]
  int v59; // [rsp+378h] [rbp-90h]
  int v60; // [rsp+388h] [rbp-80h] BYREF
  __int64 v61; // [rsp+390h] [rbp-78h]
  int *v62; // [rsp+398h] [rbp-70h]
  int *v63; // [rsp+3A0h] [rbp-68h]
  __int64 v64; // [rsp+3A8h] [rbp-60h]
  __int64 v65; // [rsp+3B0h] [rbp-58h]
  __int64 v66; // [rsp+3B8h] [rbp-50h]
  __int64 v67; // [rsp+3C0h] [rbp-48h]

  v7 = a2;
  v20 = &v24;
  v21 = a3;
  v9 = _mm_loadh_ps((const double *)&v20);
  v20 = (__int64 (__fastcall ***)())a1;
  v10 = _mm_loadh_ps((const double *)&v21);
  v22 = (__m128i)v9;
  v23 = v10;
  v11 = sub_224AF30("EvaluateAsRValue", 16, sub_C0F850, &v23, a5, a6);
  v12 = _mm_load_si128(&v22);
  v13 = v11;
  v25 = 0;
  v24 = &off_2B4B448;
  v14 = *(_QWORD *)(a3 + 2320);
  v33[0] = v12;
  v15 = *(_DWORD *)(v14 + 136);
  LOBYTE(v14) = *(_BYTE *)(v14 + 140);
  memset(&v33[1], 0, 32);
  v31 = v15;
  v32 = v14 & 1;
  v39 = &v37;
  v40 = &v37;
  v44 = v46;
  v45 = 0x200000001LL;
  v26 = a3;
  v27 = a2;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v30 = 2;
  v41 = 0;
  v42 = 0;
  v43 = 1;
  v46[0] = 1;
  v46[2] = 1;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v28 = v33;
  v52 = &v54;
  v53 = 0x1000000000LL;
  v29 = 1;
  sub_A4F2A0((__int64)v55, 0, 0, 0);
  v55[4] = 0;
  v62 = &v60;
  v63 = &v60;
  v56 = 0;
  v57 = 0;
  v58 = 0;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  v64 = 0;
  v65 = 0;
  v66 = -1;
  v67 = 0x300000000LL;
  v25 = a4;
  if ( (unsigned __int8)sub_C1DA70((__int64)v20, a2, a3, &v23, v16, v17) )
  {
    v18 = v23.m128_u8[0];
  }
  else
  {
    a2 = (__int64)v20;
    v18 = sub_C3A500((__int64)&v24, (unsigned __int64)v20, (unsigned int *)(v7 + 16));
  }
  sub_C23D80((__int64)&v24, a2);
  if ( v13 )
    sub_224D6D0(v13);
  return v18;
}
