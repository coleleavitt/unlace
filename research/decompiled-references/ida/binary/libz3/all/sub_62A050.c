__int64 __fastcall sub_62A050(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 *a4)
{
  __int64 v5; // rsi
  __int64 result; // rax
  __int64 v7; // rdi
  _QWORD v9[3]; // [rsp+0h] [rbp-18h] BYREF

  sub_64B4C0(v9, *(_QWORD *)(a1 + 8), a2, a3);
  result = v9[0];
  v9[0] = *a4;
  v5 = v9[0];
  *a4 = result;
  if ( v5 )
  {
    v7 = v9[1];
    if ( (*(_DWORD *)(v5 + 8))-- == 1 )
      return sub_15D7BC0(v7, v5);
  }
  return result;
}

