__int64 __fastcall sub_19FD3C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // eax
  __int64 v18; // rax
  int v19; // [rsp+4h] [rbp-B4h] BYREF
  __int64 v20; // [rsp+8h] [rbp-B0h] BYREF
  _BYTE v21[168]; // [rsp+10h] [rbp-A8h] BYREF

  v20 = *(_QWORD *)(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32) + 8LL);
  v7 = *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v7 + 16) - 57 > 1 )
  {
    v7 = sub_19F5590(v7, a2, a3, a4);
    if ( sub_F61140(*(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF0LL), a2, v13, v14, v15, v16) )
      return 0;
    if ( !v7 )
      goto LABEL_7;
  }
  else if ( sub_F61140(v7, a2, a3, a4, a5, a6) )
  {
    return 0;
  }
  if ( sub_F61140(*(_QWORD *)(*(_QWORD *)(v7 + 32) & 0xFFFFFFFFFFFFFFF0LL), a2, v8, v9, v10, v11) )
    return 0;
LABEL_7:
  v17 = sub_EEB7E0(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32), a2, a7);
  sub_168B9F0((__int64)v21, (__int64 *)(a1 + 8), v17, 0x1490u, 0);
  v18 = sub_1605D30((__int64)v21, &v20);
  v19 = 1;
  sub_1587D10(v18, &v19);
  sub_15F7200(v21);
  return 1;
}
