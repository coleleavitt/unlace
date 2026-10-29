__int64 __fastcall sub_469120(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rax

  v3 = a2[1];
  result = 0;
  if ( v3 == a3[1] )
  {
    if ( v3 )
    {
      v5 = *a2;
      v6 = *a3;
      v7 = 0;
      while ( *(_QWORD *)(v5 + 8 * v7) == *(_QWORD *)(v6 + 8 * v7) )
      {
        if ( v3 == ++v7 )
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
