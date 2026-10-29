__int64 __fastcall ___ZN5dyld44APIs35dyld_shared_cache_find_iterate_textEPKhPPKcU13block_pointerFvPK33dyld_shared_cache_dylib_text_infoE_block_invoke(
        __int64 result,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // x8

  v3 = *(_QWORD *)(*(_QWORD *)(result + 32) + 8LL);
  if ( !*(_QWORD *)(v3 + 24) )
    *(_QWORD *)(v3 + 24) = a3;
  return result;
}
