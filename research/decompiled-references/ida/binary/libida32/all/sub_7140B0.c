__int64 __fastcall sub_7140B0(unsigned int *a1)
{
  __int64 result; // rax

  result = qclose(*a1);
  if ( (_DWORD)result )
    off_2C57CC0();
  return result;
}

