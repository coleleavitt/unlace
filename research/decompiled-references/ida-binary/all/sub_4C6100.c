__int64 __fastcall sub_4C6100(__int64 a1, __int64 a2, _QWORD *a3)
{
  _DWORD *v4; // rax

  if ( !a2 )
    return 0xFFFFFFFFLL;
  v4 = (_DWORD *)sub_4CE740(a2);
  if ( !v4 || v4[10] != 2 )
    return 0xFFFFFFFFLL;
  if ( a3 )
    *a3 = v4;
  return (*(__int64 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v4 + 448LL))(v4, a2);
}
