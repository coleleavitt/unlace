unsigned __int64 __fastcall sub_15D1F60(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 i; // rbx
  __int64 v5; // rdi

  result = *(unsigned int *)(a1 + 24);
  if ( (_DWORD)result )
  {
    for ( i = 0; i < result; ++i )
    {
      v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * i);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 360LL))(v5, a2);
      result = *(unsigned int *)(a1 + 24);
    }
  }
  return result;
}
