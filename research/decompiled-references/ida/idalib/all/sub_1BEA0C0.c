__int64 __fastcall sub_1BEA0C0(__int64 a1, unsigned __int8 **a2)
{
  __int64 v4; // r12
  __int64 v5; // r14
  _QWORD *v6; // rbp
  __int64 v7; // rax
  __int64 (__fastcall *v8)(__int64); // rcx
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64); // rax
  __int64 v11; // rax
  _QWORD *v12; // rbx
  __int64 v13; // rax
  __int64 (__fastcall *v14)(__int64); // rcx
  __int64 v15; // rdi
  __int64 v16; // rbp
  __int64 (__fastcall *v17)(__int64); // rax
  __int64 v18; // rax
  unsigned __int8 v19; // dl
  unsigned __int64 v20; // rsi
  __int64 v22; // [rsp+8h] [rbp-40h]

  v4 = *(_QWORD *)(**(_QWORD **)a1 + 40LL);
  v5 = *(_QWORD *)(**(_QWORD **)(a1 + 8) + 40LL);
  if ( **(_BYTE **)(a1 + 16) == 1 )
  {
    v4 = *(_QWORD *)(**(_QWORD **)(a1 + 8) + 40LL);
    v5 = *(_QWORD *)(**(_QWORD **)a1 + 40LL);
  }
  v6 = **(_QWORD ***)(a1 + 32);
  v7 = sub_E900C0(v5);
  if ( !v7 || !v6 )
    goto LABEL_11;
  if ( v6 != (_QWORD *)v7 )
  {
    v8 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL);
    if ( v8 == sub_A01140 )
    {
      v9 = (__int64)v6;
      v22 = sub_B70A60(v7);
      v10 = *(__int64 (__fastcall **)(__int64))(*v6 + 32LL);
      if ( v10 == sub_A01140 )
      {
LABEL_8:
        v11 = sub_B70A60(v9);
        goto LABEL_9;
      }
    }
    else
    {
      v9 = (__int64)v6;
      v22 = v8(v7);
      v10 = *(__int64 (__fastcall **)(__int64))(*v6 + 32LL);
      if ( v10 == sub_A01140 )
        goto LABEL_8;
    }
    v11 = v10(v9);
LABEL_9:
    if ( v22 == v11 )
      goto LABEL_10;
LABEL_11:
    sub_AE9DF0(a2, v6[6] & 0xFFFFFFFFFFFFFFF0LL, 8u);
    goto LABEL_12;
  }
LABEL_10:
  sub_AE9DF0(a2, v5, 0xBu);
LABEL_12:
  v12 = **(_QWORD ***)(a1 + 40);
  v13 = sub_E900C0(v4);
  if ( !v13 || !v12 )
    goto LABEL_20;
  if ( v12 != (_QWORD *)v13 )
  {
    v14 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 32LL);
    if ( v14 == sub_A01140 )
    {
      v15 = (__int64)v12;
      v16 = sub_B70A60(v13);
      v17 = *(__int64 (__fastcall **)(__int64))(*v12 + 32LL);
      if ( v17 == sub_A01140 )
      {
LABEL_17:
        v18 = sub_B70A60(v15);
        goto LABEL_18;
      }
    }
    else
    {
      v15 = (__int64)v12;
      v16 = v14(v13);
      v17 = *(__int64 (__fastcall **)(__int64))(*v12 + 32LL);
      if ( v17 == sub_A01140 )
        goto LABEL_17;
    }
    v18 = v17(v15);
LABEL_18:
    if ( v16 == v18 )
      goto LABEL_19;
LABEL_20:
    v19 = 8;
    v20 = v12[6] & 0xFFFFFFFFFFFFFFF0LL;
    return sub_AE9DF0(a2, v20, v19);
  }
LABEL_19:
  v19 = 11;
  v20 = v4;
  return sub_AE9DF0(a2, v20, v19);
}
