__int64 __fastcall sub_59A030(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r13
  __int64 i; // rax
  __int64 v7; // rbx
  __int64 v8; // rbp
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rdx

  v4 = a4 + 1;
  if ( ((a4 + 1) & a4) == 0 )
  {
    for ( i = a1[3]; ; a2 = *(_QWORD *)(i + 16) & (v11 + v10) )
    {
      if ( a2 == -1 )
      {
        if ( v4 )
          return -1;
      }
      else if ( v4 == -1 )
      {
        if ( a2 )
          return -1;
      }
      else if ( *(_QWORD *)(i + 16) - a2 < v4 )
      {
        return -1;
      }
      v7 = -(int)v4 & *(_QWORD *)(i + 16) & ((int)v4 - 1 + a2);
      v8 = v7;
      if ( !sub_3BD540((__int64)a1, v7) )
      {
        v9 = sub_3BD580((__int64)a1, v7);
        if ( (v9 & *(_QWORD *)(a1[3] + 16)) - v7 >= a3 )
          return v8;
        if ( v9 == -1 )
          return -1;
        v8 = v9;
      }
      v10 = sub_3BD700((__int64)a1, v8);
      v11 = sub_3BD840(a1, v8);
      i = a1[3];
    }
  }
  return -1;
}
