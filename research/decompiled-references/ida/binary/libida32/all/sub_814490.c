__int64 __fastcall sub_814490(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  unsigned __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // rcx

  v5 = a1[7];
  if ( v5 != a2 )
  {
    set_qerrno(3, a2);
    return -1;
  }
  v6 = a1[6];
  if ( v6 < a1[4] )
  {
    v7 = a1[8];
    v9 = a3;
    while ( 1 )
    {
      v11 = *(_QWORD *)(a1[3] + 8 * v6);
      if ( a1[8] != qlseek(v11, v7, 0) )
        return -1;
      v12 = qlread(v11, v9, a4);
      if ( v12 == -1 )
      {
        v12 = 0;
        if ( !a4 )
        {
LABEL_9:
          a1[8] += v12;
          v5 = a1[7];
          result = v9 - a3;
          v14 = v9 - a3;
          goto LABEL_10;
        }
      }
      else
      {
        a4 -= v12;
        v9 += v12;
        if ( !a4 )
          goto LABEL_9;
      }
      v10 = a1[6];
      a1[8] = 0;
      v7 = 0;
      v6 = v10 + 1;
      a1[6] = v6;
      if ( v6 >= a1[4] )
      {
        v5 = a1[7];
        result = v9 - a3;
        v14 = v9 - a3;
        goto LABEL_10;
      }
    }
  }
  v14 = 0;
  result = 0;
LABEL_10:
  a1[7] = v14 + v5;
  return result;
}

