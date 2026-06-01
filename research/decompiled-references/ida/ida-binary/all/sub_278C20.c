// write access to const memory has been detected, the output may be wrong!
unsigned __int64 __fastcall sub_278C20(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 128) & 1) == 0 )
  {
    if ( a1 )
    {
      result = *(unsigned int *)(a1 + 132);
      *(_QWORD *)(a1 + 168) = a2;
      if ( !(_DWORD)result )
        return sub_278550(a1);
    }
    else
    {
      qword_A8 = a2;
    }
  }
  return result;
}
