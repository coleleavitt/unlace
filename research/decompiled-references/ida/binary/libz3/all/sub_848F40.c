__int64 __fastcall sub_848F40(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  bool v4; // zf
  __int64 v5; // rax
  __int64 v6; // r12
  int v7[2]; // [rsp+8h] [rbp-A0h]

  v2 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)v7 = *(_QWORD *)(a1 + 16);
  if ( v2 )
    ++*(_DWORD *)(v2 + 8);
  if ( *(_WORD *)(a2 + 4) == 2 && *(_DWORD *)(a2 + 16) == 1 )
  {
    v5 = sub_15E1A70(v7[0]);
    v6 = v5;
    if ( v5 )
      ++*(_DWORD *)(v5 + 8);
    if ( v2 )
    {
      v4 = (*(_DWORD *)(v2 + 8))-- == 1;
      if ( v4 )
        sub_15D7BC0(*(_QWORD *)v7, v2);
    }
    v2 = v6;
  }
  result = sub_15EE230(v2);
  if ( v2 )
  {
    v4 = (*(_DWORD *)(v2 + 8))-- == 1;
    if ( v4 )
      return sub_15D7BC0(*(_QWORD *)v7, v2);
  }
  return result;
}

