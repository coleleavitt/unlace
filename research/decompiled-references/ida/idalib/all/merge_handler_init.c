__int64 __fastcall merge_handler_init(__int64 a1, __int64 (__fastcall *a2)(__int64, __int64, _QWORD))
{
  __int64 v3; // rsi
  __int64 result; // rax
  __int64 v5; // rbx

  v3 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 72) = 0;
  result = *(unsigned int *)(v3 + 28);
  if ( (int)result > 0 )
  {
    v5 = 0;
    do
    {
      result = a2(a1, v3, *(unsigned int *)(v3 + 4LL * (int)v5 + 16));
      *(_QWORD *)(a1 + 8 * v5 + 56) = result;
      *(_DWORD *)(result + 12) = v5;
      v3 = *(_QWORD *)(a1 + 8);
      ++v5;
    }
    while ( *(_DWORD *)(v3 + 28) > (int)v5 );
  }
  return result;
}
