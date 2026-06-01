__int64 __fastcall sub_AB3AC0(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  __int64 v4; // rax
  __int64 result; // rax

  v4 = sub_15D1F10(**(_QWORD **)(a1[4] + 8LL * a2));
  result = sub_1673B10(a1 + 10, v4);
  if ( (_BYTE)result )
    return (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1 + 392LL))(a1, a2, a3);
  return result;
}

