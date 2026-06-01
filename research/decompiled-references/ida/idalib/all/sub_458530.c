__int64 __fastcall sub_458530(__int64 a1, _QWORD *a2, int a3, int a4)
{
  __int64 v4; // rbp
  __int64 v5; // r12
  __int64 result; // rax
  unsigned __int64 i; // rbx

  v4 = *(_QWORD *)(a1 + 8LL * a4 + 56);
  v5 = *(_QWORD *)(a1 + 8LL * a3 + 56);
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v4 + 40LL))(v4, *a2, 0);
  for ( i = result; result != -1; i = result )
  {
    if ( i >= a2[1] )
      break;
    (*(void (__fastcall **)(__int64, __int64, unsigned __int64))(*(_QWORD *)v5 + 80LL))(v5, v4, i);
    result = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)v4 + 40LL))(v4, i, 1);
  }
  return result;
}
