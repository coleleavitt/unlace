__int64 __fastcall sub_C3F220(unsigned __int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  __m128 v9; // xmm0
  __int64 v10; // rax
  __m128i v11; // xmm0
  __int64 v12; // rsi
  __int64 v13; // r13
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // r9d
  int v19; // r8d
  __int64 v20; // rax
  __int64 v21; // rdi
  char v22; // al
  unsigned int v23; // ebx
  __int64 v25; // rax
  __m128i v26; // [rsp+0h] [rbp-408h] BYREF
  __int64 (__fastcall ***v27)(); // [rsp+10h] [rbp-3F8h] BYREF
  unsigned int v28; // [rsp+18h] [rbp-3F0h]
  int v29; // [rsp+1Ch] [rbp-3ECh]
  __m128 v30; // [rsp+20h] [rbp-3E8h] BYREF
  __int64 (__fastcall **v31)(); // [rsp+30h] [rbp-3D8h] BYREF
  char v32; // [rsp+38h] [rbp-3D0h]
  __int64 v33; // [rsp+40h] [rbp-3C8h]
  __int64 v34; // [rsp+48h] [rbp-3C0h]
  _OWORD *v35; // [rsp+50h] [rbp-3B8h]
  int v36; // [rsp+58h] [rbp-3B0h]
  int v37; // [rsp+5Ch] [rbp-3ACh]
  int v38; // [rsp+60h] [rbp-3A8h]
  char v39; // [rsp+64h] [rbp-3A4h]
  _OWORD v40[3]; // [rsp+68h] [rbp-3A0h] BYREF
  __int64 v41; // [rsp+98h] [rbp-370h]
  __int64 v42; // [rsp+A0h] [rbp-368h]
  __int64 v43; // [rsp+A8h] [rbp-360h]
  int v44; // [rsp+B8h] [rbp-350h] BYREF
  __int64 v45; // [rsp+C0h] [rbp-348h]
  int *v46; // [rsp+C8h] [rbp-340h]
  int *v47; // [rsp+D0h] [rbp-338h]
  __int64 v48; // [rsp+D8h] [rbp-330h]
  __int64 v49; // [rsp+E0h] [rbp-328h]
  int v50; // [rsp+E8h] [rbp-320h]
  _DWORD *v51; // [rsp+F0h] [rbp-318h]
  __int64 v52; // [rsp+F8h] [rbp-310h]
  _DWORD v53[4]; // [rsp+100h] [rbp-308h] BYREF
  __int64 v54; // [rsp+110h] [rbp-2F8h]
  __int64 v55; // [rsp+118h] [rbp-2F0h]
  int v56; // [rsp+120h] [rbp-2E8h]
  __int64 v57; // [rsp+128h] [rbp-2E0h]
  char v58; // [rsp+130h] [rbp-2D8h]
  __int64 *v59; // [rsp+138h] [rbp-2D0h]
  __int64 v60; // [rsp+140h] [rbp-2C8h]
  __int64 v61; // [rsp+148h] [rbp-2C0h] BYREF
  _DWORD v62[6]; // [rsp+348h] [rbp-C0h] BYREF
  __int64 v63; // [rsp+360h] [rbp-A8h]
  __int64 v64; // [rsp+368h] [rbp-A0h]
  __int64 v65; // [rsp+370h] [rbp-98h]
  int v66; // [rsp+378h] [rbp-90h]
  int v67; // [rsp+388h] [rbp-80h] BYREF
  __int64 v68; // [rsp+390h] [rbp-78h]
  int *v69; // [rsp+398h] [rbp-70h]
  int *v70; // [rsp+3A0h] [rbp-68h]
  __int64 v71; // [rsp+3A8h] [rbp-60h]
  __int64 v72; // [rsp+3B0h] [rbp-58h]
  __int64 v73; // [rsp+3B8h] [rbp-50h]
  __int64 v74; // [rsp+3C0h] [rbp-48h]

  v27 = &v31;
  v29 = a4;
  v28 = a5;
  v9 = _mm_loadh_ps((const double *)&v27);
  v27 = (__int64 (__fastcall ***)())a3;
  v26 = (__m128i)v9;
  v30 = _mm_loadh_ps((const double *)&v27);
  v10 = sub_224AF30("EvaluateAsInt", 13, sub_C0F850, &v30, a5, a6);
  v11 = _mm_load_si128(&v26);
  v12 = 0;
  v13 = v10;
  v32 = 0;
  v31 = &off_2B4B448;
  v14 = *(_QWORD *)(a3 + 2320);
  v40[0] = v11;
  v15 = *(_DWORD *)(v14 + 136);
  LOBYTE(v14) = *(_BYTE *)(v14 + 140);
  memset(&v40[1], 0, 32);
  v38 = v15;
  v39 = v14 & 1;
  v46 = &v44;
  v47 = &v44;
  v51 = v53;
  v52 = 0x200000001LL;
  v33 = a3;
  v34 = a2;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v37 = 2;
  v48 = 0;
  v49 = 0;
  v50 = 1;
  v53[0] = 1;
  v53[2] = 1;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v57 = 0;
  v58 = 0;
  v35 = v40;
  v59 = &v61;
  v60 = 0x1000000000LL;
  v36 = 1;
  sub_A4F2A0((__int64)v62, 0, 0, 0);
  v19 = v28;
  v62[4] = 0;
  v69 = &v67;
  v70 = &v67;
  v74 = 0x300000000LL;
  v20 = *(_QWORD *)(a1 + 8);
  v63 = 0;
  v32 = v28;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  v67 = 0;
  v68 = 0;
  v71 = 0;
  v72 = 0;
  v73 = -1;
  v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v22 = *(_BYTE *)(v21 + 16);
  if ( v22 != 13 )
  {
    if ( v22 == 47 )
    {
      v25 = sub_F60F10(v21, 0, v16, v17, v28);
      if ( (*(_BYTE *)(v25 + 74) & 1) == 0 && (*(_QWORD *)(v25 + 128) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        goto LABEL_3;
    }
    else if ( v22 != 10 )
    {
      goto LABEL_3;
    }
LABEL_8:
    v12 = a2;
    if ( (unsigned __int8)sub_C1DA70(a1, a2, a3, &v30, v19, v18) )
    {
      v23 = v30.m128_u8[0];
    }
    else
    {
      v12 = a1;
      v23 = sub_C3A500((__int64)&v31, a1, (unsigned int *)(a2 + 16));
    }
    if ( (_BYTE)v23 && *(_DWORD *)(a2 + 16) == 2 && (v29 > 1 || !*(_BYTE *)a2 && (v29 == 1 || !*(_BYTE *)(a2 + 1))) )
      goto LABEL_4;
    goto LABEL_3;
  }
  if ( (((*(_WORD *)(v21 + 18) >> 3) + 76) & 0x1FFu) <= 0x13 )
    goto LABEL_8;
LABEL_3:
  v23 = 0;
LABEL_4:
  sub_C23D80((__int64)&v31, v12);
  if ( v13 )
    sub_224D6D0(v13);
  return v23;
}
