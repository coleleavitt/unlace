void __fastcall sub_1A2DC80(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rbp
  int v6; // r14d
  __int64 v7; // r15
  int v8; // r13d
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int8 v11; // cl
  __int64 v12; // [rsp+28h] [rbp-E0h]
  _BYTE v13[200]; // [rsp+40h] [rbp-C8h] BYREF

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * *(unsigned int *)(a1 + 40) - 8);
  v4 = *(_QWORD *)(v3 + 1592);
  *(_BYTE *)(v3 + 1632) = a3 != 0;
  v5 = *(_QWORD *)(a1 + 544);
  v6 = *(_DWORD *)(a1 + 80);
  v7 = *(_QWORD *)(a1 + 512);
  *(_QWORD *)(a1 + 512) = 0;
  v8 = *(_DWORD *)(a1 + 2632);
  if ( v4 )
    v4 += 72;
  v9 = *(_QWORD *)(a1 + 9944);
  *(_QWORD *)(a1 + 544) = v4;
  v12 = v9;
  *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 2632) = *(_DWORD *)(a1 + 3688);
  if ( *(_DWORD *)(a2 + 12) )
  {
    v10 = *(_QWORD *)(sub_B8C1B0(*(_QWORD *)(v3 + 1584) + 64LL) + 16);
    if ( (v10 & 4) != 0 )
    {
      v11 = *(_BYTE *)(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF8LL) + 8LL) & 0x7F;
      if ( v11 <= 0x12u )
        goto LABEL_9;
    }
    else
    {
      v11 = *(_BYTE *)((v10 & 0xFFFFFFFFFFFFFFF8LL) + 8) & 0x7F;
      if ( v11 <= 0x12u )
      {
LABEL_9:
        if ( ((1LL << v11) & 0x40182) != 0 )
          goto LABEL_4;
LABEL_10:
        if ( (sub_19A27D0(a1) & 0xFFFFFFFFFFFFFFF0LL) == 0
          || (unsigned __int8)sub_19B4460(a1, nullptr, 1, 0, nullptr, 0) )
        {
          sub_168B9F0((__int64)v13, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 8), 0xD4Fu, 0);
          sub_15F7200(v13);
        }
        goto LABEL_4;
      }
    }
    if ( ((v11 + 94) & 0x7Fu) <= 5 )
      goto LABEL_4;
    goto LABEL_10;
  }
LABEL_4:
  if ( v5 )
  {
    *(_QWORD *)(a1 + 544) = v5;
    *(_QWORD *)(a1 + 512) = v7;
    *(_QWORD *)(a1 + 9944) = v12;
    *(_DWORD *)(a1 + 80) = v6;
    *(_DWORD *)(a1 + 2632) = v8;
  }
}
