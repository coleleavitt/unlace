__int64 __fastcall sub_E99FA0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r15
  __int64 v5; // rdx
  __int64 v6; // r14
  char v7; // al
  __int64 v8; // rax
  __int64 v10; // [rsp+4h] [rbp-94h] BYREF
  char v11; // [rsp+Ch] [rbp-8Ch]
  unsigned __int8 *v12[17]; // [rsp+10h] [rbp-88h] BYREF

  v3 = 1;
  v5 = *(_QWORD *)(a2 + 32);
  v6 = *(_QWORD *)(v5 + 40);
  v7 = *(_BYTE *)(v5 + 28) & 0x7F;
  if ( v7 != 38 )
    v3 = 2LL * (v7 == 36);
  sub_FC70B0(v12, *(_QWORD *)a2, *(unsigned int *)(v5 + 24), 2515);
  sub_E97E40(v12, *(_QWORD *)(a2 + 24) == 0);
  sub_AEC220(v12, *(_BYTE **)(a2 + 16), *(_QWORD *)(a2 + 24));
  v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 32) + 16LL))(*(_QWORD *)(a2 + 32));
  v11 = 1;
  v10 = v8;
  sub_AEC610((__int64 *)v12, &v10);
  sub_E97E40(v12, a3);
  sub_E97E40(v12, v3);
  sub_E982C0(v12, v6);
  sub_FC70F0(a1, v12);
  sub_AEA040((__int64)v12);
  return a1;
}
