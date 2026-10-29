__int64 __fastcall sub_7D3BD0(__int64 a1)
{
  __int64 v1; // rax
  __int64 *v2; // rbp
  __int64 v3; // rbx
  __int64 *v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rdi
  bool v7; // zf
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 result; // rax

  v1 = 0x1FFFFFFFE0LL;
  v2 = *(__int64 **)(a1 + 8);
  v3 = *v2;
  if ( *v2 )
    v1 = 32LL * (unsigned int)(*(_DWORD *)(v3 - 4) - 1);
  v4 = (__int64 *)(v1 + v3);
  v5 = v4[2];
  if ( v5 )
  {
    v6 = v4[3];
    v7 = (*(_DWORD *)(v5 + 8))-- == 1;
    if ( v7 )
      sub_15D7BC0(v6, v5);
  }
  v8 = *v4;
  if ( *v4 && (v9 = v4[1], v7 = *(_DWORD *)(v8 + 8) == 1, --*(_DWORD *)(v8 + 8), v7) )
  {
    sub_15D7BC0(v9, v8);
    result = *v2;
    --*(_DWORD *)(*v2 - 4);
  }
  else
  {
    result = *v2;
    --*(_DWORD *)(*v2 - 4);
  }
  return result;
}

