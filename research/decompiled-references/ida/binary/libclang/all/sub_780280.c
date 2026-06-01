__int64 __fastcall sub_780280(_QWORD *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 result; // rax

  if ( a4 )
    sub_77FFB0(a1, a2, a3);
  else
    (*(void (__fastcall **)(_QWORD *))(*a1 + 88LL))(a1);
  result = a1[19];
  if ( result )
  {
    if ( (a1[19] & 6LL) == 4 )
    {
      result &= 0xFFFFFFFFFFFFFFF8LL;
      if ( result )
      {
        result = *(_QWORD *)(result + 24);
        if ( result )
          return sub_B22390(a2, result + 8, *(unsigned int *)result, a3, 0);
      }
    }
  }
  return result;
}

