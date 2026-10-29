__int64 __fastcall clang_TargetInfo_getDefaultCallingConv(__int64 a1)
{
  __int64 (*v1)(void); // rdx
  __int64 result; // rax
  unsigned int v3; // eax

  if ( !a1 )
    return 100;
  if ( !*(_QWORD *)a1 )
    BUG();
  v1 = *(__int64 (**)(void))(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 80LL) + 17288LL) + 752LL);
  result = 1;
  if ( v1 != sub_5F7BD0 )
  {
    v3 = v1();
    if ( v3 <= 0x12 )
      return *((unsigned int *)qword_3C89E00 + v3);
    else
      return 100;
  }
  return result;
}

