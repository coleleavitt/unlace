__int64 __fastcall sub_66EE0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    while ( sub_9EFC0(a1) )
      ;
  }
  result = *(unsigned int *)(a1 + 76);
  if ( (_DWORD)result && *(_QWORD *)(a1 + 376) )
  {
    sub_66E00(a1);
    result = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 784LL);
    if ( result )
      *(_DWORD *)(result + 48) = 63;
    *(_DWORD *)(a1 + 76) = 2;
  }
  return result;
}
