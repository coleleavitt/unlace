__int64 __fastcall sub_6BFF70(__int64 a1, __int64 a2, _DWORD *a3, __int64 *a4)
{
  _DWORD *v4; // rax
  __int64 v7; // r14
  __int64 v8; // r15
  _DWORD *v9; // rax
  _DWORD *v10; // rax
  __int64 v11; // r12
  __int64 v12; // r13
  __int64 v13; // r13
  char v14; // al
  char v15; // al
  _DWORD *v16; // [rsp+8h] [rbp-50h]
  _DWORD *v17; // [rsp+8h] [rbp-50h]
  _BYTE v18[57]; // [rsp+1Fh] [rbp-39h] BYREF

  if ( *(_WORD *)(a2 + 4) )
    return 0;
  v4 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( !v4 || *v4 || v4[1] != 2 || *(_DWORD *)(a2 + 24) != 2 )
    return 0;
  v7 = *(_QWORD *)(a2 + 40);
  v8 = *(_QWORD *)(a2 + 32);
  if ( *(_WORD *)(v7 + 4)
    || (v9 = *(_DWORD **)(*(_QWORD *)(v7 + 16) + 24LL)) == nullptr
    || *v9 != 5
    || v9[1] != 16
    || *(_DWORD *)(v7 + 24) != 2
    || (v11 = *(_QWORD *)(v7 + 32),
        v17 = a3,
        v13 = *(_QWORD *)(v7 + 40),
        v14 = sub_1666AE0(a1, *(_QWORD *)(a2 + 32), a3, v18),
        a3 = v17,
        !v14)
    || *v17
    || (v15 = sub_1666AE0(a1, v13, v17, v18), a3 = v17, !v15) )
  {
    if ( *(_WORD *)(v8 + 4) )
      return 0;
    v10 = *(_DWORD **)(*(_QWORD *)(v8 + 16) + 24LL);
    if ( !v10 )
      return 0;
    if ( *v10 != 5 )
      return 0;
    if ( v10[1] != 16 )
      return 0;
    if ( *(_DWORD *)(v8 + 24) != 2 )
      return 0;
    v11 = *(_QWORD *)(v8 + 32);
    v16 = a3;
    v12 = *(_QWORD *)(v8 + 40);
    if ( !(unsigned __int8)sub_1666AE0(a1, v7, a3, v18) || *v16 || !(unsigned __int8)sub_1666AE0(a1, v12, v16, v18) )
      return 0;
  }
  if ( v11 )
    ++*(_DWORD *)(v11 + 8);
  sub_6BFE30(*a4, a4[1]);
  *a4 = v11;
  return 1;
}

