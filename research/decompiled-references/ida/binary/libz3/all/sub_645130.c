__int64 __fastcall sub_645130(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx

  result = *(unsigned int *)(a1 + 24);
  if ( (_DWORD)result )
  {
    v2 = (unsigned int)result;
    result = 0;
    v3 = a1 + 8 * v2;
    do
    {
      if ( *(_WORD *)(*(_QWORD *)(a1 + 32) + 4LL) == 1 )
        result = (unsigned int)(result + 1);
      a1 += 8;
    }
    while ( a1 != v3 );
  }
  return result;
}

