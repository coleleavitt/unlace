__int64 __fastcall sub_E76170(__int64 a1, __int64 a2, unsigned int a3)
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
  v5 = *(_QWORD *)(a2 + 40);
  v6 = *(_QWORD *)(v5 + 40);
  v7 = *(_BYTE *)(v5 + 28) & 0x7F;
  if ( v7 != 38 )
    v3 = 2LL * (v7 == 36);
  sub_FA3370(v12, *(_QWORD *)a2, *(unsigned int *)(v5 + 24), 2333);
  sub_E74340(v12, *(_QWORD *)(a2 + 16));
  sub_E74100(v12, *(_QWORD *)(a2 + 32) == 0);
  sub_AC84E0(v12, *(_BYTE **)(a2 + 24), *(_QWORD *)(a2 + 32));
  v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 40) + 16LL))(*(_QWORD *)(a2 + 40));
  v11 = 1;
  v10 = v8;
  sub_AC88D0((__int64 *)v12, &v10);
  sub_E74100(v12, a3);
  sub_E74100(v12, v3);
  sub_E74580(v12, v6);
  sub_FA33B0(a1, v12);
  sub_AC6300((__int64)v12);
  return a1;
}

