void __fastcall sub_124F290(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        double a8)
{
  const __m128i *v12; // r11
  __int64 v13; // rax
  const __m128i *v14; // r13
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rsi
  int v22; // eax
  void **v23; // rdx
  void *v24; // rdi
  _QWORD *v25; // rbp
  void (__fastcall *v26)(void *); // rax
  __int64 v27; // r14
  __int64 v28; // r13
  void *v29; // rdi
  _QWORD *v30; // rdi
  _QWORD *v31; // rdi
  void **v32; // r14
  void **v33; // r13
  void *v34; // rdi
  _QWORD *v35; // rdi
  unsigned __int64 v36; // r14
  __int64 v37; // rdi
  __int64 v38; // [rsp+8h] [rbp-120h]
  void *v39; // [rsp+8h] [rbp-120h]
  __int64 v40; // [rsp+10h] [rbp-118h]
  void *v42; // [rsp+38h] [rbp-F0h] BYREF
  void *v43[2]; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v44; // [rsp+50h] [rbp-D8h] BYREF
  void *ptr[2]; // [rsp+60h] [rbp-C8h] BYREF
  _QWORD v46[23]; // [rsp+70h] [rbp-B8h] BYREF

  sub_112D530(v43, *(_QWORD *)(a1 + 24), "dxv");
  v12 = *(const __m128i **)a5;
  ptr[0] = v46;
  v40 = (__int64)v12;
  v46[0] = v12->m128i_i64[0];
  v46[1] = "-o";
  v46[2] = *a4;
  ptr[1] = (void *)0x1000000003LL;
  v13 = (*(__int64 (__fastcall **)(__int64, void *, void *))(*(_QWORD *)a6 + 16LL))(a6, v43[0], v43[1]);
  v14 = *(const __m128i **)a5;
  v38 = v13;
  v15 = *(unsigned int *)(a5 + 8);
  v16 = operator new(0x208u);
  v17 = v38;
  v39 = (void *)v16;
  sub_1106AE0(v16, a3, a1, 2, 0, v17, (__int64)ptr, v14, v15, v40, 1, 0);
  v18 = *(unsigned int *)(a2 + 160);
  v19 = *(unsigned int *)(a2 + 164);
  v20 = v18 + 1;
  v42 = v39;
  if ( v18 + 1 > v19 )
  {
    v36 = *(_QWORD *)(a2 + 152);
    v37 = a2 + 152;
    if ( v36 > (unsigned __int64)&v42 || (unsigned __int64)&v42 >= v36 + 8 * v18 )
    {
      sub_11673D0(v37, v20, a7, a8);
      v18 = *(unsigned int *)(a2 + 160);
      v21 = *(_QWORD *)(a2 + 152);
      v23 = &v42;
      v22 = *(_DWORD *)(a2 + 160);
    }
    else
    {
      sub_11673D0(v37, v20, a7, a8);
      v21 = *(_QWORD *)(a2 + 152);
      v18 = *(unsigned int *)(a2 + 160);
      v23 = (void **)((char *)&v43[-1] + v21 - v36);
      v22 = *(_DWORD *)(a2 + 160);
    }
  }
  else
  {
    v21 = *(_QWORD *)(a2 + 152);
    v22 = v18;
    v23 = &v42;
  }
  v24 = *v23;
  *v23 = nullptr;
  *(_QWORD *)(v21 + 8 * v18) = v24;
  *(_DWORD *)(a2 + 160) = v22 + 1;
  v25 = v42;
  if ( v42 )
  {
    v26 = *(void (__fastcall **)(void *))(*(_QWORD *)v42 + 8LL);
    if ( (char *)v26 == (char *)sub_10D4290 )
    {
      v27 = *((_QWORD *)v42 + 58);
      v28 = *((_QWORD *)v42 + 57);
      *(_QWORD *)v42 = &off_2BA8F30;
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
              goto LABEL_23;
            }
          }
          v33 += 4;
        }
        while ( v32 != v33 );
        v33 = (void **)v25[28];
      }
LABEL_23:
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
      v26(v42);
    }
  }
  if ( ptr[0] != v46 )
    free(ptr[0]);
  if ( v43[0] != &v44 )
    operator delete(v43[0]);
}
