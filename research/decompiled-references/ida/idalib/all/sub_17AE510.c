void __fastcall sub_17AE510(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v8; // rax
  _QWORD *v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rdi
  __int64 v16; // rax
  unsigned __int64 v17; // rsi
  int v18; // edx
  char v19; // al
  __int64 *v20; // rbp
  int v21; // [rsp+Ch] [rbp-ACh] BYREF
  _BYTE v22[168]; // [rsp+10h] [rbp-A8h] BYREF

  v8 = sub_F631C0(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5, a6);
  if ( v8 )
  {
    v9 = v8;
    v12 = *(_QWORD *)(sub_B8C1B0((__int64)(v8 + 8)) + 16);
    if ( (v12 & 4) != 0 )
      v15 = *(_QWORD *)((v12 & 0xFFFFFFFFFFFFFFF8LL) + 8);
    else
      v15 = v12 & 0xFFFFFFFFFFFFFFF8LL;
    v16 = *(_QWORD *)(a2 + 16);
    v17 = v16 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v16 & 4) != 0 )
      v17 = *(_QWORD *)(v17 + 8);
    if ( !(unsigned __int8)sub_B91A20(v15, v17, v10, v11, v13, v14) )
    {
      v18 = 2;
      v19 = *((_BYTE *)v9 + 73) >> 5;
      if ( v19 != 4 )
        v18 = v19 == 2;
      v21 = v18;
      v20 = (__int64 *)(a1 + 8);
      sub_168B9F0((__int64)v22, v20, *(_DWORD *)(a2 + 24), 0x1A90u, 0);
      sub_1588370((__int64)v22, (unsigned int *)&v21);
      sub_15F7200(v22);
      sub_168B9F0((__int64)v22, v20, *((_DWORD *)v9 + 6), 0x67u, 0);
      sub_15F7200(v22);
    }
  }
}
