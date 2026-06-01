void __fastcall sub_11F37B0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        const __m128i **a5,
        __int64 a6,
        __m128 a7,
        double a8)
{
  __int64 v10; // rsi
  void **v11; // rbx
  __int64 v12; // rax
  const __m128i **v13; // r8
  _QWORD *v14; // rcx
  const __m128i *v15; // r13
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  __int64 v21; // rsi
  int v22; // eax
  __int64 v23; // rcx
  void *v24; // rsi
  _QWORD *v25; // rbx
  void (__fastcall *v26)(_QWORD *); // rax
  __int64 v27; // r13
  __int64 v28; // r12
  void *v29; // rdi
  _QWORD *v30; // rdi
  _QWORD *v31; // rdi
  void **v32; // r13
  void **v33; // r12
  void *v34; // rdi
  _QWORD *v35; // rdi
  unsigned __int64 v36; // r13
  __int64 v37; // rdi
  __int64 v38; // [rsp+8h] [rbp-140h]
  void *v39; // [rsp+8h] [rbp-140h]
  _QWORD *v41; // [rsp+10h] [rbp-138h]
  __int64 v42; // [rsp+10h] [rbp-138h]
  const __m128i **v45; // [rsp+28h] [rbp-120h]
  void *v46[2]; // [rsp+30h] [rbp-118h] BYREF
  __int64 v47; // [rsp+40h] [rbp-108h] BYREF
  void *v48[4]; // [rsp+50h] [rbp-F8h] BYREF
  __int16 v49; // [rsp+70h] [rbp-D8h]
  void *ptr[2]; // [rsp+80h] [rbp-C8h] BYREF
  _QWORD v51[23]; // [rsp+90h] [rbp-B8h] BYREF

  v10 = *(_QWORD *)(a1 + 24);
  v11 = v48;
  ptr[0] = v51;
  v51[0] = "-o";
  v51[1] = *a4;
  v51[2] = (*a5)->m128i_i64[0];
  ptr[1] = (void *)0x1000000003LL;
  sub_112D530(v46, v10, "dsymutil");
  v48[0] = v46;
  v49 = 260;
  v12 = sub_10DA6C0(a6, (__int64)v48);
  v13 = a5;
  v38 = v12;
  v14 = a4;
  if ( v46[0] != &v47 )
  {
    v45 = a5;
    v41 = v14;
    operator delete(v46[0]);
    v13 = v45;
    v14 = v41;
  }
  v42 = (__int64)v14;
  v15 = *v13;
  v16 = *((unsigned int *)v13 + 2);
  v17 = operator new(0x208u);
  v18 = v38;
  v39 = (void *)v17;
  sub_1106AE0(v17, a3, a1, 2, 0, v18, (__int64)ptr, v15, v16, v42, 1, 0);
  v19 = *(unsigned int *)(a2 + 160);
  v20 = *(unsigned int *)(a2 + 164);
  v21 = v19 + 1;
  v48[0] = v39;
  v22 = v19;
  if ( v19 + 1 > v20 )
  {
    v36 = *(_QWORD *)(a2 + 152);
    v37 = a2 + 152;
    if ( v36 > (unsigned __int64)v48 || (unsigned __int64)v48 >= v36 + 8 * v19 )
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
      v11 = (void **)((char *)v48 + v23 - v36);
      v22 = *(_DWORD *)(a2 + 160);
    }
  }
  else
  {
    v23 = *(_QWORD *)(a2 + 152);
  }
  v24 = *v11;
  *v11 = nullptr;
  *(_QWORD *)(v23 + 8 * v19) = v24;
  v25 = v48[0];
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
            if ( v32 == v33 )
            {
              v33 = (void **)v25[28];
              goto LABEL_25;
            }
          }
          v33 += 4;
        }
        while ( v32 != v33 );
        v33 = (void **)v25[28];
      }
LABEL_25:
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
  if ( ptr[0] != v51 )
    free(ptr[0]);
}
