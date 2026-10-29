void __fastcall sub_1827580(__int64 *a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned __int64 v5; // rbp
  unsigned int v6; // r14d
  __int64 v7; // rsi
  __int64 v8; // r13
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 (__fastcall *v17)(__int64); // rax
  char v18; // al
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 (__fastcall *v22)(__int64); // rax
  __int64 v23; // rax
  __int16 v24; // dx
  unsigned __int64 *v25; // rax
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rbp
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r12
  __int64 v40; // rax
  _QWORD *v41; // rax
  int v42; // [rsp+0h] [rbp-C4h] BYREF
  __int64 v43; // [rsp+4h] [rbp-C0h] BYREF
  _QWORD v44[23]; // [rsp+Ch] [rbp-B8h] BYREF

  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 34 > 5 )
    return;
  if ( (unsigned int)sub_B77D20(a2) == 2 )
    return;
  v5 = a1[33];
  v6 = *(_DWORD *)(a2 + 24);
  v7 = 6891;
  v8 = *(_QWORD *)(v5 + 32);
  if ( (unsigned __int8)sub_FD3830(v8, 0x1AEBu, *(unsigned int *)(a2 + 24), v5, v3, v4) == 1 )
  {
    v7 = 7402;
    if ( (unsigned __int8)sub_FD3830(v8, 0x1CEAu, v6, v5, v11, v12) == 1 )
      return;
  }
  if ( (unsigned __int8)sub_B74ED0(a2, v7, v9, v10) )
    return;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v25 = sub_B8C3D0(a2, v7, v13, v14, v15, v16);
    v26 = *v25;
    v14 = *v25 + 8LL * *((unsigned int *)v25 + 2);
    if ( *v25 >= v14 )
    {
      if ( v26 != v14 )
      {
        while ( *(_WORD *)(*(_QWORD *)v14 + 36LL) != 236 )
        {
          v14 += 8LL;
          if ( v26 == v14 )
            goto LABEL_7;
        }
        return;
      }
    }
    else
    {
      v27 = *v25;
      while ( *(_WORD *)(*(_QWORD *)v27 + 36LL) != 236 )
      {
        v27 += 8LL;
        if ( v14 == v27 )
          goto LABEL_7;
      }
      if ( v14 != v27 )
        return;
    }
  }
LABEL_7:
  v17 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL);
  if ( v17 == sub_9A8F10 )
    v18 = sub_B7F5F0((_QWORD *)a2, v44, (__int64)sub_9A8F10, v14, v15, v16);
  else
    v18 = v17(a2);
  if ( v18 )
  {
    v22 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL);
    if ( v22 == sub_6EF210 )
      v23 = sub_B7F750((_QWORD *)a2, v44, (__int64)sub_6EF210, v19, v20, v21);
    else
      v23 = v22(a2);
    v24 = *(_WORD *)v23 & 0x1FF;
    if ( v24 == 249 )
    {
      if ( *(_DWORD *)(v23 + 4) != 1 )
        return;
      v23 = *(_QWORD *)(v23 + 16);
      v24 = *(_WORD *)v23 & 0x1FF;
    }
    if ( v24 == 60 )
      v24 = **(_WORD **)(v23 + 16) & 0x1FF;
    if ( v24 == 97 )
    {
      v28 = sub_B31610(a1[31], 0);
      sub_B8CC60(a2, v28, v29, v30, v31, v32);
      sub_168B9F0((__int64)v44, a1 + 1, *(_DWORD *)(a2 + 24), 0x1CEAu, 0);
      v42 = 0;
      v33 = sub_1587D10((__int64)v44, &v42);
      v34 = v33;
      if ( *(_BYTE *)(v33 + 120) )
      {
        sub_AE9DF0((unsigned __int8 **)(v33 + 32), a2, 0xAu);
      }
      else if ( *(_BYTE *)(v33 + 132) )
      {
        v39 = sub_168B9E0((_QWORD *)v33);
        v40 = *(_QWORD *)(v34 + 16);
        if ( v40 )
          v40 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v40 + 32LL))(*(_QWORD *)(v34 + 16));
        v43 = v40;
        v41 = sub_1587BC0(v39, &v43, v35, v36, v37, v38);
        sub_AE9DF0((unsigned __int8 **)(*v41 + 32LL * *(unsigned int *)(v34 + 128) + 8), a2, 0xAu);
      }
      sub_15F7200(v44);
    }
  }
}
