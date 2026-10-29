__int64 __fastcall sub_15EAA10(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r13
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // [rsp+0h] [rbp-C0h] BYREF
  _BYTE v15[184]; // [rsp+8h] [rbp-B8h] BYREF

  if ( a3 <= *(unsigned __int16 *)(a1 + 56) + (unsigned int)((*(_BYTE *)(a1 + 58) & 0x20) != 0) )
    return 1;
  sub_168B9F0(v15, a2 + 8, *(unsigned int *)(a1 + 24), 3228, 0);
  v5 = sub_15DD120((__int64)v15, a1);
  v6 = v5;
  if ( *(_BYTE *)(v5 + 120) )
  {
    sub_AE9DF0((unsigned __int8 **)(v5 + 32), a3, 3u);
  }
  else if ( *(_BYTE *)(v5 + 132) )
  {
    v11 = sub_168B9E0(v5);
    v12 = *(_QWORD *)(v6 + 16);
    if ( v12 )
      v12 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v12 + 32LL))(*(_QWORD *)(v6 + 16));
    v14 = v12;
    v13 = sub_1587BC0(v11, &v14, v7, v8, v9, v10);
    sub_AE9DF0((unsigned __int8 **)(*v13 + 32LL * *(unsigned int *)(v6 + 128) + 8), a3, 3u);
  }
  sub_15F7200(v15);
  return 0;
}
