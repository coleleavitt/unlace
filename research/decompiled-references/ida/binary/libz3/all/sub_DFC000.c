__int64 __fastcall sub_DFC000(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rsi
  __int64 v5; // rdi

  result = sub_DFBCB0(a2);
  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 )
  {
    v5 = *(_QWORD *)(a2 + 296);
    if ( (*(_DWORD *)(v4 + 8))-- == 1 )
      return sub_15D7BC0(v5, v4);
  }
  return result;
}

