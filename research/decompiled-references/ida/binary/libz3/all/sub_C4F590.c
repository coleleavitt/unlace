__int64 __fastcall sub_C4F590(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v5; // rax
  unsigned int v6; // r12d
  unsigned int *v7; // rax
  __int64 v8; // rcx
  int v9; // r8d
  int v10; // r9d
  __int64 result; // rax
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rdi
  bool v15; // zf
  __int64 v16; // rbp
  __int64 v17; // rsi
  __int64 v18; // rdi

  v5 = *(_QWORD *)(*(_QWORD *)(sub_15D1F10(*a2) + 24) + 8LL);
  if ( *(_BYTE *)(v5 + 8)
    || (v6 = *(_DWORD *)v5, v7 = *(unsigned int **)(*(_QWORD *)(sub_15D1F10(*a3) + 24) + 8LL), *((_BYTE *)v7 + 8)) )
  {
    sub_A8ADA((__int64)"std::get: wrong index for variant");
  }
  result = *v7;
  if ( (unsigned int)result < v6 )
  {
    result = sub_C4F2A0(a1, v6 - (unsigned int)result, *a3, v8, v9, v10);
    v16 = result;
    if ( result )
      ++*(_DWORD *)(result + 8);
    v17 = *a3;
    if ( *a3 )
    {
      v18 = a3[1];
      v15 = (*(_DWORD *)(v17 + 8))-- == 1;
      if ( v15 )
        result = sub_15D7BC0(v18, v17);
    }
    *a3 = v16;
  }
  else if ( v6 < (unsigned int)result )
  {
    result = sub_C4F2A0(a1, (unsigned int)result - v6, *a2, v8, v9, v10);
    v12 = result;
    if ( result )
      ++*(_DWORD *)(result + 8);
    v13 = *a2;
    if ( *a2 )
    {
      v14 = a2[1];
      v15 = (*(_DWORD *)(v13 + 8))-- == 1;
      if ( v15 )
        result = sub_15D7BC0(v14, v13);
    }
    *a2 = v12;
  }
  return result;
}

