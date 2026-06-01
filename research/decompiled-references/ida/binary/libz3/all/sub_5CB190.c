__int64 __fastcall sub_5CB190(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 result; // rax
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v11; // [rsp+0h] [rbp-28h] BYREF
  __int64 v12; // [rsp+8h] [rbp-20h]

  v5 = a1[3];
  v6 = a1[5];
  v11 = 0;
  v12 = v5;
  sub_14B9BF0(v6, a2, &v11);
  sub_5D40E0(a1[52], v11, a3, a1[52] + 496LL);
  result = sub_14B9BF0(a1[5], *a3, a3);
  v8 = v11;
  if ( v11 )
  {
    v9 = v12;
    if ( (*(_DWORD *)(v11 + 8))-- == 1 )
      return sub_15D7BC0(v9, v8);
  }
  return result;
}

