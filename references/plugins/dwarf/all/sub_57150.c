__int64 __fastcall sub_57150(__int64 a1, __int64 (__fastcall ***a2)(_QWORD, _QWORD, __int64))
{
  _QWORD *v2; // rbx
  __int64 v3; // rbp
  __int64 result; // rax
  bool v5; // dl

  v2 = *(_QWORD **)a1;
  v3 = *(_QWORD *)a1 + 8LL * *(_QWORD *)(a1 + 8);
  if ( v3 == *(_QWORD *)a1 )
    return 0;
  do
  {
    result = 0;
    v5 = 1;
    if ( *(_DWORD *)(*v2 + 272LL) == 2 )
    {
      result = (**a2)(a2, *v2, 1);
      v5 = (_DWORD)result == 0;
    }
    ++v2;
  }
  while ( v2 != (_QWORD *)v3 && v5 );
  return result;
}
