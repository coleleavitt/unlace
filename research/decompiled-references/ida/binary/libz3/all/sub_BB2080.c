__int64 __fastcall sub_BB2080(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // rdi
  unsigned __int8 v8; // [rsp+Fh] [rbp-39h]
  unsigned __int8 v9; // [rsp+1Fh] [rbp-29h] BYREF
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  sub_1579480(v10, a1 + 1224);
  v9 = 0;
  result = sub_BE4BC0(a1 + 3856, v10[0], a3, &v9);
  if ( (_BYTE)result )
    result = v9 ^ 1u;
  v5 = v10[0];
  if ( v10[0] )
  {
    v6 = v10[1];
    if ( (*(_DWORD *)(v10[0] + 8LL))-- == 1 )
    {
      v8 = result;
      sub_15D7BC0(v6, v5);
      return v8;
    }
  }
  return result;
}

