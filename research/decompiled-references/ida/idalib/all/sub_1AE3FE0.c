__int64 __fastcall sub_1AE3FE0(__int64 *a1, unsigned __int64 a2, double a3)
{
  __int64 v5; // r8
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // r15d
  __int64 v13; // rsi
  unsigned int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // [rsp+8h] [rbp-D0h] BYREF
  void *v21[2]; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+20h] [rbp-B8h] BYREF

  if ( (unsigned __int8)sub_16EC930(*a1, a2, 2u, a3) || (unsigned __int8)sub_1ADA000(a1, a2, a3) )
    return 1;
  v6 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v8 = *(_QWORD *)(v7 + 8) & 7LL;
  if ( v8 | (*(__int64 *)(v7 + 8) >> 3) & 1 )
    v7 = sub_F64F00(*(_QWORD *)(v6 + 8), a2, v8, v8 | (*(__int64 *)(v7 + 8) >> 3) & 1, v5);
  v20 = v7 & 0xFFFFFFFFFFFFFFF0LL;
  sub_F78400((__int64)v21, (__int64 *)&v20);
  v12 = sub_9B4AA0((__int64)v21, "ndrange_t");
  if ( v21[0] != &v22 )
    operator delete(v21[0]);
  if ( v12 )
  {
    v17 = sub_EEB7E0(v6, (__int64)"ndrange_t", a3);
    sub_168B9F0((__int64)v21, a1, v17, 0x123Bu, 0);
    v18 = sub_BFBC70(*(_QWORD *)(a2 + 32));
    if ( v18 && (*(_BYTE *)(v18 + 28) & 0x7Fu) - 34 >= 6 )
      v18 = 0;
    v20 = v18;
    v19 = sub_16CEDA0((__int64)v21, (__int64 *)&v20);
    if ( *(_BYTE *)(v19 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v19 + 32), (__int64)"'ndrange_t'", 1u);
    }
    else if ( *(_BYTE *)(v19 + 132) )
    {
      sub_1AD78E0((_QWORD *)v19, (__int64)"'ndrange_t'");
    }
    goto LABEL_16;
  }
  v13 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 40);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) != 11 )
  {
    v14 = sub_EEB7E0(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 40), v13, a3);
    sub_168B9F0((__int64)v21, a1, v14, 0x123Bu, 0);
    v15 = sub_BFBC70(*(_QWORD *)(a2 + 32));
    if ( v15 && (*(_BYTE *)(v15 + 28) & 0x7Fu) - 34 >= 6 )
      v15 = 0;
    v20 = v15;
    v16 = sub_16CEDA0((__int64)v21, (__int64 *)&v20);
    if ( *(_BYTE *)(v16 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v16 + 32), (__int64)"block", 1u);
    }
    else if ( *(_BYTE *)(v16 + 132) )
    {
      sub_1AD78E0((_QWORD *)v16, (__int64)"block");
    }
LABEL_16:
    sub_15F7200(v21);
    return 1;
  }
  return sub_1AD7410(*a1, v13, v9, v10, v11);
}
