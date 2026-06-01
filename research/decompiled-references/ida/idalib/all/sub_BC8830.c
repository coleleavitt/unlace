__int64 __fastcall sub_BC8830(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 result; // rax
  __int64 v4; // rdx
  _QWORD v5[4]; // [rsp+8h] [rbp-20h] BYREF

  v5[0] = a2;
  v2 = (_QWORD *)sub_F22F70(v5);
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 80LL))(a1, *v2 & 0xFFFFFFFFFFFFFFF8LL);
  v4 = sub_F22F50(v5);
  result = 1;
  if ( v4 )
  {
    if ( (*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
  }
  return result;
}
