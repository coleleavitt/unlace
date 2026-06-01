unsigned __int64 __fastcall sub_C17150(__int64 a1, double a2, double a3, __m128 a4)
{
  __int64 v4; // rdi
  unsigned __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 8);
  result = *(unsigned int *)(*(_QWORD *)v4 + 712LL);
  if ( !(_DWORD)result )
    return sub_C15470(v4, a2, a3, a4);
  return result;
}

