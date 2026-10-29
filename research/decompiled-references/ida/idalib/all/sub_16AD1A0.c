void __fastcall sub_16AD1A0(__int64 a1, __int64 *a2, __int64 a3, double a4)
{
  __int64 v4; // rax
  __int64 v5; // rax
  char v6; // al
  __int64 *v7; // rbx
  unsigned __int64 v8; // rdi
  int v9; // r13d
  unsigned int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbx
  unsigned int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbp
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // [rsp+8h] [rbp-F0h] BYREF
  __int64 v24; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v25; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v26; // [rsp+28h] [rbp-D0h] BYREF
  __int64 v27; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v28; // [rsp+38h] [rbp-C0h] BYREF
  _BYTE v29[184]; // [rsp+40h] [rbp-B8h] BYREF

  v4 = *a2;
  v23 = a3;
  if ( v4 == 1 )
    return;
  v24 = *(_QWORD *)((v4 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v5 = *(_QWORD *)(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL) + 8LL);
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
      & 0xF7) != 0x22 )
  {
    v6 = *(_BYTE *)(*(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
LABEL_12:
    if ( v6 != 43 )
      return;
    goto LABEL_4;
  }
  v6 = *(_BYTE *)(*(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (v6 & 0xF7) != 0x22 )
    goto LABEL_12;
LABEL_4:
  v26 = 0;
  v25 = 0;
  v27 = 0;
  if ( (unsigned int)sub_16A7D70(a1, v24, v23, 1, 0, &v25, &v26, &v27) == 1 )
  {
    v7 = (__int64 *)(a1 + 8);
    v8 = *a2 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v27 & 1) != 0 )
    {
      v9 = (v27 & 4) == 0;
    }
    else
    {
      if ( (v27 & 4) == 0 )
      {
        v14 = sub_EEB7E0(v8, v24, a4);
        sub_168B9F0((__int64)v29, v7, v14, 0x1A06u, 0);
        v15 = sub_1605D30((__int64)v29, &v24);
        sub_1605D30(v15, &v23);
        sub_15F7200(v29);
        return;
      }
      v9 = 2;
    }
    v10 = sub_EEB7E0(v8, v24, a4);
    sub_168B9F0((__int64)v29, v7, v10, 0x1A05u, 0);
    v11 = sub_1605D30((__int64)v29, &v25);
    v12 = sub_1605D30(v11, &v26);
    v13 = v12;
    if ( *(_BYTE *)(v12 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v12 + 32), v9, 2u);
    }
    else if ( *(_BYTE *)(v12 + 132) )
    {
      v18 = sub_168B9E0((_QWORD *)v12);
      v21 = *(_QWORD *)(v13 + 16);
      if ( v21 )
        v21 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v21 + 32LL))(*(_QWORD *)(v13 + 16));
      v28 = v21;
      v22 = sub_1587BC0(v18, &v28, v16, v17, v19, v20);
      sub_AE9DF0((unsigned __int8 **)(*v22 + 32LL * *(unsigned int *)(v13 + 128) + 8), v9, 2u);
    }
    sub_15F7200(v29);
  }
}
