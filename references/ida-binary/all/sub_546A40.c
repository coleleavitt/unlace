__int64 __fastcall sub_546A40(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx

  v3 = a2[1];
  result = 0;
  if ( v3 == a3[1] )
  {
    if ( v3 )
    {
      v5 = *a2;
      v6 = *a3;
      v7 = 0;
      v8 = 0;
      while ( *(_QWORD *)(v5 + v7 + 8) == *(_QWORD *)(v6 + v7 + 8) && *(_QWORD *)(v5 + v7) == *(_QWORD *)(v6 + v7) )
      {
        ++v8;
        v7 += 16;
        if ( v3 == v8 )
          return 1;
      }
      return 0;
    }
    else
    {
      return 1;
    }
  }
  return result;
}
