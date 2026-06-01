__int64 __fastcall sub_1D71360(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        __m128i a9)
{
  unsigned int v9; // r15d
  bool v10; // sf
  char v13; // al
  __int64 v14; // rsi
  __int64 v15; // r15
  unsigned __int64 v16; // r15
  int v17; // r13d
  char v18; // dl
  void **v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  int v23; // esi
  unsigned __int64 v24; // rsi
  __m128 si128; // xmm0
  __m128i v26; // xmm1
  char *v27; // rdi
  __int64 v28; // r12
  void **v29; // r14
  __int64 v30; // rax
  unsigned __int64 *v32; // rdx
  int v33; // esi
  __int64 v35; // [rsp+0h] [rbp-268h]
  unsigned int v36; // [rsp+10h] [rbp-258h]
  char v37; // [rsp+16h] [rbp-252h]
  char v38; // [rsp+17h] [rbp-251h]
  __int64 v39; // [rsp+28h] [rbp-240h] BYREF
  unsigned int v40; // [rsp+3Ch] [rbp-22Ch] BYREF
  _BYTE v41[16]; // [rsp+40h] [rbp-228h] BYREF
  _QWORD v42[6]; // [rsp+50h] [rbp-218h] BYREF
  void *v43; // [rsp+80h] [rbp-1E8h] BYREF
  __int64 v44; // [rsp+88h] [rbp-1E0h]
  _BYTE v45[32]; // [rsp+90h] [rbp-1D8h] BYREF
  void *v46; // [rsp+B0h] [rbp-1B8h]
  __int64 v47; // [rsp+B8h] [rbp-1B0h]
  __m128 v48; // [rsp+C0h] [rbp-1A8h] BYREF
  __int64 v49; // [rsp+D0h] [rbp-198h]
  void *v50; // [rsp+F0h] [rbp-178h]
  __int64 v51; // [rsp+F8h] [rbp-170h]
  __m128i v52; // [rsp+100h] [rbp-168h] BYREF
  __int64 v53; // [rsp+110h] [rbp-158h]
  void *ptr[2]; // [rsp+130h] [rbp-138h] BYREF
  _QWORD v55[12]; // [rsp+140h] [rbp-128h] BYREF
  __int64 v56; // [rsp+1A0h] [rbp-C8h] BYREF
  __int64 v57; // [rsp+1A8h] [rbp-C0h]
  __int64 v58; // [rsp+1B0h] [rbp-B8h] BYREF
  unsigned int v59; // [rsp+1B8h] [rbp-B0h]
  void *v60; // [rsp+1F0h] [rbp-78h] BYREF
  __int64 v61; // [rsp+1F8h] [rbp-70h]
  __int64 v62; // [rsp+200h] [rbp-68h] BYREF
  __int64 v63; // [rsp+208h] [rbp-60h]
  __int16 v64; // [rsp+210h] [rbp-58h]
  char v65; // [rsp+212h] [rbp-56h]
  __int64 v66; // [rsp+218h] [rbp-50h]

  v9 = 1;
  v10 = *(char *)(a2 + 28) < 0;
  v39 = a2;
  if ( !v10 )
  {
    v13 = *(_BYTE *)(a2 + 28) & 0x7F;
    if ( v13 == 72 )
    {
      v14 = *(_QWORD *)(a2 + 48);
      v15 = *(_QWORD *)(v14 + 48);
      if ( v15 )
        v16 = v15 & 0xFFFFFFFFFFFFFFF0LL;
      else
        v16 = sub_A7AA70(*(_QWORD *)(a1 + 248), v14, a3, a4, a5, a6);
    }
    else
    {
      v16 = 0;
      if ( v13 == 70 )
      {
        v32 = (unsigned __int64 *)(*(_QWORD *)(*(_QWORD *)(a2 + 48) + 80LL) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_QWORD *)(*(_QWORD *)(a2 + 48) + 80LL) & 4) != 0 )
          v16 = v32[1];
        else
          v16 = *v32;
      }
    }
    sub_18C74E0(a1, 0, 0, 4);
    v36 = *(_DWORD *)(a1 + 11200);
    v37 = *(_BYTE *)(a1 + 12592);
    v38 = *(_BYTE *)(a1 + 11248);
    v17 = *(_DWORD *)(*(_QWORD *)(a1 + 264) + 204LL);
    sub_1DBADC0(a1);
    if ( !v18 )
      *(_BYTE *)(a1 + 12592) = 1;
    *(_BYTE *)(a1 + 11248) = 0;
    v56 = a1;
    v19 = (void **)&v58;
    v57 = 1;
    do
    {
      *v19 = (void *)-4096LL;
      v19 += 2;
    }
    while ( v19 != &v60 );
    v20 = *(_QWORD *)(a1 + 11280);
    v65 = 0;
    v60 = &v62;
    v63 = v20;
    v21 = v39;
    v61 = 0x100000000LL;
    v64 = 0;
    v66 = 0;
    *(_QWORD *)(a1 + 11280) = &v56;
    v22 = *(_QWORD *)(v21 + 56);
    v44 = 0x100000000LL;
    v23 = *(_DWORD *)(v22 + 20);
    v43 = v45;
    v24 = v23 & 0x1FFFFFFF;
    if ( (_DWORD)v24 )
      sub_1D37240((__int64)&v43, v24);
    sub_F1D250((__int64)ptr, v16, 0, 0);
    si128 = (__m128)_mm_load_si128((const __m128i *)ptr);
    v47 = 0x200000001LL;
    v46 = &v48;
    v48 = si128;
    v49 = v55[0];
    sub_F1D250((__int64)ptr, a3, 0, 0);
    v26 = _mm_load_si128((const __m128i *)ptr);
    v51 = 0x200000001LL;
    v53 = v55[0];
    v50 = &v52;
    v52 = v26;
    v9 = sub_1D70940(
           a1,
           *(_QWORD *)(v39 + 56),
           (__int64)v46,
           (unsigned int)v47,
           (__int64)&v52,
           1,
           *(double *)si128.m128_u64,
           *(double *)v26.m128i_i64,
           a9,
           a4,
           (__int64 *)&v43,
           0,
           0,
           0);
    if ( !v9 )
    {
      v9 = 2;
      ptr[1] = (void *)0x400000000LL;
      ptr[0] = v55;
      sub_1D3C7F0((__int64)ptr, (const __m128i *)v43, (const __m128i *)v43 + 2 * (unsigned int)v44);
      sub_1DC39A0((unsigned int)v41, a1, *(_DWORD *)(a4 + 16), v39, ptr[0], ptr[1], a4, 0);
      if ( !v41[8] )
      {
        v42[1] = a1;
        v42[0] = &v40;
        v42[2] = &v39;
        v42[3] = &v43;
        v33 = *(_DWORD *)(a4 + 16);
        v42[4] = a4;
        sub_15F0FC0(a1, v33, (__int64 (__fastcall *)(__int64))sub_1D6A310, (__int64)v42);
        v9 = v40;
        if ( !v40 && *(_DWORD *)(a1 + 11200) > v36 )
          v9 = 7;
      }
      sub_1DBADA0(v41);
      if ( ptr[0] != v55 )
        free(ptr[0]);
    }
    if ( v50 != &v52 )
      free(v50);
    if ( v46 != &v48 )
      free(v46);
    if ( v43 != v45 )
      free(v43);
    v27 = (char *)v60;
    if ( !(_BYTE)v64 )
    {
      if ( (_DWORD)v61 )
      {
        v28 = 0;
        v35 = 8LL * (unsigned int)(v61 - 1) + 8;
        do
        {
          v29 = *(void ***)&v27[v28];
          if ( v29 )
          {
            if ( *v29 != v29 + 2 )
              free(*v29);
            operator delete(v29, 0x30u);
            v27 = (char *)v60;
          }
          v28 += 8;
        }
        while ( v35 != v28 );
      }
      LOBYTE(v64) = 1;
      *(_QWORD *)(v56 + 11280) = v63;
    }
    if ( v27 != (char *)&v62 )
      free(v27);
    if ( (v57 & 1) == 0 )
      operator delete(v58, 16LL * v59, 8);
    *(_DWORD *)(a1 + 11200) = v36;
    *(_BYTE *)(a1 + 12592) = v37;
    *(_BYTE *)(a1 + 11248) = v38;
    v30 = *(_QWORD *)(a1 + 264);
    if ( *(_DWORD *)(v30 + 204) == 5 )
      *(_BYTE *)(v30 + 194) = 1;
    if ( v17 )
      v17 = 3;
    *(_DWORD *)(v30 + 204) = v17;
    sub_190D5E0(a1, si128);
  }
  return v9;
}
