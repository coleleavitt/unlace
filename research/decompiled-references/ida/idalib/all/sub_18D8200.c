unsigned __int64 __fastcall sub_18D8200(
        __int64 *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7)
{
  __int64 v7; // rax
  __int64 v8; // r12
  char v9; // al
  __int64 v10; // r13
  int v11; // r14d
  int v12; // r14d
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  char *v17; // rax
  __int64 v18; // rbp
  unsigned int v19; // eax
  __int64 v20; // rax
  unsigned int v21; // eax
  unsigned __int8 v22[4]; // [rsp+8h] [rbp-E0h] BYREF
  unsigned int v23; // [rsp+Ch] [rbp-DCh] BYREF
  __int64 v24[2]; // [rsp+10h] [rbp-D8h] BYREF
  char v25; // [rsp+20h] [rbp-C8h]
  void *v26; // [rsp+30h] [rbp-B8h] BYREF
  unsigned int v27; // [rsp+38h] [rbp-B0h]
  char v28; // [rsp+3Ch] [rbp-ACh]

  v7 = *(_QWORD *)(a2 + 8);
  v23 = a3;
  v22[0] = a4;
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v9 = *(_BYTE *)(v8 + 16);
  if ( v9 == 13 )
  {
    v10 = *a1;
    if ( (((*(_WORD *)(v8 + 18) >> 3) + 76) & 0x1FFu) <= 0x13 )
      goto LABEL_4;
  }
  else if ( v9 == 47 )
  {
    v14 = sub_F60F10(v8, a2, a3, a4, a5, a6);
    if ( (*((_BYTE *)v14 + 74) & 1) != 0 || (v14[16] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      v17 = (char *)sub_F60F10(v8, a2, v15, v16, a5, a6);
      v10 = *a1;
      if ( v17[76] >= 0 )
        goto LABEL_4;
    }
    else
    {
      v10 = *a1;
    }
  }
  else
  {
    v10 = *a1;
    if ( v9 == 10 )
      goto LABEL_4;
  }
  if ( (*(_DWORD *)a2 & 0x10000) == 0 )
  {
    v21 = sub_EEB7E0(a2, a2, a7);
    sub_168B9F0((__int64)&v26, (__int64 *)(v10 + 8), v21, 0x1028u, 0);
    sub_15890D0((__int64)&v26, v22);
    sub_15F7200(&v26);
    return 0;
  }
LABEL_4:
  sub_C3EB00((__int64)v24, a2, *(_QWORD *)(v10 + 248), nullptr, a5, a6);
  if ( !v25 )
    goto LABEL_13;
  v27 = 64;
  v28 = 0;
  v26 = nullptr;
  v11 = sub_98E2D0(v24, (__int64 *)&v26);
  if ( v27 > 0x40 && v26 )
    operator delete[](v26);
  if ( v11 < 0 )
    goto LABEL_20;
  v28 = 0;
  v27 = 64;
  v26 = (void *)v23;
  v12 = sub_98E2D0(v24, (__int64 *)&v26);
  if ( v27 > 0x40 )
  {
    if ( v26 )
      operator delete[](v26);
  }
  if ( v12 >= 0 )
  {
LABEL_20:
    v18 = *a1;
    v19 = sub_EEB7E0(a2, (__int64)&v26, a7);
    sub_168B9F0((__int64)&v26, (__int64 *)(v18 + 8), v19, 0x1029u, 0);
    v20 = sub_15890D0((__int64)&v26, v22);
    sub_1588370(v20, &v23);
    sub_15F7200(&v26);
    sub_98E4B0((__int64)v24);
    return 0;
  }
  else
  {
LABEL_13:
    sub_98E4B0((__int64)v24);
    return a2;
  }
}
