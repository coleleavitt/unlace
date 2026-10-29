__int64 __fastcall sub_4C6B70(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  __int64 result; // rax
  __int64 v9; // rsi
  __int64 v10; // rdi

  if ( a1[1] == -1 )
    sub_4C6950(a1);
  v7 = a1[2];
  result = v7 + 1;
  a1[2] = v7 + 1;
  a1[v7 + 3] = a2;
  if ( v7 == 127 )
  {
    v9 = a1[1];
    v10 = *a1;
    a1[1] = v9 + 1;
    result = netnode_supset(v10, v9, a1 + 3, 1024, 83, a6);
    a1[2] = 0;
  }
  return result;
}
