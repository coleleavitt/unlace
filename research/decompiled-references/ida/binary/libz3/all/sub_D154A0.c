void __fastcall sub_D154A0(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // r12
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  void *v6; // [rsp-8h] [rbp-38h]
  int v7[12]; // [rsp+0h] [rbp-30h] BYREF

  if ( !*(_BYTE *)(a1 + 12) )
  {
    v1 = **(_QWORD **)(a1 + 16);
    sub_1858590(v7, a1 + 24);
    sub_14B63F0(*(_QWORD *)(a1 + 16) + 8LL);
    v2 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)v2 = v1;
    sub_14B7810(v2 + 8, v1, (int)v7, v3, v4, v5, v6);
    *(_DWORD *)(v2 + 24) = 0;
    *(_BYTE *)(a1 + 12) = 1;
    sub_18572D0(v7);
  }
}

