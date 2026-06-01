unsigned __int64 __fastcall sub_469AB0(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4, unsigned int a5)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rbx
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  unsigned __int64 result; // rax

  v7 = sub_469A00(a1, a4, a2);
  v9 = v8;
  v10 = v7;
  v12 = sub_469A00(a1, a5, v8);
  v13 = v11;
  if ( v9 <= v11 )
    v13 = v9;
  if ( a3 >= v13 )
    return a3;
  v14 = v11;
  while ( 1 )
  {
    while ( v14 < v10 )
    {
      v18 = sub_469A00(a1, a4, v14);
      v9 = v19;
      v10 = v18;
      v20 = v19;
      if ( v14 <= v19 )
        v20 = v14;
      if ( a3 >= v20 )
        return a3;
    }
    if ( v9 >= v12 )
      break;
    v15 = sub_469A00(a1, a5, v9);
    v14 = v16;
    v12 = v15;
    v17 = v9;
    if ( v16 <= v9 )
      v17 = v16;
    if ( a3 >= v17 )
      return a3;
  }
  result = v9;
  if ( v14 <= v9 )
    return v14;
  return result;
}
