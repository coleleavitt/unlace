__int64 __fastcall clang_Comment_getNumChildren(__int64 a1)
{
  __int64 v1; // rbx

  if ( !a1 )
    return 0;
  v1 = sub_767080();
  return (unsigned int)((v1 - sub_767040(a1)) >> 3);
}

