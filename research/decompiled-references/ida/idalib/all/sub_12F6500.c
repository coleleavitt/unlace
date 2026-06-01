void __fastcall sub_12F6500(_QWORD *a1)
{
  __int64 v2; // r13
  __int64 v3; // rdx
  __int64 v4; // rax
  void *v5; // r14
  __int64 v6; // r15
  size_t v7; // r12
  char *v8; // rax
  size_t v9; // r8
  __int64 v10; // r12
  const char *v11; // rdi
  size_t v12; // rax
  char v13; // r12
  __int64 v14; // rcx
  __int64 v15; // rdx
  bool v16; // zf
  void *v17; // r12
  __int64 v18; // rdi
  _DWORD *v19; // r12
  __int64 v20; // rsi
  __int64 (*v21)(); // rax
  __int64 v22; // r12
  __int64 v23; // rdi
  __int64 (*v24)(); // rdx
  __int64 v25; // rax
  void *v26; // rdi
  __int64 *v27; // r13
  __int64 *i; // r12
  __int64 v29; // rdi
  __int64 v30; // [rsp-50h] [rbp-108h]
  size_t v31; // [rsp+0h] [rbp-B8h]
  void *v32; // [rsp+0h] [rbp-B8h]
  const char *v33; // [rsp+0h] [rbp-B8h]
  __int64 v34; // [rsp+0h] [rbp-B8h]
  __int64 v35; // [rsp+8h] [rbp-B0h]
  __int64 v36; // [rsp+10h] [rbp-A8h]
  __int64 v37; // [rsp+18h] [rbp-A0h]
  __int64 v38; // [rsp+28h] [rbp-90h]
  __int64 v39; // [rsp+30h] [rbp-88h]
  __int64 v40; // [rsp+38h] [rbp-80h]
  __int64 v41; // [rsp+40h] [rbp-78h]
  int v42; // [rsp+48h] [rbp-70h]
  void *v43; // [rsp+58h] [rbp-60h] BYREF
  void *v44[2]; // [rsp+60h] [rbp-58h] BYREF
  _BYTE v45[72]; // [rsp+70h] [rbp-48h] BYREF

  if ( !a1[14] )
    sub_12EA130((__int64)a1);
  v2 = *(_QWORD *)(a1[2] + 48LL);
  if ( !*(_DWORD *)(a1[9] + 664LL)
    && *(_QWORD *)(*(_QWORD *)(a1[12] + 104LL) + 312LL)
    && *(_DWORD *)(v2 + 284)
    && *(_DWORD *)(v2 + 288) )
  {
    sub_12F5CC0(*(_QWORD *)(a1[2] + 48LL));
    v2 = *(_QWORD *)(a1[2] + 48LL);
  }
  v3 = *(_QWORD *)(v2 + 8);
  v44[0] = v45;
  sub_12E94C0(v44, *(_BYTE **)v2, *(_QWORD *)v2 + v3);
  v4 = a1[2];
  v5 = (void *)a1[19];
  v6 = *(_QWORD *)(v4 + 64);
  v38 = *(_QWORD *)(v4 + 160);
  if ( v5 )
  {
    v7 = j__strlen("reading_modules");
    v31 = j__strlen("Reading modules");
    v8 = (char *)operator new(0xB0u);
    v9 = v31;
    *((_QWORD *)v8 + 2) = 0;
    *((_QWORD *)v8 + 10) = v8 + 96;
    *((_QWORD *)v8 + 14) = v8 + 128;
    *((_WORD *)v8 + 72) = 0;
    *((_QWORD *)v8 + 3) = 0;
    *((_QWORD *)v8 + 4) = 0;
    *((_QWORD *)v8 + 7) = 0;
    *((_QWORD *)v8 + 8) = 0;
    *((_QWORD *)v8 + 9) = 0;
    *((_QWORD *)v8 + 11) = 0;
    v8[96] = 0;
    *((_QWORD *)v8 + 15) = 0;
    v8[128] = 0;
    *((_QWORD *)v8 + 21) = 0;
    *(_OWORD *)v8 = 0;
    *(_OWORD *)(v8 + 40) = 0;
    *(_OWORD *)(v8 + 152) = 0;
    v32 = v8;
    sub_2253190(v8, "reading_modules", v7, "Reading modules", v9, v5);
    v5 = v32;
  }
  v39 = a1[12];
  v40 = a1[10];
  v41 = a1[14];
  v42 = sub_12EF2D0(a1);
  v10 = *(_QWORD *)(a1[2] + 160LL);
  v36 = *(_QWORD *)(v10 + 432);
  v37 = (*(_QWORD *)(v10 + 440) - v36) >> 4;
  if ( v44[1] )
  {
    v11 = (const char *)v44[0];
    v12 = 0;
    v33 = (const char *)v44[0];
    if ( !v44[0] )
      goto LABEL_9;
  }
  else
  {
    v33 = &byte_22F0C30;
    v11 = &byte_22F0C30;
  }
  v12 = j__strlen(v11);
LABEL_9:
  v13 = *(_BYTE *)(v10 + 1);
  v35 = v12;
  v43 = v5;
  v30 = (__int64)v33;
  v34 = operator new(0x3FA8u);
  sub_1EC64D0(
    v34,
    v39,
    v40,
    v41,
    v42,
    *(_DWORD *)(v6 + 168),
    v36,
    v37,
    v30,
    v35,
    (*(_BYTE *)(v38 + 3) & 4) != 0,
    0,
    (*(_BYTE *)(v2 + 624) & 0x40) != 0,
    (unsigned int)*(char *)(v2 + 624) >> 31,
    *(_BYTE *)(v2 + 625) & 1,
    (v13 & 0x40) != 0,
    (__int64)&v43);
  v15 = a1[21];
  ++*(_DWORD *)(v34 + 32);
  a1[21] = v34;
  if ( v15 )
  {
    v16 = (*(_DWORD *)(v15 + 32))-- == 1;
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v15 + 24) + 8LL))(v15 + 24);
  }
  v17 = v43;
  if ( v43 )
  {
    sub_224F490(v43);
    operator delete(v17, 0xB0u);
  }
  v18 = a1[16];
  v19 = (_DWORD *)a1[21];
  if ( v18 )
  {
    v20 = 0;
    v21 = *(__int64 (**)())(*(_QWORD *)v18 + 144LL);
    if ( v21 != sub_6EE810 )
      v20 = ((__int64 (__fastcall *)(__int64, _QWORD))v21)(v18, 0);
    sub_1EAAB50(v19, v20, 0, v14);
    v22 = a1[14];
    v23 = v22;
    v24 = *(__int64 (**)())(*(_QWORD *)a1[16] + 136LL);
    v25 = 0;
    if ( v24 != sub_6EE800 )
    {
      v25 = ((__int64 (__fastcall *)(_QWORD))v24)(a1[16]);
      v23 = a1[14];
    }
    *(_QWORD *)(v22 + 18368) = v25;
    v19 = (_DWORD *)a1[21];
  }
  else
  {
    v23 = a1[14];
  }
  if ( v19 )
  {
    ++v19[8];
    v19 += 6;
  }
  v43 = v19;
  sub_A5F5F0(v23, (__int64 *)&v43);
  v26 = v43;
  if ( v43 )
  {
    v16 = (*((_DWORD *)v43 + 2))-- == 1;
    if ( v16 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v26 + 8LL))(v26);
  }
  if ( a1[18] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)a1[21] + 200LL))(a1[21]);
  if ( a1[16] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)a1[21] + 176LL))(a1[21]);
  v27 = (__int64 *)a1[27];
  for ( i = (__int64 *)a1[26]; v27 != i; i += 2 )
  {
    v29 = *i;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v29 + 24LL))(v29, a1[21]);
  }
  if ( v44[0] != v45 )
    operator delete(v44[0]);
}
