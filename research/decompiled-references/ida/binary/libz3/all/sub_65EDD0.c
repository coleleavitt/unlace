__int64 __fastcall sub_65EDD0(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 2944LL);
  if ( result )
  {
    result = *(unsigned int *)(result - 4);
    if ( (_DWORD)result )
      sub_1063AC();
  }
  return result;
}

