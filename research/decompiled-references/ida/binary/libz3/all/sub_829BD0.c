__int64 __fastcall sub_829BD0(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // rbp
  __int64 v7; // rdi

  v2 = a1[94];
  if ( v2 )
    *(_DWORD *)(v2 - 4) = 0;
  result = a1[97];
  if ( result )
    *(_DWORD *)(result - 4) = 0;
  v4 = a1[98];
  if ( v4 )
  {
    v5 = *(unsigned int *)(v4 - 4);
    if ( (_DWORD)v5 )
    {
      v6 = v4 + 16 * v5;
      do
      {
        v7 = v4;
        v4 += 16;
        result = sub_15D0DF0(v7);
      }
      while ( v4 != v6 );
      v4 = a1[98];
    }
    *(_DWORD *)(v4 - 4) = 0;
  }
  return result;
}

