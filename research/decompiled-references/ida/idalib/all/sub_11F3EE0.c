void __fastcall sub_11F3EE0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        double a8)
{
  const __m128i *v10; // r12
  const __m128i *v11; // r10
  __int64 v12; // rax
  const __m128i *v13; // r12
  __int64 v14; // rax
  __int64 v15; // r15
  void **v16; // rbp
  char *v17; // rax
  void *v18; // r12
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  __int64 v21; // rsi
  int v22; // eax
  __int64 v23; // rcx
  void *v24; // rsi
  _QWORD *v25; // r12
  void (__fastcall *v26)(_QWORD *); // rax
  __int64 v27; // r13
  __int64 v28; // rbp
  void *v29; // rdi
  _QWORD *v30; // rdi
  _QWORD *v31; // rdi
  void **v32; // r13
  void **v33; // rbp
  void *v34; // rdi
  _QWORD *v35; // rdi
  unsigned __int64 v36; // r12
  __int64 v37; // rdi
  __int64 v39; // [rsp+8h] [rbp-140h]
  const __m128i *v42; // [rsp+20h] [rbp-128h]
  const __m128i *v43; // [rsp+20h] [rbp-128h]
  __int64 v44; // [rsp+28h] [rbp-120h]
  void *v45[2]; // [rsp+30h] [rbp-118h] BYREF
  __int64 v46; // [rsp+40h] [rbp-108h] BYREF
  void *v47[4]; // [rsp+50h] [rbp-F8h] BYREF
  __int16 v48; // [rsp+70h] [rbp-D8h]
  void *ptr; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v50; // [rsp+88h] [rbp-C0h]
  _QWORD v51[23]; // [rsp+90h] [rbp-B8h] BYREF

  v10 = *(const __m128i **)a5;
  v51[0] = "-create";
  v51[1] = "-output";
  v51[2] = *a4;
  v50 = 0x1000000003LL;
  v11 = (const __m128i *)((char *)v10 + 40 * *(unsigned int *)(a5 + 8));
  ptr = v51;
  if ( v11 != v10 )
  {
    v12 = v10->m128i_i64[0];
    v13 = (const __m128i *)((char *)v10 + 40);
    LODWORD(v50) = 4;
    v51[3] = v12;
    v14 = 4;
    if ( v11 != v13 )
    {
      do
      {
        while ( 1 )
        {
          v15 = v13->m128i_i64[0];
          if ( v14 + 1 > (unsigned __int64)HIDWORD(v50) )
            break;
          v13 = (const __m128i *)((char *)v13 + 40);
          *((_QWORD *)ptr + v14) = v15;
          v14 = (unsigned int)(v50 + 1);
          LODWORD(v50) = v50 + 1;
          if ( v11 == v13 )
            goto LABEL_5;
        }
        v43 = v11;
        sub_2237220(&ptr, v51, v14 + 1, 8);
        v11 = v43;
        v13 = (const __m128i *)((char *)v13 + 40);
        *((_QWORD *)ptr + (unsigned int)v50) = v15;
        v14 = (unsigned int)(v50 + 1);
        LODWORD(v50) = v50 + 1;
      }
      while ( v43 != v13 );
    }
  }
LABEL_5:
  v16 = v47;
  v17 = (char *)sub_21B7BC0(a6, 1919, "lipo", 4);
  sub_112D530(v45, *(_QWORD *)(a1 + 24), v17);
  v47[0] = v45;
  v48 = 260;
  v39 = sub_10DA6C0(a6, (__int64)v47);
  if ( v45[0] != &v46 )
    operator delete(v45[0]);
  v42 = *(const __m128i **)a5;
  v44 = *(unsigned int *)(a5 + 8);
  v18 = (void *)operator new(0x208u);
  sub_1106AE0((__int64)v18, a3, a1, 2, 0, v39, (__int64)&ptr, v42, v44, (__int64)a4, 1, 0);
  v19 = *(unsigned int *)(a2 + 160);
  v20 = *(unsigned int *)(a2 + 164);
  v47[0] = v18;
  v21 = v19 + 1;
  v22 = v19;
  if ( v19 + 1 > v20 )
  {
    v36 = *(_QWORD *)(a2 + 152);
    v37 = a2 + 152;
    if ( v36 > (unsigned __int64)v47 || (unsigned __int64)v47 >= v36 + 8 * v19 )
    {
      sub_11673D0(v37, v21, a7, a8);
      v19 = *(unsigned int *)(a2 + 160);
      v23 = *(_QWORD *)(a2 + 152);
      v22 = *(_DWORD *)(a2 + 160);
    }
    else
    {
      sub_11673D0(v37, v21, a7, a8);
      v23 = *(_QWORD *)(a2 + 152);
      v19 = *(unsigned int *)(a2 + 160);
      v16 = (void **)((char *)v47 + v23 - v36);
      v22 = *(_DWORD *)(a2 + 160);
    }
  }
  else
  {
    v23 = *(_QWORD *)(a2 + 152);
  }
  v24 = *v16;
  *v16 = nullptr;
  *(_QWORD *)(v23 + 8 * v19) = v24;
  v25 = v47[0];
  *(_DWORD *)(a2 + 160) = v22 + 1;
  if ( v25 )
  {
    v26 = *(void (__fastcall **)(_QWORD *))(*v25 + 8LL);
    if ( v26 == sub_10D4290 )
    {
      v27 = v25[58];
      v28 = v25[57];
      *v25 = &off_2BA8F30;
      if ( v27 != v28 )
      {
        do
        {
          if ( *(_BYTE *)(v28 + 32) && *(_QWORD *)v28 != v28 + 16 )
            operator delete(*(void **)v28);
          v28 += 40;
        }
        while ( v27 != v28 );
        v28 = v25[57];
      }
      if ( v28 )
        operator delete((void *)v28);
      v29 = (void *)v25[54];
      if ( v29 )
        operator delete(v29);
      v30 = (_QWORD *)v25[50];
      if ( v30 != v25 + 52 )
        operator delete(v30);
      v31 = (_QWORD *)v25[32];
      if ( v31 != v25 + 34 )
        free(v31);
      v32 = (void **)v25[29];
      v33 = (void **)v25[28];
      if ( v32 != v33 )
      {
        do
        {
          while ( *v33 != v33 + 2 )
          {
            operator delete(*v33);
            v33 += 4;
            if ( v33 == v32 )
            {
              v33 = (void **)v25[28];
              goto LABEL_29;
            }
          }
          v33 += 4;
        }
        while ( v32 != v33 );
        v33 = (void **)v25[28];
      }
LABEL_29:
      if ( v33 )
        operator delete(v33);
      v34 = (void *)v25[25];
      if ( v34 )
        operator delete(v34);
      v35 = (_QWORD *)v25[7];
      if ( v35 != v25 + 9 )
        free(v35);
      operator delete(v25, 0x208u);
    }
    else
    {
      v26(v25);
    }
  }
  if ( ptr != v51 )
    free(ptr);
}
