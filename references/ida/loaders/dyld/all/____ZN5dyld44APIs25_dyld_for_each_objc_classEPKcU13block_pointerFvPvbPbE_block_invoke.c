__int64 __fastcall ___ZN5dyld44APIs25_dyld_for_each_objc_classEPKcU13block_pointerFvPvbPbE_block_invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // x0

  result = objc::objc_headeropt_rw_t<unsigned long>::isLoaded(
             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) + 240LL),
             a3);
  if ( (_DWORD)result )
    return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 16LL))();
  return result;
}
