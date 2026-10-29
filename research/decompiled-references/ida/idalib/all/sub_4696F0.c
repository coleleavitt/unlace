unsigned __int64 __fastcall sub_4696F0(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4, unsigned int a5)
{
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 result; // rax

  v7 = sub_469610(a1, a4, a2);
  v9 = v8;
  v10 = v7;
  v11 = sub_469610(a1, a5, v7);
  v13 = v11;
  if ( v10 >= v11 )
    v11 = v10;
  if ( v11 >= a3 )
    return a3;
  v14 = v12;
  while ( 1 )
  {
    while ( v9 < v13 )
    {
      v17 = sub_469610(a1, a4, v13);
      v10 = v17;
      v9 = v18;
      if ( v13 >= v17 )
        v17 = v13;
      if ( v17 >= a3 )
        return a3;
    }
    if ( v14 >= v10 )
      break;
    v13 = sub_469610(a1, a5, v10);
    v15 = v10;
    v14 = v16;
    if ( v13 >= v10 )
      v15 = v13;
    if ( v15 >= a3 )
      return a3;
  }
  result = v10;
  if ( v13 >= v10 )
    return v13;
  return result;
}
