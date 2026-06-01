__int64 __fastcall sub_297BD0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // eax
  __int64 *v5; // r12
  __int64 v6; // r13
  __int64 v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  _QWORD *v16; // rbp
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rdi

  v2 = *(_QWORD *)(a2 + 24);
  v3 = *(_DWORD *)(v2 + 8);
  if ( v3 != 61 && v3 )
    return 0;
  v5 = *(__int64 **)(*(_QWORD *)(v2 + 64) + 24LL);
  if ( !v5[2] )
    return 0;
  if ( *(_QWORD *)(*v5 + 24) != -4294967223LL )
    return 0;
  v6 = *(_QWORD *)(*v5 + 40);
  if ( (unsigned __int8)sub_285160(v6, 1, 1) )
    return 0;
  if ( (unsigned __int8)sub_285160(v6, 66, 1) )
    return 0;
  if ( (unsigned __int8)sub_285230(v6) )
    return 0;
  if ( *(_QWORD *)(v6 + 72) )
    return 0;
  v7 = *(_QWORD *)(v6 + 64);
  if ( *(_QWORD *)(v7 + 8) != -4294967225LL )
    return 0;
  v8 = *(_QWORD **)(v7 + 24);
  if ( v8[2] != 1 || *(_QWORD *)(*v8 + 24LL) != -4294967218LL || (get_tinfo_property() & 0x2F) == 0xD )
    return 0;
  v11 = j__qalloc_or_throw(64, 2, v9, v10);
  *(_QWORD *)v11 = -1;
  v12 = v11;
  *(_DWORD *)(v11 + 8) = 0;
  *(_QWORD *)(v11 + 12) = -1;
  *(_QWORD *)(v11 + 48) = 0;
  *(_DWORD *)(v11 + 56) = 0;
  sub_25AFF0(v11, v6);
  v16 = sub_244460(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), v12, v13, v14, v15);
  sub_255630(v2);
  sub_255850((__int64 *)v2, (__int64)v16);
  v17 = *v5;
  v18 = *(_QWORD *)*v5;
  v19 = *v5 + 16;
  **(_QWORD **)(*v5 + 8) = v18;
  *(_QWORD *)(v18 + 8) = *(_QWORD *)(v17 + 8);
  sub_255050(v19);
  qfree(v17);
  --v5[2];
  return 1;
}
