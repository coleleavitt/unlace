void __fastcall sub_11F3B40(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        const __m128i **a5,
        __int64 a6,
        __m128 a7,
        double a8)
{
  __int64 v10; // rsi
  void **v11; // rbx
  void *v12; // r15
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // rsi
  int v16; // eax
  __int64 v17; // rcx
  void *v18; // rsi
  _QWORD *v19; // rbx
  void (__fastcall *v20)(_QWORD *); // rax
  __int64 v21; // r13
  __int64 v22; // r12
  void *v23; // rdi
  _QWORD *v24; // rdi
  _QWORD *v25; // rdi
  void **v26; // r13
  void **v27; // r12
  void *v28; // rdi
  _QWORD *v29; // rdi
  unsigned __int64 v30; // r12
  __int64 v31; // rdi
  __int64 v33; // [rsp+0h] [rbp-148h]
  const __m128i *v36; // [rsp+20h] [rbp-128h]
  __int64 v37; // [rsp+28h] [rbp-120h]
  void *v38[2]; // [rsp+30h] [rbp-118h] BYREF
  __int64 v39; // [rsp+40h] [rbp-108h] BYREF
  void *v40[4]; // [rsp+50h] [rbp-F8h] BYREF
  __int16 v41; // [rsp+70h] [rbp-D8h]
  void *ptr[2]; // [rsp+80h] [rbp-C8h] BYREF
  _QWORD v43[23]; // [rsp+90h] [rbp-B8h] BYREF

  v10 = *(_QWORD *)(a1 + 24);
  v11 = v40;
  ptr[0] = v43;
  v43[0] = "--verify";
  v43[1] = "--debug-info";
  v43[2] = "--eh-frame";
  v43[3] = "--quiet";
  v43[4] = (*a5)->m128i_i64[0];
  ptr[1] = (void *)0x1000000005LL;
  sub_112D530(v38, v10, "dwarfdump");
  v40[0] = v38;
  v41 = 260;
  v33 = sub_10DA6C0(a6, (__int64)v40);
  if ( v38[0] != &v39 )
    operator delete(v38[0]);
  v36 = *a5;
  v37 = *((unsigned int *)a5 + 2);
  v12 = (void *)operator new(0x208u);
  sub_1106AE0((__int64)v12, a3, a1, 2, 0, v33, (__int64)ptr, v36, v37, a4, 1, 0);
  v13 = *(unsigned int *)(a2 + 160);
  v14 = *(unsigned int *)(a2 + 164);
  v40[0] = v12;
  v15 = v13 + 1;
  v16 = v13;
  if ( v13 + 1 > v14 )
  {
    v30 = *(_QWORD *)(a2 + 152);
    v31 = a2 + 152;
    if ( v30 > (unsigned __int64)v40 || (unsigned __int64)v40 >= v30 + 8 * v13 )
    {
      sub_11673D0(v31, v15, a7, a8);
      v13 = *(unsigned int *)(a2 + 160);
      v17 = *(_QWORD *)(a2 + 152);
      v16 = *(_DWORD *)(a2 + 160);
    }
    else
    {
      sub_11673D0(v31, v15, a7, a8);
      v17 = *(_QWORD *)(a2 + 152);
      v13 = *(unsigned int *)(a2 + 160);
      v11 = (void **)((char *)v40 + v17 - v30);
      v16 = *(_DWORD *)(a2 + 160);
    }
  }
  else
  {
    v17 = *(_QWORD *)(a2 + 152);
  }
  v18 = *v11;
  *v11 = nullptr;
  *(_QWORD *)(v17 + 8 * v13) = v18;
  v19 = v40[0];
  *(_DWORD *)(a2 + 160) = v16 + 1;
  if ( v19 )
  {
    v20 = *(void (__fastcall **)(_QWORD *))(*v19 + 8LL);
    if ( v20 == sub_10D4290 )
    {
      v21 = v19[58];
      v22 = v19[57];
      *v19 = &off_2BA8F30;
      if ( v21 != v22 )
      {
        do
        {
          if ( *(_BYTE *)(v22 + 32) && *(_QWORD *)v22 != v22 + 16 )
            operator delete(*(void **)v22);
          v22 += 40;
        }
        while ( v21 != v22 );
        v22 = v19[57];
      }
      if ( v22 )
        operator delete((void *)v22);
      v23 = (void *)v19[54];
      if ( v23 )
        operator delete(v23);
      v24 = (_QWORD *)v19[50];
      if ( v24 != v19 + 52 )
        operator delete(v24);
      v25 = (_QWORD *)v19[32];
      if ( v25 != v19 + 34 )
        free(v25);
      v26 = (void **)v19[29];
      v27 = (void **)v19[28];
      if ( v26 != v27 )
      {
        do
        {
          while ( *v27 != v27 + 2 )
          {
            operator delete(*v27);
            v27 += 4;
            if ( v26 == v27 )
            {
              v27 = (void **)v19[28];
              goto LABEL_25;
            }
          }
          v27 += 4;
        }
        while ( v26 != v27 );
        v27 = (void **)v19[28];
      }
LABEL_25:
      if ( v27 )
        operator delete(v27);
      v28 = (void *)v19[25];
      if ( v28 )
        operator delete(v28);
      v29 = (_QWORD *)v19[7];
      if ( v29 != v19 + 9 )
        free(v29);
      operator delete(v19, 0x208u);
    }
    else
    {
      v20(v19);
    }
  }
  if ( ptr[0] != v43 )
    free(ptr[0]);
}
