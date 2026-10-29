__int64 __fastcall sub_5A4F3C(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 80);
  if ( (_DWORD)result != 2 )
    return sub_5A5D30(a1);
  return result;
}
