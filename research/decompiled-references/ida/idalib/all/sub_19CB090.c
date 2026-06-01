__int64 __fastcall sub_19CB090(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4, __int64 a5, __int64 a6)
{
  int *v7; // rax
  int *v8; // r14
  __int64 v9; // r12
  _QWORD *v10; // rcx
  _QWORD *v11; // rbx
  _QWORD *v12; // r15
  unsigned __int64 v13; // rdi
  __int64 v14; // rax
  _QWORD *v15; // rdi
  unsigned __int64 v16; // rax
  __int64 v17; // rdi
  __int64 (__fastcall *v18)(__int64); // rax
  __int64 v19; // rsi
  __int64 (__fastcall *v20)(__int64); // rax
  __int64 v21; // rax
  unsigned __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // r12
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r13
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rbx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v44; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v45; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v46[200]; // [rsp+40h] [rbp-C8h] BYREF

  v7 = (int *)sub_169D2C0(a1, a3, a3, (__int64)a4, a5, a6);
  if ( !v7 )
    return 0;
  v8 = v7;
  v9 = (__int64)(v7 - 16);
  if ( v7 == &dword_40 )
    return 0;
  v10 = *(_QWORD **)(a5 + 8);
  v11 = &v10[*(unsigned int *)(a5 + 16)];
  if ( v10 != v11 )
  {
    v12 = *(_QWORD **)(a5 + 8);
    while ( 1 )
    {
      v13 = *v12 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !a2 )
      {
        if ( !(unsigned __int8)sub_B72F20(v13) )
          return 0;
        v13 = *v12 & 0xFFFFFFFFFFFFFFF8LL;
      }
      v14 = *(_QWORD *)(v13 + 16);
      v15 = (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v14 & 4) != 0 )
        v15 = (_QWORD *)*v15;
      v16 = sub_B8E650((unsigned __int64)v15);
      if ( ((*(_BYTE *)(v16 + 8) + 70) & 0x7Fu) <= 3 )
      {
        v17 = v16 - 64;
        v18 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v16 - 64) + 32LL);
        v19 = v18 == sub_A01140 ? sub_B70A60(v17) : v18(v17);
        v20 = *(__int64 (__fastcall **)(__int64))(*((_QWORD *)v8 - 8) + 32LL);
        v21 = v20 == sub_A01140 ? sub_B70A60(v9) : v20(v9);
        if ( v21 == v19 || !(unsigned __int8)sub_B707F0(v9, v19) )
          return 0;
      }
      if ( v11 == ++v12 )
      {
        v11 = *(_QWORD **)(a5 + 8);
        break;
      }
    }
  }
  v23 = *v11 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !a2 )
  {
    sub_19C5ED0(a1, a4, v23, a5 + 120);
    return 1;
  }
  sub_168B9F0((__int64)v46, (__int64 *)(a1 + 8), *(_DWORD *)(a5 + 128), 0x1318u, 0);
  v45 = *(_QWORD *)a4;
  v24 = sub_1587DB0((__int64)v46, &v45);
  v25 = v24;
  if ( *(_BYTE *)(v24 + 120) )
  {
    sub_AE9DF0((unsigned __int8 **)(v24 + 32), v23, 0xAu);
LABEL_30:
    if ( *(_BYTE *)(v25 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v25 + 32), a3, 8u);
    }
    else if ( *(_BYTE *)(v25 + 132) )
    {
      v35 = sub_168B9E0((_QWORD *)v25);
      v38 = *(_QWORD *)(v25 + 16);
      if ( v38 )
        v38 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v38 + 32LL))(*(_QWORD *)(v25 + 16));
      v44 = v38;
      v39 = sub_1587BC0(v35, &v44, v33, v34, v36, v37);
      sub_AE9DF0((unsigned __int8 **)(*v39 + 32LL * *(unsigned int *)(v25 + 128) + 8), a3, 8u);
    }
    goto LABEL_25;
  }
  if ( *(_BYTE *)(v24 + 132) )
  {
    v30 = sub_168B9E0((_QWORD *)v24);
    v31 = *(_QWORD *)(v25 + 16);
    if ( v31 )
      v31 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v31 + 32LL))(*(_QWORD *)(v25 + 16));
    v44 = v31;
    v32 = sub_1587BC0(v30, &v44, v26, v27, v28, v29);
    sub_AE9DF0((unsigned __int8 **)(*v32 + 32LL * *(unsigned int *)(v25 + 128) + 8), v23, 0xAu);
    goto LABEL_30;
  }
LABEL_25:
  sub_15F7200(v46);
  return 1;
}
