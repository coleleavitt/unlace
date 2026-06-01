__int64 __fastcall sub_2975B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // r14
  _QWORD *v7; // rax
  __int64 v8; // r15
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  _QWORD *v17; // r12

  v2 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v2 + 8) != 61 )
    return 0;
  if ( !sub_255A30(*(__int64 **)(v2 + 24)) )
    return 0;
  v4 = *(_QWORD *)(*(_QWORD *)(v2 + 64) + 24LL);
  if ( !*(_QWORD *)(v4 + 16) )
    return 0;
  v5 = *(_QWORD *)(v4 + 8);
  if ( *(_DWORD *)(v5 + 24) != 73 )
    return 0;
  v6 = *(_QWORD *)(v5 + 40);
  if ( (unsigned __int8)sub_285160(v6, 1, 1) )
    return 0;
  if ( (unsigned __int8)sub_285160(v6, 66, 1) )
    return 0;
  if ( (unsigned __int8)sub_285230(v6) )
    return 0;
  if ( *(_QWORD *)(v6 + 72) )
    return 0;
  v7 = *(_QWORD **)(*(_QWORD *)(v6 + 64) + 24LL);
  if ( v7[2] != 1 )
    return 0;
  v8 = *v7;
  v9 = *(_DWORD *)(*v7 + 24LL);
  if ( v9 != 78 && (v9 != 81 || !(unsigned __int8)sub_283EA0(a1, a2, **(_DWORD **)(v8 + 40))) )
    return 0;
  if ( *(_DWORD *)(v8 + 28) != -1 || (unsigned __int8)sub_2853C0(a2, 79, 1) )
    return 0;
  v12 = j__qalloc_or_throw(64, 79, v10, v11);
  *(_QWORD *)v12 = -1;
  v13 = v12;
  *(_DWORD *)(v12 + 8) = 0;
  *(_QWORD *)(v12 + 12) = -1;
  *(_QWORD *)(v12 + 48) = 0;
  *(_DWORD *)(v12 + 56) = 0;
  sub_25AFF0(v12, v6);
  v17 = sub_244460(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), v13, v14, v15, v16);
  sub_255630(v2);
  sub_255850((__int64 *)v2, (__int64)v17);
  sub_255050(v5 + 16);
  *(_DWORD *)(a2 + 8) = 76;
  return 1;
}
