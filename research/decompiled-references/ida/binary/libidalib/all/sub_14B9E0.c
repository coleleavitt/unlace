__int64 __fastcall sub_14B9E0(_DWORD *a1)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  __int64 strlist_api; // rax

  if ( a1[2] != 4 )
    return 0;
  v2 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 2520LL);
  strlist_api = get_strlist_api();
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)strlist_api + 72LL))(strlist_api, v3 + 208);
  sub_175890(TProgram::application + 136LL, v2, 0);
  return 1;
}

