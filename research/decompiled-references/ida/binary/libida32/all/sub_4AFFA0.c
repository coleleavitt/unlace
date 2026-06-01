__int64 __fastcall sub_4AFFA0(unsigned int *a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 result; // rax
  __int64 v4; // rsi
  unsigned int v5; // ebp
  __int64 v6; // rsi

  if ( *(_QWORD *)(a1 + 1) == -1 )
    sub_4AFCF0(a1);
  v1 = *(_QWORD *)(a1 + 3);
  if ( v1 )
  {
    v2 = v1 - 1;
LABEL_5:
    *(_QWORD *)(a1 + 3) = v2;
    return a1[v2 + 5];
  }
  v4 = *(_QWORD *)(a1 + 1);
  result = 0xFFFFFFFFLL;
  if ( v4 )
  {
    v5 = *a1;
    netnode_supdel(*a1, v4, 83);
    v6 = *(_QWORD *)(a1 + 1) - 1LL;
    *(_QWORD *)(a1 + 1) = v6;
    netnode_supval(v5, v6, a1 + 5, 1024, 83);
    v2 = 255;
    goto LABEL_5;
  }
  return result;
}

