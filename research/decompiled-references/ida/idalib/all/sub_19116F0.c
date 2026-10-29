void __fastcall sub_19116F0(
        __m128 *a1,
        unsigned int a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int8 v9; // r13
  unsigned __int64 v13; // rdi
  unsigned __int8 v14; // al
  int v15; // eax
  _BYTE *v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // [rsp+0h] [rbp-48h] BYREF
  __int64 v25[8]; // [rsp+8h] [rbp-40h] BYREF

  v9 = a5;
  v13 = a1[47].m128_u64[1];
  if ( *(_DWORD *)(v13 + 24) )
  {
    sub_1B21670(v13, a4, a3, 0);
    if ( (*(_BYTE *)(a1[14].m128_u64[1] + 97) & 4) == 0 )
      goto LABEL_3;
  }
  else if ( (*(_BYTE *)(a1[14].m128_u64[1] + 97) & 4) == 0 )
  {
    goto LABEL_3;
  }
  sub_1AA2760(a1[46].m128_u64[1], a2, a4, a3);
LABEL_3:
  v14 = *(_BYTE *)(a3 + 28) & 0x7F;
  if ( (unsigned int)v14 - 40 <= 6 )
  {
    sub_1906C40(a1, a2, a3, (__int64)a4, a6);
LABEL_5:
    if ( (*(_BYTE *)(a1[14].m128_u64[1] + 1) & 8) != 0 )
      sub_18CB420((__int64)a1, a3, (__int64)a4, (__int64)a4, a5, a6);
    return;
  }
  if ( v14 == 52 )
  {
    *(_BYTE *)(a3 + 29) |= 8u;
    if ( *(char *)(a3 + 28) >= 0 )
    {
      v15 = sub_18BB0D0((__int64)a1);
      if ( v15 == 3 )
      {
        v24 = 0;
        v25[0] = 0;
        sub_1903850((__int64)a1, a3, a2, 0, 0, 1u, &v24, v25, nullptr);
      }
      else if ( v15 == 1 )
      {
        sub_18C4A90((__int64)a1, a3, (__int64)a4);
      }
    }
    goto LABEL_5;
  }
  sub_19116A0(a1, a2, a3, v9, a5, a6, a7, a8);
  if ( (*(_WORD *)a4 & 0x1FF) == 0x2E )
  {
    v16 = (_BYTE *)a4[3];
    if ( (v16[28] & 0x7Fu) - 35 <= 3 )
    {
      v17 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v16 + 32LL))(a4[3]);
      if ( ((*(_QWORD *)(v17 + 80) & 0x40000LL) != 0
         || ((*(_QWORD *)(v17 + 80) >> 16) & 8) != 0
         || (unsigned int)sub_B984E0(v17))
        && ((*(_BYTE *)(a1[14].m128_u64[1] + 12) & 0x10) != 0 || (*a4 & 0x100000LL) == 0) )
      {
        v21 = sub_B9DD50((__int64)v16, a4[2], (*(_BYTE *)(a1[14].m128_u64[1] + 12) & 0x10) != 0, v18, v19, v20);
        if ( v21 )
          sub_19116A0(a1, a2, v21, v9, v22, v23, a7, a8);
      }
    }
  }
}
