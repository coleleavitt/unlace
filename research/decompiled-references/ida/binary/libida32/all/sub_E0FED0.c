__int64 __fastcall sub_E0FED0(__int64 a1, unsigned __int64 a2, int a3, int a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // eax

  if ( *(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 96LL))(a1) + 8) )
  {
    v9 = sub_BDCD00(a2, a2, v6, v7, v8);
    return sub_E0FB00(a1, v9, a3, a4, 0);
  }
  else
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 80LL))(a1, 0);
    return 0;
  }
}

