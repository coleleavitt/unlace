__int64 __fastcall ___ZN5dyld44APIs20_dyld_get_image_nameEj_block_invoke(__int64 result)
{
  __int64 v1; // x8
  unsigned __int64 v2; // x9
  __int64 v3; // x19

  v1 = *(_QWORD *)(result + 40);
  v2 = *(unsigned int *)(result + 48);
  if ( *(_QWORD *)(v1 + 48) > v2 )
  {
    v3 = result;
    result = dyld4::Loader::path(*(dyld4::Loader **)(*(_QWORD *)(v1 + 40) + 8 * v2));
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 32) + 8LL) + 24LL) = result;
  }
  return result;
}
