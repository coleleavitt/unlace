void __fastcall sub_11FC1F0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        double a8)
{
  __int64 v11; // r15
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rbp
  _BYTE *v16; // r10
  const __m128i *v17; // rbp
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // r8
  void **v21; // rbp
  const __m128i *v22; // r14
  __int64 v23; // r15
  void *v24; // r13
  __int64 v25; // rdx
  __int64 v26; // rsi
  int v27; // eax
  __int64 v28; // rcx
  void *v29; // rsi
  _QWORD *v30; // r12
  void (__fastcall *v31)(_QWORD *); // rax
  __int64 v32; // r13
  __int64 v33; // rbp
  void *v34; // rdi
  _QWORD *v35; // rdi
  _QWORD *v36; // rdi
  void **v37; // r13
  void **v38; // rbp
  void *v39; // rdi
  _QWORD *v40; // rdi
  __int64 v41; // rax
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // r13
  __int64 v44; // rdi
  _BYTE *v46; // [rsp+18h] [rbp-110h]
  __int64 v47; // [rsp+18h] [rbp-110h]
  __int64 v49; // [rsp+30h] [rbp-F8h]
  const __m128i *v50; // [rsp+38h] [rbp-F0h]
  void *v51[2]; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v52; // [rsp+50h] [rbp-D8h] BYREF
  void *ptr; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v54; // [rsp+68h] [rbp-C0h]
  _BYTE v55[184]; // [rsp+70h] [rbp-B8h] BYREF

  v11 = *(_QWORD *)(a1 + 24);
  ptr = v55;
  v54 = 0x1000000000LL;
  sub_11BB1A0(a6);
  if ( *(_DWORD *)(v11 + 48) == 37 )
  {
    v41 = (unsigned int)v54;
    v42 = (unsigned int)v54 + 1LL;
    if ( v42 > HIDWORD(v54) )
    {
      sub_2237220(&ptr, v55, v42, 8);
      v41 = (unsigned int)v54;
    }
    *((_QWORD *)ptr + v41) = "--32";
    LODWORD(v54) = v54 + 1;
  }
  sub_21B6F20(a6, &ptr, 3403, 3487, 0);
  v12 = (unsigned int)v54;
  v13 = (unsigned int)v54 + 1LL;
  if ( v13 > HIDWORD(v54) )
  {
    sub_2237220(&ptr, v55, v13, 8);
    v12 = (unsigned int)v54;
  }
  *((_QWORD *)ptr + v12) = "-o";
  LODWORD(v54) = v54 + 1;
  v14 = (unsigned int)v54;
  v15 = *a4;
  if ( (unsigned __int64)(unsigned int)v54 + 1 > HIDWORD(v54) )
  {
    sub_2237220(&ptr, v55, (unsigned int)v54 + 1LL, 8);
    v14 = (unsigned int)v54;
  }
  v16 = v55;
  *((_QWORD *)ptr + v14) = v15;
  v17 = *(const __m128i **)a5;
  v18 = (unsigned int)(v54 + 1);
  v19 = *(_QWORD *)a5 + 40LL * *(unsigned int *)(a5 + 8);
  LODWORD(v54) = v54 + 1;
  if ( v17 != (const __m128i *)v19 )
  {
    do
    {
      while ( 1 )
      {
        v20 = v17->m128i_i64[0];
        if ( v18 + 1 > (unsigned __int64)HIDWORD(v54) )
          break;
        v17 = (const __m128i *)((char *)v17 + 40);
        *((_QWORD *)ptr + v18) = v20;
        v18 = (unsigned int)(v54 + 1);
        LODWORD(v54) = v54 + 1;
        if ( (const __m128i *)v19 == v17 )
          goto LABEL_11;
      }
      v50 = (const __m128i *)v19;
      v49 = v17->m128i_i64[0];
      v17 = (const __m128i *)((char *)v17 + 40);
      v46 = v16;
      sub_2237220(&ptr, v16, v18 + 1, 8);
      v19 = (__int64)v50;
      v16 = v46;
      *((_QWORD *)ptr + (unsigned int)v54) = v49;
      v18 = (unsigned int)(v54 + 1);
      LODWORD(v54) = v54 + 1;
    }
    while ( v50 != v17 );
  }
LABEL_11:
  v21 = v51;
  sub_112D530(v51, v11, "as");
  v47 = (*(__int64 (__fastcall **)(__int64, void *, void *))(*(_QWORD *)a6 + 16LL))(a6, v51[0], v51[1]);
  if ( v51[0] != &v52 )
    operator delete(v51[0]);
  v22 = *(const __m128i **)a5;
  v23 = *(unsigned int *)(a5 + 8);
  v24 = (void *)operator new(0x208u);
  sub_1106AE0((__int64)v24, a3, a1, 0x100000000LL, (__int64)"@", v47, (__int64)&ptr, v22, v23, (__int64)a4, 1, 0);
  v25 = *(unsigned int *)(a2 + 160);
  v51[0] = v24;
  v26 = v25 + 1;
  v27 = v25;
  if ( v25 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 164) )
  {
    v43 = *(_QWORD *)(a2 + 152);
    v44 = a2 + 152;
    if ( v43 > (unsigned __int64)v51 || (unsigned __int64)v51 >= v43 + 8 * v25 )
    {
      sub_11673D0(v44, v26, a7, a8);
      v25 = *(unsigned int *)(a2 + 160);
      v28 = *(_QWORD *)(a2 + 152);
      v27 = *(_DWORD *)(a2 + 160);
    }
    else
    {
      sub_11673D0(v44, v26, a7, a8);
      v28 = *(_QWORD *)(a2 + 152);
      v25 = *(unsigned int *)(a2 + 160);
      v21 = (void **)((char *)v51 + v28 - v43);
      v27 = *(_DWORD *)(a2 + 160);
    }
  }
  else
  {
    v28 = *(_QWORD *)(a2 + 152);
  }
  v29 = *v21;
  *v21 = nullptr;
  *(_QWORD *)(v28 + 8 * v25) = v29;
  *(_DWORD *)(a2 + 160) = v27 + 1;
  v30 = v51[0];
  if ( v51[0] )
  {
    v31 = *(void (__fastcall **)(_QWORD *))(*(_QWORD *)v51[0] + 8LL);
    if ( v31 == sub_10D4290 )
    {
      v32 = *((_QWORD *)v51[0] + 58);
      v33 = *((_QWORD *)v51[0] + 57);
      *(_QWORD *)v51[0] = &off_2BA8F30;
      if ( v32 != v33 )
      {
        do
        {
          if ( *(_BYTE *)(v33 + 32) && *(_QWORD *)v33 != v33 + 16 )
            operator delete(*(void **)v33);
          v33 += 40;
        }
        while ( v32 != v33 );
        v33 = v30[57];
      }
      if ( v33 )
        operator delete((void *)v33);
      v34 = (void *)v30[54];
      if ( v34 )
        operator delete(v34);
      v35 = (_QWORD *)v30[50];
      if ( v35 != v30 + 52 )
        operator delete(v35);
      v36 = (_QWORD *)v30[32];
      if ( v36 != v30 + 34 )
        free(v36);
      v37 = (void **)v30[29];
      v38 = (void **)v30[28];
      if ( v37 != v38 )
      {
        do
        {
          while ( *v38 != v38 + 2 )
          {
            operator delete(*v38);
            v38 += 4;
            if ( v38 == v37 )
            {
              v38 = (void **)v30[28];
              goto LABEL_35;
            }
          }
          v38 += 4;
        }
        while ( v37 != v38 );
        v38 = (void **)v30[28];
      }
LABEL_35:
      if ( v38 )
        operator delete(v38);
      v39 = (void *)v30[25];
      if ( v39 )
        operator delete(v39);
      v40 = (_QWORD *)v30[7];
      if ( v40 != v30 + 9 )
        free(v40);
      operator delete(v30, 0x208u);
    }
    else
    {
      v31((_QWORD *)v51[0]);
    }
  }
  if ( ptr != v55 )
    free(ptr);
}
