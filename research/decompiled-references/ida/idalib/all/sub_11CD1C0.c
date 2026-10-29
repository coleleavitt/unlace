void __fastcall sub_11CD1C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __m128 a7,
        double a8,
        __int64 a9)
{
  __int64 v11; // rbx
  void **v12; // rbp
  __int64 v13; // rax
  void *v14; // r15
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // rsi
  int v18; // eax
  __int64 v19; // rsi
  void **v20; // rcx
  void *v21; // rdi
  _QWORD *v22; // r13
  void (__fastcall *v23)(_QWORD *); // rdx
  __int64 v24; // r15
  void *v25; // rdi
  _QWORD *v26; // rdi
  _QWORD *v27; // rdi
  void **v28; // r15
  __int64 v29; // rbp
  void **v30; // rbx
  void *v31; // rdi
  _QWORD *v32; // rdi
  void *v33; // r14
  __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  __int64 v36; // rsi
  int v37; // eax
  __int64 v38; // rcx
  void *v39; // rsi
  _QWORD *v40; // rbx
  void (__fastcall *v41)(_QWORD *); // rax
  __int64 v42; // r14
  __int64 v43; // rbp
  void *v44; // rdi
  _QWORD *v45; // rdi
  _QWORD *v46; // rdi
  void **v47; // r14
  void **v48; // rbp
  void *v49; // rdi
  _QWORD *v50; // rdi
  unsigned __int64 v51; // r15
  __int64 v52; // rdi
  unsigned __int64 v53; // r14
  __int64 v54; // [rsp+0h] [rbp-1F8h]
  __int64 v56; // [rsp+10h] [rbp-1E8h]
  __int64 v58; // [rsp+30h] [rbp-1C8h]
  __int64 v59; // [rsp+40h] [rbp-1B8h]
  void *v60[2]; // [rsp+50h] [rbp-1A8h] BYREF
  __int64 v61; // [rsp+60h] [rbp-198h] BYREF
  __m128i v62; // [rsp+70h] [rbp-188h] BYREF
  __int64 v63; // [rsp+80h] [rbp-178h]
  int v64; // [rsp+88h] [rbp-170h]
  __int64 v65; // [rsp+90h] [rbp-168h]
  void *v66[2]; // [rsp+A0h] [rbp-158h] BYREF
  _BYTE v67[128]; // [rsp+B0h] [rbp-148h] BYREF
  void *ptr[2]; // [rsp+130h] [rbp-C8h] BYREF
  _BYTE v69[184]; // [rsp+140h] [rbp-B8h] BYREF

  v11 = a2;
  v66[0] = v67;
  v66[1] = (void *)0x1000000000LL;
  sub_10DC5D0((__int64)v66, (__int64)"--extract-dwo");
  ptr[1] = (void *)0x1000000000LL;
  ptr[0] = v69;
  sub_10DC5D0((__int64)ptr, (__int64)"--strip-dwo");
  v12 = v60;
  sub_10DC5D0((__int64)ptr, *a6);
  sub_10DC5D0((__int64)v66, *a6);
  sub_10DC5D0((__int64)v66, a9);
  sub_112D530(v60, a1, "objcopy");
  v62.m128i_i64[0] = (__int64)v60;
  LOWORD(v65) = 260;
  v54 = sub_10DA6C0(a5, (__int64)&v62);
  if ( v60[0] != &v61 )
    operator delete(v60[0]);
  v13 = *a6;
  v62.m128i_i32[2] = 1;
  v63 = 0;
  v64 = 58;
  v65 = v13;
  v62.m128i_i64[0] = v13;
  v14 = (void *)operator new(0x208u);
  sub_1106AE0((__int64)v14, a4, a3, 0x100000000LL, (__int64)"@", v54, (__int64)v66, &v62, 1, (__int64)a6, 1, 0);
  v15 = *(unsigned int *)(a2 + 160);
  v16 = *(unsigned int *)(a2 + 164);
  v59 = a2 + 152;
  v17 = v15 + 1;
  v60[0] = v14;
  v18 = v15;
  if ( v15 + 1 > v16 )
  {
    v51 = *(_QWORD *)(v11 + 152);
    v52 = v11 + 152;
    if ( v51 > (unsigned __int64)v60 || (v52 = v11 + 152, (unsigned __int64)v60 >= v51 + 8 * v15) )
    {
      sub_11673D0(v52, v17, a7, a8);
      v15 = *(unsigned int *)(v11 + 160);
      v19 = *(_QWORD *)(v11 + 152);
      v20 = v60;
      v18 = *(_DWORD *)(v11 + 160);
    }
    else
    {
      sub_11673D0(v52, v17, a7, a8);
      v19 = *(_QWORD *)(v11 + 152);
      v15 = *(unsigned int *)(v11 + 160);
      v20 = (void **)((char *)v60 + v19 - v51);
      v18 = *(_DWORD *)(v11 + 160);
    }
  }
  else
  {
    v19 = *(_QWORD *)(v11 + 152);
    v20 = v60;
  }
  v21 = *v20;
  *v20 = nullptr;
  *(_QWORD *)(v19 + 8 * v15) = v21;
  v22 = v60[0];
  *(_DWORD *)(v11 + 160) = v18 + 1;
  if ( v22 )
  {
    v23 = *(void (__fastcall **)(_QWORD *))(*v22 + 8LL);
    if ( v23 == sub_10D4290 )
    {
      v24 = v22[57];
      v58 = v22[58];
      *v22 = &off_2BA8F30;
      if ( v58 != v24 )
      {
        do
        {
          if ( *(_BYTE *)(v24 + 32) && *(_QWORD *)v24 != v24 + 16 )
            operator delete(*(void **)v24);
          v24 += 40;
        }
        while ( v58 != v24 );
        v24 = v22[57];
      }
      if ( v24 )
        operator delete((void *)v24);
      v25 = (void *)v22[54];
      if ( v25 )
        operator delete(v25);
      v26 = (_QWORD *)v22[50];
      if ( v26 != v22 + 52 )
        operator delete(v26);
      v27 = (_QWORD *)v22[32];
      if ( v27 != v22 + 34 )
        free(v27);
      v28 = (void **)v22[28];
      if ( (void **)v22[29] != v28 )
      {
        v29 = v11;
        v30 = (void **)v22[29];
        do
        {
          while ( *v28 != v28 + 2 )
          {
            operator delete(*v28);
            v28 += 4;
            if ( v28 == v30 )
              goto LABEL_25;
          }
          v28 += 4;
        }
        while ( v30 != v28 );
LABEL_25:
        v11 = v29;
        v28 = (void **)v22[28];
        v12 = v60;
      }
      if ( v28 )
        operator delete(v28);
      v31 = (void *)v22[25];
      if ( v31 )
        operator delete(v31);
      v32 = (_QWORD *)v22[7];
      if ( v32 != v22 + 9 )
        free(v32);
      operator delete(v22, 0x208u);
    }
    else
    {
      v23(v22);
    }
  }
  v56 = (__int64)a6;
  v33 = (void *)operator new(0x208u);
  sub_1106AE0((__int64)v33, a4, a3, 0x100000000LL, (__int64)"@", v54, (__int64)ptr, &v62, 1, v56, 1, 0);
  v34 = *(unsigned int *)(v11 + 160);
  v35 = *(unsigned int *)(v11 + 164);
  v60[0] = v33;
  v36 = v34 + 1;
  v37 = v34;
  if ( v34 + 1 > v35 )
  {
    v53 = *(_QWORD *)(v11 + 152);
    if ( v53 > (unsigned __int64)v60 || (unsigned __int64)v60 >= v53 + 8 * v34 )
    {
      sub_11673D0(v59, v36, a7, a8);
      v34 = *(unsigned int *)(v11 + 160);
      v38 = *(_QWORD *)(v11 + 152);
      v37 = *(_DWORD *)(v11 + 160);
    }
    else
    {
      sub_11673D0(v59, v36, a7, a8);
      v38 = *(_QWORD *)(v11 + 152);
      v34 = *(unsigned int *)(v11 + 160);
      v12 = (void **)((char *)v60 + v38 - v53);
      v37 = *(_DWORD *)(v11 + 160);
    }
  }
  else
  {
    v38 = *(_QWORD *)(v11 + 152);
  }
  v39 = *v12;
  *v12 = nullptr;
  *(_QWORD *)(v38 + 8 * v34) = v39;
  *(_DWORD *)(v11 + 160) = v37 + 1;
  v40 = v60[0];
  if ( v60[0] )
  {
    v41 = *(void (__fastcall **)(_QWORD *))(*(_QWORD *)v60[0] + 8LL);
    if ( v41 == sub_10D4290 )
    {
      v42 = *((_QWORD *)v60[0] + 58);
      v43 = *((_QWORD *)v60[0] + 57);
      *(_QWORD *)v60[0] = &off_2BA8F30;
      if ( v42 != v43 )
      {
        do
        {
          if ( *(_BYTE *)(v43 + 32) && *(_QWORD *)v43 != v43 + 16 )
            operator delete(*(void **)v43);
          v43 += 40;
        }
        while ( v42 != v43 );
        v43 = v40[57];
      }
      if ( v43 )
        operator delete((void *)v43);
      v44 = (void *)v40[54];
      if ( v44 )
        operator delete(v44);
      v45 = (_QWORD *)v40[50];
      if ( v45 != v40 + 52 )
        operator delete(v45);
      v46 = (_QWORD *)v40[32];
      if ( v46 != v40 + 34 )
        free(v46);
      v47 = (void **)v40[29];
      v48 = (void **)v40[28];
      if ( v47 != v48 )
      {
        do
        {
          while ( *v48 != v48 + 2 )
          {
            operator delete(*v48);
            v48 += 4;
            if ( v48 == v47 )
            {
              v48 = (void **)v40[28];
              goto LABEL_55;
            }
          }
          v48 += 4;
        }
        while ( v47 != v48 );
        v48 = (void **)v40[28];
      }
LABEL_55:
      if ( v48 )
        operator delete(v48);
      v49 = (void *)v40[25];
      if ( v49 )
        operator delete(v49);
      v50 = (_QWORD *)v40[7];
      if ( v50 != v40 + 9 )
        free(v50);
      operator delete(v40, 0x208u);
    }
    else
    {
      v41((_QWORD *)v60[0]);
    }
  }
  if ( ptr[0] != v69 )
    free(ptr[0]);
  if ( v66[0] != v67 )
    free(v66[0]);
}
