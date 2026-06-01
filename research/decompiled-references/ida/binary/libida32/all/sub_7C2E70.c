unsigned __int64 __fastcall sub_7C2E70(__int64 a1, __int64 *a2, int a3)
{
  __int64 v5; // r15
  unsigned __int64 result; // rax
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // rdi

  v5 = *(_QWORD *)(a1 + 24);
  result = sub_407AD0(a2, v5);
  if ( v5 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      ++v8;
      v9 = v7 + *(_QWORD *)(a1 + 16);
      v7 += 120;
      result = sub_7C2DA0(v9, a2);
    }
    while ( v5 != v8 );
  }
  if ( a3 > 3 )
    return sub_407AD0(a2, *(_DWORD *)(a1 + 40));
  return result;
}

