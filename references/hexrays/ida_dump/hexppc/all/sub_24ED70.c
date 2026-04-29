__int64 __fastcall sub_24ED70(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rax
  __int64 v5; // rdx

  result = 0;
  if ( a1[8] == a2 )
  {
    v3 = a1[3] - 1LL;
    if ( v3 >= 0 )
    {
      while ( 1 )
      {
        v5 = *(_QWORD *)(a1[2] + 8 * v3);
        if ( *(int *)(v5 + 8) > 69 )
          break;
        if ( v3-- == 0 )
          return 1;
      }
      a1[8] = v5;
    }
    return 1;
  }
  return result;
}
