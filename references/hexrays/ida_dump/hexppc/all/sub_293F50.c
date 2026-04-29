__int64 __fastcall sub_293F50(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // eax
  __int64 **v5; // r12
  _QWORD *v6; // r13
  __int64 v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // rbp
  __int64 *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rdi

  v2 = *(_QWORD *)(a2 + 24);
  v3 = *(_DWORD *)(v2 + 8);
  if ( v3 != 61 && v3 )
    return 0;
  v5 = *(__int64 ***)(*(_QWORD *)(v2 + 64) + 24LL);
  if ( !v5[2] )
    return 0;
  if ( (*v5)[3] != -4294967223LL )
    return 0;
  v6 = (_QWORD *)(*v5)[5];
  if ( (unsigned __int8)sub_2814E0((__int64)v6, 1, 1) )
    return 0;
  if ( (unsigned __int8)sub_2814E0((__int64)v6, 66, 1) )
    return 0;
  if ( (unsigned __int8)sub_2815B0((__int64)v6) )
    return 0;
  if ( v6[9] )
    return 0;
  v7 = v6[8];
  if ( *(_QWORD *)(v7 + 8) != -4294967225LL )
    return 0;
  v8 = *(_QWORD **)(v7 + 24);
  if ( v8[2] != 1 || *(_QWORD *)(*v8 + 24LL) != -4294967218LL || (get_tinfo_property(v6[6], 2) & 0x2F) == 0xD )
    return 0;
  v9 = j__qalloc_or_throw(64);
  *(_QWORD *)v9 = -1;
  v10 = v9;
  *(_DWORD *)(v9 + 8) = 0;
  *(_QWORD *)(v9 + 12) = -1;
  *(_QWORD *)(v9 + 48) = 0;
  *(_DWORD *)(v9 + 56) = 0;
  sub_257370(v9, (__int64)v6);
  v14 = sub_2407E0(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), v10, v11, v12, v13);
  sub_2519B0(v2);
  sub_251BD0((__int64 *)v2, (__int64)v14);
  v15 = *v5;
  v16 = **v5;
  v17 = (__int64)(*v5 + 2);
  *(_QWORD *)(*v5)[1] = v16;
  *(_QWORD *)(v16 + 8) = v15[1];
  sub_2513D0(v17);
  qfree(v15);
  v5[2] = (__int64 *)((char *)v5[2] - 1);
  return 1;
}
