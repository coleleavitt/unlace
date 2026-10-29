__int64 __fastcall sub_C7920(int a1)
{
  __int64 result; // rax
  unsigned int v2; // ebx

  if ( dword_244118 != -1 && dword_244118 == a1 )
    return (unsigned int)dword_244124;
  v2 = dword_244128;
  result = sub_C3380((unsigned int)dword_244128);
  if ( (_DWORD)result == -1 )
    return v2;
  return result;
}

