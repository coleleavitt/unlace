__int64 __fastcall sub_455320(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  __int64 v7; // r14
  unsigned int v8; // r15d
  __int64 v9; // rax
  unsigned int v10; // rbx^4
  unsigned int v11; // ebp
  __int64 v12; // rax
  unsigned int v13; // eax
  __int64 v14; // rax
  __int64 result; // rax

  v7 = sub_455240(a1, a4, a2);
  v8 = v7;
  v9 = sub_455240(a1, a5, v7);
  v10 = HIDWORD(v9);
  v11 = v9;
  if ( (unsigned int)v7 >= (unsigned int)v9 )
    LODWORD(v9) = v7;
  if ( (unsigned int)v9 >= a3 )
    return a3;
  while ( 1 )
  {
    while ( HIDWORD(v7) < v11 )
    {
      v14 = sub_455240(a1, a4, v11);
      v8 = v14;
      HIDWORD(v7) = HIDWORD(v14);
      if ( v11 >= (unsigned int)v14 )
        LODWORD(v14) = v11;
      if ( (unsigned int)v14 >= a3 )
        return a3;
    }
    if ( v10 >= v8 )
      break;
    v12 = sub_455240(a1, a5, v8);
    v11 = v12;
    v10 = HIDWORD(v12);
    v13 = v8;
    if ( v11 >= v8 )
      v13 = v11;
    if ( v13 >= a3 )
      return a3;
  }
  result = v8;
  if ( v11 >= v8 )
    return v11;
  return result;
}

