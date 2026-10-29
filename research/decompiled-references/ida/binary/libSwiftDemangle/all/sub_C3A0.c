unsigned __int64 __fastcall sub_C3A0(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 *v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx

  result = *(unsigned __int8 *)(a1 + 18);
  if ( (_BYTE)result == 4 )
  {
    if ( !a2 )
    {
      result = *(_QWORD *)a1;
      v5 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 8) = *(_QWORD *)a1;
      *(_QWORD *)a1 = v5;
    }
  }
  else if ( (_BYTE)result == 5 )
  {
    result = *(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8);
    v3 = (__int64 *)(*(_QWORD *)a1 + 8 * a2);
    if ( (__int64 *)result != v3 )
    {
      while ( 1 )
      {
        result -= 8LL;
        if ( (unsigned __int64)v3 >= result )
          break;
        v4 = *v3++;
        *(v3 - 1) = *(_QWORD *)result;
        *(_QWORD *)result = v4;
      }
    }
  }
  return result;
}

