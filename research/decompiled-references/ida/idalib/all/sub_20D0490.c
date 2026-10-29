__int64 __fastcall sub_20D0490(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 (__fastcall *v5)(__int64, __int64); // rcx
  __int64 v6; // rdi

  result = (__int64)a2;
  v3 = *(_QWORD *)(a1 + 24);
  if ( a2[9] == -1 )
  {
    a2[9] = v3;
    v4 = 0;
    a2[8] = 0;
  }
  else
  {
    v4 = (unsigned int)a2[8];
  }
  if ( v4 < v3 )
  {
    v5 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 24LL);
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v4);
    if ( v5 == sub_20CEB60 )
      return (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v6 + 72LL))(v6, a2);
    else
      return v5((__int64)a2, v6);
  }
  return result;
}
