__int64 __fastcall sub_E82110(__int64 a1, void (__fastcall ***a2)(__int64, _QWORD, __int64, __int64), __int64 a3)
{
  void (__fastcall *v3)(__int64, _QWORD, __int64, __int64); // rax
  _DWORD *v4; // rcx

  v3 = **a2;
  if ( !*(_WORD *)(a3 + 4)
    && (v4 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL)) != nullptr
    && !*v4
    && v4[1] == 8
    && *(_DWORD *)(a3 + 24) == 1 )
  {
    v3(a1, a2, *(_QWORD *)(a3 + 32), 0);
    return a1;
  }
  else
  {
    v3(a1, a2, a3, 1);
    return a1;
  }
}

