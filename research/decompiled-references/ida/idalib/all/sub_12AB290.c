void __fastcall sub_12AB290(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        const __m128i **a5,
        __int64 a6,
        __m128 a7,
        double a8)
{
  __int64 v11; // r15
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rbp
  void **v18; // rbp
  __int64 v19; // r13
  void *v20; // r14
  __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  __int64 v23; // rsi
  int v24; // eax
  __int64 v25; // rcx
  void *v26; // rsi
  _QWORD *v27; // rbp
  void (__fastcall *v28)(_QWORD *); // rax
  __int64 v29; // r13
  __int64 v30; // r12
  void *v31; // rdi
  _QWORD *v32; // rdi
  _QWORD *v33; // rdi
  void **v34; // r13
  void **v35; // r12
  void *v36; // rdi
  _QWORD *v37; // rdi
  unsigned __int64 v38; // r13
  __int64 v39; // rdi
  const __m128i *v42; // [rsp+30h] [rbp-118h]
  __int64 v43; // [rsp+38h] [rbp-110h]
  void *v44; // [rsp+40h] [rbp-108h] BYREF
  __int64 v45; // [rsp+50h] [rbp-F8h] BYREF
  void *v46[2]; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v47; // [rsp+70h] [rbp-D8h] BYREF
  void *ptr; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v49; // [rsp+88h] [rbp-C0h]
  _BYTE v50[184]; // [rsp+90h] [rbp-B8h] BYREF

  v11 = *(_QWORD *)(a1 + 24);
  sub_11BB1A0(a6);
  ptr = v50;
  v49 = 0x1000000000LL;
  sub_21B6F20(a6, &ptr, 3403, 3487, 0);
  v12 = (unsigned int)v49;
  v13 = (unsigned int)v49 + 1LL;
  if ( v13 > HIDWORD(v49) )
  {
    sub_2237220(&ptr, v50, v13, 8);
    v12 = (unsigned int)v49;
  }
  *((_QWORD *)ptr + v12) = "-o";
  LODWORD(v49) = v49 + 1;
  v14 = (unsigned int)v49;
  v15 = *a4;
  if ( (unsigned __int64)(unsigned int)v49 + 1 > HIDWORD(v49) )
  {
    sub_2237220(&ptr, v50, (unsigned int)v49 + 1LL, 8);
    v14 = (unsigned int)v49;
  }
  *((_QWORD *)ptr + v14) = v15;
  v17 = (*a5)->m128i_i64[0];
  LODWORD(v49) = v49 + 1;
  v16 = (unsigned int)v49;
  if ( (unsigned __int64)(unsigned int)v49 + 1 > HIDWORD(v49) )
  {
    sub_2237220(&ptr, v50, (unsigned int)v49 + 1LL, 8);
    v16 = (unsigned int)v49;
  }
  *((_QWORD *)ptr + v16) = v17;
  v18 = v46;
  LODWORD(v49) = v49 + 1;
  (*(void (__fastcall **)(void **, __int64, char *, __int64))(*(_QWORD *)v11 + 816LL))(&v44, v11, "as", 2);
  sub_112D530(v46, v11, (char *)v44);
  v19 = (*(__int64 (__fastcall **)(__int64, void *, void *))(*(_QWORD *)a6 + 16LL))(a6, v46[0], v46[1]);
  if ( v46[0] != &v47 )
    operator delete(v46[0]);
  v42 = *a5;
  v43 = *((unsigned int *)a5 + 2);
  v20 = (void *)operator new(0x208u);
  sub_1106AE0((__int64)v20, a3, a1, 0, (__int64)"@", v19, (__int64)&ptr, v42, v43, (__int64)a4, 1, 0);
  v21 = *(unsigned int *)(a2 + 160);
  v22 = *(unsigned int *)(a2 + 164);
  v46[0] = v20;
  v23 = v21 + 1;
  v24 = v21;
  if ( v21 + 1 > v22 )
  {
    v38 = *(_QWORD *)(a2 + 152);
    v39 = a2 + 152;
    if ( v38 > (unsigned __int64)v46 || (unsigned __int64)v46 >= v38 + 8 * v21 )
    {
      sub_11673D0(v39, v23, a7, a8);
      v21 = *(unsigned int *)(a2 + 160);
      v25 = *(_QWORD *)(a2 + 152);
      v24 = *(_DWORD *)(a2 + 160);
    }
    else
    {
      sub_11673D0(v39, v23, a7, a8);
      v25 = *(_QWORD *)(a2 + 152);
      v21 = *(unsigned int *)(a2 + 160);
      v18 = (void **)((char *)v46 + v25 - v38);
      v24 = *(_DWORD *)(a2 + 160);
    }
  }
  else
  {
    v25 = *(_QWORD *)(a2 + 152);
  }
  v26 = *v18;
  *v18 = nullptr;
  *(_QWORD *)(v25 + 8 * v21) = v26;
  v27 = v46[0];
  *(_DWORD *)(a2 + 160) = v24 + 1;
  if ( v27 )
  {
    v28 = *(void (__fastcall **)(_QWORD *))(*v27 + 8LL);
    if ( v28 == sub_10D4290 )
    {
      v29 = v27[58];
      v30 = v27[57];
      *v27 = &off_2BA8F30;
      if ( v29 != v30 )
      {
        do
        {
          if ( *(_BYTE *)(v30 + 32) && *(_QWORD *)v30 != v30 + 16 )
            operator delete(*(void **)v30);
          v30 += 40;
        }
        while ( v29 != v30 );
        v30 = v27[57];
      }
      if ( v30 )
        operator delete((void *)v30);
      v31 = (void *)v27[54];
      if ( v31 )
        operator delete(v31);
      v32 = (_QWORD *)v27[50];
      if ( v32 != v27 + 52 )
        operator delete(v32);
      v33 = (_QWORD *)v27[32];
      if ( v33 != v27 + 34 )
        free(v33);
      v34 = (void **)v27[29];
      v35 = (void **)v27[28];
      if ( v34 != v35 )
      {
        do
        {
          while ( *v35 != v35 + 2 )
          {
            operator delete(*v35);
            v35 += 4;
            if ( v34 == v35 )
            {
              v35 = (void **)v27[28];
              goto LABEL_31;
            }
          }
          v35 += 4;
        }
        while ( v34 != v35 );
        v35 = (void **)v27[28];
      }
LABEL_31:
      if ( v35 )
        operator delete(v35);
      v36 = (void *)v27[25];
      if ( v36 )
        operator delete(v36);
      v37 = (_QWORD *)v27[7];
      if ( v37 != v27 + 9 )
        free(v37);
      operator delete(v27, 0x208u);
    }
    else
    {
      v28(v27);
    }
  }
  if ( v44 != &v45 )
    operator delete(v44);
  if ( ptr != v50 )
    free(ptr);
}
