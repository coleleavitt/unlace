__int64 __fastcall sub_3EFC0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( (unsigned int)(a2 - 1) > 2 )
  {
    sub_30AA0(a1);
    return sub_3EFE0(a1, a2);
  }
  else
  {
    result = 0;
    if ( (_DWORD)a2 == 2 )
      return *(_QWORD *)(a1 + 24);
  }
  return result;
}

