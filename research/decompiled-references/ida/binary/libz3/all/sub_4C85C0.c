_QWORD *__fastcall sub_4C85C0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  _QWORD *result; // rax
  __int64 v8; // r12
  __int64 v9; // rbp
  _DWORD v10[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  v5 = *(_QWORD *)(a2 + 8);
  v10[0] = a4;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 168LL))(v5);
  if ( v6 )
    return (_QWORD *)v6;
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(**(_QWORD **)(a2 + 8) + 144LL))(
         *(_QWORD *)(a2 + 8),
         a2,
         a3,
         v10[0]);
  if ( !v8 )
    return (_QWORD *)v6;
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _DWORD *))(**(_QWORD **)(a2 + 8) + 88LL))(
         *(_QWORD *)(a2 + 8),
         a2,
         1,
         v10);
  if ( !v9 )
  {
    sub_4CF1F0(v8);
    return (_QWORD *)v6;
  }
  result = (_QWORD *)sub_186B270(0x18u);
  *result = &off_1C4EE18;
  result[1] = v8;
  result[2] = v9;
  return result;
}

