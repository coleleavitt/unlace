bool __fastcall sub_1BD6B00(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  unsigned __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // r12
  unsigned __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // r13
  __int64 v15; // r12
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  bool result; // al
  __int64 v21; // rax
  __int64 v22; // r12
  __int64 v23; // rdx
  __int64 v24; // rax
  unsigned __int8 v25; // al
  __int64 v26; // rcx
  __int64 v27; // rsi
  _QWORD *v28; // r12
  _QWORD *v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // r13
  unsigned __int64 v33; // rax
  char v34; // r13
  unsigned int v35; // edx
  __int64 v36; // rsi
  char v37; // bp
  bool v38; // [rsp+1h] [rbp-59h]
  bool v39; // [rsp+1h] [rbp-59h]
  void *v40; // [rsp+2h] [rbp-58h] BYREF
  unsigned int v41; // [rsp+Ah] [rbp-50h]
  char v42; // [rsp+Eh] [rbp-4Ch]
  void *v43; // [rsp+12h] [rbp-48h] BYREF
  unsigned int v44; // [rsp+1Ah] [rbp-40h]
  char v45; // [rsp+1Eh] [rbp-3Ch]
  void *v46; // [rsp+22h] [rbp-38h] BYREF
  unsigned int v47; // [rsp+2Ah] [rbp-30h]

  if ( !a2 || (*(_BYTE *)(a2 + 28) & 0x7Fu) - 26 > 0x1A || !a3 || (*(_BYTE *)(a3 + 28) & 0x7Fu) - 26 > 0x1A )
    return 0;
  v3 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v3 = (_QWORD *)*v3;
  v6 = sub_B8EAA0((__int64)v3);
  v7 = *(_QWORD *)(a3 + 16);
  v8 = v6;
  if ( (v7 & 4) != 0 )
    v9 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v9 = v7 & 0xFFFFFFFFFFFFFFF8LL;
  v14 = sub_B8EAA0(v9);
  if ( !v14 )
    return 0;
  v15 = sub_B91570(v8, a2, v10, v11, v12, v13);
  if ( v15 != sub_B91570(v14, a2, v16, v17, v18, v19) )
    return 0;
  v21 = *(_QWORD *)(a2 + 8) & 7LL;
  if ( *(char *)(a2 + 29) < 0 )
  {
    v22 = 0;
    if ( v21 )
      v22 = sub_B8C660(a2);
  }
  else
  {
    v22 = v21 ? *(_QWORD *)(a2 - 8) : 0LL;
  }
  v23 = *(_QWORD *)(a3 + 8) & 7LL;
  if ( *(char *)(a3 + 29) < 0 )
  {
    v24 = 0;
    if ( v23 )
      v24 = sub_B8C660(a3);
  }
  else
  {
    v24 = v23 ? *(_QWORD *)(a3 - 8) : 0LL;
  }
  if ( v24 == v22 )
    return 0;
  v25 = sub_B81B70(a2);
  if ( !v25 )
    goto LABEL_59;
  if ( v25 > 3u )
    goto LABEL_50;
  v25 = sub_B81B70(a3);
  if ( !v25 )
    goto LABEL_59;
  if ( v25 > 3u )
  {
LABEL_50:
    if ( v25 > 6u )
LABEL_59:
      BUG();
    return 0;
  }
  v26 = *(_QWORD *)&byte_8[*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL];
  v27 = *(_QWORD *)&byte_8[*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v27 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v27 | (unsigned __int8)*(_QWORD *)(a2 + 48)) & 7) == (v26 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v26 | (unsigned __int8)*(_QWORD *)(a3 + 48)) & 7) )
    return 1;
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x21 || (*(_BYTE *)(a3 + 28) & 0x7F) != 0x21 )
    return 0;
  v28 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v28 = (_QWORD *)*v28;
  if ( v28 )
    v28 -= 8;
  v29 = (_QWORD *)(*(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
    v29 = (_QWORD *)*v29;
  if ( v29 )
    v29 -= 8;
  if ( v28[5] )
    return 0;
  v30 = v28[15];
  if ( (v30 & 4) == 0 && (v30 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    return 0;
  if ( v29[5] )
    return 0;
  v31 = v29[15];
  if ( (v31 & 4) == 0 && (v31 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    return 0;
  v32 = sub_6F3660((__int64)v29);
  v33 = sub_6F3660((__int64)v28);
  if ( (*(_QWORD *)&byte_8[v33 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
      | ((unsigned __int8)*(_QWORD *)&byte_8[v33 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v33) & 7) != (*(_QWORD *)&byte_8[v32 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)&byte_8[v32 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v32) & 7) )
    return 0;
  v34 = *(_BYTE *)(a3 + 80);
  sub_1BC6F10((__int64)&v46, *(_QWORD *)(a3 + 56), *(_DWORD *)(a3 + 64));
  v35 = *(_DWORD *)(a2 + 64);
  v36 = *(_QWORD *)(a2 + 56);
  v37 = *(_BYTE *)(a2 + 80);
  v45 = v34;
  v44 = v47;
  v43 = v46;
  sub_1BC6F10((__int64)&v46, v36, v35);
  v42 = v37;
  v41 = v47;
  v40 = v46;
  result = (unsigned int)sub_98E2D0((__int64 *)&v40, (__int64 *)&v43) == 0;
  if ( v41 > 0x40 && v40 )
  {
    v38 = result;
    operator delete[](v40);
    result = v38;
  }
  if ( v44 > 0x40 )
  {
    if ( v43 )
    {
      v39 = result;
      operator delete[](v43);
      return v39;
    }
  }
  return result;
}
