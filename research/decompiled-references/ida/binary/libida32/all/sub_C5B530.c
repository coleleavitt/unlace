__int64 __fastcall sub_C5B530(__m128i *a1, _BYTE *a2, __int64 a3, char a4, __int64 a5, __int64 a6)
{
  __m128 v9; // xmm0
  __m128 v10; // xmm1
  __int64 v11; // rax
  __m128i v12; // xmm0
  __int64 v13; // r15
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // rsi
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // r13d
  __int64 *v23; // rdx
  __int64 v24; // rdi
  int v25; // eax
  __int64 v26; // rdx
  __m128i *v27; // r13
  __int64 v28; // rsi
  unsigned __int64 v29; // r12
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  unsigned int v33; // eax
  __m128i *v34; // [rsp+8h] [rbp-510h] BYREF
  __m128i v35; // [rsp+10h] [rbp-508h] BYREF
  __int64 v36; // [rsp+20h] [rbp-4F8h] BYREF
  void **v37; // [rsp+28h] [rbp-4F0h]
  __m128i v38; // [rsp+30h] [rbp-4E8h] BYREF
  char v39; // [rsp+40h] [rbp-4D8h]
  void *v40[2]; // [rsp+50h] [rbp-4C8h] BYREF
  int v41; // [rsp+60h] [rbp-4B8h]
  char v42; // [rsp+64h] [rbp-4B4h]
  char v43; // [rsp+68h] [rbp-4B0h] BYREF
  __m128i v44; // [rsp+B0h] [rbp-468h] BYREF
  __int64 v45; // [rsp+C0h] [rbp-458h]
  char v46; // [rsp+C8h] [rbp-450h]
  __int64 v47; // [rsp+D8h] [rbp-440h]
  void *ptr; // [rsp+E0h] [rbp-438h]
  __int64 v49; // [rsp+E8h] [rbp-430h]
  _BYTE v50[80]; // [rsp+F0h] [rbp-428h] BYREF
  __int64 (__fastcall **v51)(); // [rsp+140h] [rbp-3D8h] BYREF
  char v52; // [rsp+148h] [rbp-3D0h]
  __int64 v53; // [rsp+150h] [rbp-3C8h]
  _BYTE *v54; // [rsp+158h] [rbp-3C0h]
  _OWORD *v55; // [rsp+160h] [rbp-3B8h]
  int v56; // [rsp+168h] [rbp-3B0h]
  int v57; // [rsp+16Ch] [rbp-3ACh]
  int v58; // [rsp+170h] [rbp-3A8h]
  char v59; // [rsp+174h] [rbp-3A4h]
  _OWORD v60[3]; // [rsp+178h] [rbp-3A0h] BYREF
  __int64 v61; // [rsp+1A8h] [rbp-370h]
  __int64 v62; // [rsp+1B0h] [rbp-368h]
  __int64 v63; // [rsp+1B8h] [rbp-360h]
  int v64; // [rsp+1C8h] [rbp-350h] BYREF
  __int64 v65; // [rsp+1D0h] [rbp-348h]
  int *v66; // [rsp+1D8h] [rbp-340h]
  int *v67; // [rsp+1E0h] [rbp-338h]
  __int64 v68; // [rsp+1E8h] [rbp-330h]
  __int64 v69; // [rsp+1F0h] [rbp-328h]
  int v70; // [rsp+1F8h] [rbp-320h]
  _DWORD *v71; // [rsp+200h] [rbp-318h]
  __int64 v72; // [rsp+208h] [rbp-310h]
  _DWORD v73[4]; // [rsp+210h] [rbp-308h] BYREF
  __int64 v74; // [rsp+220h] [rbp-2F8h]
  __int64 v75; // [rsp+228h] [rbp-2F0h]
  int v76; // [rsp+230h] [rbp-2E8h]
  __int64 v77; // [rsp+238h] [rbp-2E0h]
  char v78; // [rsp+240h] [rbp-2D8h]
  __int64 *v79; // [rsp+248h] [rbp-2D0h]
  __int64 v80; // [rsp+250h] [rbp-2C8h]
  __int64 v81; // [rsp+258h] [rbp-2C0h] BYREF
  _DWORD v82[6]; // [rsp+458h] [rbp-C0h] BYREF
  __int64 v83; // [rsp+470h] [rbp-A8h]
  __int64 v84; // [rsp+478h] [rbp-A0h]
  __int64 v85; // [rsp+480h] [rbp-98h]
  int v86; // [rsp+488h] [rbp-90h]
  int v87; // [rsp+498h] [rbp-80h] BYREF
  __int64 v88; // [rsp+4A0h] [rbp-78h]
  int *v89; // [rsp+4A8h] [rbp-70h]
  int *v90; // [rsp+4B0h] [rbp-68h]
  __int64 v91; // [rsp+4B8h] [rbp-60h]
  __int64 v92; // [rsp+4C0h] [rbp-58h]
  __int64 v93; // [rsp+4C8h] [rbp-50h]
  __int64 v94; // [rsp+4D0h] [rbp-48h]

  v34 = (__m128i *)&v51;
  v36 = a3;
  v9 = _mm_loadh_ps((const double *)&v34);
  v34 = a1;
  v10 = _mm_loadh_ps((const double *)&v36);
  v35 = (__m128i)v9;
  v44 = (__m128i)v10;
  v11 = sub_22271F0("EvaluateAsLValue", 16, sub_BEBB10, &v44, a5, a6);
  v12 = _mm_load_si128(&v35);
  v13 = v11;
  v52 = 0;
  v51 = &off_2B214A8;
  v14 = *(_QWORD *)(a3 + 2320);
  v60[0] = v12;
  v15 = *(_DWORD *)(v14 + 136);
  LOBYTE(v14) = *(_BYTE *)(v14 + 140);
  memset(&v60[1], 0, 32);
  v58 = v15;
  v59 = v14 & 1;
  v66 = &v64;
  v67 = &v64;
  v71 = v73;
  v72 = 0x200000001LL;
  v53 = a3;
  v54 = a2;
  v61 = 0;
  v62 = 0;
  v63 = 0;
  v64 = 0;
  v65 = 0;
  v57 = 2;
  v68 = 0;
  v69 = 0;
  v70 = 1;
  v73[0] = 1;
  v73[2] = 1;
  v74 = 0;
  v75 = 0;
  v76 = 0;
  v77 = 0;
  v78 = 0;
  v55 = v60;
  v79 = &v81;
  v80 = 0x1000000000LL;
  v56 = 1;
  sub_A2B560((__int64)v82, 0, 0, 0);
  v16 = (__int64)v34;
  v89 = &v87;
  v90 = &v87;
  v94 = 0x200000000LL;
  ptr = v50;
  v49 = 0x800000000LL;
  v37 = v40;
  v46 |= 1u;
  v82[4] = 0;
  v83 = 0;
  v84 = 0;
  v85 = 0;
  v86 = 0;
  v87 = 0;
  v88 = 0;
  v91 = 0;
  v92 = 0;
  v93 = -1;
  v52 = a4;
  v44 = 0u;
  v45 = 0;
  v47 = 0;
  v50[65] = 0;
  v40[0] = &v43;
  v40[1] = byte_8;
  v41 = 0;
  v42 = 1;
  v38.m128i_i64[0] = (__int64)&v51;
  v38.m128i_i64[1] = (__int64)&v44;
  v39 = 0;
  if ( !(unsigned __int8)sub_C38AE0(&v38, v34, v17, v18, v19, v20) )
    goto LABEL_2;
  v23 = v79;
  v35.m128i_i64[0] = (__int64)&v79[4 * (unsigned int)v80];
  if ( v79 == (__int64 *)v35.m128i_i64[0] )
  {
LABEL_18:
    LODWORD(v80) = 0;
    if ( !*a2 )
    {
      v27 = v34;
      v28 = v34->m128i_i64[1];
      v29 = sub_A4F2F0(a3, v28, 1u);
      v33 = sub_BDCD00((unsigned __int64)v27, v28, v30, v31, v32);
      v16 = v33;
      v21 = sub_C063B0((__int64)&v51, v33, v29, &v44, 0, (__int64)v37);
      if ( (_BYTE)v21 )
      {
        v16 = (__int64)(a2 + 16);
        sub_BEBB50((__int64)&v44, (__int64)(a2 + 16));
LABEL_3:
        if ( v42 )
          goto LABEL_4;
        goto LABEL_17;
      }
    }
LABEL_2:
    v21 = 0;
    goto LABEL_3;
  }
  while ( 1 )
  {
    v24 = v23[3];
    v36 = (__int64)v23;
    v25 = sub_F41CF0(v24);
    v26 = v36;
    if ( v25 )
    {
      *v54 = 1;
      if ( HIDWORD(v94) <= 2 && !BYTE2(v94) )
      {
        v21 = BYTE3(v94);
        if ( !BYTE3(v94) )
          break;
      }
    }
    v23 = (__int64 *)(v26 + 32);
    if ( (__int64 *)v35.m128i_i64[0] == v23 )
      goto LABEL_18;
  }
  LODWORD(v80) = 0;
  if ( !v42 )
LABEL_17:
    free(v40[0]);
LABEL_4:
  if ( ptr != v50 )
    free(ptr);
  sub_C00040((__int64)&v51, v16);
  if ( v13 )
    sub_2229990(v13);
  return v21;
}

