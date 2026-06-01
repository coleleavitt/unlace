__int64 __fastcall sub_E5EC60(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  __int64 result; // rax
  bool v6; // zf

  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 72LL))(a1);
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 184LL))(a1, a2, a3);
  if ( a3 )
  {
    v6 = (*(_DWORD *)(a3 + 8))-- == 1;
    if ( v6 )
      result = sub_15D7BC0(v4, a3);
  }
  if ( a2 )
  {
    v6 = (*(_DWORD *)(a2 + 8))-- == 1;
    if ( v6 )
      return sub_15D7BC0(v4, a2);
  }
  return result;
}

