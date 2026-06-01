__int64 __fastcall sub_6916A0(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rsi
  int v6; // edx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  unsigned __int64 v9; // rdx
  __int64 v11; // rax

  v4 = a1[322];
  v5 = a1[321];
  if ( v4 )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      if ( !*(_QWORD *)(v5 + 8 * v7) )
        break;
      v7 = ++v6;
    }
    while ( v6 < v4 );
    v8 = v6 + 7;
    v9 = v4 + 1;
    if ( v7 != v4 )
    {
      *(_QWORD *)(v5 + 8 * v7) = a2;
      return v8;
    }
  }
  else
  {
    v8 = 7;
    v9 = 1;
  }
  if ( a1[323] < v9 )
  {
    v11 = qvector_reserve(a1 + 321, v5, v9, 8);
    v4 = a1[322];
    a1[321] = v11;
    v5 = v11;
  }
  *(_QWORD *)(v5 + 8 * v4) = a2;
  ++a1[322];
  return v8;
}

