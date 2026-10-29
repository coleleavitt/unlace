__int64 __fastcall sub_1CD0C10(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        double a7,
        __m128 a8,
        __int64 a9)
{
  __int64 v9; // rbx
  unsigned int v14; // edx
  __int64 v15; // rsi
  unsigned __int64 v16; // rsi
  __int64 v17; // rax
  void **v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // ecx
  unsigned __int64 v25; // rax
  char v26; // al
  unsigned __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  __int128 *v36; // rcx
  char *v37; // rdi
  __int64 v38; // rbx
  __int64 v39; // r13
  void **v40; // r12
  __int64 v41; // [rsp-10h] [rbp-388h]
  __int64 v42; // [rsp-8h] [rbp-380h]
  unsigned __int64 v44; // [rsp+0h] [rbp-378h]
  __int64 v45; // [rsp+0h] [rbp-378h]
  unsigned __int64 v47; // [rsp+18h] [rbp-360h]
  bool v49; // [rsp+27h] [rbp-351h]
  char v50; // [rsp+28h] [rbp-350h]
  __int64 v51; // [rsp+30h] [rbp-348h]
  void *v52; // [rsp+38h] [rbp-340h]
  __int64 v53; // [rsp+40h] [rbp-338h] BYREF
  int v54; // [rsp+48h] [rbp-330h]
  void *v55[2]; // [rsp+50h] [rbp-328h] BYREF
  _BYTE v56[32]; // [rsp+60h] [rbp-318h] BYREF
  void *v57; // [rsp+80h] [rbp-2F8h] BYREF
  __int64 v58; // [rsp+88h] [rbp-2F0h]
  __m128i v59; // [rsp+90h] [rbp-2E8h] BYREF
  __int64 v60; // [rsp+A0h] [rbp-2D8h]
  int v61; // [rsp+F0h] [rbp-288h]
  char v62; // [rsp+F4h] [rbp-284h]
  __m128i v63; // [rsp+100h] [rbp-278h] BYREF
  __int64 v64; // [rsp+110h] [rbp-268h] BYREF
  unsigned int v65; // [rsp+118h] [rbp-260h]
  void *v66; // [rsp+150h] [rbp-228h] BYREF
  __int64 v67; // [rsp+158h] [rbp-220h]
  __int64 v68; // [rsp+160h] [rbp-218h] BYREF
  __int64 v69; // [rsp+168h] [rbp-210h]
  __int16 v70; // [rsp+170h] [rbp-208h]
  char v71; // [rsp+172h] [rbp-206h]
  __int64 v72; // [rsp+178h] [rbp-200h]
  __int128 v73; // [rsp+190h] [rbp-1E8h] BYREF
  void *v74; // [rsp+1A0h] [rbp-1D8h]
  __int64 v75; // [rsp+1A8h] [rbp-1D0h]
  _WORD v76[52]; // [rsp+1B0h] [rbp-1C8h] BYREF
  void *v77; // [rsp+218h] [rbp-160h]
  __int64 v78; // [rsp+220h] [rbp-158h]
  _BYTE v79[40]; // [rsp+228h] [rbp-150h] BYREF
  void *v80[2]; // [rsp+250h] [rbp-128h] BYREF
  _BYTE v81[96]; // [rsp+260h] [rbp-118h] BYREF
  void *ptr; // [rsp+2C0h] [rbp-B8h]
  __int64 v83; // [rsp+2C8h] [rbp-B0h]
  _WORD v84[49]; // [rsp+2D0h] [rbp-A8h] BYREF
  char v85; // [rsp+332h] [rbp-46h]

  v9 = 1;
  if ( *(char *)(a6 + 28) >= 0 )
  {
    v84[48] = 0;
    v80[0] = v81;
    ptr = v84;
    v14 = *(_DWORD *)(a4 + 8);
    v80[1] = (void *)0x400000000LL;
    v83 = 0x400000000LL;
    v85 = 0;
    v73 = 0;
    v74 = nullptr;
    if ( (unsigned __int8)sub_1CCEE60(a1, a6, v14, a9, (__int64)&v73, 0, (__m128)0LL, a8, (__int64)v80, 0, nullptr) )
    {
      v9 = 1;
    }
    else
    {
      LODWORD(v73) = *(_DWORD *)(a4 + 8);
      sub_18F5260(a1, a6, (int *)&v73, 1u, 0, 0, (__m128i)0LL, *(double *)a8.m128_u64, 0, 0, 0);
      v15 = *(_QWORD *)(a6 + 16);
      if ( (v15 & 4) != 0 )
        v16 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF8LL);
      else
        v16 = v15 & 0xFFFFFFFFFFFFFFF8LL;
      v47 = sub_BBF4F0(*(_QWORD **)(a1 + 248), v16, *(_DWORD *)(a6 + 24), (const __m128i *)ptr, (unsigned int)v83);
      v76[48] = 0;
      v74 = v76;
      v73 = 0;
      v75 = 0x400000000LL;
      v77 = v79;
      v78 = 0x400000000LL;
      v49 = sub_F5E540(a9, (__int64)ptr, (unsigned int)v83);
      v17 = *(_QWORD *)a6;
      v52 = ptr;
      v51 = (unsigned int)v83;
      v57 = &v59;
      v58 = 0x400000000LL;
      v61 = 0;
      v62 = 0;
      v63.m128i_i64[0] = (*(__int64 (__fastcall **)(unsigned __int64))(v17 + 32))(a6) & 0xFFFFFFFFFFFFFFFBLL;
      v63.m128i_i64[1] = (__int64)v52;
      v64 = v51;
      v59 = _mm_loadu_si128(&v63);
      LODWORD(v58) = 1;
      v60 = v51;
      v18 = (void **)&v64;
      v63.m128i_i64[0] = a1;
      v63.m128i_i64[1] = 1;
      do
      {
        *v18 = (void *)-4096LL;
        v18 += 2;
      }
      while ( &v66 != v18 );
      v66 = &v68;
      v67 = 0x100000000LL;
      v19 = *(_QWORD *)(a1 + 11280);
      *(_QWORD *)(a1 + 11280) = &v63;
      v70 = 0;
      v69 = v19;
      v71 = 0;
      v72 = 0;
      sub_18C74E0(a1, 0, v47, 4);
      if ( v49 )
        goto LABEL_20;
      if ( *(_QWORD *)(a2 + 8) )
        v24 = *(_DWORD *)a2;
      else
        v24 = *(_DWORD *)(a4 + 8);
      v25 = ((unsigned __int64)*(unsigned int *)(a9 + 276) << 32) | v24;
      v53 = *(_QWORD *)(a6 + 64);
      v55[0] = v56;
      v55[1] = (void *)0x400000000LL;
      v54 = 0;
      v26 = sub_1750770(a1, a6, (__int64)&v53, 1u, (__int64)v55, (__int64)&v57, 0.0, v25, (__int64)&v73);
      v20 = v41;
      v21 = v42;
      if ( v55[0] != v56 )
      {
        v50 = v26;
        free(v55[0]);
        v26 = v50;
      }
      if ( !v26 )
      {
LABEL_20:
        v27 = sub_F1ED40(*(_QWORD **)(a1 + 248), (__int64 *)a9, v20, v21, v22, v23);
        v30 = a2;
        v31 = 0;
        v32 = 0;
        v33 = v27;
        if ( *(_QWORD *)(a2 + 8) )
        {
          v44 = v27;
          v34 = sub_15AB9E0(v30, *(_QWORD **)(a1 + 248), 0, v27, v28, v29);
          v33 = v44;
          v31 = v34;
        }
        v35 = sub_A55700(*(_QWORD **)(a1 + 248), v31, v32, a3, a5, a6, *(_OWORD *)a4, *(_QWORD *)(a4 + 16), v33);
        v36 = nullptr;
        if ( !v49 )
          v36 = &v73;
        v9 = sub_C0F0D0(*(_QWORD **)(a1 + 248), v35, v47, (__int64)v36);
      }
      else
      {
        v9 = 1;
      }
      sub_190D5E0(a1, (__m128)0LL);
      v37 = (char *)v66;
      if ( !(_BYTE)v70 )
      {
        v37 = (char *)v66;
        if ( (_DWORD)v67 )
        {
          v45 = v9;
          v38 = 0;
          v39 = 8LL * (unsigned int)(v67 - 1) + 8;
          do
          {
            v40 = *(void ***)&v37[v38];
            if ( v40 )
            {
              if ( *v40 != v40 + 2 )
                free(*v40);
              operator delete(v40, 0x30u);
              v37 = (char *)v66;
            }
            v38 += 8;
          }
          while ( v38 != v39 );
          v9 = v45;
        }
        *(_QWORD *)(v63.m128i_i64[0] + 11280) = v69;
        LOBYTE(v70) = 1;
      }
      if ( v37 != (char *)&v68 )
        free(v37);
      if ( (v63.m128i_i8[8] & 1) == 0 )
        operator delete(v64, 16LL * v65, 8);
      if ( v57 != &v59 )
        free(v57);
      if ( v77 != v79 )
        free(v77);
      if ( v74 != v76 )
        free(v74);
    }
    if ( ptr != v84 )
      free(ptr);
    if ( v80[0] != v81 )
      free(v80[0]);
  }
  return v9;
}
