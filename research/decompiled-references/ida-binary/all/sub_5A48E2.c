__int64 __fastcall sub_5A48E2(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 1256);
  if ( (_DWORD)result != 2 )
    return sub_5A5A92(a1);
  return result;
}
