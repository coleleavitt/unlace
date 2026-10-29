void __fastcall sub_123CD60(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        __m128 a7,
        __m128i a8,
        __m128i a9,
        __m128i a10)
{
  __int64 v14; // rax
  const __m128i *v15; // r8
  __int64 v16; // rax
  const __m128i *v17; // r9
  __int64 v18; // rax
  const __m128i *v19; // r8
  __int64 v20; // rax
  __int64 v21; // r10
  __int64 v22; // r13
  void *v23; // r12
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  __int64 v26; // rsi
  int v27; // edx
  __int64 v28; // rsi
  void **v29; // rax
  void *v30; // rdi
  _QWORD *v31; // r12
  void (__fastcall *v32)(_QWORD *); // rax
  __int64 v33; // r13
  __int64 v34; // rbp
  void *v35; // rdi
  _QWORD *v36; // rdi
  _QWORD *v37; // rdi
  void **v38; // r13
  void **v39; // rbp
  void *v40; // rdi
  _QWORD *v41; // rdi
  unsigned __int64 v42; // r12
  __int64 v43; // rdi
  __int64 v44; // [rsp+8h] [rbp-120h]
  const __m128i *v45; // [rsp+10h] [rbp-118h]
  const __m128i *v46; // [rsp+20h] [rbp-108h]
  __int64 *v47; // [rsp+20h] [rbp-108h]
  __int64 v48; // [rsp+28h] [rbp-100h]
  void *v50[2]; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v51; // [rsp+50h] [rbp-D8h] BYREF
  void *ptr; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v53; // [rsp+68h] [rbp-C0h]
  _QWORD v54[23]; // [rsp+70h] [rbp-B8h] BYREF

  v14 = *a5;
  v15 = *(const __m128i **)a4;
  v54[1] = v14;
  v53 = 0x1000000002LL;
  v16 = *(unsigned int *)(a4 + 8);
  ptr = v54;
  v54[0] = "-o";
  v17 = (const __m128i *)((char *)v15 + 40 * v16);
  if ( v17 != v15 )
  {
    v18 = v15->m128i_i64[0];
    v19 = (const __m128i *)((char *)v15 + 40);
    LODWORD(v53) = 3;
    v54[2] = v18;
    if ( v17 != v19 )
    {
      v20 = 3;
      do
      {
        while ( 1 )
        {
          v21 = v19->m128i_i64[0];
          if ( v20 + 1 > (unsigned __int64)HIDWORD(v53) )
            break;
          v19 = (const __m128i *)((char *)v19 + 40);
          *((_QWORD *)ptr + v20) = v21;
          v20 = (unsigned int)(v53 + 1);
          LODWORD(v53) = v53 + 1;
          if ( v17 == v19 )
            goto LABEL_6;
        }
        v47 = (__int64 *)v19;
        v45 = v17;
        v44 = v19->m128i_i64[0];
        sub_2237220(&ptr, v54, v20 + 1, 8);
        v17 = v45;
        *((_QWORD *)ptr + (unsigned int)v53) = v44;
        v19 = (const __m128i *)(v47 + 5);
        v20 = (unsigned int)(v53 + 1);
        LODWORD(v53) = v53 + 1;
      }
      while ( v45 != (const __m128i *)(v47 + 5) );
    }
  }
LABEL_6:
  sub_21B7BC0(a6, 2323, &byte_22F0C30, 0);
  sub_11D0E30((__int64 **)a2, a1, a3, a4, a6, (__int64)&ptr, *(double *)a7.m128_u64, a8, a9, a10, (__int64)"amdgcn");
  sub_112D530(v50, *(_QWORD *)(a1 + 24), "llvm-link");
  v22 = (*(__int64 (__fastcall **)(__int64, void *, void *))(*(_QWORD *)a6 + 16LL))(a6, v50[0], v50[1]);
  if ( v50[0] != &v51 )
    operator delete(v50[0]);
  v46 = *(const __m128i **)a4;
  v48 = *(unsigned int *)(a4 + 8);
  v23 = (void *)operator new(0x208u);
  sub_1106AE0((__int64)v23, a3, a1, 2, 0, v22, (__int64)&ptr, v46, v48, (__int64)a5, 1, 0);
  v24 = *(unsigned int *)(a2 + 160);
  v25 = *(unsigned int *)(a2 + 164);
  v50[0] = v23;
  v26 = v24 + 1;
  v27 = v24;
  if ( v24 + 1 > v25 )
  {
    v42 = *(_QWORD *)(a2 + 152);
    v43 = a2 + 152;
    if ( v42 > (unsigned __int64)v50 || (unsigned __int64)v50 >= v42 + 8 * v24 )
    {
      sub_11673D0(v43, v26, a7, *(double *)a8.m128i_i64);
      v24 = *(unsigned int *)(a2 + 160);
      v28 = *(_QWORD *)(a2 + 152);
      v29 = v50;
      v27 = *(_DWORD *)(a2 + 160);
    }
    else
    {
      sub_11673D0(v43, v26, a7, *(double *)a8.m128i_i64);
      v28 = *(_QWORD *)(a2 + 152);
      v24 = *(unsigned int *)(a2 + 160);
      v29 = (void **)((char *)v50 + v28 - v42);
      v27 = *(_DWORD *)(a2 + 160);
    }
  }
  else
  {
    v28 = *(_QWORD *)(a2 + 152);
    v29 = v50;
  }
  v30 = *v29;
  *v29 = nullptr;
  *(_QWORD *)(v28 + 8 * v24) = v30;
  v31 = v50[0];
  *(_DWORD *)(a2 + 160) = v27 + 1;
  if ( v31 )
  {
    v32 = *(void (__fastcall **)(_QWORD *))(*v31 + 8LL);
    if ( v32 == sub_10D4290 )
    {
      v33 = v31[58];
      v34 = v31[57];
      *v31 = &off_2BA8F30;
      if ( v33 != v34 )
      {
        do
        {
          if ( *(_BYTE *)(v34 + 32) && *(_QWORD *)v34 != v34 + 16 )
            operator delete(*(void **)v34);
          v34 += 40;
        }
        while ( v33 != v34 );
        v34 = v31[57];
      }
      if ( v34 )
        operator delete((void *)v34);
      v35 = (void *)v31[54];
      if ( v35 )
        operator delete(v35);
      v36 = (_QWORD *)v31[50];
      if ( v36 != v31 + 52 )
        operator delete(v36);
      v37 = (_QWORD *)v31[32];
      if ( v37 != v31 + 34 )
        free(v37);
      v38 = (void **)v31[29];
      v39 = (void **)v31[28];
      if ( v38 != v39 )
      {
        do
        {
          while ( *v39 != v39 + 2 )
          {
            operator delete(*v39);
            v39 += 4;
            if ( v39 == v38 )
            {
              v39 = (void **)v31[28];
              goto LABEL_30;
            }
          }
          v39 += 4;
        }
        while ( v38 != v39 );
        v39 = (void **)v31[28];
      }
LABEL_30:
      if ( v39 )
        operator delete(v39);
      v40 = (void *)v31[25];
      if ( v40 )
        operator delete(v40);
      v41 = (_QWORD *)v31[7];
      if ( v41 != v31 + 9 )
        free(v41);
      operator delete(v31, 0x208u);
    }
    else
    {
      v32(v31);
    }
  }
  if ( ptr != v54 )
    free(ptr);
}
