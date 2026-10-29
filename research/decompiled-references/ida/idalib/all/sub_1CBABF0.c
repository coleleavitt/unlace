void __fastcall sub_1CBABF0(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  unsigned __int64 v7; // rbx
  unsigned __int8 v8; // al
  _BYTE *v9; // r15
  __int64 v10; // r12
  __int64 (__fastcall *v11)(_BYTE *); // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 *v15; // r9
  __int64 v16; // r13
  unsigned int v17; // edx
  __int64 *v18; // rsi
  unsigned int v19; // ecx
  __int64 v20; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v21[25]; // [rsp+10h] [rbp-C8h] BYREF

  v7 = **(_QWORD **)(a3 + 8) & 0xFFFFFFFFFFFFFFF8LL;
  v8 = *(_BYTE *)(v7 + 28) & 0x7F;
  if ( (unsigned int)v8 - 53 <= 1
    || (v9 = (_BYTE *)(**(_QWORD **)(a3 + 8) & 0xFFFFFFFFFFFFFFF8LL), ((v8 + 52) & 0x7Fu) <= 1) )
  {
    v9 = (_BYTE *)sub_B72ED0(v7);
    v8 = v9[28] & 0x7F;
  }
  if ( v8 != 73 )
  {
    sub_168B9F0((__int64)v21, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 24), 0x1328u, 0);
    v20 = *(_QWORD *)(a2 + 40);
    sub_15894B0((__int64)v21, &v20);
    sub_15F7200(v21);
    sub_17AE800(a1, v7, *(_DWORD *)(a2 + 24));
    *a4 = 0;
    return;
  }
  if ( !(unsigned __int8)sub_A952E0(*(_QWORD **)(a1 + 248), a2, (__int64)v9) )
  {
    v17 = *(_DWORD *)(a2 + 24);
    v18 = (__int64 *)(a1 + 8);
    v19 = 4903;
LABEL_14:
    sub_168B9F0((__int64)v21, v18, v17, v19, 0);
    v20 = *(_QWORD *)(a2 + 40);
    sub_15894B0((__int64)v21, &v20);
    sub_15F7200(v21);
    sub_17AE800(a1, (__int64)v9, *(_DWORD *)(a2 + 24));
    *a4 = 0;
    return;
  }
  if ( (unsigned __int8)sub_1E61510(a1, v9, v21, 0) && sub_17A3530(a1, a2, (__int64)v9) )
  {
    v17 = *(_DWORD *)(a2 + 24);
    v18 = (__int64 *)(a1 + 8);
    v19 = 4902;
    goto LABEL_14;
  }
  if ( *(_DWORD *)a3 == 2 )
  {
    v10 = *(_QWORD *)(a1 + 248);
    v11 = *(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v9 + 32LL);
    if ( (char *)v11 == (char *)sub_A56070 )
      v16 = sub_B72720((__int64)v9);
    else
      v16 = v11(v9);
    v21[0] = a2;
    *sub_1742A40(v10 + 1728, v21, v12, v13, v14, v15) = v16;
  }
}
