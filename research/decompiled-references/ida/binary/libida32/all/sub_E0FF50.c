__int64 __fastcall sub_E0FF50(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // r12d
  int v6; // ebp
  int v7; // r13d

  v5 = a4;
  v6 = a3;
  v7 = sub_BDCD00(a2, a2, a3, a4, a5);
  if ( *(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 96LL))(a1) + 8)
    && !*(_DWORD *)(*(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 96LL))(a1) + 8) + 8LL) )
  {
    return sub_E0FB00(a1, v7, v6, v5, 1u);
  }
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 80LL))(a1, 0);
  return 0;
}

