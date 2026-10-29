void __fastcall sub_1890630(__int64 *a1, unsigned __int64 a2, unsigned int a3, __m128 a4, __m128 a5)
{
  unsigned __int8 v6; // al
  __int16 v7; // ax
  unsigned __int8 v8; // r13
  unsigned int v9; // eax
  unsigned int v10; // r14d
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  char v13; // al
  unsigned int v14; // edx
  __int64 *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // rax
  int v20; // [rsp+14h] [rbp-CCh] BYREF
  _BYTE v21[200]; // [rsp+18h] [rbp-C8h] BYREF

  if ( !a2 || *(char *)(a2 + 28) < 0 )
    return;
  v6 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (unsigned int)v6 - 34 > 5 )
  {
    if ( v6 == 71 && (unsigned __int16)sub_183C740((__int64)a1, *(_DWORD **)(a2 + 48)) >> 8 )
    {
      sub_168B9F0((__int64)v21, a1 + 1, a3, 0xE3Bu, 0);
      sub_15F7200(v21);
      return;
    }
    v14 = a3;
    v15 = a1 + 1;
    goto LABEL_14;
  }
  v7 = sub_183C740((__int64)a1, (_DWORD *)a2);
  v8 = v7;
  v9 = HIBYTE(v7);
  v10 = v9;
  if ( v8 == 6 )
  {
    if ( (_BYTE)v9 )
      goto LABEL_16;
    if ( (unsigned __int8)sub_B8E180(a2 + 72)
      && ((*(_BYTE *)(a2 + 28) & 0x7F) == 0x26
       || (*(_DWORD *)(a2 + 40) & 7) == 6 && *(_DWORD *)(*(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFF8LL) == 15) )
    {
      goto LABEL_6;
    }
    v15 = a1 + 1;
    v14 = a3;
LABEL_14:
    sub_168B9F0((__int64)v21, v15, v14, 0xAu, 0);
    v20 = *(_BYTE *)(a1[29] + 1) >> 7;
    sub_1588370((__int64)v21, (unsigned int *)&v20);
    sub_15F7200(v21);
    return;
  }
  if ( !(_BYTE)v9 )
  {
LABEL_6:
    *(_BYTE *)(a2 + 83) |= 6u;
    *(_DWORD *)(a2 + 144) = a3;
    if ( (unsigned __int8)sub_B8E180(a2 + 72) )
      return;
    v13 = *(_BYTE *)(a2 + 28);
    *(_BYTE *)(a2 + 84) &= ~0x40u;
    if ( (v13 & 0x7Fu) - 35 > 3 )
      goto LABEL_8;
    goto LABEL_33;
  }
LABEL_16:
  if ( (_BYTE)v9 != 2 )
  {
    sub_168B9F0((__int64)v21, a1 + 1, a3, ((*(char *)(a1[29] + 1) >> 31) & 0x4B9) + 5527, 0);
    sub_15F7200(v21);
  }
  *(_BYTE *)(a2 + 83) |= 6u;
  *(_DWORD *)(a2 + 144) = a3;
  if ( (unsigned __int8)sub_B8E180(a2 + 72) )
    return;
  v16 = *(_QWORD *)(a2 + 16);
  *(_BYTE *)(a2 + 84) &= ~0x40u;
  v11 = v16 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v16 & 4) != 0 )
    v11 = *(_QWORD *)(v11 + 8);
  if ( (*(_BYTE *)(v11 + 8) & 0x7Fu) - 59 <= 2 && v11 != 64 && (*(_BYTE *)(v11 + 10) & 1) == 0 )
    return;
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 35 > 3 )
    goto LABEL_25;
LABEL_33:
  v19 = sub_B7D580(a2, 1, v11, v12);
  if ( !v19 )
    v19 = a2;
  if ( (*(_BYTE *)((*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v19 + 32LL))(v19) + 83) & 2) == 0 )
  {
    if ( !(_BYTE)v10 )
    {
LABEL_8:
      if ( !(unsigned __int8)sub_188C9F0((__int64)a1, a2, v8, a3) )
      {
        sub_1885C80(a1, (_DWORD *)a2, a3, *(double *)a4.m128_u64, a5);
        return;
      }
LABEL_32:
      sub_B88650(a2, 1);
      return;
    }
LABEL_25:
    if ( !(unsigned __int8)sub_188F170((__int64)a1, 0, a2, v10, a4, *(double *)a5.m128_u64) )
    {
      sub_186C610((__int64)a1, a3, a2, v10, v17, v18, *(double *)a4.m128_u64, a5);
      return;
    }
    goto LABEL_32;
  }
}
