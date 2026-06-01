_QWORD *__fastcall sub_12F0D80(
        _QWORD *a1,
        int a2,
        int a3,
        const char *a4,
        __int64 a5,
        int a6,
        unsigned __int8 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 *a14,
        __int64 a15,
        __int64 a16,
        unsigned __int8 a17,
        char a18,
        unsigned __int8 a19)
{
  __int64 v20; // r15
  const char *v21; // rdi
  const char *v22; // r9
  size_t v23; // rax
  __int64 v24; // rbx
  void *v25; // r13
  int v26; // eax
  __int64 v27; // rcx
  void *v28; // rdi
  bool v29; // zf
  __int64 *v30; // r15
  __int64 *v31; // r13
  __int64 v32; // rdi
  _QWORD *v33; // rax
  __int64 v34; // r13
  __int64 v35; // r15
  _QWORD *v36; // rax
  __int64 v37; // rdi
  void *v38; // rdi
  __int64 v39; // rbp
  _QWORD *v40; // rdi
  __int64 v41; // rax
  _BYTE *v43; // rsi
  __int64 v44; // rdx
  __int64 v47; // [rsp+30h] [rbp-68h]
  const char *v48; // [rsp+30h] [rbp-68h]
  __int64 v49; // [rsp+38h] [rbp-60h]
  void *v50[2]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v51[72]; // [rsp+50h] [rbp-48h] BYREF

  v20 = **(_QWORD **)(a8 + 104);
  if ( a5 )
  {
    v21 = a4;
    v22 = a4;
    v23 = 0;
    if ( !a4 )
      goto LABEL_3;
  }
  else
  {
    v22 = &byte_22F0C30;
    v21 = &byte_22F0C30;
  }
  v48 = v22;
  v23 = j__strlen(v21);
  v22 = v48;
LABEL_3:
  v47 = (__int64)v22;
  v49 = v23;
  v50[0] = nullptr;
  v24 = operator new(0x3FA8u);
  sub_1EC64D0(
    v24,
    a8,
    a9,
    a10,
    a11,
    a6,
    a12,
    a13,
    v47,
    v49,
    a7,
    0,
    (*(_BYTE *)(v20 + 624) & 0x40) != 0,
    (unsigned int)*(char *)(v20 + 624) >> 31,
    *(_BYTE *)(v20 + 625) & 1,
    a19,
    (__int64)v50);
  v25 = v50[0];
  v26 = *(_DWORD *)(v24 + 32) + 1;
  *(_DWORD *)(v24 + 32) = v26;
  if ( v25 )
  {
    sub_224F490(v25);
    operator delete(v25, 0xB0u);
    v26 = *(_DWORD *)(v24 + 32);
  }
  v50[0] = (void *)(v24 + 24);
  *(_DWORD *)(v24 + 32) = v26 + 1;
  sub_A5F5F0(a10, (__int64 *)v50);
  v28 = v50[0];
  if ( v50[0] )
  {
    v29 = (*((_DWORD *)v50[0] + 2))-- == 1;
    if ( v29 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v28 + 8LL))(v28);
  }
  sub_1EAAB50(v24, a16, a17, v27);
  v30 = a14;
  v31 = &a14[2 * a15];
  if ( a14 != v31 )
  {
    do
    {
      v32 = *v30;
      v30 += 2;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v32 + 24LL))(v32, v24);
    }
    while ( v31 != v30 );
  }
  v33 = (_QWORD *)operator new(0x120u);
  v34 = *(_QWORD *)(v24 + 56);
  *(_QWORD *)(v24 + 56) = 0;
  v35 = (__int64)v33;
  *v33 = &off_2BAFAE0;
  v33[2] = v33 + 4;
  v33[1] = a8;
  v33[3] = 0x800000000LL;
  if ( v34 )
  {
    v36 = (_QWORD *)operator new(0x18u);
    v37 = *(_QWORD *)(v24 + 56);
    v36[1] = v35;
    v36[2] = v34;
    *v36 = &off_2BE44F8;
    *(_QWORD *)(v24 + 56) = v36;
    LOBYTE(v34) = 1;
    if ( v37 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 8LL))(v37);
  }
  else
  {
    *(_QWORD *)(v24 + 56) = v33;
  }
  if ( (unsigned int)sub_1F15770(v24, a2, a3, (unsigned int)(a18 != 0) + 2, 0, 0, 0) )
  {
    sub_12E89A0(v35);
    v50[0] = nullptr;
    sub_A5F5F0(a10, (__int64 *)v50);
    v38 = v50[0];
    if ( v50[0] )
    {
      v29 = (*((_DWORD *)v50[0] + 2))-- == 1;
      if ( v29 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v38 + 8LL))(v38);
    }
    *a1 = 0;
    v39 = v24;
  }
  else
  {
    v43 = *(_BYTE **)(v24 + 13216);
    v44 = *(_QWORD *)(v24 + 13224);
    v50[0] = v51;
    sub_12E94C0(v50, v43, (__int64)&v43[v44]);
    sub_A0AAD0(a8 + 2360, v50);
    if ( v50[0] != v51 )
      operator delete(v50[0]);
    v39 = 0;
    sub_12F09D0(v35);
    *a1 = v24;
  }
  v40 = *(_QWORD **)(v24 + 56);
  *(_QWORD *)(v24 + 56) = 0;
  if ( (_BYTE)v34 )
  {
    v41 = v40[2];
    v40[2] = 0;
    *(_QWORD *)(v24 + 56) = v41;
  }
  else if ( !v40 )
  {
    goto LABEL_21;
  }
  (*(void (__fastcall **)(_QWORD *))(*v40 + 8LL))(v40);
LABEL_21:
  if ( v39 )
  {
    v29 = (*(_DWORD *)(v39 + 32))-- == 1;
    if ( v29 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v39 + 24) + 8LL))(v39 + 24);
  }
  return a1;
}
