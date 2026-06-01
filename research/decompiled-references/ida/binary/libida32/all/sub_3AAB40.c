_QWORD *__fastcall sub_3AAB40(__int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // r12
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rbp
  _QWORD *v6; // r14

  v1 = *(_QWORD **)(qword_2CA1698 + 1384);
  v2 = (_QWORD *)*v1;
  v3 = 8LL * v1[1];
  v4 = v3 >> 3;
  if ( v3 > 0 )
  {
    do
    {
      while ( 1 )
      {
        v5 = v4 >> 1;
        v6 = &v2[v4 >> 1];
        if ( (int)compare_bpt_locs(*v6 + 32LL, a1 + 32) >= 0 )
          break;
        v2 = v6 + 1;
        v4 = v4 - 1 - v5;
        if ( v4 <= 0 )
          return v2;
      }
      v4 >>= 1;
    }
    while ( v5 > 0 );
  }
  return v2;
}

