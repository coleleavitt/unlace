__int64 __fastcall sub_7334C0(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r12
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rax
  __int64 v7; // rdi
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rax
  __int64 v10; // rax

  v2 = a2;
  if ( !(unsigned __int8)sub_734800(*a1) )
    return 0;
  v5 = a2;
  if ( a2 < sub_734830(*a1) )
  {
    v5 = sub_734830(*a1);
    v2 = v5;
  }
  v6 = sub_734830(*a1);
  v7 = *a1;
  *((_WORD *)a1 + 284) = v5 / v6;
  v8 = v5 % sub_734830(v7);
  if ( v8 )
  {
    v10 = sub_734830(*a1);
    ++*((_WORD *)a1 + 284);
    v5 = v10 + v5 - v8;
    v2 = v5;
  }
  a1[70] = v5;
  if ( a1[72] >= v5 )
    return 0;
  v9 = sub_7333F0(a1, v2 + *((int *)a1 + 146), v5);
  if ( v9 >= a1[72] )
  {
    a1[72] = v9;
    return 0;
  }
  return 0xFFFFFFFFLL;
}
