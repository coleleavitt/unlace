__int64 __fastcall sub_C3DC60(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rax
  int v12; // edx
  __int16 *v13; // rsi
  int v14; // r8d
  int v15; // r9d
  unsigned int v16; // eax
  double v18[2]; // [rsp+8h] [rbp-440h] BYREF
  char v19; // [rsp+1Fh] [rbp-429h] BYREF
  __int16 v20; // [rsp+20h] [rbp-428h] BYREF
  __int64 v21; // [rsp+28h] [rbp-420h]
  unsigned int v22; // [rsp+30h] [rbp-418h] BYREF
  char v23; // [rsp+34h] [rbp-414h]
  __int64 v24; // [rsp+38h] [rbp-410h] BYREF
  unsigned int v25; // [rsp+40h] [rbp-408h]
  char v26; // [rsp+44h] [rbp-404h]
  __m128 v27; // [rsp+70h] [rbp-3D8h] BYREF
  __int64 v28; // [rsp+80h] [rbp-3C8h]
  __int16 *v29; // [rsp+88h] [rbp-3C0h]
  _QWORD *v30; // [rsp+90h] [rbp-3B8h]
  int v31; // [rsp+98h] [rbp-3B0h]
  int v32; // [rsp+9Ch] [rbp-3ACh]
  int v33; // [rsp+A0h] [rbp-3A8h]
  char v34; // [rsp+A4h] [rbp-3A4h]
  _QWORD v35[10]; // [rsp+A8h] [rbp-3A0h] BYREF
  int v36; // [rsp+F8h] [rbp-350h] BYREF
  __int64 v37; // [rsp+100h] [rbp-348h]
  int *v38; // [rsp+108h] [rbp-340h]
  int *v39; // [rsp+110h] [rbp-338h]
  __int64 v40; // [rsp+118h] [rbp-330h]
  __int64 v41; // [rsp+120h] [rbp-328h]
  int v42; // [rsp+128h] [rbp-320h]
  _DWORD *v43; // [rsp+130h] [rbp-318h]
  __int64 v44; // [rsp+138h] [rbp-310h]
  _DWORD v45[4]; // [rsp+140h] [rbp-308h] BYREF
  __int64 v46; // [rsp+150h] [rbp-2F8h]
  __int64 v47; // [rsp+158h] [rbp-2F0h]
  int v48; // [rsp+160h] [rbp-2E8h]
  __int64 v49; // [rsp+168h] [rbp-2E0h]
  char v50; // [rsp+170h] [rbp-2D8h]
  __int64 *v51; // [rsp+178h] [rbp-2D0h]
  __int64 v52; // [rsp+180h] [rbp-2C8h]
  __int64 v53; // [rsp+188h] [rbp-2C0h] BYREF
  _DWORD v54[6]; // [rsp+388h] [rbp-C0h] BYREF
  __int64 v55; // [rsp+3A0h] [rbp-A8h]
  __int64 v56; // [rsp+3A8h] [rbp-A0h]
  __int64 v57; // [rsp+3B0h] [rbp-98h]
  int v58; // [rsp+3B8h] [rbp-90h]
  int v59; // [rsp+3C8h] [rbp-80h] BYREF
  __int64 v60; // [rsp+3D0h] [rbp-78h]
  int *v61; // [rsp+3D8h] [rbp-70h]
  int *v62; // [rsp+3E0h] [rbp-68h]
  __int64 v63; // [rsp+3E8h] [rbp-60h]
  __int64 v64; // [rsp+3F0h] [rbp-58h]
  __int64 v65; // [rsp+3F8h] [rbp-50h]
  __int64 v66; // [rsp+400h] [rbp-48h]

  *(_QWORD *)&v18[0] = a3;
  v27 = _mm_loadh_ps(v18);
  v9 = sub_224AF30("EvaluateKnownConstInt", 21, sub_C0F850, &v27, a5, a6);
  v21 = a4;
  v10 = v9;
  v28 = a3;
  v20 = 0;
  v27.m128_u64[0] = (unsigned __int64)&off_2B4B448;
  v11 = *(_QWORD *)(a3 + 2320);
  v29 = &v20;
  v12 = *(_DWORD *)(v11 + 136);
  v23 &= ~1u;
  v22 = 0;
  v33 = v12;
  LOBYTE(v11) = *(_BYTE *)(v11 + 140);
  v27.m128_i8[8] = 0;
  v35[1] = &v27;
  v34 = v11 & 1;
  v35[0] = &off_2B4B4E0;
  v38 = &v36;
  v39 = &v36;
  v43 = v45;
  memset(&v35[2], 0, 56);
  v36 = 0;
  v37 = 0;
  v32 = 2;
  v40 = 0;
  v41 = 0;
  v42 = 1;
  v44 = 0x200000001LL;
  v30 = v35;
  v51 = &v53;
  v52 = 0x1000000000LL;
  v45[0] = 1;
  v45[2] = 1;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v31 = 1;
  sub_A4F2A0((__int64)v54, 0, 0, 0);
  v13 = &v20;
  v54[4] = 0;
  v61 = &v59;
  v62 = &v59;
  v55 = 0;
  v56 = 0;
  v57 = 0;
  v58 = 0;
  v59 = 0;
  v60 = 0;
  v63 = 0;
  v64 = 0;
  v65 = -1;
  v66 = 0x300000000LL;
  v27.m128_i8[8] = 1;
  if ( !(unsigned __int8)sub_C1DA70(a2, (__int64)&v20, a3, &v19, v14, v15) )
  {
    v13 = (__int16 *)a2;
    sub_C3A500((__int64)&v27, a2, &v22);
  }
  v16 = v25;
  *(_DWORD *)(a1 + 8) = v25;
  if ( v16 > 0x40 )
  {
    v13 = (__int16 *)&v24;
    sub_2205510(a1);
  }
  else
  {
    *(_QWORD *)a1 = v24;
  }
  *(_BYTE *)(a1 + 12) = v26;
  sub_C23D80((__int64)&v27, (__int64)v13);
  if ( v22 > 1 )
    sub_A4F8E0((int *)&v22);
  if ( v10 )
    sub_224D6D0(v10);
  return a1;
}
