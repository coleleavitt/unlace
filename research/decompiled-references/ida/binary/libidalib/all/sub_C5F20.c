unsigned __int64 __fastcall sub_C5F20(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax

  result = *(unsigned int *)(a2 + 12);
  if ( (_DWORD)result == 8 || (_DWORD)result == 1 )
    return sub_C5B30(a1);
  return result;
}

