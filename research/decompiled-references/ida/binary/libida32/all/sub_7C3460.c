unsigned __int64 __fastcall sub_7C3460(__int64 a1, __int64 *a2, int a3)
{
  const char *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  const char *v9; // rsi
  unsigned __int64 result; // rax
  __int64 v11; // r14
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8

  sub_407AD0(a2, *(_DWORD *)a1);
  v5 = haystack;
  if ( *(_QWORD *)(a1 + 16) )
    v5 = *(const char **)(a1 + 8);
  sub_62C910(a2, v5);
  sub_7C2DA0(a1 + 32, a2);
  sub_7BE190(a2, *(_QWORD *)(a1 + 152), v6, v7, v8);
  v9 = haystack;
  if ( *(_QWORD *)(a1 + 168) )
    v9 = *(const char **)(a1 + 160);
  sub_62C910(a2, v9);
  result = sub_407AD0(a2, *(_DWORD *)(a1 + 184));
  if ( a3 > 5 )
  {
    v11 = *(_QWORD *)(a1 + 200);
    result = sub_407AD0(a2, v11);
    if ( v11 )
    {
      v12 = 0;
      do
      {
        v13 = 3 * v12++;
        v14 = *(_QWORD *)(a1 + 192) + 8 * v13;
        sub_407AD0(a2, *(_DWORD *)v14);
        sub_407AD0(a2, *(_DWORD *)(v14 + 4));
        sub_7BE190(a2, *(_QWORD *)(v14 + 8), v15, v16, v17);
        result = sub_7BE190(a2, *(_QWORD *)(v14 + 16), v18, v19, v20);
      }
      while ( v11 != v12 );
    }
  }
  return result;
}

