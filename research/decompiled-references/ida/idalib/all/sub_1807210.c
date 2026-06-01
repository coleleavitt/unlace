void __fastcall sub_1807210(__int64 a1, __int64 a2, const __m128i *a3)
{
  unsigned __int64 v5; // r8
  const void *v6; // r12
  unsigned __int64 v7; // rdx
  const void *v8; // rsi
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r14
  unsigned __int64 v12; // rax
  char v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  const void *v18; // [rsp+0h] [rbp-58h]
  __int64 v19; // [rsp+8h] [rbp-50h]
  bool v20; // [rsp+10h] [rbp-48h]
  __int64 v21; // [rsp+10h] [rbp-48h]
  __int64 v22; // [rsp+18h] [rbp-40h]

  if ( (unsigned __int8)sub_15EAA10((__int64)a3, a1, 1u) && (unsigned __int8)sub_15EB980((__int64)a3, a1, 4u) )
  {
    v5 = a3[5].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
    if ( v5 )
    {
      if ( (*(_WORD *)v5 & 0x1FF) == 9 )
      {
        v6 = (const void *)((a3[5].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL)
                          + 4LL * *(unsigned int *)((a3[5].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL) + 4)
                          + 20);
        v5 = *(_DWORD *)(v5 + 16) * ((*(_WORD *)(v5 + 2) >> 6) & 7u);
        goto LABEL_7;
      }
      v5 = 0;
    }
    v6 = nullptr;
LABEL_7:
    v7 = a3[5].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL;
    if ( v7 )
    {
      if ( (*(_WORD *)v7 & 0x1FF) == 9 )
      {
        v8 = (const void *)((a3[5].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL)
                          + 4LL * *(unsigned int *)((a3[5].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) + 4)
                          + 20);
        v7 = *(_DWORD *)(v7 + 16) * ((*(_WORD *)(v7 + 2) >> 6) & 7u);
        goto LABEL_10;
      }
      v7 = 0;
    }
    v8 = nullptr;
LABEL_10:
    v20 = (a3[6].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL) != 0;
    v9 = a3[6].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL;
    if ( v9 )
    {
      if ( (*(_WORD *)v9 & 0x1FF) == 9 )
      {
        v10 = v9 + 4LL * *(unsigned int *)(v9 + 4) + 20;
        v9 = *(_DWORD *)(v9 + 16) * ((*(_WORD *)(v9 + 2) >> 6) & 7u);
LABEL_13:
        v19 = v9;
        v11 = v7;
        v22 = v5;
        v18 = (const void *)v10;
        v12 = sub_1806F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 88, 3u);
        v13 = v20;
        v21 = v12;
        sub_B2E8C0(v12, *(_QWORD *)(a1 + 248), a3, v6, v22, v13, v8, v11, v18, v19);
        sub_B8CC60(a2, v21, v14, v15, v16, v17);
        return;
      }
      v9 = 0;
    }
    v10 = 0;
    goto LABEL_13;
  }
}
