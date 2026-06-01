__int64 __fastcall sub_19ECC90(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r9
  __int64 v6; // r13
  unsigned int v7; // r12d
  unsigned int v8; // eax
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 vars0[2]; // [rsp+0h] [rbp+0h] BYREF

  sub_19EC960((__int64)vars0, *(_QWORD *)(a2 + 16), 0, a4, a5);
  v6 = vars0[0];
  v7 = *(_DWORD *)(a2 + 4);
  if ( (*(_BYTE *)(vars0[0] + 28) & 0x7Fu) - 34 > 5 )
    goto LABEL_4;
  v8 = sub_B75A50(vars0[0], 0);
  if ( v8 )
  {
    if ( sub_19E9EE0(v8) )
LABEL_4:
      sub_19EB530(*(_QWORD *)(a1 + 16), *(__int64 **)(a1 + 24), (__int64)vars0, v7, *(_QWORD *)(a1 + 40), v5);
  }
  else if ( !(unsigned __int8)sub_B74ED0(v6, 0, v9, v10)
         || (*(_BYTE *)(*(_QWORD *)(**(_QWORD **)(a1 + 16) + 232LL) + 1LL) & 8) != 0 && !sub_19EA510(v6, 0, v12, v13) )
  {
    goto LABEL_4;
  }
  return 1;
}
