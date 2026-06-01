__int64 __fastcall sub_4C6BF0(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 result; // rax
  __int64 v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // rsi

  if ( a1[1] == -1 )
    sub_4C6950(a1);
  v1 = a1[2];
  if ( v1 )
  {
    v2 = v1 - 1;
LABEL_5:
    a1[2] = v2;
    return a1[v2 + 3];
  }
  v4 = a1[1];
  result = -1;
  if ( v4 )
  {
    v5 = *a1;
    netnode_supdel(*a1, v4, 83);
    v6 = a1[1] - 1LL;
    a1[1] = v6;
    netnode_supval(v5, v6, a1 + 3, 1024, 83);
    v2 = 127;
    goto LABEL_5;
  }
  return result;
}
