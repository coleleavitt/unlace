unsigned __int64 __fastcall sub_3B4010(__int64 a1, __int64 a2)
{
  char *v2; // rdi
  unsigned __int64 v3; // rsi
  unsigned __int64 result; // rax
  __int64 v5; // r12
  int v6; // ebx
  __int64 v7; // rbp
  __int64 v8; // rdi

  if ( a2 )
  {
    v2 = *(char **)(a2 + 24);
    v3 = (unsigned __int64)&v2[*(_QWORD *)(a2 + 32)];
  }
  else
  {
    v3 = -1;
    v2 = nullptr;
  }
  sub_3B3C00(v2, v3, 1, 0);
  result = qword_2CCB598;
  v5 = *(_QWORD *)(qword_2CCB598 + 1576);
  v6 = *(_DWORD *)(v5 + 8) - 1;
  if ( v6 >= 0 )
  {
    v7 = 8LL * (unsigned int)v6;
    do
    {
      v8 = *(_QWORD *)(*(_QWORD *)v5 + v7);
      result = *(unsigned int *)(v8 + 44);
      if ( !(_DWORD)result )
        break;
      result = sub_3B0140(v8);
      --v6;
      v7 -= 8;
    }
    while ( v6 != -1 );
  }
  return result;
}
