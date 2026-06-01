__int64 __fastcall sub_11BFFE0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v4; // rdi
  __int64 v5; // rsi

  result = *(_QWORD *)a1;
  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 != *(_QWORD *)a1 )
  {
    do
    {
      v4 = *(_QWORD *)(result - 8);
      if ( v4 )
      {
        v5 = *(unsigned int *)(a1 + 16);
        if ( (_DWORD)v5 )
        {
          result = sub_21B9810(v4, v5);
          if ( (_BYTE)result )
            return result;
          v2 = *(_QWORD *)(a1 + 8);
          result = *(_QWORD *)a1;
        }
      }
      result -= 8;
      *(_QWORD *)a1 = result;
    }
    while ( v2 != result );
  }
  return result;
}
