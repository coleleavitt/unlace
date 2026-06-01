__int64 __fastcall clang_suspendTranslationUnit(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdi

  result = 0;
  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    if ( !v2 || (*(_BYTE *)(v2 + 2036) & 1) == 0 )
    {
      sub_FEFFE0();
      return 1;
    }
  }
  return result;
}

