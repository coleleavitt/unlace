__int64 __fastcall clang_Comment_getChild(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r12

  if ( a1 && (v4 = sub_767080(), a3 < (unsigned int)((v4 - sub_767040(a1)) >> 3)) )
    return *(_QWORD *)(sub_767040(a1) + 8LL * a3);
  else
    return 0;
}

