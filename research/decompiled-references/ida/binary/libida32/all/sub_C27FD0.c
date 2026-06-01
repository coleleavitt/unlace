__int64 __fastcall sub_C27FD0(unsigned __int64 a1, size_t *a2, __int64 a3)
{
  unsigned int v3; // r13d
  __int64 v5; // rsi
  __int64 v6; // rax
  int v7; // edx
  __m128 v8; // xmm0
  __int64 v9; // r8
  int v10; // r9d
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  __int64 (__fastcall ***v16)(); // [rsp+8h] [rbp-3E0h] BYREF
  __int16 v17; // [rsp+10h] [rbp-3D8h] BYREF
  __int64 v18; // [rsp+18h] [rbp-3D0h]
  __int64 (__fastcall **v19)(); // [rsp+20h] [rbp-3C8h] BYREF
  char v20; // [rsp+28h] [rbp-3C0h]
  __int64 v21; // [rsp+30h] [rbp-3B8h]
  __int16 *v22; // [rsp+38h] [rbp-3B0h]
  _OWORD *v23; // [rsp+40h] [rbp-3A8h]
  int v24; // [rsp+48h] [rbp-3A0h]
  int v25; // [rsp+4Ch] [rbp-39Ch]
  int v26; // [rsp+50h] [rbp-398h]
  char v27; // [rsp+54h] [rbp-394h]
  _OWORD v28[3]; // [rsp+58h] [rbp-390h] BYREF
  __int64 v29; // [rsp+88h] [rbp-360h]
  __int64 v30; // [rsp+90h] [rbp-358h]
  __int64 v31; // [rsp+98h] [rbp-350h]
  int v32; // [rsp+A8h] [rbp-340h] BYREF
  __int64 v33; // [rsp+B0h] [rbp-338h]
  int *v34; // [rsp+B8h] [rbp-330h]
  int *v35; // [rsp+C0h] [rbp-328h]
  __int64 v36; // [rsp+C8h] [rbp-320h]
  __int64 v37; // [rsp+D0h] [rbp-318h]
  int v38; // [rsp+D8h] [rbp-310h]
  _DWORD *v39; // [rsp+E0h] [rbp-308h]
  __int64 v40; // [rsp+E8h] [rbp-300h]
  _DWORD v41[4]; // [rsp+F0h] [rbp-2F8h] BYREF
  __int64 v42; // [rsp+100h] [rbp-2E8h]
  __int64 v43; // [rsp+108h] [rbp-2E0h]
  int v44; // [rsp+110h] [rbp-2D8h]
  __int64 v45; // [rsp+118h] [rbp-2D0h]
  char v46; // [rsp+120h] [rbp-2C8h]
  __int64 *v47; // [rsp+128h] [rbp-2C0h]
  __int64 v48; // [rsp+130h] [rbp-2B8h]
  __int64 v49; // [rsp+138h] [rbp-2B0h] BYREF
  _DWORD v50[6]; // [rsp+338h] [rbp-B0h] BYREF
  __int64 v51; // [rsp+350h] [rbp-98h]
  __int64 v52; // [rsp+358h] [rbp-90h]
  __int64 v53; // [rsp+360h] [rbp-88h]
  int v54; // [rsp+368h] [rbp-80h]
  int v55; // [rsp+378h] [rbp-70h] BYREF
  __int64 v56; // [rsp+380h] [rbp-68h]
  int *v57; // [rsp+388h] [rbp-60h]
  int *v58; // [rsp+390h] [rbp-58h]
  __int64 v59; // [rsp+398h] [rbp-50h]
  __int64 v60; // [rsp+3A0h] [rbp-48h]
  __int64 v61; // [rsp+3A8h] [rbp-40h]
  __int64 v62; // [rsp+3B0h] [rbp-38h]

  v3 = 0;
  v5 = 0;
  v17 = 0;
  v19 = &off_2B214A8;
  v22 = &v17;
  v6 = *(_QWORD *)(a3 + 2320);
  v21 = a3;
  v7 = *(_DWORD *)(v6 + 136);
  LOBYTE(v6) = *(_BYTE *)(v6 + 140);
  v18 = 0;
  v20 = 0;
  v26 = v7;
  v27 = v6 & 1;
  v16 = &v19;
  v34 = &v32;
  v35 = &v32;
  v8 = _mm_loadh_ps((const double *)&v16);
  v29 = 0;
  v28[0] = v8;
  memset(&v28[1], 0, 32);
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v25 = 2;
  v36 = 0;
  v37 = 0;
  v39 = v41;
  v40 = 0x200000001LL;
  v23 = v28;
  v47 = &v49;
  v48 = 0x1000000000LL;
  v38 = 1;
  v41[0] = 1;
  v41[2] = 1;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v24 = 1;
  sub_A2B560((__int64)v50, 0, 0, 0);
  v50[4] = 0;
  v57 = &v55;
  v58 = &v55;
  v62 = 0x200000000LL;
  v11 = *(_QWORD *)(a1 + 8);
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v59 = 0;
  v60 = 0;
  v61 = -1;
  v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v13 = *(unsigned __int8 *)(v12 + 16);
  if ( (unsigned __int8)v13 <= 0x2Cu )
  {
    v14 = 0x1C0400000800LL;
    if ( _bittest64(&v14, v13) || (_BYTE)v13 == 13 && ((*(_WORD *)(v12 + 18) >> 3) & 0x1FF) == 0x1E8 )
    {
      v3 = 0;
      if ( (*(_BYTE *)(a1 + 1) & 6) == 0 )
      {
        v5 = (__int64)a2;
        v3 = sub_C27BB0(a1, a2, (__int64)&v19, nullptr, v9, v10);
      }
    }
  }
  sub_C00040((__int64)&v19, v5);
  return v3;
}

