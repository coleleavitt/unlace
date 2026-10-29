__int64 __fastcall sub_D5EAC0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // r12
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 result; // rax
  bool v8; // zf

  v4 = *(_QWORD *)(a1 + 8);
  v5 = *a4;
  if ( *a4 )
    ++*(_DWORD *)(v5 + 8);
  v6 = a4[1];
  if ( v6 )
    ++*(_DWORD *)(v6 + 8);
  result = sub_D5E970(a1, v5, v4, v6);
  if ( v6 )
  {
    v8 = (*(_DWORD *)(v6 + 8))-- == 1;
    if ( v8 )
      result = sub_15D7BC0(v4, v6);
  }
  if ( v5 )
  {
    v8 = (*(_DWORD *)(v5 + 8))-- == 1;
    if ( v8 )
      return sub_15D7BC0(v4, v5);
  }
  return result;
}

