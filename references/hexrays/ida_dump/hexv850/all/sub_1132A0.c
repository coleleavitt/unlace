__int64 __fastcall sub_1132A0(__int64 a1, int a2, __int64 a3, _DWORD *a4, __int64 a5, _DWORD *a6)
{
  _DWORD *v6; // rax
  _DWORD *v7; // r14
  _DWORD *v8; // r13
  __int64 v9; // r12
  __int64 result; // rax
  __int64 v13; // rsi
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // rdi

  v6 = a4 + 8;
  v7 = a6;
  v8 = a4 + 12;
  v9 = a5;
  if ( *a4 != 15 )
  {
    if ( a2 != 12 || *a6 != 15 )
      return 0;
    v9 = a3;
    v6 = a4 + 12;
    v8 = a4 + 8;
    v7 = a4;
    a3 = a5;
  }
  *(_QWORD *)(a1 + 56) = a3;
  *(_QWORD *)(a1 + 48) = v6;
  if ( !(unsigned __int8)sub_11B1C0(v8, a1 + 112, 0) )
    return 0;
  sub_1205C0(a1 + 32);
  v13 = *(_QWORD *)(a1 + 8);
  v14 = *(_QWORD *)(a1 + 48);
  v15 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 64) = **((_QWORD **)v8 + 1);
  v16 = *(_QWORD *)(*(_QWORD *)(v13 + 480) + 112LL);
  result = a2 == 12 ? sub_308630(v16, v13, v9, v7, v15, v14) : sub_308530(v16, v13, v9, v7, v15, v14);
  if ( !(_BYTE)result )
    return 0;
  *(_BYTE *)(a1 + 133) = 1;
  return result;
}
