__int64 __fastcall sub_345E80(__int64 a1)
{
  __int64 v1; // rax
  int v2; // ecx
  int v3; // r8d
  int v4; // r9d
  __int64 v5; // rsi
  unsigned __int8 v6; // bp
  unsigned __int8 v8; // [rsp+7h] [rbp-21h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v8 = 0;
  v1 = sub_534430("navigator:ToggleDisplay");
  if ( v1 )
    sub_533460(v1, 7, (unsigned int)&v8, v2, v3, v4);
  v5 = 0;
  v6 = v8;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 40) + 40LL) == 5 )
    v5 = v8 & (*(_BYTE *)(*(_QWORD *)(a1 + 696) + 345LL) ^ 1u);
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 80) + 104LL))(*(_QWORD *)(a1 + 80), v5);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 704) + 104LL))(
    *(_QWORD *)(a1 + 704),
    v6 & (*(_BYTE *)(*(_QWORD *)(a1 + 696) + 345LL) ^ 1u));
  return reg_int_op("ComboVisible", 1, v6, 0);
}
