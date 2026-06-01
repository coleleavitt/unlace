__int64 __fastcall sub_19FD270(__int64 a1, __int64 a2, __int64 (__fastcall *a3)(_QWORD), __int64 a4, double a5)
{
  unsigned __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // r12d
  unsigned int v13; // r12d
  __int64 v15; // rax
  unsigned int v16; // eax
  unsigned int v17; // eax
  __int64 (__fastcall *v18)(_QWORD); // [rsp+0h] [rbp-C8h]
  __int64 v19; // [rsp+8h] [rbp-C0h]
  __int64 v20; // [rsp+18h] [rbp-B0h] BYREF
  _BYTE v21[168]; // [rsp+20h] [rbp-A8h] BYREF

  v7 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
  v20 = *(_QWORD *)(v7 + 8);
  v8 = *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v8 + 16) != 27 )
  {
    v19 = a4;
    v18 = a3;
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 27 )
    {
      v15 = sub_F63050(v8, v8, a3, a4);
      a3 = v18;
      a4 = v19;
      v8 = v15;
      if ( v15 )
        goto LABEL_2;
      v7 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
    }
    v16 = sub_EEB7E0(v7, v8, a5);
    v13 = 1;
    sub_168B9F0((__int64)v21, (__int64 *)(a1 + 8), v16, 0x1492u, 0);
    sub_1605D30((__int64)v21, &v20);
    sub_15F7200(v21);
    return v13;
  }
LABEL_2:
  if ( !a3 )
    return 0;
  v12 = a3(a4);
  if ( !(_BYTE)v12 )
    return 0;
  v17 = sub_C00A40(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32), v8, v9, v10, v11);
  sub_168B9F0((__int64)v21, (__int64 *)(a1 + 8), v17, 0xFCAu, 0);
  sub_1605D30((__int64)v21, &v20);
  sub_15F7200(v21);
  return v12;
}
