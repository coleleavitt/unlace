__int64 __fastcall sub_C568D0(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        _DWORD *a4,
        __int64 a5,
        unsigned int a6,
        _BYTE *a7,
        char a8)
{
  __int64 v11; // rax
  char v12; // r12
  int v13; // edx
  int v14; // ebp
  __int64 v15; // rax
  __int64 *v16; // rcx
  unsigned int v17; // edx
  bool v18; // si
  bool v19; // di
  bool v20; // r8
  char v21; // r9
  char v22; // al
  __int64 v23; // rsi
  unsigned int v24; // r15d
  unsigned int v26; // r13d
  __int64 *v27; // r12
  __int64 *v28; // r14
  __int64 v29; // r15
  __int64 v30; // rax
  unsigned __int64 v31; // r15
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 (__fastcall ***v35)(); // [rsp+0h] [rbp-518h] BYREF
  _DWORD *v36; // [rsp+8h] [rbp-510h]
  __int64 v37; // [rsp+10h] [rbp-508h]
  unsigned int v38; // [rsp+1Ch] [rbp-4FCh]
  __int64 v39; // [rsp+20h] [rbp-4F8h]
  __int64 *v40; // [rsp+28h] [rbp-4F0h]
  __int64 v41; // [rsp+30h] [rbp-4E8h]
  int v42; // [rsp+38h] [rbp-4E0h]
  __int64 *v43; // [rsp+40h] [rbp-4D8h]
  __int64 v44; // [rsp+48h] [rbp-4D0h]
  void *v45[2]; // [rsp+50h] [rbp-4C8h] BYREF
  _BYTE v46[64]; // [rsp+60h] [rbp-4B8h] BYREF
  __int16 v47; // [rsp+A0h] [rbp-478h]
  __int64 v48; // [rsp+B0h] [rbp-468h] BYREF
  __int64 *v49; // [rsp+B8h] [rbp-460h]
  __int64 v50; // [rsp+C0h] [rbp-458h]
  void *ptr[2]; // [rsp+C8h] [rbp-450h] BYREF
  __int64 v52; // [rsp+D8h] [rbp-440h] BYREF
  void *v53; // [rsp+E0h] [rbp-438h]
  __int64 v54; // [rsp+E8h] [rbp-430h]
  _BYTE v55[80]; // [rsp+F0h] [rbp-428h] BYREF
  __int64 (__fastcall **v56)(); // [rsp+140h] [rbp-3D8h] BYREF
  char v57; // [rsp+148h] [rbp-3D0h]
  __m128 v58; // [rsp+150h] [rbp-3C8h]
  _OWORD *v59; // [rsp+160h] [rbp-3B8h]
  int v60; // [rsp+168h] [rbp-3B0h]
  int v61; // [rsp+16Ch] [rbp-3ACh]
  int v62; // [rsp+170h] [rbp-3A8h]
  char v63; // [rsp+174h] [rbp-3A4h]
  _OWORD v64[3]; // [rsp+178h] [rbp-3A0h] BYREF
  __int64 v65; // [rsp+1A8h] [rbp-370h]
  __int64 v66; // [rsp+1B0h] [rbp-368h]
  __int64 v67; // [rsp+1B8h] [rbp-360h]
  int v68; // [rsp+1C8h] [rbp-350h] BYREF
  __int64 v69; // [rsp+1D0h] [rbp-348h]
  int *v70; // [rsp+1D8h] [rbp-340h]
  int *v71; // [rsp+1E0h] [rbp-338h]
  __int64 v72; // [rsp+1E8h] [rbp-330h]
  __int64 v73; // [rsp+1F0h] [rbp-328h]
  int v74; // [rsp+1F8h] [rbp-320h]
  _DWORD *v75; // [rsp+200h] [rbp-318h]
  __int64 v76; // [rsp+208h] [rbp-310h]
  _DWORD v77[4]; // [rsp+210h] [rbp-308h] BYREF
  __int64 v78; // [rsp+220h] [rbp-2F8h]
  __int64 v79; // [rsp+228h] [rbp-2F0h]
  int v80; // [rsp+230h] [rbp-2E8h]
  __int64 v81; // [rsp+238h] [rbp-2E0h]
  char v82; // [rsp+240h] [rbp-2D8h]
  __int64 *v83; // [rsp+248h] [rbp-2D0h]
  __int64 v84; // [rsp+250h] [rbp-2C8h]
  __int64 v85; // [rsp+258h] [rbp-2C0h] BYREF
  _QWORD v86[2]; // [rsp+458h] [rbp-C0h] BYREF
  int v87; // [rsp+468h] [rbp-B0h]
  _DWORD *v88; // [rsp+470h] [rbp-A8h]
  __int64 v89; // [rsp+478h] [rbp-A0h]
  __int64 v90; // [rsp+480h] [rbp-98h]
  int v91; // [rsp+488h] [rbp-90h]
  int v92; // [rsp+498h] [rbp-80h] BYREF
  __int64 v93; // [rsp+4A0h] [rbp-78h]
  int *v94; // [rsp+4A8h] [rbp-70h]
  int *v95; // [rsp+4B0h] [rbp-68h]
  __int64 v96; // [rsp+4B8h] [rbp-60h]
  __int64 v97; // [rsp+4C0h] [rbp-58h]
  __int64 v98; // [rsp+4C8h] [rbp-50h]
  int v99; // [rsp+4D0h] [rbp-48h]
  int v100; // [rsp+4D4h] [rbp-44h]

  v56 = &off_2B4B448;
  v11 = *(_QWORD *)(a1 + 2320);
  v12 = a8;
  v35 = (__int64 (__fastcall ***)())a1;
  v13 = *(_DWORD *)(v11 + 136);
  v37 = a5;
  LOBYTE(v11) = *(_BYTE *)(v11 + 140);
  v38 = a6;
  v36 = a4;
  v58 = _mm_loadh_ps((const double *)&a7);
  v14 = 2 * (a8 == 0);
  v63 = v11 & 1;
  v35 = &v56;
  v62 = v13;
  v57 = 0;
  v65 = 0;
  v64[0] = _mm_loadh_ps((const double *)&v35);
  memset(&v64[1], 0, 32);
  v66 = 0;
  v67 = 0;
  v68 = 0;
  v70 = &v68;
  v71 = &v68;
  v75 = v77;
  v76 = 0x200000001LL;
  v59 = v64;
  v83 = &v85;
  v84 = 0x1000000000LL;
  v69 = 0;
  v61 = 2;
  v72 = 0;
  v73 = 0;
  v74 = 1;
  v77[0] = 1;
  v77[2] = 1;
  v78 = 0;
  v79 = 0;
  v80 = 0;
  v81 = 0;
  v82 = 0;
  v60 = 1;
  sub_A4F2A0((__int64)v86, 0, 0, 0);
  v100 = v14;
  v94 = &v92;
  v95 = &v92;
  v57 = v12;
  v45[0] = v46;
  v89 = 0;
  v90 = 0;
  v91 = 0;
  v92 = 0;
  v93 = 0;
  v96 = 0;
  v97 = 0;
  v98 = -1;
  v99 = 0;
  v86[0] = a2;
  v86[1] = a3;
  v87 = 2;
  v88 = a4;
  LOBYTE(v42) = v42 | 1;
  v44 = 0;
  v45[1] = (void *)0x800000000LL;
  v39 = a2;
  v40 = a3;
  v41 = 0;
  v47 &= 0xFDu;
  v48 = a2;
  v49 = a3;
  v15 = sub_A4F310(&v48);
  LODWORD(v48) = 0;
  v49 = nullptr;
  v16 = (__int64 *)(v15 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (v15 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v50 = 0;
    v21 = 0;
    goto LABEL_3;
  }
  v29 = v15;
  v30 = *v16;
  if ( (unsigned int)*(unsigned __int8 *)(*v16 + 16) - 43 <= 1 )
    goto LABEL_32;
  v34 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v30 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43;
  if ( (unsigned int)v34 > 1 )
  {
    v16 = nullptr;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    goto LABEL_25;
  }
  v30 = sub_F63050(*v16, 0, v34, v16);
  if ( v30 )
  {
LABEL_32:
    while ( 1 )
    {
      v29 = *(_QWORD *)(v30 + 32);
      if ( (*(_BYTE *)(v30 + 18) & 0x10) == 0 )
        break;
      while ( 1 )
      {
        v31 = v29 & 0xFFFFFFFFFFFFFFF0LL;
        v30 = *(_QWORD *)v31;
        v32 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v31 + 16LL) - 43;
        if ( (unsigned int)v32 <= 1 )
          break;
        v33 = sub_F63050(v30, 0, v32, v16);
        v29 = *(_QWORD *)(v33 + 32);
        if ( (*(_BYTE *)(v33 + 18) & 0x10) == 0 )
          goto LABEL_24;
      }
    }
  }
LABEL_24:
  v16 = v49;
  v21 = v48 & 1;
  v18 = (v48 & 8) != 0;
  v20 = (v48 & 2) != 0;
  v19 = (v48 & 4) != 0;
  v17 = (unsigned int)v48 >> 4;
LABEL_25:
  v50 = v29;
LABEL_3:
  v43 = v16;
  ptr[0] = &v52;
  ptr[1] = (void *)0x800000000LL;
  v22 = (8 * v18) | (4 * v19) | (2 * v20) & 0xF3 | v21 & 0xF3 | v42 & 0xF0;
  v23 = (__int64)ptr;
  v42 = v22 & 0xF | (16 * v17);
  v44 = v50;
  sub_C240D0((char ***)v45, (char ***)ptr);
  if ( ptr[0] != &v52 )
    free(ptr[0]);
  v47 &= 0xFEu;
  v24 = *(unsigned __int8 *)v58.m128_u64[1];
  if ( (_BYTE)v24 )
    goto LABEL_6;
  v35 = (__int64 (__fastcall ***)())v55;
  v53 = v55;
  v54 = 0x800000000LL;
  v48 = 0;
  v49 = nullptr;
  v50 = 0;
  LOBYTE(ptr[0]) |= 1u;
  v52 = 0;
  v55[65] = 0;
  sub_C24210((__int64)&v48, a2, a3, 0);
  v23 = ((unsigned __int64)v38 << 32) | v38;
  v26 = sub_C530A0((__int64)&v56, v23, (__int64)&v48, v36, v37);
  if ( v53 != v35 )
    free(v53);
  if ( !(_BYTE)v26 )
  {
LABEL_6:
    v24 = 0;
  }
  else if ( !*a7 )
  {
    v27 = v83;
    v28 = &v83[4 * (unsigned int)v84];
    if ( v83 != v28 )
    {
      do
      {
        while ( !(unsigned int)sub_F65A30(v27[3]) )
        {
          v27 += 4;
          if ( v28 == v27 )
            goto LABEL_19;
        }
        v27 += 4;
        *(_BYTE *)v58.m128_u64[1] = 1;
      }
      while ( v28 != v27 );
    }
LABEL_19:
    LODWORD(v84) = 0;
    v24 = v26;
  }
  if ( v45[0] != v46 )
    free(v45[0]);
  sub_C23D80((__int64)&v56, v23);
  return v24;
}
