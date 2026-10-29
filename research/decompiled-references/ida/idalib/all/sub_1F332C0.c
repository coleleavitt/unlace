__int64 __fastcall sub_1F332C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  int v4; // r13d
  int i; // ebx
  __int64 v6; // rcx
  __int64 v7; // [rsp+0h] [rbp-30h]

  v2 = *(unsigned int *)(a1 + 24);
  *(_DWORD *)(a1 + 24) = v2 + 1;
  result = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v2);
  if ( (_DWORD)result )
  {
    v4 = result;
    for ( i = 0; i != v4; ++i )
    {
      result = sub_1F21F80(a1);
      if ( result )
      {
        v6 = *(unsigned int *)(a2 + 8);
        if ( v6 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
        {
          v7 = result;
          sub_2237220(a2, a2 + 16, v6 + 1, 8);
          v6 = *(unsigned int *)(a2 + 8);
          result = v7;
        }
        *(_QWORD *)(*(_QWORD *)a2 + 8 * v6) = result;
        ++*(_DWORD *)(a2 + 8);
      }
    }
  }
  return result;
}
