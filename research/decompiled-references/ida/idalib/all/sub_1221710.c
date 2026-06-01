void __fastcall sub_1221710(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        double a8)
{
  const __m128i *v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rbp
  __int64 v15; // r12
  void *v16; // r14
  char *v17; // r12
  void (__fastcall *v18)(_QWORD *); // rax
  __int64 v19; // r13
  __int64 v20; // rbp
  void *v21; // rdi
  char *v22; // rdi
  char *v23; // rdi
  void *v24; // rdi
  char *v25; // rdi
  void *v26; // rdi
  _BYTE *v27; // rcx
  unsigned int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // [rsp+0h] [rbp-168h]
  unsigned int v32; // [rsp+8h] [rbp-160h]
  __int64 *v33; // [rsp+10h] [rbp-158h]
  const __m128i *v34; // [rsp+10h] [rbp-158h]
  __int64 v35; // [rsp+18h] [rbp-150h]
  __int64 v37; // [rsp+20h] [rbp-148h]
  _BYTE *v38; // [rsp+28h] [rbp-140h]
  void *v39[2]; // [rsp+30h] [rbp-138h] BYREF
  _BYTE v40[16]; // [rsp+40h] [rbp-128h] BYREF
  void *v41[4]; // [rsp+50h] [rbp-118h] BYREF
  __int16 v42; // [rsp+70h] [rbp-F8h]
  void *ptr[2]; // [rsp+A0h] [rbp-C8h] BYREF
  _BYTE v44[184]; // [rsp+B0h] [rbp-B8h] BYREF

  v33 = *(__int64 **)(*(_QWORD *)(a1 + 24) + 8LL);
  sub_21B7CF0(a6, 36);
  sub_21B7CF0(a6, 345);
  sub_21B7CF0(a6, 3480);
  sub_21B7CF0(a6, 3306);
  ptr[0] = v44;
  ptr[1] = (void *)0x1000000000LL;
  sub_10DC5D0((__int64)ptr, (__int64)"rcsD");
  sub_10DC5D0((__int64)ptr, *(_QWORD *)a4);
  v11 = *(const __m128i **)a5;
  v12 = *(_QWORD *)a5 + 40LL * *(unsigned int *)(a5 + 8);
  if ( v12 != *(_QWORD *)a5 )
  {
    do
    {
      while ( v11->m128i_i32[2] != 1 )
      {
        v11 = (const __m128i *)((char *)v11 + 40);
        if ( (const __m128i *)v12 == v11 )
          goto LABEL_6;
      }
      v13 = v11->m128i_i64[0];
      v30 = v12;
      v11 = (const __m128i *)((char *)v11 + 40);
      sub_10DC5D0((__int64)ptr, v13);
      v12 = v30;
    }
    while ( (const __m128i *)v30 != v11 );
  }
LABEL_6:
  if ( *(_DWORD *)(a4 + 8) != 1 )
    goto LABEL_7;
  v27 = *(_BYTE **)a4;
  v42 = 257;
  if ( *v27 )
  {
    v41[0] = v27;
    LOBYTE(v42) = 3;
  }
  v38 = v27;
  if ( (unsigned int)sub_228C1E0(v41, 0) )
    goto LABEL_7;
  v42 = 257;
  if ( *v38 )
  {
    v41[0] = v38;
    LOBYTE(v42) = 3;
  }
  v28 = sub_228BF70(v41, 1);
  if ( !v28 )
  {
LABEL_7:
    sub_112D580(v39, *(_QWORD *)(a1 + 24));
    v41[0] = v39;
    v42 = 260;
    v14 = sub_10DA6C0(a6, (__int64)v41);
    if ( v39[0] != v40 )
      operator delete(v39[0]);
    v15 = a4;
    v34 = *(const __m128i **)a5;
    v35 = *(unsigned int *)(a5 + 8);
    v16 = (void *)operator new(0x208u);
    sub_1106AE0((__int64)v16, a3, a1, 0x100000000LL, (__int64)"@", v14, (__int64)ptr, v34, v35, v15, 1, 0);
    v41[0] = v16;
    sub_118A0F0(a2, (__int64 *)v41, a7, a8);
    v17 = (char *)v41[0];
    if ( v41[0] )
    {
      v18 = *(void (__fastcall **)(_QWORD *))(*(_QWORD *)v41[0] + 8LL);
      if ( v18 == sub_10D4290 )
      {
        v19 = *((_QWORD *)v41[0] + 58);
        v20 = *((_QWORD *)v41[0] + 57);
        *(_QWORD *)v41[0] = &off_2BA8F30;
        if ( v19 != v20 )
        {
          do
          {
            if ( *(_BYTE *)(v20 + 32) && *(_QWORD *)v20 != v20 + 16 )
              operator delete(*(void **)v20);
            v20 += 40;
          }
          while ( v19 != v20 );
          v20 = *((_QWORD *)v17 + 57);
        }
        if ( v20 )
          operator delete((void *)v20);
        v21 = *((void **)v17 + 54);
        if ( v21 )
          operator delete(v21);
        v22 = *((char **)v17 + 50);
        if ( v22 != v17 + 416 )
          operator delete(v22);
        v23 = *((char **)v17 + 32);
        if ( v23 != v17 + 272 )
          free(v23);
        sub_9B4A30((void ***)v17 + 28);
        v24 = *((void **)v17 + 25);
        if ( v24 )
          operator delete(v24);
        v25 = *((char **)v17 + 7);
        if ( v25 != v17 + 72 )
          free(v25);
        operator delete(v17, 0x208u);
      }
      else
      {
        v18((_QWORD *)v41[0]);
      }
    }
    v26 = ptr[0];
    if ( ptr[0] == v44 )
      return;
LABEL_31:
    free(v26);
    return;
  }
  v32 = v28;
  v37 = v29;
  sub_FC70B0((__int64)v41, *v33, 0, 477);
  (*(void (__fastcall **)(void **, __int64, _QWORD))(*(_QWORD *)v37 + 32LL))(v39, v37, v32);
  sub_AEC220((unsigned __int8 **)v41, (_BYTE *)v39[0], (signed __int64)v39[1]);
  if ( v39[0] != v40 )
    operator delete(v39[0]);
  sub_AEA040((__int64)v41);
  v26 = ptr[0];
  if ( ptr[0] != v44 )
    goto LABEL_31;
}
