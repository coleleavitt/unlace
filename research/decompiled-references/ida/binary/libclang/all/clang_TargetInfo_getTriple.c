__int64 __fastcall clang_TargetInfo_getTriple(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r12
  void *src[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v5; // [rsp+10h] [rbp-28h] BYREF

  if ( !a1 )
    return sub_690460();
  if ( !*(_QWORD *)a1 )
    BUG();
  v1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 80LL) + 17288LL);
  sub_2672380(src, *(_QWORD *)(v1 + 216), *(_QWORD *)(v1 + 224), 0);
  v2 = sub_6905C0(src[0], (size_t)src[1]);
  if ( src[0] != &v5 )
    operator delete(src[0], v5 + 1);
  return v2;
}

