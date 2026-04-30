unsigned __int64 __fastcall sub_317A00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // [rsp+8h] [rbp-40h] BYREF
  int v13; // [rsp+Ch] [rbp-3Ch] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-38h] BYREF
  int *v15; // [rsp+20h] [rbp-28h]
  unsigned __int64 v16; // [rsp+28h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  if ( *(char *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 352) + 16LL) + 32LL) + 9LL) < 0 )
  {
    v15 = nullptr;
    v12 = 700;
    *(_OWORD *)ptr = 0;
    sub_2EDC10((int **)ptr, nullptr, &v12, a4, a5, a6);
    if ( !ptr[0] || *(int *)ptr[0] > 1 )
      sub_187120((__int64)ptr, 0, 0, 0, v8, v9);
    v13 = 300;
    sub_2EDC10((int **)ptr, v15, &v13, v7, v8, v9);
    if ( !ptr[0] || *(int *)ptr[0] > 1 )
      sub_187120((__int64)ptr, 0, 0, 0, v10, v11);
    QT::QSplitter::setSizes(*(_QWORD *)(*(_QWORD *)(a1 + 352) + 8LL), ptr);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
  }
  return v16 - __readfsqword(0x28u);
}
