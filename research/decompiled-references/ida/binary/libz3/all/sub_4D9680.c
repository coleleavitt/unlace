__int64 __fastcall sub_4D9680(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rbp
  __int64 (__fastcall *v3)(_QWORD *, unsigned int); // rax
  __int64 v4; // rax

  v1 = *(_QWORD **)(a1 + 16);
  v2 = *(unsigned int *)(a1 + 24);
  v3 = *(__int64 (__fastcall **)(_QWORD *, unsigned int))(*v1 + 16LL);
  if ( v3 != sub_4C98C0 )
    return v3(*(_QWORD **)(a1 + 16), v2);
  v4 = v1[2];
  if ( !v4 || !*(_DWORD *)(v4 - 4) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD *))(*v1 + 24LL))(*(_QWORD *)(a1 + 16), v1 + 2);
    v4 = v1[2];
  }
  return *(_QWORD *)(v4 + 8 * v2);
}

