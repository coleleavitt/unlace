__int64 __fastcall sub_1BF92C0(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        _BYTE *a4,
        __int64 a5,
        char a6,
        __m128 a7,
        __m128 a8,
        __int64 *a9)
{
  __int64 v11; // r15
  unsigned __int8 v12; // al
  __int64 v13; // rdx
  unsigned __int64 v14; // r13
  __int64 v15; // rsi
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  char v21; // dl
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v26; // [rsp+8h] [rbp-F0h]
  unsigned int v28; // [rsp+14h] [rbp-E4h]
  __int64 v30; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD v31[25]; // [rsp+30h] [rbp-C8h] BYREF

  v28 = a2;
  v11 = *a9 & 0xFFFFFFFFFFFFFFF8LL;
  v12 = *(_BYTE *)(v11 + 28) & 0x7F;
  v13 = (v12 + 52) & 0x7F;
  if ( (unsigned __int8)v13 <= 1u || (unsigned int)v12 - 53 <= 1 )
    v11 = sub_B72ED0(v11);
  v14 = *a3;
  v15 = (unsigned int)sub_C00A40(*a3, a2, v13, (__int64)a4, a5);
  sub_1663420((_QWORD *)a1, v15, v14, 0, *a9, v16, *(double *)a7.m128_u64);
  v31[0] = sub_AED600(v11, v15, v17, v18);
  v26 = sub_C1BEF0((__int64)v31, v15, v19, v20);
  if ( !a4[9] )
  {
    sub_1DBADC0(a1);
    if ( v21 )
      return 1;
    *(double *)a7.m128_u64 = (*(double (__fastcall **)(_QWORD *, _BYTE *, __int64, _QWORD, __int64, __int64))(*(_QWORD *)a4 + 56LL))(
                               v31,
                               a4,
                               a1,
                               v28,
                               a5,
                               v26);
    v30 = sub_EEC8C0(*a3, (__int64)a4, *(double *)a7.m128_u64);
    sub_1587DB0((__int64)v31, &v30);
    sub_15F7200(v31);
  }
  v22 = sub_1BF8E10((__m128 *)a1, *a3, *a9 & 0xFFFFFFFFFFFFFFF8LL, (_QWORD *)v11, a6, a7, a8);
  if ( v22 == 1 )
    return 1;
  v23 = *(unsigned int *)(a1 + 1952);
  v24 = *(unsigned int *)(a1 + 1956);
  if ( *(_QWORD *)(a1 + 1944) == __PAIR64__(v24, v23) )
  {
    v24 = 0;
    v23 = 0;
  }
  *a3 = sub_C0A3E0(
          *(_QWORD **)(a1 + 248),
          *(_QWORD *)((v22 & 0xFFFFFFFFFFFFFFFELL) + 8),
          19,
          v22 & 0xFFFFFFFFFFFFFFFELL,
          0,
          (*(_BYTE *)((v22 & 0xFFFFFFFFFFFFFFFELL) + 1) >> 1) & 3,
          (v24 << 32) | v23);
  return 0;
}
