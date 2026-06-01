__int64 __fastcall dwarf_get_endian_copy_function(__int64 a1)
{
  __int64 result; // rax

  result = 0;
  if ( a1 )
    return *(_QWORD *)(a1 + 8296);
  return result;
}

