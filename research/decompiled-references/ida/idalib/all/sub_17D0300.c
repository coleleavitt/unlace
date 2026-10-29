void __fastcall sub_17D0300(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  unsigned __int64 v10; // rdx
  char *v11; // r13
  signed __int64 v12; // rbp
  unsigned int *v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r14
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // [rsp+8h] [rbp-D0h] BYREF
  int v22; // [rsp+10h] [rbp-C8h] BYREF
  int v23; // [rsp+14h] [rbp-C4h] BYREF
  __int64 v24; // [rsp+18h] [rbp-C0h] BYREF
  _BYTE v25[184]; // [rsp+20h] [rbp-B8h] BYREF

  v21 = a2;
  if ( a4 )
  {
    sub_168B9F0((__int64)v25, (__int64 *)(*(_QWORD *)(a1 + 16) + 8LL), *(_DWORD *)(a3 + 24), 0x17EDu, 0);
    v22 = 1;
    v5 = sub_1587D10((__int64)v25, &v22);
    v23 = 2;
    v6 = sub_1587D10(v5, &v23);
    v7 = sub_1605D30(v6, &v21);
    v8 = *(_QWORD *)(a3 + 40);
    v9 = v7;
    if ( (v8 & 7) != 0 )
    {
      v12 = 0;
      v11 = (char *)&byte_22F0C30;
    }
    else
    {
      v10 = v8 & 0xFFFFFFFFFFFFFFF8LL;
      v11 = (char *)&byte_22F0C30;
      v12 = v10;
      if ( v10 )
      {
        v13 = *(unsigned int **)(v10 + 16);
        v12 = *v13;
        v11 = (char *)(v13 + 4);
      }
    }
    if ( *(_BYTE *)(v7 + 120) )
    {
      sub_AEC220((unsigned __int8 **)(v7 + 32), v11, v12);
      sub_15F7200(v25);
    }
    else
    {
      if ( *(_BYTE *)(v7 + 132) )
      {
        v18 = sub_168B9E0((_QWORD *)v7);
        v19 = *(_QWORD *)(v9 + 16);
        if ( v19 )
          v19 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v19 + 32LL))(*(_QWORD *)(v9 + 16));
        v24 = v19;
        v20 = sub_1587BC0(v18, &v24, v14, v15, v16, v17);
        sub_AEC220((unsigned __int8 **)(*v20 + 32LL * *(unsigned int *)(v9 + 128) + 8), v11, v12);
      }
      sub_15F7200(v25);
    }
  }
}
