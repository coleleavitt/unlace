__int64 __fastcall sub_1ACB20(_QWORD *a1, __int64 a2, _QWORD *a3, unsigned __int64 a4)
{
  unsigned __int64 v6; // rdx
  _QWORD *v7; // rsi
  unsigned __int64 v8; // rcx
  __int64 result; // rax
  int v10; // edx
  __int64 v11; // rax

  if ( a3 )
    *a3 = a1[2];
  v6 = a1[5];
  if ( a4 >= v6 )
  {
    if ( a4 >= v6 + a1[8] )
      return 0;
    v7 = (_QWORD *)(a1[7] + 24 * (a4 - v6));
  }
  else
  {
    v7 = (_QWORD *)(a1[4] + 24 * a4);
  }
  if ( !v7 )
    return 0;
  v8 = v7[1];
  result = 0;
  if ( v8 <= 0x20 )
  {
    if ( v8 )
    {
      v10 = 0;
      v11 = 0;
      do
      {
        ++v10;
        *(_QWORD *)(a2 + 8 * v11) = *(_QWORD *)(*v7 + 8 * v11);
        v8 = v7[1];
        v11 = v10;
      }
      while ( v10 < v8 );
    }
    return (unsigned int)v8;
  }
  return result;
}
