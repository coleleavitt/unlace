__int64 __fastcall sub_1ECC00(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  int v13; // eax
  __int64 v14; // rdi
  char merge_state; // al
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __m128 v21; // xmm4
  __m128 v22; // xmm5
  char v23; // [rsp-8h] [rbp-28h]
  __int64 v24; // [rsp+8h] [rbp-18h]
  __int64 v25; // [rsp+10h] [rbp-10h]

  if ( !*(_QWORD *)(a2 + 192) )
    return 0;
  if ( (*(_BYTE *)(**(_QWORD **)(a1 + 208) + 9LL) & 2) == 0 )
  {
    v25 = a4;
    v24 = a3;
    merge_state = get_merge_state();
    a3 = v24;
    a4 = v25;
    if ( (merge_state & 3) == 0 || (*(_BYTE *)(a2 + 114) & 2) == 0 )
      goto LABEL_4;
LABEL_13:
    if ( (get_merge_state() & 3) != 0 )
      sub_169630(
        (int)"Please do not change anything in merge mode",
        a2,
        v17,
        v18,
        v19,
        v20,
        a5,
        a6,
        a7,
        a8,
        v21,
        v22,
        a11,
        a12,
        v23);
    else
      sub_17CE30(1204);
    return 0;
  }
  if ( (*(_BYTE *)(a2 + 114) & 2) != 0 )
    goto LABEL_13;
LABEL_4:
  if ( !*(_BYTE *)(a1 + 968) )
  {
    v14 = 0;
LABEL_10:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 128LL))(v14);
    return 1;
  }
  if ( *(_QWORD *)(a1 + 424) )
  {
    v13 = *(_DWORD *)(a1 + 416);
    if ( v13 == 2 )
    {
      v14 = *(_QWORD *)(a1 + 896);
    }
    else if ( v13 == 3 )
    {
      v14 = *(_QWORD *)(a1 + 904);
    }
    else
    {
      v14 = 0;
      if ( v13 == 1 )
        v14 = *(_QWORD *)(a1 + 888);
    }
    goto LABEL_10;
  }
  sub_1E69C0(*(double *)a5.m128_u64, a1, a2, a3, a4);
  return sub_1ECD40();
}
