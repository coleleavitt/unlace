__int64 __fastcall sub_11C320(_QWORD *a1, char a2)
{
  __int64 result; // rax
  char v3; // dl

  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 24LL))(*a1, **(_QWORD **)(*a1 + 16LL));
  v3 = *(_BYTE *)(result + 60);
  if ( !v3 )
    v3 = *(_DWORD *)(result + 56) == -1;
  if ( a2 != v3 )
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)a1[1] + 56LL))(a1[1], 45);
  return result;
}

