__int64 __fastcall sub_C0DC70(__int64 a1)
{
  __int64 v2; // r12
  __int64 v3; // r12
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 result; // rax
  void *v7; // rdi

  v2 = *(unsigned int *)(a1 + 8);
  if ( (_DWORD)v2 )
  {
    v3 = 16 * v2;
    v4 = 0;
    do
    {
      v5 = v4 + *(_QWORD *)a1;
      v4 += 16;
      result = sub_182EF00(*(_QWORD *)(a1 + 272), v5);
    }
    while ( v3 != v4 );
  }
  v7 = *(void **)a1;
  *(_DWORD *)(a1 + 8) = 0;
  if ( v7 )
  {
    if ( v7 != (void *)(a1 + 16) )
      return sub_186B220(v7);
  }
  return result;
}

