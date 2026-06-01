__int64 __fastcall sub_558730(__int64 a1, __int64 a2)
{
  int v3; // ebx
  __int64 v4; // rbp
  __int64 v5; // rsi

  v3 = *(_DWORD *)(a2 + 16);
  if ( v3 )
  {
    v4 = 0;
    v3 = 0;
    do
    {
      v5 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8 * v4++);
      v3 = sub_182A670(a1, v5) + 2 * v3;
    }
    while ( (unsigned int)v4 < *(_DWORD *)(a2 + 16) );
  }
  return v3 + (unsigned int)sub_182A670(a1, *(_QWORD *)a2);
}

