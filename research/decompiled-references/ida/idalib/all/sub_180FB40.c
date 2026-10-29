void __fastcall sub_180FB40(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4)
{
  __m128i *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r12
  __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // [rsp+8h] [rbp-C0h] BYREF
  _BYTE v20[184]; // [rsp+10h] [rbp-B8h] BYREF

  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 40 > 6 || sub_B8DF30(a2, a2, (__int64)a3, a4) )
  {
    v5 = sub_B281A0(*(_QWORD *)(a1 + 248), a3);
    sub_B8CC60(a2, (__int64)v5, v6, v7, v8, v9);
  }
  else
  {
    sub_168B9F0((__int64)v20, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0x19ABu, 0);
    v10 = sub_15DD120((__int64)v20, (__int64)a3);
    v11 = v10;
    if ( *(_BYTE *)(v10 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v10 + 32), a2, 0xAu);
    }
    else if ( *(_BYTE *)(v10 + 132) )
    {
      v16 = sub_168B9E0((_QWORD *)v10);
      v17 = *(_QWORD *)(v11 + 16);
      if ( v17 )
        v17 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v17 + 32LL))(*(_QWORD *)(v11 + 16));
      v19 = v17;
      v18 = sub_1587BC0(v16, &v19, v12, v13, v14, v15);
      sub_AE9DF0((unsigned __int8 **)(*v18 + 32LL * *(unsigned int *)(v11 + 128) + 8), a2, 0xAu);
    }
    sub_15F7200(v20);
  }
}
