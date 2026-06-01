__int64 __fastcall sub_16DD720(__int64 a1, unsigned __int64 a2, double a3)
{
  unsigned int v4; // r12d
  unsigned __int64 v5; // rax
  _DWORD *v6; // r13
  __int64 result; // rax
  unsigned int v8; // eax
  unsigned int v9; // eax
  _QWORD *v10; // rdi
  __int64 v11; // rax
  int v12; // r14d
  unsigned int v13; // eax
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r14
  __int64 v21; // rax
  _QWORD *v22; // rax
  unsigned __int8 v23; // [rsp+Fh] [rbp-E9h]
  unsigned __int8 v24; // [rsp+Fh] [rbp-E9h]
  __int64 v25; // [rsp+10h] [rbp-E8h] BYREF
  __int64 v26; // [rsp+18h] [rbp-E0h] BYREF
  void *v27; // [rsp+20h] [rbp-D8h] BYREF
  unsigned int v28; // [rsp+28h] [rbp-D0h]
  char v29; // [rsp+2Ch] [rbp-CCh]
  void *v30; // [rsp+30h] [rbp-C8h] BYREF
  unsigned int v31; // [rsp+38h] [rbp-C0h]
  char v32; // [rsp+3Ch] [rbp-BCh]

  v4 = *(_DWORD *)(a2 + 16);
  v5 = sub_19179A0(a1, *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32), 1) & 0xFFFFFFFFFFFFFFFELL;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) != 42 )
  {
    v9 = sub_BF6D70(a2);
    sub_168B9F0((__int64)&v30, (__int64 *)(a1 + 8), v9, 0xD0Fu, 0);
    v27 = (void *)sub_EEC8C0(a2, a1 + 8, a3);
    sub_1587DB0((__int64)&v30, (__int64 *)&v27);
    sub_15F7200(&v30);
    return 1;
  }
  *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32) = v5;
  v6 = *(_DWORD **)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 40);
  if ( (*v6 & 0x20000) != 0 )
    goto LABEL_3;
  v28 = 1;
  v27 = nullptr;
  v29 = 0;
  result = sub_16D4840(a1, a2, 1u, (__int64)&v27);
  if ( !(_BYTE)result )
  {
    if ( v28 > 0x40 )
    {
      if ( (unsigned int)sub_22069E0(&v27) != 1 )
      {
LABEL_9:
        v8 = sub_BF6D70(a2);
        sub_168B9F0((__int64)&v30, (__int64 *)(a1 + 8), v8, 0xBA4u, 0);
        v26 = sub_EEC8C0((unsigned __int64)v6, a1 + 8, a3);
        v23 = *(_BYTE *)(sub_1587DB0((__int64)&v30, &v26) + 120);
        sub_15F7200(&v30);
        result = v23;
        goto LABEL_10;
      }
    }
    else if ( !v27 || ((unsigned __int64)v27 & ((unsigned __int64)v27 - 1)) != 0 )
    {
      goto LABEL_9;
    }
    v31 = 64;
    v30 = (void *)0x100000000LL;
    v32 = 0;
    v12 = sub_98E2D0((__int64 *)&v27, (__int64 *)&v30);
    if ( v31 > 0x40 && v30 )
      operator delete[](v30);
    if ( v12 > 0 )
    {
      v13 = sub_BF6D70(a2);
      sub_168B9F0((__int64)&v30, (__int64 *)(a1 + 8), v13, 0x197Fu, 0);
      v26 = sub_EEC8C0((unsigned __int64)v6, a1 + 8, a3);
      v14 = sub_1587DB0((__int64)&v30, &v26);
      v15 = v14;
      if ( *(_BYTE *)(v14 + 120) )
      {
        sub_16B6F70((unsigned __int8 **)(v14 + 32), 0x100000000LL);
      }
      else if ( *(_BYTE *)(v14 + 132) )
      {
        v20 = sub_168B9E0((_QWORD *)v14);
        v21 = *(_QWORD *)(v15 + 16);
        if ( v21 )
          v21 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v21 + 32LL))(*(_QWORD *)(v15 + 16));
        v25 = v21;
        v22 = sub_1587BC0(v20, &v25, v16, v17, v18, v19);
        sub_16B6F70((unsigned __int8 **)(*v22 + 32LL * *(unsigned int *)(v15 + 128) + 8), 0x100000000LL);
      }
      sub_15F7200(&v30);
    }
    if ( v28 > 0x40 && v27 )
      operator delete[](v27);
LABEL_3:
    result = 0;
    if ( v4 > 2 )
    {
      v10 = *(_QWORD **)(a1 + 248);
      v30 = *(void **)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 48);
      v11 = sub_A63CE0(v10);
      result = sub_16B5ED0(a1, (unsigned __int64 *)&v30, v11);
      if ( !(_BYTE)result )
        *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 48) = v30;
    }
    return result;
  }
LABEL_10:
  if ( v28 > 0x40 && v27 )
  {
    v24 = result;
    operator delete[](v27);
    return v24;
  }
  return result;
}
