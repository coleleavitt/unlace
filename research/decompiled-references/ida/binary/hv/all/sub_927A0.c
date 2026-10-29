__int64 __fastcall sub_927A0(_QWORD *a1, __int64 a2, char *a3, __int64 a4)
{
  __int64 v5; // rdx
  unsigned __int64 v6; // rax
  __int64 v7; // rsi
  char *v9; // r12
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 result; // rax
  char *v16; // rcx

  v5 = a1[7];
  if ( v5 != a2 )
  {
    sub_8F860(3u);
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
      if ( a1[8] != sub_92670(v11, v7, 0) )
        return -1;
      v14 = sub_923E0(v11, v9, a4, v12, v13);
      if ( v14 == -1 )
      {
        v14 = 0;
        if ( !a4 )
        {
LABEL_9:
          a1[8] += v14;
          v5 = a1[7];
          result = v9 - a3;
          v16 = (char *)(v9 - a3);
          goto LABEL_10;
        }
      }
      else
      {
        a4 -= v14;
        v9 += v14;
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
        v16 = (char *)(v9 - a3);
        goto LABEL_10;
      }
    }
  }
  v16 = nullptr;
  result = 0;
LABEL_10:
  a1[7] = &v16[v5];
  return result;
}

