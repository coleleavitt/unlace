unsigned __int64 __fastcall sub_15D1600(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 result; // rax
  unsigned __int64 i; // rbx
  __int64 v11; // rdi

  result = *(unsigned int *)(a1 + 24);
  if ( (_DWORD)result )
  {
    for ( i = 0; i < result; ++i )
    {
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * i);
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v11 + 136LL))(
        v11,
        a2,
        a3,
        a4,
        a5);
      result = *(unsigned int *)(a1 + 24);
    }
  }
  return result;
}
