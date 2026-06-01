__int64 __fastcall sub_D5C990(_QWORD *a1, __int64 a2, __int64 a3, __int64 *a4, __int64 *a5)
{
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 result; // rax
  __int64 v10[5]; // [rsp+0h] [rbp-28h] BYREF

  v5 = a1[1];
  v6 = *a4;
  v7 = *(_QWORD *)(a2 + 40);
  v10[1] = v5;
  if ( v6 )
  {
    ++*(_DWORD *)(v6 + 8);
    v10[0] = v6;
    result = sub_D5C740(a1, v7, v10, a5);
    if ( (*(_DWORD *)(v6 + 8))-- == 1 )
      return sub_15D7BC0(v5, v6);
  }
  else
  {
    v10[0] = 0;
    return sub_D5C740(a1, v7, v10, a5);
  }
  return result;
}

