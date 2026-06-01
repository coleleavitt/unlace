void __fastcall sub_12CC480(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        unsigned int *a5,
        __int64 a6,
        __m128 a7,
        double a8)
{
  __int64 *v12; // rax
  void **v13; // rbx
  __int64 v14; // r15
  void *v15; // r13
  __int64 v16; // rdx
  __int64 v17; // rsi
  int v18; // eax
  __int64 v19; // rcx
  void *v20; // rsi
  _QWORD *v21; // rbx
  void (__fastcall *v22)(_QWORD *); // rax
  __int64 v23; // r13
  __int64 v24; // r12
  void *v25; // rdi
  _QWORD *v26; // rdi
  _QWORD *v27; // rdi
  void **v28; // r13
  void **v29; // r12
  void *v30; // rdi
  _QWORD *v31; // rdi
  __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rax
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // r13
  __int64 v40; // rdi
  const __m128i *v41; // [rsp+0h] [rbp-108h]
  __int64 v42; // [rsp+8h] [rbp-100h]
  void *v44[2]; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v45; // [rsp+30h] [rbp-D8h] BYREF
  void *ptr; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v47; // [rsp+48h] [rbp-C0h]
  _BYTE v48[184]; // [rsp+50h] [rbp-B8h] BYREF

  ptr = v48;
  v47 = 0x1000000000LL;
  sub_21B6F20(a6, &ptr, 3403, 3487, 0);
  if ( *((_DWORD *)a4 + 2) != 1 )
  {
    v12 = *(__int64 **)a5;
    if ( *(_DWORD *)(*(_QWORD *)a5 + 8LL) != 1 )
      goto LABEL_3;
    goto LABEL_44;
  }
  v32 = (unsigned int)v47;
  v33 = (unsigned int)v47 + 1LL;
  if ( v33 > HIDWORD(v47) )
  {
    sub_2237220(&ptr, v48, v33, 8);
    v32 = (unsigned int)v47;
  }
  *((_QWORD *)ptr + v32) = "-o";
  v34 = *a4;
  LODWORD(v47) = v47 + 1;
  v35 = (unsigned int)v47;
  if ( (unsigned __int64)(unsigned int)v47 + 1 > HIDWORD(v47) )
  {
    sub_2237220(&ptr, v48, (unsigned int)v47 + 1LL, 8);
    v35 = (unsigned int)v47;
  }
  *((_QWORD *)ptr + v35) = v34;
  v12 = *(__int64 **)a5;
  LODWORD(v47) = v47 + 1;
  if ( *((_DWORD *)v12 + 2) == 1 )
  {
LABEL_44:
    v36 = *v12;
    v37 = (unsigned int)v47;
    v38 = (unsigned int)v47 + 1LL;
    if ( v38 > HIDWORD(v47) )
    {
      sub_2237220(&ptr, v48, v38, 8);
      v37 = (unsigned int)v47;
    }
    *((_QWORD *)ptr + v37) = v36;
    LODWORD(v47) = v47 + 1;
  }
LABEL_3:
  v13 = v44;
  sub_112D530(v44, *(_QWORD *)(a1 + 24), "as");
  v14 = (*(__int64 (__fastcall **)(__int64, void *, void *))(*(_QWORD *)a6 + 16LL))(a6, v44[0], v44[1]);
  if ( v44[0] != &v45 )
    operator delete(v44[0]);
  v41 = *(const __m128i **)a5;
  v42 = a5[2];
  v15 = (void *)operator new(0x208u);
  sub_1106AE0((__int64)v15, a3, a1, 2, 0, v14, (__int64)&ptr, v41, v42, 0, 0, 0);
  v16 = *(unsigned int *)(a2 + 160);
  v44[0] = v15;
  v17 = v16 + 1;
  v18 = v16;
  if ( v16 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 164) )
  {
    v39 = *(_QWORD *)(a2 + 152);
    v40 = a2 + 152;
    if ( v39 > (unsigned __int64)v44 || (unsigned __int64)v44 >= v39 + 8 * v16 )
    {
      sub_11673D0(v40, v17, a7, a8);
      v16 = *(unsigned int *)(a2 + 160);
      v19 = *(_QWORD *)(a2 + 152);
      v18 = *(_DWORD *)(a2 + 160);
    }
    else
    {
      sub_11673D0(v40, v17, a7, a8);
      v19 = *(_QWORD *)(a2 + 152);
      v16 = *(unsigned int *)(a2 + 160);
      v13 = (void **)((char *)v44 + v19 - v39);
      v18 = *(_DWORD *)(a2 + 160);
    }
  }
  else
  {
    v19 = *(_QWORD *)(a2 + 152);
  }
  v20 = *v13;
  *v13 = nullptr;
  *(_QWORD *)(v19 + 8 * v16) = v20;
  v21 = v44[0];
  *(_DWORD *)(a2 + 160) = v18 + 1;
  if ( v21 )
  {
    v22 = *(void (__fastcall **)(_QWORD *))(*v21 + 8LL);
    if ( v22 == sub_10D4290 )
    {
      v23 = v21[58];
      v24 = v21[57];
      *v21 = &off_2BA8F30;
      if ( v23 != v24 )
      {
        do
        {
          if ( *(_BYTE *)(v24 + 32) && *(_QWORD *)v24 != v24 + 16 )
            operator delete(*(void **)v24);
          v24 += 40;
        }
        while ( v23 != v24 );
        v24 = v21[57];
      }
      if ( v24 )
        operator delete((void *)v24);
      v25 = (void *)v21[54];
      if ( v25 )
        operator delete(v25);
      v26 = (_QWORD *)v21[50];
      if ( v26 != v21 + 52 )
        operator delete(v26);
      v27 = (_QWORD *)v21[32];
      if ( v27 != v21 + 34 )
        free(v27);
      v28 = (void **)v21[29];
      v29 = (void **)v21[28];
      if ( v28 != v29 )
      {
        do
        {
          while ( *v29 != v29 + 2 )
          {
            operator delete(*v29);
            v29 += 4;
            if ( v28 == v29 )
            {
              v29 = (void **)v21[28];
              goto LABEL_27;
            }
          }
          v29 += 4;
        }
        while ( v28 != v29 );
        v29 = (void **)v21[28];
      }
LABEL_27:
      if ( v29 )
        operator delete(v29);
      v30 = (void *)v21[25];
      if ( v30 )
        operator delete(v30);
      v31 = (_QWORD *)v21[7];
      if ( v31 != v21 + 9 )
        free(v31);
      operator delete(v21, 0x208u);
    }
    else
    {
      v22(v21);
    }
  }
  if ( ptr != v48 )
    free(ptr);
}
