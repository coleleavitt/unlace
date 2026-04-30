__int64 __fastcall sub_1AD5B0(unsigned __int64 *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v4; // rsi
  unsigned __int64 v5; // r11
  __int64 v6; // r12
  _QWORD *v7; // r9
  __int64 v8; // r10
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rax

  if ( !a2[1] )
    return -1;
  v4 = 0;
  v5 = 0;
  v6 = -1;
  do
  {
    v7 = (_QWORD *)(v4 + *a2);
    v8 = v7[1];
    if ( v8 )
    {
      v9 = a3[1];
      v10 = 0;
      while ( v9 != v10 )
      {
        if ( *(_QWORD *)(*v7 + 8 * v10) == *(_QWORD *)(*a3 + 8 * v10) && ++v10 != v8 )
          continue;
        v9 = v10;
        break;
      }
      if ( *a1 < v9 )
      {
        *a1 = v9;
        v6 = v5;
      }
    }
    ++v5;
    v4 += 24;
  }
  while ( v5 < a2[1] );
  return v6;
}
