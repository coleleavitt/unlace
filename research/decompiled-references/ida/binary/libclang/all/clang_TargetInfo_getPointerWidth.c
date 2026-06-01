__int64 __fastcall clang_TargetInfo_getPointerWidth(__int64 a1)
{
  unsigned __int8 *v1; // rdi
  __int64 (*v2)(void); // rax

  if ( !a1 )
    return 0xFFFFFFFFLL;
  if ( !*(_QWORD *)a1 )
    BUG();
  v1 = *(unsigned __int8 **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 80LL) + 17288LL);
  v2 = *(__int64 (**)(void))(*(_QWORD *)v1 + 32LL);
  if ( (char *)v2 == (char *)sub_5F7BC0 )
    return v1[8];
  else
    return v2();
}

