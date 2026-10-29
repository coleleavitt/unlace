__int64 __fastcall sub_446780(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // rbx
  int v6; // esi
  __int64 v7; // rax
  __int64 (__fastcall *v8)(__int64, unsigned __int8 *, int, char, __int64, _BYTE *, int, _DWORD *, _DWORD *, _DWORD *); // rdx
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d

  v2 = ((__int64)a2 << 6) + a1;
  v3 = v2 + 304;
  v4 = *(_QWORD *)(v2 + 360);
  if ( !v4 )
  {
    v6 = v2 + 324;
    v7 = sub_445140(0, (void *)(v2 + 324));
    v4 = v7;
    if ( !v7
      || (v8 = *(__int64 (__fastcall **)(__int64, unsigned __int8 *, int, char, __int64, _BYTE *, int, _DWORD *, _DWORD *, _DWORD *))(v7 + 8),
          v8 != sub_446230)
      && (char *)v8 != (char *)sub_446530 )
    {
      sub_47D740((unsigned int)"EscapeToUtfProc: invalid sub table", v6, (_DWORD)v8, v9, v10, v11);
    }
    *(_QWORD *)(v3 + 56) = v4;
  }
  return v4;
}

