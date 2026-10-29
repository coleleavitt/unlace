_BOOL8 __fastcall sub_2209980(__int64 a1, __int64 a2, _BOOL8 a3, int a4)
{
  __int64 v4; // r10
  _BOOL8 result; // rax
  __int64 i; // rcx
  __int64 v7; // rdx
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r9

  if ( a4 )
  {
    v4 = (unsigned int)(a4 - 1);
    result = a3;
    for ( i = 0; ; i = v7 )
    {
      v9 = *(_QWORD *)(a1 + 8 * i);
      v10 = *(_QWORD *)(a2 + 8 * i);
      if ( result )
      {
        v7 = i + 1;
        v8 = v9 - 1 - v10;
        *(_QWORD *)(a1 + 8 * i) = v8;
        result = v8 >= v9;
        if ( v4 == i )
          return result;
      }
      else
      {
        *(_QWORD *)(a1 + 8 * i) = v9 - v10;
        result = v9 < v10;
        v7 = i + 1;
        if ( v4 == i )
          return result;
      }
    }
  }
  return a3;
}
