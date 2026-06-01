__int64 __fastcall sub_9A2A90(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // r12
  __int64 v5; // rcx
  __int64 v6; // rbp
  void (__fastcall ***v7)(void *); // rbx
  __int64 v8; // rax
  __int64 v9; // rax

  v2 = 8LL * a2;
  result = a1[99];
  v4 = result + v2;
  if ( result )
  {
    v5 = 8LL * *(unsigned int *)(result - 4);
    v6 = result + v5;
    if ( v2 == v5 )
    {
LABEL_5:
      *(_DWORD *)(result - 4) = a2;
      return result;
    }
  }
  else
  {
    v6 = 0;
    if ( !v2 )
      return result;
  }
  do
  {
    v7 = *(void (__fastcall ****)(void *))(v6 - 8);
    v6 -= 8;
    v8 = *((unsigned int *)v7 + 2);
    *(_QWORD *)(a1[97] + 8LL * *((unsigned int *)v7 + 29)) = 0;
    v9 = *(_QWORD *)(a1[95] + 8 * v8);
    --*(_DWORD *)(v9 - 4);
    (**v7)(v7);
    sub_186B220(v7);
  }
  while ( v4 != v6 );
  result = a1[99];
  if ( result )
    goto LABEL_5;
  return result;
}

