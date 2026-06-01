void __fastcall sub_1279160(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        double a8)
{
  int v11; // eax
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r13
  _QWORD *v16; // r10
  const __m128i *v17; // r13
  __int64 v18; // rax
  __int64 v19; // r12
  __int64 v20; // r8
  void **v21; // r13
  void *v22; // r12
  __int64 v23; // rdx
  __int64 v24; // rsi
  int v25; // eax
  __int64 v26; // rcx
  void *v27; // rsi
  _QWORD *v28; // r12
  void (__fastcall *v29)(_QWORD *); // rax
  __int64 v30; // r13
  __int64 v31; // rax
  void *v32; // rdi
  _QWORD *v33; // rdi
  _QWORD *v34; // rdi
  void **v35; // r13
  void *v36; // rdi
  _QWORD *v37; // rdi
  __int64 v38; // rax
  unsigned __int64 v39; // r12
  __int64 v40; // rdi
  _QWORD *v41; // [rsp+0h] [rbp-128h]
  __int64 v42; // [rsp+0h] [rbp-128h]
  __int64 v43; // [rsp+0h] [rbp-128h]
  void **v44; // [rsp+0h] [rbp-128h]
  __int64 v48; // [rsp+20h] [rbp-108h]
  const __m128i *v49; // [rsp+30h] [rbp-F8h]
  __int64 v50; // [rsp+38h] [rbp-F0h]
  void *v51[2]; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v52; // [rsp+50h] [rbp-D8h] BYREF
  void *ptr; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v54; // [rsp+68h] [rbp-C0h]
  _QWORD v55[23]; // [rsp+70h] [rbp-B8h] BYREF

  sub_11BB1A0(a6);
  ptr = v55;
  v54 = 0x1000000000LL;
  v11 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  if ( v11 == 37 )
  {
    LODWORD(v54) = 1;
    v55[0] = "--32";
  }
  else if ( v11 == 38 )
  {
    sub_10DC5D0((__int64)&ptr, (__int64)"--64");
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
  for ( LODWORD(v54) = v54 + 1; (const __m128i *)v19 != v17; LODWORD(v54) = v54 + 1 )
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
        goto LABEL_13;
    }
    v48 = v17->m128i_i64[0];
    v41 = v16;
    v17 = (const __m128i *)((char *)v17 + 40);
    sub_2237220(&ptr, v16, v18 + 1, 8);
    v16 = v41;
    *((_QWORD *)ptr + (unsigned int)v54) = v48;
    v18 = (unsigned int)(v54 + 1);
  }
LABEL_13:
  v21 = v51;
  sub_112D530(v51, *(_QWORD *)(a1 + 24), "as");
  v42 = (*(__int64 (__fastcall **)(__int64, void *, void *))(*(_QWORD *)a6 + 16LL))(a6, v51[0], v51[1]);
  if ( v51[0] != &v52 )
    operator delete(v51[0]);
  v49 = *(const __m128i **)a5;
  v50 = *(unsigned int *)(a5 + 8);
  v22 = (void *)operator new(0x208u);
  sub_1106AE0((__int64)v22, a3, a1, 2, 0, v42, (__int64)&ptr, v49, v50, (__int64)a4, 1, 0);
  v51[0] = v22;
  v23 = *(unsigned int *)(a2 + 160);
  v24 = v23 + 1;
  v25 = *(_DWORD *)(a2 + 160);
  if ( v23 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 164) )
  {
    v39 = *(_QWORD *)(a2 + 152);
    v40 = a2 + 152;
    if ( v39 > (unsigned __int64)v51 || (unsigned __int64)v51 >= v39 + 8 * v23 )
    {
      sub_11673D0(v40, v24, a7, a8);
      v23 = *(unsigned int *)(a2 + 160);
      v26 = *(_QWORD *)(a2 + 152);
      v25 = *(_DWORD *)(a2 + 160);
    }
    else
    {
      sub_11673D0(v40, v24, a7, a8);
      v26 = *(_QWORD *)(a2 + 152);
      v23 = *(unsigned int *)(a2 + 160);
      v21 = (void **)((char *)v51 + v26 - v39);
      v25 = *(_DWORD *)(a2 + 160);
    }
  }
  else
  {
    v26 = *(_QWORD *)(a2 + 152);
  }
  v27 = *v21;
  *v21 = nullptr;
  *(_QWORD *)(v26 + 8 * v23) = v27;
  v28 = v51[0];
  *(_DWORD *)(a2 + 160) = v25 + 1;
  if ( v28 )
  {
    v29 = *(void (__fastcall **)(_QWORD *))(*v28 + 8LL);
    if ( v29 == sub_10D4290 )
    {
      v30 = v28[57];
      *v28 = &off_2BA8F30;
      v31 = v28[58];
      if ( v31 != v30 )
      {
        do
        {
          if ( *(_BYTE *)(v30 + 32) && *(_QWORD *)v30 != v30 + 16 )
          {
            v43 = v31;
            operator delete(*(void **)v30);
            v31 = v43;
          }
          v30 += 40;
        }
        while ( v31 != v30 );
        v30 = v28[57];
      }
      if ( v30 )
        operator delete((void *)v30);
      v32 = (void *)v28[54];
      if ( v32 )
        operator delete(v32);
      v33 = (_QWORD *)v28[50];
      if ( v33 != v28 + 52 )
        operator delete(v33);
      v34 = (_QWORD *)v28[32];
      if ( v34 != v28 + 34 )
        free(v34);
      v35 = (void **)v28[28];
      v44 = (void **)v28[29];
      if ( v44 != v35 )
      {
        do
        {
          while ( *v35 != v35 + 2 )
          {
            operator delete(*v35);
            v35 += 4;
            if ( v35 == v44 )
            {
              v35 = (void **)v28[28];
              goto LABEL_37;
            }
          }
          v35 += 4;
        }
        while ( v44 != v35 );
        v35 = (void **)v28[28];
      }
LABEL_37:
      if ( v35 )
        operator delete(v35);
      v36 = (void *)v28[25];
      if ( v36 )
        operator delete(v36);
      v37 = (_QWORD *)v28[7];
      if ( v37 != v28 + 9 )
        free(v37);
      operator delete(v28, 0x208u);
    }
    else
    {
      v29(v28);
    }
  }
  if ( sub_10DCD30(a6, 0x817u) )
  {
    v38 = sub_11C11C0(a3, a6, *(_QWORD *)a5, (__int64)a4);
    sub_11CD1C0(*(_QWORD *)(a1 + 24), a2, a1, a3, a6, a4, a7, a8, v38);
  }
  if ( ptr != v55 )
    free(ptr);
}
