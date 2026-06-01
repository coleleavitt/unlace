const char *__fastcall sub_201E5E0(int a1)
{
  const char *result; // rax

  if ( !a1 )
    return "DW_APPLE_ENUM_KIND_Closed";
  result = "DW_APPLE_ENUM_KIND_Open";
  if ( a1 != 1 )
    return nullptr;
  return result;
}
