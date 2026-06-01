__int64 __fastcall sub_2E0340(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rbx

  v2 = *a2;
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 720LL))(v2, 0);
  if ( v3 == -1 )
    return 7;
  v5 = v3;
  if ( *(_DWORD *)(get_eah(v2, 0, v4) + 24) != 8 )
  {
    if ( HIDWORD(v5) )
      return 7;
  }
  if ( (~((unsigned __int16)get_flags_ex(v5, 4) >> 8) & 6) != 0 )
    return 7;
  else
    return 3;
}
