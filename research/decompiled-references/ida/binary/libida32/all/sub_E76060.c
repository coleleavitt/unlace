__int64 __fastcall sub_E76060(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r12
  __int64 v5; // rdx
  __int64 v6; // r15
  char v7; // al
  _DWORD *v8; // rbp
  __int64 (__fastcall *v9)(__int64); // rax
  unsigned __int64 v10; // rax
  unsigned int v11; // edx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // [rsp+4h] [rbp-94h] BYREF
  char v15; // [rsp+Ch] [rbp-8Ch]
  unsigned __int8 *v16[17]; // [rsp+10h] [rbp-88h] BYREF

  v4 = 1;
  v5 = *(_QWORD *)(a2 + 32);
  v6 = *(_QWORD *)(v5 + 40);
  v7 = *(_BYTE *)(v5 + 28) & 0x7F;
  if ( v7 != 38 )
    v4 = 2LL * (v7 == 36);
  sub_FA3370(v16, *(_QWORD *)a2, *(unsigned int *)(v5 + 24), 2515);
  sub_E74100(v16, *(_QWORD *)(a2 + 24) == 0);
  sub_AC84E0(v16, *(_BYTE **)(a2 + 16), *(_QWORD *)(a2 + 24));
  v8 = *(_DWORD **)(a2 + 32);
  v9 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL);
  if ( v9 == sub_9A0DA0 )
  {
    LODWORD(v10) = sub_B842E0((__int64)v8);
    v11 = v8[6];
  }
  else
  {
    v13 = v9((__int64)v8);
    v11 = v13;
    v10 = HIDWORD(v13);
  }
  v14 = __PAIR64__(v10, v11);
  v15 = 1;
  sub_AC88D0((__int64 *)v16, (__int64 *)&v14);
  sub_E74100(v16, a3);
  sub_E74100(v16, v4);
  sub_E74580(v16, v6);
  sub_FA33B0(a1, v16);
  sub_AC6300((__int64)v16);
  return a1;
}

