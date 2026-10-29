__int64 __fastcall sub_14FB680(__int64 a1, unsigned int a2, __m128i a3)
{
  unsigned int v4; // edx
  unsigned __int8 v5; // al
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rbx
  unsigned __int8 *v15; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int8 v16; // [rsp+8h] [rbp-70h]
  __int64 v17; // [rsp+10h] [rbp-68h]
  int v18; // [rsp+18h] [rbp-60h]
  __int16 v19; // [rsp+1Ch] [rbp-5Ch]
  __int64 (__fastcall *v20)(__int64); // [rsp+20h] [rbp-58h]
  __int64 v21; // [rsp+28h] [rbp-50h]
  __int64 v22; // [rsp+30h] [rbp-48h]

  if ( *(_WORD *)(a1 + 32) == 22 )
  {
    v17 = a1;
    v4 = *(unsigned __int16 *)(a1 + 88);
    v15 = (unsigned __int8 *)(a1 + 1952);
    v5 = *(_BYTE *)(a1 + 1952);
    v18 = 1507350;
    v16 = v5;
    v19 = 63;
    v20 = sub_146A990;
    v6 = *(_QWORD *)(a1 + 8);
    *(_BYTE *)(a1 + 1952) = 1;
    v21 = 0;
    v22 = 0;
    if ( v4 >= *(_DWORD *)(*(_QWORD *)(v6 + 56) + 144LL) )
      sub_1568800(&v15);
    else
      LODWORD(v22) = sub_146A990(a1);
    v7 = sub_14BDAD0(a1, 0, a3);
    if ( (unsigned __int8)sub_14808E0((__int64)&v15, nullptr, v8, v9, v10, v11) || v7 == 1 )
    {
      v14 = 1;
    }
    else
    {
      v12 = (unsigned __int64)HIDWORD(v22) << 32;
      v13 = sub_190C990(*(_QWORD *)(a1 + 96), (unsigned int)v22, HIDWORD(v22), v7 & 0xFFFFFFFFFFFFFFFELL);
      v14 = sub_19D7F10(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 736LL), v12 | a2, v13 & 0xFFFFFFFFFFFFFFFELL);
    }
    *v15 = v16;
    return v14;
  }
  else
  {
    sub_1564840(&v15, a1, a1 + 16, 1625);
    sub_AE9DF0(&v15, (__int64)"@", 1u);
    sub_AEA040((__int64)&v15);
    return 1;
  }
}
