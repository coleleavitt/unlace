__int64 __fastcall sub_308C0(int a1, __int64 a2)
{
  _DWORD *v2; // rax
  _BOOL4 v3; // r12d
  bool v4; // bp

  v2 = (_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2);
  if ( a1 == -1 )
  {
    v3 = *v2 >= 0;
    v4 = v2[1] >= 0;
    (*(void (__fastcall **)(__int64, __int64, bool))(*(_QWORD *)a2 + 16LL))(a2, 1, *v2 >= 0);
    (*(void (__fastcall **)(__int64, __int64, bool))(*(_QWORD *)a2 + 16LL))(a2, 2, v4);
    (*(void (__fastcall **)(__int64, __int64, _BOOL4))(*(_QWORD *)a2 + 16LL))(a2, 3, v3);
  }
  return 1;
}

