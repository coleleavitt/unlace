__int64 __fastcall sub_792560(_DWORD *a1, __int64 a2)
{
  __int64 result; // rax

  result = a2 & 7;
  if ( (_DWORD)result == 7 )
  {
    if ( *(_DWORD *)(a2 & 0xFFFFFFFFFFFFFFF8LL) == 1 )
      *a1 = 0;
  }
  else if ( (_DWORD)result == 6 || (result = (unsigned int)(result - 3), (unsigned int)result <= 2) )
  {
    *(_QWORD *)a1 = 0;
  }
  return result;
}

