__int64 __fastcall clang_TParamCommandComment_getIndex(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v4; // rcx

  result = 0;
  if ( a1 )
  {
    if ( *(_BYTE *)(a1 + 12) == 11 )
    {
      v4 = *(_QWORD *)(a1 + 48);
      if ( v4 )
      {
        if ( a3 < (unsigned int)v4 )
          return *(unsigned int *)(*(_QWORD *)(a1 + 40) + 4LL * a3);
      }
    }
  }
  return result;
}

