__int64 __fastcall sub_701CE0(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  bool v4; // zf
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 result; // rax

  v1 = a1[4];
  if ( v1 )
  {
    v3 = a1[5];
    v4 = (*(_DWORD *)(v1 + 8))-- == 1;
    if ( v4 )
      result = sub_15D7BC0(v3, v1);
  }
  v5 = a1[2];
  if ( v5 )
  {
    v6 = a1[3];
    v4 = (*(_DWORD *)(v5 + 8))-- == 1;
    if ( v4 )
      result = sub_15D7BC0(v6, v5);
  }
  v7 = *a1;
  if ( *a1 )
  {
    v8 = a1[1];
    v4 = (*(_DWORD *)(v7 + 8))-- == 1;
    if ( v4 )
      return sub_15D7BC0(v8, v7);
  }
  return result;
}

