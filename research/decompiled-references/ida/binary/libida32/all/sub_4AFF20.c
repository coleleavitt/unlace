__int64 __fastcall sub_4AFF20(unsigned int *a1, unsigned int a2)
{
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // rdi

  if ( *(_QWORD *)(a1 + 1) == -1 )
    sub_4AFCF0(a1);
  v3 = *(_QWORD *)(a1 + 3);
  result = v3 + 1;
  *(_QWORD *)(a1 + 3) = v3 + 1;
  a1[v3 + 5] = a2;
  if ( v3 == 255 )
  {
    v5 = *(_QWORD *)(a1 + 1);
    v6 = *a1;
    *(_QWORD *)(a1 + 1) = v5 + 1;
    result = netnode_supset(v6, v5, a1 + 5, 1024, 83);
    *(_QWORD *)(a1 + 3) = 0;
  }
  return result;
}

