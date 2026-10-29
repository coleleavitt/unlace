void __fastcall sub_1181CA0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        double a8)
{
  _BYTE *v12; // rcx
  const __m128i *v13; // rbx
  _QWORD *v14; // r8
  __int64 v15; // rax
  const __m128i *v16; // r9
  __int64 v17; // rax
  __int64 v18; // r10
  unsigned __int64 v19; // rdx
  void **v20; // rbx
  __int64 v21; // rbp
  void *v22; // r13
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 v25; // rsi
  int v26; // eax
  __int64 v27; // rcx
  void *v28; // rsi
  _QWORD *v29; // rbp
  void (__fastcall *v30)(_QWORD *); // rax
  __int64 v31; // r12
  __int64 v32; // rbx
  void *v33; // rdi
  _QWORD *v34; // rdi
  _QWORD *v35; // rdi
  void **v36; // r12
  void **v37; // rbx
  void *v38; // rdi
  _QWORD *v39; // rdi
  unsigned int v40; // eax
  __int64 v41; // rdx
  unsigned __int64 v42; // rbp
  __int64 v43; // rdi
  unsigned int v45; // [rsp+8h] [rbp-170h]
  __int64 *v46; // [rsp+10h] [rbp-168h]
  const __m128i *v47; // [rsp+20h] [rbp-158h]
  _BYTE *v48; // [rsp+20h] [rbp-158h]
  __int64 v49; // [rsp+20h] [rbp-158h]
  _QWORD *v50; // [rsp+20h] [rbp-158h]
  __int64 v51; // [rsp+28h] [rbp-150h]
  __int64 v52; // [rsp+30h] [rbp-148h]
  const __m128i *v53; // [rsp+38h] [rbp-140h]
  void *v54[2]; // [rsp+40h] [rbp-138h] BYREF
  __int64 v55; // [rsp+50h] [rbp-128h] BYREF
  void *v56[2]; // [rsp+60h] [rbp-118h] BYREF
  __int64 v57; // [rsp+70h] [rbp-108h] BYREF
  __int16 v58; // [rsp+80h] [rbp-F8h]
  void *ptr; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v60; // [rsp+B8h] [rbp-C0h]
  _QWORD v61[23]; // [rsp+C0h] [rbp-B8h] BYREF

  v46 = *(__int64 **)(*(_QWORD *)(a1 + 24) + 8LL);
  sub_21B7CF0(a6, 36);
  sub_21B7CF0(a6, 345);
  sub_21B7CF0(a6, 3480);
  sub_21B7CF0(a6, 3306);
  v12 = *(_BYTE **)a4;
  v13 = *(const __m128i **)a5;
  v14 = v61;
  v61[0] = "rcsD";
  v60 = 0x1000000002LL;
  v15 = *(unsigned int *)(a5 + 8);
  ptr = v61;
  v61[1] = v12;
  v16 = (const __m128i *)((char *)v13 + 40 * v15);
  if ( v16 != v13 )
  {
    do
    {
      while ( v13->m128i_i32[2] != 1 )
      {
        v13 = (const __m128i *)((char *)v13 + 40);
        if ( v16 == v13 )
          goto LABEL_8;
      }
      v17 = (unsigned int)v60;
      v18 = v13->m128i_i64[0];
      v19 = (unsigned int)v60 + 1LL;
      if ( v19 > HIDWORD(v60) )
      {
        v53 = v16;
        v52 = v13->m128i_i64[0];
        v50 = v14;
        sub_2237220(&ptr, v14, v19, 8);
        v16 = v53;
        v18 = v52;
        v17 = (unsigned int)v60;
        v14 = v50;
      }
      v13 = (const __m128i *)((char *)v13 + 40);
      *((_QWORD *)ptr + v17) = v18;
      LODWORD(v60) = v60 + 1;
    }
    while ( v16 != v13 );
LABEL_8:
    v12 = *(_BYTE **)a4;
  }
  v20 = v56;
  if ( *(_DWORD *)(a4 + 8) != 1 )
    goto LABEL_10;
  v58 = 257;
  if ( *v12 )
  {
    v56[0] = v12;
    LOBYTE(v58) = 3;
  }
  v20 = v56;
  v48 = v12;
  if ( (unsigned int)sub_228C1E0(v56, 0) )
    goto LABEL_10;
  v58 = 257;
  if ( *v48 )
  {
    v56[0] = v48;
    LOBYTE(v58) = 3;
  }
  v40 = sub_228BF70(v56, 1);
  if ( v40 )
  {
    v45 = v40;
    v49 = v41;
    sub_FC70B0((__int64)v56, *v46, 0, 477);
    (*(void (__fastcall **)(void **, __int64, _QWORD))(*(_QWORD *)v49 + 32LL))(v54, v49, v45);
    sub_AEC220((unsigned __int8 **)v56, (_BYTE *)v54[0], (signed __int64)v54[1]);
    if ( v54[0] != &v55 )
      operator delete(v54[0]);
    sub_AEA040((__int64)v56);
  }
  else
  {
LABEL_10:
    sub_112D580(v56, *(_QWORD *)(a1 + 24));
    v21 = (*(__int64 (__fastcall **)(__int64, void *, void *))(*(_QWORD *)a6 + 16LL))(a6, v56[0], v56[1]);
    if ( v56[0] != &v57 )
      operator delete(v56[0]);
    v47 = *(const __m128i **)a5;
    v51 = *(unsigned int *)(a5 + 8);
    v22 = (void *)operator new(0x208u);
    sub_1106AE0((__int64)v22, a3, a1, 0x100000000LL, (__int64)"@", v21, (__int64)&ptr, v47, v51, a4, 1, 0);
    v23 = *(unsigned int *)(a2 + 160);
    v24 = *(unsigned int *)(a2 + 164);
    v56[0] = v22;
    v25 = v23 + 1;
    v26 = v23;
    if ( v23 + 1 > v24 )
    {
      v42 = *(_QWORD *)(a2 + 152);
      v43 = a2 + 152;
      if ( v42 > (unsigned __int64)v56 || (unsigned __int64)v56 >= v42 + 8 * v23 )
      {
        sub_11673D0(v43, v25, a7, a8);
        v23 = *(unsigned int *)(a2 + 160);
        v27 = *(_QWORD *)(a2 + 152);
        v26 = *(_DWORD *)(a2 + 160);
      }
      else
      {
        sub_11673D0(v43, v25, a7, a8);
        v27 = *(_QWORD *)(a2 + 152);
        v23 = *(unsigned int *)(a2 + 160);
        v20 = (void **)((char *)v56 + v27 - v42);
        v26 = *(_DWORD *)(a2 + 160);
      }
    }
    else
    {
      v27 = *(_QWORD *)(a2 + 152);
    }
    v28 = *v20;
    *v20 = nullptr;
    *(_QWORD *)(v27 + 8 * v23) = v28;
    v29 = v56[0];
    *(_DWORD *)(a2 + 160) = v26 + 1;
    if ( v29 )
    {
      v30 = *(void (__fastcall **)(_QWORD *))(*v29 + 8LL);
      if ( v30 == sub_10D4290 )
      {
        v31 = v29[58];
        v32 = v29[57];
        *v29 = &off_2BA8F30;
        if ( v31 != v32 )
        {
          do
          {
            if ( *(_BYTE *)(v32 + 32) && *(_QWORD *)v32 != v32 + 16 )
              operator delete(*(void **)v32);
            v32 += 40;
          }
          while ( v31 != v32 );
          v32 = v29[57];
        }
        if ( v32 )
          operator delete((void *)v32);
        v33 = (void *)v29[54];
        if ( v33 )
          operator delete(v33);
        v34 = (_QWORD *)v29[50];
        if ( v34 != v29 + 52 )
          operator delete(v34);
        v35 = (_QWORD *)v29[32];
        if ( v35 != v29 + 34 )
          free(v35);
        v36 = (void **)v29[29];
        v37 = (void **)v29[28];
        if ( v36 != v37 )
        {
          do
          {
            while ( *v37 != v37 + 2 )
            {
              operator delete(*v37);
              v37 += 4;
              if ( v37 == v36 )
              {
                v37 = (void **)v29[28];
                goto LABEL_34;
              }
            }
            v37 += 4;
          }
          while ( v36 != v37 );
          v37 = (void **)v29[28];
        }
LABEL_34:
        if ( v37 )
          operator delete(v37);
        v38 = (void *)v29[25];
        if ( v38 )
          operator delete(v38);
        v39 = (_QWORD *)v29[7];
        if ( v39 != v29 + 9 )
          free(v39);
        operator delete(v29, 0x208u);
      }
      else
      {
        v30(v29);
      }
    }
  }
  if ( ptr != v61 )
    free(ptr);
}
