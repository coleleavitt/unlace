__int64 __fastcall sub_5A51AC(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 64);
  if ( (_DWORD)result != 2 )
    return sub_5A5DC0(a1);
  return result;
}
