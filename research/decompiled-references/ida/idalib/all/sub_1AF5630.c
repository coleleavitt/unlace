__int64 __fastcall sub_1AF5630(__int64 *a1, __int64 a2, int a3, int a4, unsigned int a5, __m128 a6, __m128 a7)
{
  __int64 v10; // rdx
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v22; // rcx
  unsigned __int64 v23; // r12
  __int64 v24; // [rsp+8h] [rbp-40h]

  v10 = *(_QWORD *)(a2 + 48);
  v11 = *a1;
  v12 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
  v13 = (unsigned int)*(unsigned __int8 *)(v12 + 16) - 43;
  if ( (unsigned int)v13 <= 1
    || (v22 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43,
        (unsigned int)v22 <= 1)
    && (v24 = *(_QWORD *)(a2 + 48),
        v12 = sub_F63050(*(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0LL), a2, v10, v22),
        v10 = v24,
        v12) )
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(v12 + 32);
      if ( (*(_BYTE *)(v12 + 18) & 0x10) == 0 )
        break;
      while ( 1 )
      {
        v12 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
        v14 = (unsigned int)*(unsigned __int8 *)(v12 + 16) - 43;
        if ( (unsigned int)v14 <= 1 )
          break;
        v15 = sub_F63050(v12, a2, v14, v13);
        v10 = *(_QWORD *)(v15 + 32);
        if ( (*(_BYTE *)(v15 + 18) & 0x10) == 0 )
          goto LABEL_5;
      }
    }
  }
LABEL_5:
  v16 = sub_190BDA0(v11, a2, v10, 1, a5, 0, *(double *)a6.m128_u64, a7);
  if ( v16 > 1
    && ((v23 = v16, a4)
     || (*(_BYTE *)(sub_168B6E0((__int64)a1) + 1) & 8) != 0
     || (v23 = sub_19249E0(*a1, a5, 5u, v23 & 0xFFFFFFFFFFFFFFFELL, 0, v20, a6, a7), v23 > 1))
    && (a3 == 1
     || (*(_BYTE *)((v23 & 0xFFFFFFFFFFFFFFFELL) + 1) & 6) == 0
     || (v23 = sub_19146F0(*a1, (_QWORD *)(v23 & 0xFFFFFFFFFFFFFFFELL), v17, v18, v19, v20, a6, a7), v23 > 1)) )
  {
    return v23;
  }
  else
  {
    return 1;
  }
}
