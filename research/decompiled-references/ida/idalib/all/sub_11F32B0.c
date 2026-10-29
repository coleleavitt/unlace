void __fastcall sub_11F32B0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        double a8)
{
  const __m128i *v11; // r15
  _BYTE *v12; // r9
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // r8
  unsigned __int64 v16; // rdx
  __int64 v17; // rbp
  void *v18; // r12
  _QWORD *v19; // r12
  void (__fastcall *v20)(_QWORD *); // rax
  __int64 v21; // r13
  __int64 v22; // rbp
  void *v23; // rdi
  _QWORD *v24; // rdi
  _QWORD *v25; // rdi
  void **v26; // r13
  void **v27; // rbp
  void *v28; // rdi
  _QWORD *v29; // rdi
  void *v30; // rdi
  _BYTE *v31; // rcx
  unsigned int v32; // eax
  __int64 v33; // rdx
  unsigned int v35; // [rsp+0h] [rbp-178h]
  __int64 v36; // [rsp+10h] [rbp-168h]
  __int64 *v38; // [rsp+20h] [rbp-158h]
  const __m128i *v39; // [rsp+20h] [rbp-158h]
  __int64 v40; // [rsp+28h] [rbp-150h]
  _BYTE *v41; // [rsp+30h] [rbp-148h]
  _BYTE *v42; // [rsp+30h] [rbp-148h]
  __int64 v43; // [rsp+38h] [rbp-140h]
  void *v44[2]; // [rsp+40h] [rbp-138h] BYREF
  _BYTE v45[16]; // [rsp+50h] [rbp-128h] BYREF
  void *v46[4]; // [rsp+60h] [rbp-118h] BYREF
  __int16 v47; // [rsp+80h] [rbp-F8h]
  void *ptr; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v49; // [rsp+B8h] [rbp-C0h]
  _BYTE v50[184]; // [rsp+C0h] [rbp-B8h] BYREF

  v38 = *(__int64 **)(*(_QWORD *)(a1 + 24) + 8LL);
  sub_21B7CF0(a6, 36);
  sub_21B7CF0(a6, 345);
  sub_21B7CF0(a6, 3480);
  sub_21B7CF0(a6, 3306);
  v49 = 0x1000000000LL;
  ptr = v50;
  sub_10DC5D0((__int64)&ptr, (__int64)"-static");
  sub_10DC5D0((__int64)&ptr, (__int64)"-D");
  sub_10DC5D0((__int64)&ptr, (__int64)"-no_warning_for_no_symbols");
  sub_10DC5D0((__int64)&ptr, (__int64)"-o");
  sub_10DC5D0((__int64)&ptr, *(_QWORD *)a4);
  v11 = *(const __m128i **)a5;
  v12 = v50;
  v13 = *(_QWORD *)a5 + 40LL * *(unsigned int *)(a5 + 8);
  if ( v13 != *(_QWORD *)a5 )
  {
    do
    {
      while ( v11->m128i_i32[2] != 1 )
      {
        v11 = (const __m128i *)((char *)v11 + 40);
        if ( (const __m128i *)v13 == v11 )
          goto LABEL_8;
      }
      v14 = (unsigned int)v49;
      v15 = v11->m128i_i64[0];
      v16 = (unsigned int)v49 + 1LL;
      if ( v16 > HIDWORD(v49) )
      {
        v43 = v11->m128i_i64[0];
        v42 = v12;
        sub_2237220(&ptr, v12, v16, 8);
        v15 = v43;
        v12 = v42;
        v14 = (unsigned int)v49;
      }
      v11 = (const __m128i *)((char *)v11 + 40);
      *((_QWORD *)ptr + v14) = v15;
      LODWORD(v49) = v49 + 1;
    }
    while ( (const __m128i *)v13 != v11 );
  }
LABEL_8:
  if ( *(_DWORD *)(a4 + 8) == 1 )
  {
    v31 = *(_BYTE **)a4;
    v47 = 257;
    if ( *v31 )
    {
      v46[0] = v31;
      LOBYTE(v47) = 3;
    }
    v41 = v31;
    if ( !(unsigned int)sub_228C1E0(v46, 0) )
    {
      v47 = 257;
      if ( *v41 )
      {
        v46[0] = v41;
        LOBYTE(v47) = 3;
      }
      v32 = sub_228BF70(v46, 1);
      if ( v32 )
      {
        v35 = v32;
        v36 = v33;
        sub_FC70B0((__int64)v46, *v38, 0, 477);
        (*(void (__fastcall **)(void **, __int64, _QWORD))(*(_QWORD *)v36 + 32LL))(v44, v36, v35);
        sub_AEC220((unsigned __int8 **)v46, (_BYTE *)v44[0], (signed __int64)v44[1]);
        if ( v44[0] != v45 )
          operator delete(v44[0]);
        sub_AEA040((__int64)v46);
        v30 = ptr;
        if ( ptr == v50 )
          return;
LABEL_39:
        free(v30);
        return;
      }
    }
  }
  sub_112D580(v44, *(_QWORD *)(a1 + 24));
  v46[0] = v44;
  v47 = 260;
  v17 = sub_10DA6C0(a6, (__int64)v46);
  if ( v44[0] != v45 )
    operator delete(v44[0]);
  v39 = *(const __m128i **)a5;
  v40 = *(unsigned int *)(a5 + 8);
  v18 = (void *)operator new(0x208u);
  sub_1106AE0((__int64)v18, a3, a1, 0, (__int64)"@", v17, (__int64)&ptr, v39, v40, a4, 1, 0);
  v46[0] = v18;
  sub_118A0F0(a2, (__int64 *)v46, a7, a8);
  v19 = v46[0];
  if ( v46[0] )
  {
    v20 = *(void (__fastcall **)(_QWORD *))(*(_QWORD *)v46[0] + 8LL);
    if ( v20 == sub_10D4290 )
    {
      v21 = *((_QWORD *)v46[0] + 58);
      v22 = *((_QWORD *)v46[0] + 57);
      *(_QWORD *)v46[0] = &off_2BA8F30;
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
            if ( v27 == v26 )
            {
              v27 = (void **)v19[28];
              goto LABEL_31;
            }
          }
          v27 += 4;
        }
        while ( v26 != v27 );
        v27 = (void **)v19[28];
      }
LABEL_31:
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
      v20((_QWORD *)v46[0]);
    }
  }
  v30 = ptr;
  if ( ptr != v50 )
    goto LABEL_39;
}
