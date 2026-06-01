__int64 __fastcall sub_1D72100(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __m128 a6,
        double a7,
        __m128i a8)
{
  unsigned int v8; // r13d
  bool v9; // sf
  int v12; // r14d
  char v13; // dl
  void **v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rsi
  char *v18; // rdi
  __int64 v19; // r12
  void **v20; // r15
  __int64 v21; // rax
  int v23; // edx
  int v24; // esi
  __int64 v25; // [rsp+0h] [rbp-248h]
  unsigned int v26; // [rsp+8h] [rbp-240h]
  char v27; // [rsp+Eh] [rbp-23Ah]
  char v28; // [rsp+Fh] [rbp-239h]
  __int64 v29; // [rsp+10h] [rbp-238h] BYREF
  __int64 v30; // [rsp+18h] [rbp-230h]
  _BYTE *v31; // [rsp+20h] [rbp-228h]
  __int64 v32; // [rsp+28h] [rbp-220h] BYREF
  unsigned int v33; // [rsp+3Ch] [rbp-20Ch] BYREF
  _BYTE v34[16]; // [rsp+40h] [rbp-208h] BYREF
  _QWORD v35[6]; // [rsp+50h] [rbp-1F8h] BYREF
  void *v36; // [rsp+80h] [rbp-1C8h] BYREF
  __int64 v37; // [rsp+88h] [rbp-1C0h]
  _BYTE v38[96]; // [rsp+90h] [rbp-1B8h] BYREF
  __int64 v39; // [rsp+F0h] [rbp-158h] BYREF
  __int64 v40; // [rsp+F8h] [rbp-150h]
  __int64 v41; // [rsp+100h] [rbp-148h] BYREF
  unsigned int v42; // [rsp+108h] [rbp-140h]
  void *v43; // [rsp+140h] [rbp-108h] BYREF
  __int64 v44; // [rsp+148h] [rbp-100h]
  __int64 v45; // [rsp+150h] [rbp-F8h] BYREF
  __int64 v46; // [rsp+158h] [rbp-F0h]
  __int16 v47; // [rsp+160h] [rbp-E8h]
  char v48; // [rsp+162h] [rbp-E6h]
  __int64 v49; // [rsp+168h] [rbp-E0h]
  void *ptr; // [rsp+180h] [rbp-C8h] BYREF
  __int64 v51; // [rsp+188h] [rbp-C0h]
  _BYTE v52[184]; // [rsp+190h] [rbp-B8h] BYREF

  v8 = 1;
  v9 = *(char *)(a2 + 28) < 0;
  v32 = a2;
  v29 = a3;
  v30 = a4;
  if ( !v9 )
  {
    sub_18C74E0(a1, 0, 0, 4);
    v26 = *(_DWORD *)(a1 + 11200);
    v27 = *(_BYTE *)(a1 + 12592);
    v28 = *(_BYTE *)(a1 + 11248);
    v12 = *(_DWORD *)(*(_QWORD *)(a1 + 264) + 204LL);
    sub_1DBADC0(a1);
    if ( !v13 )
      *(_BYTE *)(a1 + 12592) = 1;
    *(_BYTE *)(a1 + 11248) = 0;
    v39 = a1;
    v14 = (void **)&v41;
    v40 = 1;
    do
    {
      *v14 = (void *)-4096LL;
      v14 += 2;
    }
    while ( v14 != &v43 );
    v15 = v32;
    v43 = &v45;
    v44 = 0x100000000LL;
    v16 = *(_QWORD *)(a1 + 11280);
    *(_QWORD *)(a1 + 11280) = &v39;
    v17 = *(_QWORD *)(v15 + 144);
    v46 = v16;
    ptr = v52;
    v47 = 0;
    v48 = 0;
    v49 = 0;
    v51 = 0x400000000LL;
    if ( (*(_DWORD *)(v17 + 20) & 0x1FFFFFFF) != 0 )
    {
      sub_1D37240((__int64)&ptr, *(_DWORD *)(v17 + 20) & 0x1FFFFFFF);
      v15 = v32;
      v17 = *(_QWORD *)(v32 + 144);
    }
    v8 = sub_1D70940(
           a1,
           v17,
           *(_QWORD *)(v15 + 128) + 8LL,
           **(unsigned int **)(v15 + 128),
           v29,
           v30,
           *(double *)a6.m128_u64,
           a7,
           a8,
           a5,
           (__int64 *)&ptr,
           0,
           0,
           0);
    if ( !v8 )
    {
      v8 = 2;
      v36 = v38;
      v37 = 0x400000000LL;
      sub_1D3C7F0((__int64)&v36, (const __m128i *)ptr, (const __m128i *)ptr + 2 * (unsigned int)v51);
      v23 = *(_DWORD *)(a5 + 16);
      v31 = v34;
      sub_1DC3940((unsigned int)v34, a1, v23, v32, (_DWORD)v36, v37, a5, 0);
      if ( !v34[8] )
      {
        v24 = *(_DWORD *)(a5 + 16);
        v35[0] = &v33;
        v35[2] = &v29;
        v35[1] = a1;
        v35[3] = &ptr;
        v35[4] = a5;
        v35[5] = &v32;
        sub_15F0FC0(a1, v24, (__int64 (__fastcall *)(__int64))sub_1D69CE0, (__int64)v35);
        v8 = v33;
        if ( !v33 && *(_DWORD *)(a1 + 11200) > v26 )
          v8 = 7;
      }
      sub_1DBADA0(v31);
      if ( v36 != v38 )
        free(v36);
    }
    if ( ptr != v52 )
      free(ptr);
    v18 = (char *)v43;
    if ( !(_BYTE)v47 )
    {
      if ( (_DWORD)v44 )
      {
        v19 = 0;
        v25 = 8LL * (unsigned int)(v44 - 1) + 8;
        do
        {
          v20 = *(void ***)&v18[v19];
          if ( v20 )
          {
            if ( *v20 != v20 + 2 )
              free(*v20);
            operator delete(v20, 0x30u);
            v18 = (char *)v43;
          }
          v19 += 8;
        }
        while ( v25 != v19 );
      }
      LOBYTE(v47) = 1;
      *(_QWORD *)(v39 + 11280) = v46;
    }
    if ( v18 != (char *)&v45 )
      free(v18);
    if ( (v40 & 1) == 0 )
      operator delete(v41, 16LL * v42, 8);
    *(_DWORD *)(a1 + 11200) = v26;
    *(_BYTE *)(a1 + 12592) = v27;
    *(_BYTE *)(a1 + 11248) = v28;
    v21 = *(_QWORD *)(a1 + 264);
    if ( *(_DWORD *)(v21 + 204) == 5 )
      *(_BYTE *)(v21 + 194) = 1;
    if ( v12 )
      v12 = 3;
    *(_DWORD *)(v21 + 204) = v12;
    sub_190D5E0(a1, a6);
  }
  return v8;
}
