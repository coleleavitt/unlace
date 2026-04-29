__int64 __fastcall sub_F0B30(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // rsi
  unsigned __int64 v18; // r14
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 tinfo_property; // rax
  __int64 v25; // rsi
  char v26; // r13
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // r13
  unsigned __int64 v32; // [rsp+10h] [rbp-50h]
  unsigned __int8 v33; // [rsp+1Fh] [rbp-41h]
  _QWORD v34[8]; // [rsp+20h] [rbp-40h] BYREF

  v4 = *(_QWORD *)(a1 + 64);
  v34[1] = __readfsqword(0x28u);
  v33 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v4 + 8) + 936LL) + 80LL))(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 936LL));
  if ( !v33 )
    return v33;
  if ( *(_DWORD *)(a2 + 8) != 65 )
    return 0;
  v6 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 432LL) + 104LL * *(int *)(a2 + 32);
  if ( *(_DWORD *)v6 != 1 )
    return 0;
  v7 = *(int *)(a1 + 120);
  v8 = *(_QWORD *)(a1 + 96);
  v9 = *(_QWORD *)(v6 + 8) - *(_QWORD *)(v8 + 8 * v7);
  if ( v9 < 0 )
    return 0;
  *(_DWORD *)(v6 + 24) &= ~1u;
  v32 = v9;
  v10 = j__qalloc_or_throw(64, a2, v8, v7);
  *(_QWORD *)(v10 + 8) = -4294967231LL;
  v11 = v10;
  *(_QWORD *)v10 = -1;
  *(_QWORD *)(v10 + 16) = 0xFFFFFFFFLL;
  *(_OWORD *)(v10 + 24) = 0;
  *(_QWORD *)(v10 + 40) = 0;
  *(_QWORD *)(v10 + 48) = 0;
  *(_DWORD *)(v10 + 56) = 0;
  *(_QWORD *)(v10 + 24) = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL);
  *(_DWORD *)(v10 + 32) = *(_DWORD *)(**(_QWORD **)(a1 + 88) + 4LL * *(int *)(a1 + 120));
  v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL) + 432LL)
      + 104LL * *(int *)(**(_QWORD **)(a1 + 88) + 4LL * *(int *)(a1 + 120))
      + 80;
  copy_tinfo_t();
  v15 = j__qalloc_or_throw(64, v12, v13, v14);
  *(_QWORD *)(v15 + 24) = v11;
  v16 = v15;
  *(_QWORD *)v15 = -1;
  *(_DWORD *)(v15 + 8) = 48;
  *(_QWORD *)(v15 + 12) = -1;
  *(_QWORD *)(v15 + 32) = 0;
  *(_QWORD *)(v15 + 40) = 0;
  *(_QWORD *)(v15 + 48) = 0;
  *(_DWORD *)(v15 + 56) = 0;
  v17 = *(_QWORD *)(a1 + 72);
  v18 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 216LL) + 130LL);
  if ( v32 % v18 )
  {
    v19 = v17 + 200;
    copy_tinfo_t();
  }
  else
  {
    v19 = v17 + 224;
    copy_tinfo_t();
    if ( v32 < v18 )
      goto LABEL_8;
    LODWORD(v32) = v32 / v18;
  }
  v22 = j__qalloc_or_throw(64, v19, v20, v21);
  v23 = sub_240F50(*(_QWORD *)(a1 + 72), v32, 0, -1, 0, 0, 0);
  *(_QWORD *)(v22 + 24) = v16;
  *(_QWORD *)(v22 + 32) = v23;
  v16 = v22;
  *(_QWORD *)v22 = -1;
  *(_DWORD *)(v22 + 8) = 35;
  *(_QWORD *)(v22 + 12) = -1;
  *(_QWORD *)(v22 + 40) = 0;
  *(_QWORD *)(v22 + 48) = 0;
  *(_DWORD *)(v22 + 56) = 0;
  sub_2441C0(v22, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
LABEL_8:
  if ( a3 )
  {
    v34[0] = 0;
    tinfo_property = get_tinfo_property();
    v25 = *(_QWORD *)(a2 + 48);
    v34[0] = tinfo_property;
    v26 = compare_tinfo();
    clear_tinfo_t();
    if ( !v26 )
    {
      v29 = j__qalloc_or_throw(64, v25, v27, v28);
      *(_QWORD *)v29 = -1;
      v30 = v29;
      *(_DWORD *)(v29 + 8) = 48;
      *(_QWORD *)(v29 + 24) = v16;
      *(_QWORD *)(v29 + 12) = -1;
      *(_QWORD *)(v29 + 32) = 0;
      *(_QWORD *)(v29 + 40) = 0;
      *(_QWORD *)(v29 + 48) = 0;
      *(_DWORD *)(v29 + 56) = 0;
      sub_32C540(v34, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), a2 + 48);
      copy_tinfo_t();
      v16 = v30;
      clear_tinfo_t();
    }
    sub_255630(a2);
    *(_DWORD *)(a2 + 8) = 51;
    *(_QWORD *)(a2 + 24) = v16;
  }
  else
  {
    sub_255630(a2);
    sub_255850(a2, v16);
  }
  sub_2441C0(a2, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
  if ( *(_DWORD *)(a2 + 8) == 51 )
    *(_DWORD *)(a2 + 40) = get_tinfo_size();
  return v33;
}
