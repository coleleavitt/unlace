__int64 __fastcall sub_4116C0(__int64 a1, unsigned int a2, __int64 a3)
{
  int v4; // eax
  __int64 result; // rax

  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 64LL))(a3);
  if ( v4 == -1 )
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a3 + 72LL))(a3, a2);
  result = a2 & -v4;
  *(_DWORD *)(a1 + 16) = result;
  return result;
}

