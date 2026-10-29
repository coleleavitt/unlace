unsigned __int64 __fastcall sub_15D1830(__int64 a1)
{
  unsigned __int64 result; // rax
  unsigned __int64 i; // rbx
  __int64 v4; // rdi

  result = *(unsigned int *)(a1 + 24);
  if ( (_DWORD)result )
  {
    for ( i = 0; i < result; ++i )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * i);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 192LL))(v4);
      result = *(unsigned int *)(a1 + 24);
    }
  }
  return result;
}
