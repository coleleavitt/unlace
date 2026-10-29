unsigned __int64 __fastcall sub_1FC0C80(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v3)(__int64); // rax
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 result; // rax

  v3 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
  if ( v3 == sub_B94CE0 )
    v4 = sub_B709C0(a2);
  else
    v4 = v3(a2);
  v5 = *(_QWORD *)(v4 + 168);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (2 * (_BYTE)v5) & 6 | (unsigned __int64)((v5 & 0xFFFFFFFFFFFFFFFCLL) != 0));
  if ( (v5 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    sub_183F100(a1 + 32, v5 & 0xFFFFFFFFFFFFFFFCLL);
  result = sub_1FBD8D0(a1, a2, v6, v7, v8, v9);
  *(_DWORD *)(a1 + 224) = 104;
  return result;
}
