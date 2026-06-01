void __fastcall sub_1C022A0(
        __int64 a1,
        unsigned int *a2,
        __m128 *a3,
        int a4,
        __int64 a5,
        unsigned __int64 a6,
        __m128 a7,
        __m128 a8,
        _BYTE *a9,
        size_t a10,
        unsigned int a11,
        unsigned __int8 (__fastcall *a12)(__int64, __int64),
        __int64 a13)
{
  __int64 *v15; // r12
  unsigned __int64 v16; // rax
  char v17; // r8
  __int64 v18; // r14
  char v19; // r15
  unsigned __int64 v20; // rbx
  __int64 v21; // r9
  __int64 *v22; // r15
  __int64 v23; // rax
  __int64 *v24; // rbx
  __int64 v25; // r13
  __int64 v26; // rax
  __int64 v27; // rdi
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // rdx
  bool v31; // r14
  _BYTE *v32; // rdi
  __m128i v33; // xmm0
  __int64 v35; // [rsp+8h] [rbp-310h]
  __m128i v38; // [rsp+30h] [rbp-2E8h] BYREF
  void *v39; // [rsp+40h] [rbp-2D8h] BYREF
  __int64 v40; // [rsp+48h] [rbp-2D0h]
  _BYTE v41[48]; // [rsp+50h] [rbp-2C8h] BYREF
  void *v42; // [rsp+80h] [rbp-298h] BYREF
  __int64 v43; // [rsp+88h] [rbp-290h]
  _BYTE v44[48]; // [rsp+90h] [rbp-288h] BYREF
  void *ptr; // [rsp+C0h] [rbp-258h] BYREF
  unsigned int v46; // [rsp+C8h] [rbp-250h]
  __int64 v47; // [rsp+D0h] [rbp-248h] BYREF
  void *v48; // [rsp+1D0h] [rbp-148h] BYREF
  __int64 v49; // [rsp+1D8h] [rbp-140h]
  _BYTE v50[312]; // [rsp+1E0h] [rbp-138h] BYREF

  v15 = &a3->m128_i64[1];
  sub_1C004B0((__int64)&ptr, a1, a3, a4, a5, a6, a7, a8, a12, a13);
  v16 = a3[14].m128_u64[1];
  if ( (*(_BYTE *)(v16 + 60) & 0x10) != 0 && (*(_BYTE *)(v16 + 96) & 1) != 0 )
  {
    sub_1C004B0(
      (__int64)&v48,
      a1,
      a3,
      0,
      a5,
      a6,
      a7,
      a8,
      (unsigned __int8 (__fastcall *)(__int64, __int64))sub_1BC7650,
      (__int64)&v42);
    v31 = (_DWORD)v49 != 0;
    if ( v48 != v50 )
      free(v48);
    v17 = v31;
  }
  else
  {
    v17 = 0;
  }
  v18 = a5;
  v19 = 1;
  sub_168CDE0((__int64)&v48, v15, *a2, (__int64)(a2 + 2), v17);
  sub_15F7200(&v48);
  v20 = a5 + 8 * a6;
  if ( v20 == a5 )
    goto LABEL_13;
  do
  {
    if ( sub_F65F60(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v18 + 8LL) & 0xFFFFFFFFFFFFFFF0LL)) )
      v19 = 0;
    v18 += 8;
  }
  while ( v20 != v18 );
  if ( v19 )
  {
LABEL_13:
    sub_1C007F0(a1, a3, a5, a6, (__int64 *)ptr, v46, a7, a8, a9, a10, a11);
    if ( a4 != 2 )
      goto LABEL_10;
  }
  else if ( a4 != 2 )
  {
    goto LABEL_10;
  }
  v22 = *(__int64 **)a1;
  v23 = *(unsigned int *)(a1 + 8);
  v40 = 0x300000000LL;
  v43 = 0x300000000LL;
  v39 = v41;
  v24 = &v22[21 * v23];
  v42 = v44;
  if ( v22 != v24 )
  {
    v35 = 0;
    v25 = 0;
    do
    {
      v27 = *v22;
      if ( *v22 )
      {
        v49 = 0x300000000LL;
        v48 = v50;
        v28 = sub_B77AF0(v27);
        if ( v28 )
        {
          sub_BBDAC0(v28, (__int64)&v48);
          LODWORD(v26) = v49;
        }
        else
        {
          v29 = *(_QWORD *)(*v22 + 56);
          v26 = (unsigned int)v49;
          if ( (v29 & 4) != 0 )
          {
            v30 = v29 & 0xFFFFFFFFFFFFFFF8LL;
            if ( *(_QWORD *)(v30 + 40) )
            {
              if ( (unsigned int)v49 >= (unsigned __int64)HIDWORD(v49) )
              {
                v33 = _mm_loadu_si128((const __m128i *)(v30 + 40));
                if ( HIDWORD(v49) < (unsigned __int64)(unsigned int)v49 + 1 )
                {
                  v38 = v33;
                  sub_2237220(&v48, v50, (unsigned int)v49 + 1LL, 16);
                  v26 = (unsigned int)v49;
                  v33 = _mm_load_si128(&v38);
                }
                *((__m128i *)v48 + v26) = v33;
                LODWORD(v26) = v49 + 1;
                LODWORD(v49) = v49 + 1;
              }
              else
              {
                *((__m128i *)v48 + (unsigned int)v49) = _mm_loadu_si128((const __m128i *)(v30 + 40));
                LODWORD(v26) = v49 + 1;
                LODWORD(v49) = v49 + 1;
              }
            }
          }
        }
        if ( (_DWORD)v26 )
        {
          if ( v35 )
          {
            if ( v25 )
            {
              if ( v48 != v50 )
                free(v48);
              goto LABEL_36;
            }
            v25 = *v22;
            sub_1BD9690((__int64 *)&v42, (__int64 *)&v48);
          }
          else
          {
            v35 = *v22;
            sub_1BD9690((__int64 *)&v39, (__int64 *)&v48);
          }
        }
        if ( v48 != v50 )
          free(v48);
      }
      v22 += 21;
    }
    while ( v24 != v22 );
    v32 = v42;
    if ( !v25 )
      goto LABEL_37;
    sub_17574E0((__int64)a3, v35, (__int64)v39, (unsigned int)v40, v25, v21, (__int64)v42, (unsigned int)v43);
LABEL_36:
    v32 = v42;
LABEL_37:
    if ( v32 != v44 )
      free(v32);
    if ( v39 != v41 )
      free(v39);
  }
LABEL_10:
  if ( ptr != &v47 )
    free(ptr);
}
