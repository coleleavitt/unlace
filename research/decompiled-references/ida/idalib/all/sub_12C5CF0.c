void __fastcall sub_12C5CF0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        __m128 a7,
        double a8)
{
  bool v10; // zf
  void **v11; // rbx
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // r15
  _QWORD *v15; // rcx
  char v16; // al
  __int64 v17; // r12
  void *v18; // r15
  __int64 v19; // rdx
  __int64 v20; // rsi
  int v21; // eax
  __int64 v22; // rcx
  void *v23; // rsi
  _QWORD *v24; // rbx
  void (__fastcall *v25)(_QWORD *); // rax
  __int64 v26; // r13
  __int64 v27; // r12
  void *v28; // rdi
  _QWORD *v29; // rdi
  _QWORD *v30; // rdi
  void **v31; // r13
  void **v32; // r12
  void *v33; // rdi
  _QWORD *v34; // rdi
  __int64 v35; // rax
  char v36; // al
  __int64 v37; // rax
  unsigned __int64 v38; // rdx
  __int64 v39; // rax
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // r12
  __int64 v42; // rdi
  _QWORD *v46; // [rsp+20h] [rbp-F8h]
  const __m128i *v47; // [rsp+20h] [rbp-F8h]
  _QWORD *v48; // [rsp+20h] [rbp-F8h]
  __int64 v49; // [rsp+28h] [rbp-F0h]
  void *v50[2]; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v51; // [rsp+40h] [rbp-D8h] BYREF
  void *ptr; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v53; // [rsp+58h] [rbp-C0h]
  _QWORD v54[23]; // [rsp+60h] [rbp-B8h] BYREF

  v10 = *(_DWORD *)(a4 + 8) == 1;
  ptr = v54;
  v53 = 0x1000000000LL;
  if ( v10 )
  {
    LODWORD(v53) = 2;
    v54[0] = "-o";
    v54[1] = *(_QWORD *)a4;
  }
  v11 = v50;
  LODWORD(v50[0]) = 3397;
  v12 = sub_21B6DA0(a6, v50, 1);
  v13 = a6[1];
  v14 = (_QWORD *)(v13 + 8LL * (unsigned int)v12);
  v15 = (_QWORD *)(v13 + 8 * HIDWORD(v12));
  if ( v14 != v15 )
  {
    while ( 1 )
    {
      if ( *v14 )
      {
        v46 = v15;
        v16 = sub_21B9810(*v14, 3397);
        v15 = v46;
        if ( v16 )
          break;
      }
      if ( v15 == ++v14 )
        goto LABEL_7;
    }
    if ( v46 != v14 )
    {
      do
      {
        v35 = *v14;
        if ( *(_QWORD *)(*v14 + 16LL) )
          v35 = *(_QWORD *)(*v14 + 16LL);
        ++v14;
        *(_BYTE *)(v35 + 44) |= 1u;
        if ( v14 == v15 )
          break;
        while ( 1 )
        {
          if ( *v14 )
          {
            v48 = v15;
            v36 = sub_21B9810(*v14, 3397);
            v15 = v48;
            if ( v36 )
              break;
          }
          if ( v15 == ++v14 )
            goto LABEL_51;
        }
      }
      while ( v48 != v14 );
LABEL_51:
      v37 = (unsigned int)v53;
      v38 = (unsigned int)v53 + 1LL;
      if ( v38 > HIDWORD(v53) )
      {
        sub_2237220(&ptr, v54, v38, 8);
        v37 = (unsigned int)v53;
      }
      *((_QWORD *)ptr + v37) = "-v";
      LODWORD(v53) = v53 + 1;
    }
  }
LABEL_7:
  if ( (unsigned __int8)sub_21B7850(a6, 663, 1121, 0) )
  {
    v39 = (unsigned int)v53;
    v40 = (unsigned int)v53 + 1LL;
    if ( v40 > HIDWORD(v53) )
    {
      sub_2237220(&ptr, v54, v40, 8);
      v39 = (unsigned int)v53;
    }
    *((_QWORD *)ptr + v39) = "-fexceptions";
    LODWORD(v53) = v53 + 1;
  }
  sub_11C3660(*(_QWORD *)(a1 + 24), a5, (__int64)a6, (__int64)&ptr, a3);
  sub_112D530(v50, *(_QWORD *)(a1 + 24), "xcc");
  v17 = (*(__int64 (__fastcall **)(_QWORD *, void *, void *))(*a6 + 16LL))(a6, v50[0], v50[1]);
  if ( v50[0] != &v51 )
    operator delete(v50[0]);
  v47 = *(const __m128i **)a5;
  v49 = *(unsigned int *)(a5 + 8);
  v18 = (void *)operator new(0x208u);
  sub_1106AE0((__int64)v18, a3, a1, 2, 0, v17, (__int64)&ptr, v47, v49, a4, 1, 0);
  v19 = *(unsigned int *)(a2 + 160);
  v50[0] = v18;
  v20 = v19 + 1;
  v21 = v19;
  if ( v19 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 164) )
  {
    v41 = *(_QWORD *)(a2 + 152);
    v42 = a2 + 152;
    if ( v41 > (unsigned __int64)v50 || (unsigned __int64)v50 >= v41 + 8 * v19 )
    {
      sub_11673D0(v42, v20, a7, a8);
      v19 = *(unsigned int *)(a2 + 160);
      v22 = *(_QWORD *)(a2 + 152);
      v21 = *(_DWORD *)(a2 + 160);
    }
    else
    {
      sub_11673D0(v42, v20, a7, a8);
      v22 = *(_QWORD *)(a2 + 152);
      v19 = *(unsigned int *)(a2 + 160);
      v11 = (void **)((char *)v50 + v22 - v41);
      v21 = *(_DWORD *)(a2 + 160);
    }
  }
  else
  {
    v22 = *(_QWORD *)(a2 + 152);
  }
  v23 = *v11;
  *v11 = nullptr;
  *(_QWORD *)(v22 + 8 * v19) = v23;
  v24 = v50[0];
  *(_DWORD *)(a2 + 160) = v21 + 1;
  if ( v24 )
  {
    v25 = *(void (__fastcall **)(_QWORD *))(*v24 + 8LL);
    if ( v25 == sub_10D4290 )
    {
      v26 = v24[58];
      v27 = v24[57];
      *v24 = &off_2BA8F30;
      if ( v26 != v27 )
      {
        do
        {
          if ( *(_BYTE *)(v27 + 32) && *(_QWORD *)v27 != v27 + 16 )
            operator delete(*(void **)v27);
          v27 += 40;
        }
        while ( v26 != v27 );
        v27 = v24[57];
      }
      if ( v27 )
        operator delete((void *)v27);
      v28 = (void *)v24[54];
      if ( v28 )
        operator delete(v28);
      v29 = (_QWORD *)v24[50];
      if ( v29 != v24 + 52 )
        operator delete(v29);
      v30 = (_QWORD *)v24[32];
      if ( v30 != v24 + 34 )
        free(v30);
      v31 = (void **)v24[29];
      v32 = (void **)v24[28];
      if ( v31 != v32 )
      {
        do
        {
          while ( *v32 != v32 + 2 )
          {
            operator delete(*v32);
            v32 += 4;
            if ( v31 == v32 )
            {
              v32 = (void **)v24[28];
              goto LABEL_32;
            }
          }
          v32 += 4;
        }
        while ( v31 != v32 );
        v32 = (void **)v24[28];
      }
LABEL_32:
      if ( v32 )
        operator delete(v32);
      v33 = (void *)v24[25];
      if ( v33 )
        operator delete(v33);
      v34 = (_QWORD *)v24[7];
      if ( v34 != v24 + 9 )
        free(v34);
      operator delete(v24, 0x208u);
    }
    else
    {
      v25(v24);
    }
  }
  if ( ptr != v54 )
    free(ptr);
}
