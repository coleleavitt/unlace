unsigned __int64 __fastcall sub_444680(__int64 a1, unsigned int *a2, int a3)
{
  __int64 v3; // rbp
  unsigned __int64 result; // rax
  unsigned __int64 i; // rbx

  v3 = *(_QWORD *)(a1 + 8LL * a3 + 56);
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v3 + 40LL))(v3, *a2, 0);
  for ( i = result; result != -1; i = result )
  {
    result = a2[1];
    if ( i >= result )
      break;
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v3 + 88LL))(v3, i);
    result = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)v3 + 40LL))(v3, i, 1);
  }
  return result;
}

