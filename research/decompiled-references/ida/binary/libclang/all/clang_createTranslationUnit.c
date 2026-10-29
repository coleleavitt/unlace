__int64 __fastcall clang_createTranslationUnit(unsigned __int8 *a1, const char *a2)
{
  __int64 v3; // [rsp+8h] [rbp-10h] BYREF

  v3 = 0;
  if ( !a1 || !a2 )
    return 0;
  sub_611330(a1, a2, &v3);
  return v3;
}

