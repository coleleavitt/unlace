__int64 __fastcall sub_C3A6B0(unsigned __int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  __m128 v8; // xmm0
  __int64 v9; // rax
  __m128i v10; // xmm0
  __int64 v11; // rsi
  __int64 v12; // r12
  __int64 v13; // rax
  int v14; // edx
  int v15; // r9d
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int v18; // ebx
  __m128i v20; // [rsp+0h] [rbp-408h] BYREF
  __int64 (__fastcall ***v21)(); // [rsp+10h] [rbp-3F8h] BYREF
  int v22; // [rsp+18h] [rbp-3F0h]
  int v23; // [rsp+1Ch] [rbp-3ECh]
  __m128 v24; // [rsp+20h] [rbp-3E8h] BYREF
  __int64 (__fastcall **v25)(); // [rsp+30h] [rbp-3D8h] BYREF
  char v26; // [rsp+38h] [rbp-3D0h]
  __int64 v27; // [rsp+40h] [rbp-3C8h]
  __int64 v28; // [rsp+48h] [rbp-3C0h]
  _OWORD *v29; // [rsp+50h] [rbp-3B8h]
  int v30; // [rsp+58h] [rbp-3B0h]
  int v31; // [rsp+5Ch] [rbp-3ACh]
  int v32; // [rsp+60h] [rbp-3A8h]
  char v33; // [rsp+64h] [rbp-3A4h]
  _OWORD v34[3]; // [rsp+68h] [rbp-3A0h] BYREF
  __int64 v35; // [rsp+98h] [rbp-370h]
  __int64 v36; // [rsp+A0h] [rbp-368h]
  __int64 v37; // [rsp+A8h] [rbp-360h]
  int v38; // [rsp+B8h] [rbp-350h] BYREF
  __int64 v39; // [rsp+C0h] [rbp-348h]
  int *v40; // [rsp+C8h] [rbp-340h]
  int *v41; // [rsp+D0h] [rbp-338h]
  __int64 v42; // [rsp+D8h] [rbp-330h]
  __int64 v43; // [rsp+E0h] [rbp-328h]
  int v44; // [rsp+E8h] [rbp-320h]
  _DWORD *v45; // [rsp+F0h] [rbp-318h]
  __int64 v46; // [rsp+F8h] [rbp-310h]
  _DWORD v47[4]; // [rsp+100h] [rbp-308h] BYREF
  __int64 v48; // [rsp+110h] [rbp-2F8h]
  __int64 v49; // [rsp+118h] [rbp-2F0h]
  int v50; // [rsp+120h] [rbp-2E8h]
  __int64 v51; // [rsp+128h] [rbp-2E0h]
  char v52; // [rsp+130h] [rbp-2D8h]
  __int64 *v53; // [rsp+138h] [rbp-2D0h]
  __int64 v54; // [rsp+140h] [rbp-2C8h]
  __int64 v55; // [rsp+148h] [rbp-2C0h] BYREF
  _DWORD v56[6]; // [rsp+348h] [rbp-C0h] BYREF
  __int64 v57; // [rsp+360h] [rbp-A8h]
  __int64 v58; // [rsp+368h] [rbp-A0h]
  __int64 v59; // [rsp+370h] [rbp-98h]
  int v60; // [rsp+378h] [rbp-90h]
  int v61; // [rsp+388h] [rbp-80h] BYREF
  __int64 v62; // [rsp+390h] [rbp-78h]
  int *v63; // [rsp+398h] [rbp-70h]
  int *v64; // [rsp+3A0h] [rbp-68h]
  __int64 v65; // [rsp+3A8h] [rbp-60h]
  __int64 v66; // [rsp+3B0h] [rbp-58h]
  __int64 v67; // [rsp+3B8h] [rbp-50h]
  __int64 v68; // [rsp+3C0h] [rbp-48h]

  v21 = &v25;
  v23 = a4;
  v22 = a5;
  v8 = _mm_loadh_ps((const double *)&v21);
  v21 = (__int64 (__fastcall ***)())a3;
  v24 = _mm_loadh_ps((const double *)&v21);
  v9 = sub_224AF30("EvaluateAsFixedPoint", 20, sub_C0F850, &v24, a5, a6, v8.m128_u64[0], v8.m128_u64[1], a3);
  v10 = _mm_load_si128(&v20);
  v11 = 0;
  v12 = v9;
  v26 = 0;
  v25 = &off_2B4B448;
  v13 = *(_QWORD *)(a3 + 2320);
  v34[0] = v10;
  v14 = *(_DWORD *)(v13 + 136);
  LOBYTE(v13) = *(_BYTE *)(v13 + 140);
  memset(&v34[1], 0, 32);
  v32 = v14;
  v33 = v13 & 1;
  v40 = &v38;
  v41 = &v38;
  v45 = v47;
  v46 = 0x200000001LL;
  v27 = a3;
  v28 = a2;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v31 = 2;
  v42 = 0;
  v43 = 0;
  v44 = 1;
  v47[0] = 1;
  v47[2] = 1;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v29 = v34;
  v53 = &v55;
  v54 = 0x1000000000LL;
  v30 = 1;
  sub_A4F2A0((__int64)v56, 0, 0, 0);
  v56[4] = 0;
  v63 = &v61;
  v64 = &v61;
  v68 = 0x300000000LL;
  v16 = *(_QWORD *)(a1 + 8);
  v57 = 0;
  v26 = v22;
  v58 = 0;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  v62 = 0;
  v65 = 0;
  v66 = 0;
  v67 = -1;
  v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v17 + 16) != 13
    || (((*(_WORD *)(v17 + 18) >> 3) + 56) & 0x1FFu) > 0x17
    || ((v11 = a2, !(unsigned __int8)sub_C1DA70(a1, a2, a3, &v24, v22, v15))
      ? (v11 = a1, v18 = sub_C3A500((__int64)&v25, a1, (unsigned int *)(a2 + 16)))
      : (v18 = v24.m128_u8[0]),
        !(_BYTE)v18 || *(_DWORD *)(a2 + 16) != 4 || v23 <= 1 && (*(_BYTE *)a2 || v23 != 1 && *(_BYTE *)(a2 + 1))) )
  {
    v18 = 0;
  }
  sub_C23D80((__int64)&v25, v11);
  if ( v12 )
    sub_224D6D0(v12);
  return v18;
}
