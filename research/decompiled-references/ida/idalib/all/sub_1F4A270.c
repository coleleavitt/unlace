void __fastcall sub_1F4A270(__int64 a1, __int64 a2)
{
  void *v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rax
  _QWORD *v7; // r12
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int8 v15; // al
  __int64 v16; // rbx
  __int64 (*v17)(void); // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 *v21; // r9
  __int64 v22; // r13
  __int64 v23; // [rsp+8h] [rbp-60h] BYREF
  _BYTE v24[16]; // [rsp+10h] [rbp-58h] BYREF
  _BYTE *v25; // [rsp+20h] [rbp-48h]

  sub_1F43F90((__int64 *)a1, a2);
  v3 = sub_1F16D80(*(_QWORD *)(a1 + 16));
  v4 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a2 + 40) = v3;
  v5 = *(unsigned int *)(v4 + 24);
  *(_DWORD *)(v4 + 24) = v5 + 1;
  *(_DWORD *)(a1 + 64) = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 8 * v5);
  *(_QWORD *)(a2 + 56) = sub_1EE7800(v4);
  v6 = *(_QWORD *)(a1 + 16);
  v7 = *(_QWORD **)(v6 + 8);
  v8 = sub_1EE13A0((__int64)v7, *(_QWORD *)(v6 + 16), (__int64 *)(v6 + 32), (_DWORD *)(v6 + 24));
  v13 = sub_1EDB980(v7, v8, v9, v10, v11, v12);
  if ( !*(_QWORD *)(a2 + 48) )
    *(_QWORD *)(a2 + 48) = v13;
  *(_QWORD *)(a2 + 64) = sub_1F6A0A0(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL), *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL));
  v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 144LL) + 2320LL);
  if ( (*(_BYTE *)(v14 + 21) & 2) != 0 )
  {
    if ( (*(_BYTE *)(v14 + 1) & 8) != 0
      || (v15 = *(_BYTE *)(a2 + 28) & 0x7F, ((v15 + 96) & 0x7Fu) <= 1)
      || (unsigned int)v15 - 49 <= 2 )
    {
      sub_1F43500((__int64)v24, a1, a2);
      if ( v25 && (v25[28] & 0x7F) == 0x49 )
      {
        v16 = *(_QWORD *)(*(_QWORD *)a1 + 144LL);
        v17 = *(__int64 (**)(void))(*(_QWORD *)v25 + 32LL);
        if ( (char *)v17 == (char *)sub_A56070 )
          v22 = sub_B72720((__int64)v25);
        else
          v22 = v17();
        v23 = a2;
        *sub_1742A40(v16 + 1728, &v23, v18, v19, v20, v21) = v22;
      }
      sub_1F42E40((__int64)v24);
    }
  }
}
