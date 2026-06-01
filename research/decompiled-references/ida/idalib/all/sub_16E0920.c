void __fastcall sub_16E0920(__int64 a1, __int64 a2, int a3, int a4, double a5)
{
  __int64 v8; // rax
  int v9; // edx
  unsigned int v10; // r15d
  char *v11; // rax
  __int64 v12; // r9
  __int64 v13; // rsi
  int v14; // edx
  char v15; // dl
  __int64 *v16; // r15
  unsigned int v17; // eax
  char *v18; // rax
  __int64 v19; // rbx
  char *v20; // rax
  size_t v21; // r8
  char *v22; // rbx
  __int64 v23; // rax
  int v24; // edx
  unsigned int v25; // r13d
  char *v26; // rax
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rbp
  __int64 v31; // r8
  __int64 v32; // r9
  _BYTE *v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // [rsp+2Ch] [rbp-15Ch]
  int v36; // [rsp+34h] [rbp-154h]
  __int64 v37; // [rsp+38h] [rbp-150h]
  int v38; // [rsp+40h] [rbp-148h]
  __int64 v39; // [rsp+44h] [rbp-144h]
  char v40; // [rsp+4Ch] [rbp-13Ch]
  _BYTE v41[48]; // [rsp+50h] [rbp-138h] BYREF
  _BYTE *v42; // [rsp+80h] [rbp-108h] BYREF
  unsigned __int64 v43; // [rsp+88h] [rbp-100h]
  void *v44; // [rsp+98h] [rbp-F0h]
  __int64 v45; // [rsp+A8h] [rbp-E0h] BYREF
  unsigned __int64 v46; // [rsp+C0h] [rbp-C8h] BYREF
  unsigned __int64 v47; // [rsp+C8h] [rbp-C0h]
  _BYTE *v48; // [rsp+D0h] [rbp-B8h]
  unsigned __int8 *v49; // [rsp+E0h] [rbp-A8h] BYREF
  char v50; // [rsp+138h] [rbp-50h]
  unsigned int v51; // [rsp+140h] [rbp-48h]
  char v52; // [rsp+144h] [rbp-44h]

  sub_C9DD50((__int64)v41, (char *)a2);
  if ( v41[32] )
  {
    v8 = sub_16B5B90(a1, a3, a4);
    v36 = v9;
    v35 = v8;
    v10 = sub_16B5B40(a1, *(_QWORD *)(a2 + 8));
    sub_168B9B0((__int64)&v42, *(_QWORD *)(a1 + 8) + 8LL, 6924);
    v11 = sub_C9DAF0(a2);
    sub_16B7630(&v42, (__int64)v11);
    sub_16B71B0(&v42, 1);
    sub_1582CA0((__int64)&v46, &v42);
    sub_16DE8D0(
      *(_QWORD *)(a1 + 8),
      *(unsigned __int8 *)(a1 + 98),
      *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL * *(unsigned int *)(a1 + 80)),
      (__int64)&v46,
      v10,
      a5,
      v12,
      v35,
      v36,
      nullptr,
      0);
    if ( v46 && v47 )
      sub_1580C40(v47, v46);
    if ( v42 && v43 )
      sub_1580C40(v43, (unsigned __int64)v42);
    v13 = *(_QWORD *)(a2 + 8);
    v14 = 1;
    if ( *(_QWORD *)(a2 + 16) )
      v14 = *(_DWORD *)(a2 + 16) - v13;
    v39 = sub_16B5B90(a1, v13, v14);
    v40 = v15;
    v16 = (__int64 *)(*(_QWORD *)(a1 + 8) + 8LL);
    v17 = sub_16B5B40(a1, *(_QWORD *)(a2 + 8));
    sub_168B9F0((__int64)&v46, v16, v17, 0x1766u, 0);
    v18 = sub_C9DAF0((__int64)v41);
    v19 = (__int64)v18;
    if ( v50 )
    {
      sub_16B7630(&v49, (__int64)v18);
    }
    else if ( v52 )
    {
      v30 = sub_168B9E0(&v46);
      v33 = v48;
      if ( v48 )
        v33 = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v48 + 32LL))(v48);
      v42 = v33;
      v34 = sub_1587BC0(v30, (__int64 *)&v42, v28, v29, v31, v32);
      sub_16B7630((unsigned __int8 **)(*v34 + 32LL * v51 + 8), v19);
    }
    v20 = sub_C9DAF0((__int64)v41);
    v21 = 0;
    v22 = v20;
    if ( v20 )
      v21 = j__strlen(v20);
    sub_16BA3D0((__int64)&v42, v39, v40, v22, v21);
    sub_1589170((__int64)&v46, &v42);
    if ( v44 != &v45 )
      operator delete(v44);
    sub_15F7200(&v46);
  }
  else
  {
    v23 = sub_16B5B90(a1, a3, a4);
    v38 = v24;
    v37 = v23;
    v25 = sub_16B5B40(a1, *(_QWORD *)(a2 + 8));
    sub_168B9B0((__int64)&v42, *(_QWORD *)(a1 + 8) + 8LL, 6924);
    v26 = sub_C9DAF0(a2);
    sub_16B7630(&v42, (__int64)v26);
    sub_16B71B0(&v42, 1);
    sub_1582CA0((__int64)&v46, &v42);
    sub_16DE8D0(
      *(_QWORD *)(a1 + 8),
      *(unsigned __int8 *)(a1 + 98),
      *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL * *(unsigned int *)(a1 + 80)),
      (__int64)&v46,
      v25,
      a5,
      v27,
      v37,
      v38,
      nullptr,
      0);
    if ( v46 && v47 )
      sub_1580C40(v47, v46);
    if ( v42 && v43 )
      sub_1580C40(v43, (unsigned __int64)v42);
  }
}
