__int64 __fastcall sub_15CCC0(_BYTE *a1)
{
  __int64 result; // rax
  __int64 v2; // rbx

  *a1 = 0;
  result = get_module_data();
  if ( !result )
  {
    *a1 = 1;
    v2 = operator new(0x3C0u);
    sub_143C00(v2);
    return set_module_data();
  }
  return result;
}

