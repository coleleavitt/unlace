__int64 __fastcall sub_1FB2560(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 (__fastcall *v6)(__int64); // rax
  __int64 v7; // rax
  _BOOL8 v9; // r12
  __int64 v10; // r12
  __int64 **v11; // rsi
  _QWORD v12[4]; // [rsp+8h] [rbp-20h] BYREF

  sub_1FC48E0(*(_QWORD *)(a1 + 8));
  if ( (unsigned __int8)sub_B8E180((unsigned __int64)(a2 + 9)) )
  {
    sub_9B9C90(*(_QWORD *)(a1 + 16), 0);
  }
  else
  {
    v9 = sub_1FB12E0((__int64)a2);
    sub_9B9C90(*(_QWORD *)(a1 + 16), v9);
    if ( v9 )
      sub_1F92A90(*(_QWORD *)(a1 + 8), (__int64)a2, *(_QWORD *)(a1 + 8) + 2000LL);
  }
  if ( (*((_BYTE *)a2 + 28) & 0x7F) == 0x26 )
  {
    sub_9B9C90(*(_QWORD *)(a1 + 16), (unsigned __int16)(*((_DWORD *)a2 + 21) >> 13));
    if ( (*((_DWORD *)a2 + 21) & 0x1FFFE000) != 0 )
    {
      v10 = sub_B98F20((__int64)a2) + 8LL * (unsigned __int16)(*((_DWORD *)a2 + 21) >> 13);
      v11 = (__int64 **)sub_B98F20((__int64)a2);
      sub_1FA1570(a1, v11, (v10 - (__int64)v11) >> 3);
    }
  }
  v6 = *(__int64 (__fastcall **)(__int64))(*a2 + 64LL);
  if ( v6 == sub_6EF210 )
    v7 = sub_B7F750(a2, v12, (__int64)sub_6EF210, v3, v4, v5);
  else
    v7 = v6((__int64)a2);
  return sub_183F100(a1 + 24, v7);
}
