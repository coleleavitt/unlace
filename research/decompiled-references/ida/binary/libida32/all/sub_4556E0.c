__int64 __fastcall sub_4556E0(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  unsigned __int64 v7; // rax
  unsigned int v8; // r14d
  unsigned int v9; // ebp
  unsigned __int64 v10; // rax
  unsigned int v11; // r9d
  unsigned int v12; // r15d
  unsigned __int64 v13; // rax
  unsigned int v14; // ebx
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned int v17; // eax
  __int64 result; // rax
  unsigned __int64 v21; // [rsp+8h] [rbp-40h]

  v7 = sub_455630(a1, a4, a2);
  v8 = v7;
  v21 = HIDWORD(v7);
  v9 = HIDWORD(v7);
  v10 = sub_455630(a1, a5, HIDWORD(v7));
  v11 = v21;
  v12 = v10;
  v13 = HIDWORD(v10);
  if ( (unsigned int)v21 > (unsigned int)v13 )
    v11 = v13;
  if ( a3 >= v11 )
    return a3;
  v14 = v13;
  while ( 1 )
  {
    while ( v14 < v8 )
    {
      v16 = sub_455630(a1, a4, v14);
      v8 = v16;
      v9 = HIDWORD(v16);
      v17 = HIDWORD(v16);
      if ( v14 <= HIDWORD(v16) )
        v17 = v14;
      if ( a3 >= v17 )
        return a3;
    }
    if ( v9 >= v12 )
      break;
    v15 = sub_455630(a1, a5, v9);
    v12 = v15;
    v14 = HIDWORD(v15);
    LODWORD(v15) = v9;
    if ( HIDWORD(v15) <= v9 )
      LODWORD(v15) = HIDWORD(v15);
    if ( a3 >= (unsigned int)v15 )
      return a3;
  }
  result = v9;
  if ( v14 <= v9 )
    return v14;
  return result;
}

