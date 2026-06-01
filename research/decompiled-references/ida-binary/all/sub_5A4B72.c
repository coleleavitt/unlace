__int64 __fastcall sub_5A4B72(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 52);
  if ( (_DWORD)result != 2 )
    return sub_5A5BE2(a1);
  return result;
}
