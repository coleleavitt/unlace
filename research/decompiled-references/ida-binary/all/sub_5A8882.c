__int64 __fastcall sub_5A8882(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 32);
  if ( (_DWORD)result != 2 )
    return sub_5A8922(a1);
  return result;
}
