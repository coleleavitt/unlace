__int64 __fastcall sub_19D7480(__int64 *a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // r14d
  __int64 v7; // r12
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r14
  _QWORD *v13; // rbx
  unsigned int *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbp
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r15
  __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // [rsp+8h] [rbp-E0h] BYREF
  const char *v33; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v34; // [rsp+18h] [rbp-D0h]
  _BYTE v35[200]; // [rsp+20h] [rbp-C8h] BYREF

  v6 = a3;
  v7 = a4;
  if ( !a2 )
  {
    v13 = sub_E935B0(*(_QWORD *)(a1[92] + 88), dword_2646DC0[a4]);
    sub_168B9F0((__int64)v35, a1 + 1, v6, 0x14E1u, 0);
    v14 = (unsigned int *)v13[2];
    v15 = *v14;
    v33 = (const char *)(v14 + 4);
    v34 = v15;
    v16 = sub_166BAF0((__int64)v35, (__int64)&v33);
    v17 = v16;
    if ( *(_BYTE *)(v16 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v16 + 32), v7, 2u);
    }
    else if ( *(_BYTE *)(v16 + 132) )
    {
      v20 = sub_168B9E0((_QWORD *)v16);
      v23 = *(_QWORD *)(v17 + 16);
      if ( v23 )
        v23 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v23 + 32LL))(*(_QWORD *)(v17 + 16));
      v32 = v23;
      v24 = sub_1587BC0(v20, &v32, v18, v19, v21, v22);
      sub_AE9DF0((unsigned __int8 **)(*v24 + 32LL * *(unsigned int *)(v17 + 128) + 8), v7, 2u);
    }
    goto LABEL_10;
  }
  v8 = *(_QWORD *)(a2 + 120);
  if ( !v8 )
  {
    sub_A794E0((__int64 *)(*(_QWORD *)(a2 + 96) + 88LL), *(_QWORD *)(a2 + 96), a3, 0, a5, a6);
    v8 = *(_QWORD *)(a2 + 120);
  }
  result = 1;
  if ( (v8 & 0xFFFFFFFFFFFFFFF8LL) == 0 && (*(_BYTE *)(a1[29] + 106) & 1) == 0 )
  {
    sub_168B9F0((__int64)v35, a1 + 1, v6, 0x14E1u, 0);
    v33 = sub_995750(a2);
    v34 = v10;
    v11 = sub_166BAF0((__int64)v35, (__int64)&v33);
    v12 = v11;
    if ( *(_BYTE *)(v11 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v11 + 32), (int)v7, 2u);
    }
    else if ( *(_BYTE *)(v11 + 132) )
    {
      v29 = sub_168B9E0((_QWORD *)v11);
      v30 = *(_QWORD *)(v12 + 16);
      if ( v30 )
        v30 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v30 + 32LL))(*(_QWORD *)(v12 + 16));
      v32 = v30;
      v31 = sub_1587BC0(v29, &v32, v25, v26, v27, v28);
      sub_AE9DF0((unsigned __int8 **)(*v31 + 32LL * *(unsigned int *)(v12 + 128) + 8), (int)v7, 2u);
    }
    sub_15F7200(v35);
    sub_168B9F0((__int64)v35, a1 + 1, *(_DWORD *)(a2 + 24), 0x1769u, 0);
LABEL_10:
    sub_15F7200(v35);
    return 0;
  }
  return result;
}
