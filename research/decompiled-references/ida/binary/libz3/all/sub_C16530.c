__int64 __fastcall sub_C16530(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  bool v4; // zf
  __int64 v5; // rsi
  __int64 result; // rax

  v2 = *a1;
  v3 = a1[1];
  if ( v3 )
  {
    v4 = (*(_DWORD *)(v3 + 8))-- == 1;
    if ( v4 )
    {
      result = sub_15D7BC0(v2, v3);
      v2 = *a1;
    }
  }
  v5 = a1[2];
  if ( v5 )
  {
    v4 = (*(_DWORD *)(v5 + 8))-- == 1;
    if ( v4 )
      return sub_15D7BC0(v2, v5);
  }
  return result;
}

