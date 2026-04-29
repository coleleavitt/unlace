__int64 __fastcall sub_F0B30(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // rsi
  unsigned __int64 v13; // r14
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 tinfo_property; // rax
  __int64 v17; // rsi
  char v18; // r13
  __int64 v19; // rax
  __int64 v20; // r13
  unsigned __int64 v22; // [rsp+10h] [rbp-50h]
  unsigned __int8 v23; // [rsp+1Fh] [rbp-41h]
  _QWORD v24[8]; // [rsp+20h] [rbp-40h] BYREF

  v4 = *(_QWORD *)(a1 + 64);
  v24[1] = __readfsqword(0x28u);
  v23 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v4 + 8) + 936LL) + 80LL))(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 936LL));
  if ( !v23 )
    return v23;
  if ( *(_DWORD *)(a2 + 8) != 65 )
    return 0;
  v6 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 432LL) + 104LL * *(int *)(a2 + 32);
  if ( *(_DWORD *)v6 != 1 )
    return 0;
  v7 = *(_QWORD *)(v6 + 8) - *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8LL * *(int *)(a1 + 120));
  if ( v7 < 0 )
    return 0;
  *(_DWORD *)(v6 + 24) &= ~1u;
  v22 = v7;
  v8 = j__qalloc_or_throw(64);
  *(_QWORD *)(v8 + 8) = -4294967231LL;
  v9 = v8;
  *(_QWORD *)v8 = -1;
  *(_QWORD *)(v8 + 16) = 0xFFFFFFFFLL;
  *(_OWORD *)(v8 + 24) = 0;
  *(_QWORD *)(v8 + 40) = 0;
  *(_QWORD *)(v8 + 48) = 0;
  *(_DWORD *)(v8 + 56) = 0;
  *(_QWORD *)(v8 + 24) = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL);
  *(_DWORD *)(v8 + 32) = *(_DWORD *)(**(_QWORD **)(a1 + 88) + 4LL * *(int *)(a1 + 120));
  copy_tinfo_t(
    v8 + 48,
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL) + 432LL)
  + 104LL * *(int *)(**(_QWORD **)(a1 + 88) + 4LL * *(int *)(a1 + 120))
  + 80);
  v10 = j__qalloc_or_throw(64);
  *(_QWORD *)(v10 + 24) = v9;
  v11 = v10;
  *(_QWORD *)v10 = -1;
  *(_DWORD *)(v10 + 8) = 48;
  *(_QWORD *)(v10 + 12) = -1;
  *(_QWORD *)(v10 + 32) = 0;
  *(_QWORD *)(v10 + 40) = 0;
  *(_QWORD *)(v10 + 48) = 0;
  *(_DWORD *)(v10 + 56) = 0;
  v12 = *(_QWORD *)(a1 + 72);
  v13 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 216LL) + 130LL);
  if ( v22 % v13 )
  {
    copy_tinfo_t(v10 + 48, v12 + 200);
  }
  else
  {
    copy_tinfo_t(v10 + 48, v12 + 224);
    if ( v22 < v13 )
      goto LABEL_8;
    LODWORD(v22) = v22 / v13;
  }
  v14 = j__qalloc_or_throw(64);
  v15 = sub_240F50(*(_QWORD *)(a1 + 72), v22, 0, -1, 0, 0, 0);
  *(_QWORD *)(v14 + 24) = v11;
  *(_QWORD *)(v14 + 32) = v15;
  v11 = v14;
  *(_QWORD *)v14 = -1;
  *(_DWORD *)(v14 + 8) = 35;
  *(_QWORD *)(v14 + 12) = -1;
  *(_QWORD *)(v14 + 40) = 0;
  *(_QWORD *)(v14 + 48) = 0;
  *(_DWORD *)(v14 + 56) = 0;
  sub_2441C0(v14, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
LABEL_8:
  if ( a3 )
  {
    v24[0] = 0;
    tinfo_property = get_tinfo_property(*(_QWORD *)(v11 + 48), 10);
    v17 = *(_QWORD *)(a2 + 48);
    v24[0] = tinfo_property;
    v18 = compare_tinfo(tinfo_property, v17, 0);
    clear_tinfo_t(v24);
    if ( !v18 )
    {
      v19 = j__qalloc_or_throw(64);
      *(_QWORD *)v19 = -1;
      v20 = v19;
      *(_DWORD *)(v19 + 8) = 48;
      *(_QWORD *)(v19 + 24) = v11;
      *(_QWORD *)(v19 + 12) = -1;
      *(_QWORD *)(v19 + 32) = 0;
      *(_QWORD *)(v19 + 40) = 0;
      *(_QWORD *)(v19 + 48) = 0;
      *(_DWORD *)(v19 + 56) = 0;
      sub_32C540(v24, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), a2 + 48);
      copy_tinfo_t(v20 + 48, v24);
      v11 = v20;
      clear_tinfo_t(v24);
    }
    sub_255630(a2);
    *(_DWORD *)(a2 + 8) = 51;
    *(_QWORD *)(a2 + 24) = v11;
  }
  else
  {
    sub_255630(a2);
    sub_255850(a2, v11);
  }
  sub_2441C0(a2, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
  if ( *(_DWORD *)(a2 + 8) == 51 )
    *(_DWORD *)(a2 + 40) = get_tinfo_size(0, *(_QWORD *)(a2 + 48), 0);
  return v23;
}
