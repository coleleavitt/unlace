__int64 __fastcall sub_C668F0(const __m128i *a1, __int64 a2)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // rax
  __int64 *v12; // rdx
  __m128i *v14; // rsi
  __m128i *v15; // r12
  __int64 v16; // r13
  unsigned __int8 **v17; // r12
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // rax
  __int64 v24; // [rsp+8h] [rbp-50h] BYREF
  __int64 v25; // [rsp+10h] [rbp-48h] BYREF
  char v26; // [rsp+18h] [rbp-40h]
  char v27; // [rsp+20h] [rbp-38h]

  if ( !(unsigned __int8)sub_C960B0(a2) )
  {
    v8 = *(_QWORD *)(a2 + 16);
    if ( (v8 & 4) != 0 )
      v9 = sub_C93DC0(a2, *(_QWORD *)(a1->m128i_i64[0] + 16));
    else
      v9 = *(_QWORD *)((v8 & 0xFFFFFFFFFFFFFFF8LL) + 8);
    sub_A4F1C0(&v25, *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL));
    v10 = v25;
    goto LABEL_5;
  }
  if ( *(char *)(*(_QWORD *)(*(_QWORD *)(a1->m128i_i64[0] + 16) + 2320LL) + 1LL) >= 0 )
  {
    v17 = (unsigned __int8 **)sub_E33C90(a1->m128i_i64[0], a2, 2489, 0);
    v14 = (__m128i *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( !v17 )
      goto LABEL_8;
    sub_AE9DF0(v17, v14->m128i_i64[1], 8u);
    v18 = sub_EEC8C0(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    v26 = 1;
    v25 = v18;
    sub_AEC610((__int64 *)v17, &v25);
  }
  v14 = (__m128i *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
LABEL_8:
  if ( (unsigned __int8)sub_C5C820(a1, v14, v4, v5, v6, v7) )
  {
    v15 = (__m128i *)a1->m128i_i64[1];
    v16 = a1->m128i_i64[0];
    if ( (unsigned __int8)sub_C32EA0(a1->m128i_i64[0], (_DWORD *)a2, v15, 7u, v15[8].m128i_i8[1]) )
    {
      if ( (v15[1].m128i_i8[8] & 1) == 0 )
      {
        sub_C2FC60((__int64)&v25, v16, a2, v15);
        if ( v27 )
        {
          v23 = sub_A7A9D0(*(_QWORD *)(a1->m128i_i64[0] + 16), v25, v19, v20, v21, v22);
          sub_A4F1C0(&v24, *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF0LL));
          v10 = v24;
LABEL_5:
          v11 = sub_A4F300(v10);
          sub_C24210(a1->m128i_i64[1], v11, v12, 0);
          return 1;
        }
      }
    }
  }
  return 0;
}
