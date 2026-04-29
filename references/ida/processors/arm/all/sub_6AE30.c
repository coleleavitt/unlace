__int64 __fastcall sub_6AE30(unsigned __int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rdi

  result = 1;
  v2 = a1 & 0x600;
  if ( v2 != 1536 && (a1 & 0x100) != 0 )
  {
    result = 0;
    v3 = (a1 >> 12) & 1;
    if ( v2 )
      return (unsigned int)v3;
  }
  return result;
}
