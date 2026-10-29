void __fastcall sub_16E05B0(__int64 a1, __int64 a2, int a3, int a4, double a5)
{
  int v7; // edx
  __int64 v8; // rax
  __int64 v9; // rax
  char v10; // dl
  __int64 v11; // rax
  int v12; // edx
  unsigned int v13; // r15d
  char *v14; // rax
  __int64 v15; // r9
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
  __int64 v35; // [rsp+20h] [rbp-158h]
  char v36; // [rsp+28h] [rbp-150h]
  __int64 v37; // [rsp+2Ch] [rbp-14Ch]
  int v38; // [rsp+34h] [rbp-144h]
  __int64 v39; // [rsp+38h] [rbp-140h]
  int v40; // [rsp+40h] [rbp-138h]
  _BYTE v41[32]; // [rsp+50h] [rbp-128h] BYREF
  _BYTE *v42; // [rsp+70h] [rbp-108h] BYREF
  unsigned __int64 v43; // [rsp+78h] [rbp-100h]
  void *v44; // [rsp+88h] [rbp-F0h]
  __int64 v45; // [rsp+98h] [rbp-E0h] BYREF
  unsigned __int64 v46; // [rsp+B0h] [rbp-C8h] BYREF
  unsigned __int64 v47; // [rsp+B8h] [rbp-C0h]
  _BYTE *v48; // [rsp+C0h] [rbp-B8h]
  unsigned __int8 *v49; // [rsp+D0h] [rbp-A8h] BYREF
  char v50; // [rsp+128h] [rbp-50h]
  unsigned int v51; // [rsp+130h] [rbp-48h]
  char v52; // [rsp+134h] [rbp-44h]

  v7 = 1;
  v8 = *(unsigned int *)(a2 + 8);
  if ( (unsigned int)v8 <= 0xC )
    v7 = dword_26403C0[v8];
  v9 = sub_16B5B90(a1, *(_QWORD *)a2, v7);
  v36 = v10;
  v35 = v9;
  sub_C9E280((__int64)v41, (__int64 *)a2);
  if ( v41[16] )
  {
    v11 = sub_16B5B90(a1, a3, a4);
    v38 = v12;
    v37 = v11;
    v13 = sub_16B5B40(a1, *(_QWORD *)a2);
    sub_168B9B0((__int64)&v42, *(_QWORD *)(a1 + 8) + 8LL, 6924);
    v14 = sub_C9D9B0(a2);
    sub_16B7630(&v42, (__int64)v14);
    sub_16B71B0(&v42, 0);
    sub_1582CA0((__int64)&v46, &v42);
    sub_16DE8D0(
      *(_QWORD *)(a1 + 8),
      *(unsigned __int8 *)(a1 + 98),
      *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL * *(unsigned int *)(a1 + 80)),
      (__int64)&v46,
      v13,
      a5,
      v15,
      v37,
      v38,
      nullptr,
      0);
    if ( v46 && v47 )
      sub_1580C40(v47, v46);
    if ( v42 && v43 )
      sub_1580C40(v43, (unsigned __int64)v42);
    v16 = (__int64 *)(*(_QWORD *)(a1 + 8) + 8LL);
    v17 = sub_16B5B40(a1, *(_QWORD *)a2);
    sub_168B9F0((__int64)&v46, v16, v17, 0x1766u, 0);
    v18 = sub_C9D9B0((__int64)v41);
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
    v20 = sub_C9D9B0((__int64)v41);
    v21 = 0;
    v22 = v20;
    if ( v20 )
      v21 = j__strlen(v20);
    sub_16BA3D0((__int64)&v42, v35, v36, v22, v21);
    sub_1589170((__int64)&v46, &v42);
    if ( v44 != &v45 )
      operator delete(v44);
    sub_15F7200(&v46);
  }
  else
  {
    v23 = sub_16B5B90(a1, a3, a4);
    v40 = v24;
    v39 = v23;
    v25 = sub_16B5B40(a1, *(_QWORD *)a2);
    sub_168B9B0((__int64)&v42, *(_QWORD *)(a1 + 8) + 8LL, 6924);
    v26 = sub_C9D9B0(a2);
    sub_16B7630(&v42, (__int64)v26);
    sub_16B71B0(&v42, 0);
    sub_1582CA0((__int64)&v46, &v42);
    sub_16DE8D0(
      *(_QWORD *)(a1 + 8),
      *(unsigned __int8 *)(a1 + 98),
      *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL * *(unsigned int *)(a1 + 80)),
      (__int64)&v46,
      v25,
      a5,
      v27,
      v39,
      v40,
      nullptr,
      0);
    if ( v46 && v47 )
      sub_1580C40(v47, v46);
    if ( v42 && v43 )
      sub_1580C40(v43, (unsigned __int64)v42);
  }
}
