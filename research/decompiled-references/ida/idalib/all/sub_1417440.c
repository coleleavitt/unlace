__int64 __fastcall sub_1417440(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  __int16 v4; // ax
  __int64 result; // rax
  __int64 v6; // r12
  int v7; // eax
  int v8; // edx
  unsigned int v9; // ecx

  v2 = a1[368];
  if ( !v2 )
    return 0;
  v3 = a1[363] + 8 * (3 * v2 - 3);
  v4 = *(_WORD *)(v3 + 16);
  if ( v4 != *(_WORD *)(a2 + 16) )
    return 0;
  v6 = a1[11];
  if ( sub_10CCDE0(v4) )
  {
    v7 = *(_DWORD *)(v3 + 4);
    if ( !v7 )
      v7 = *(_DWORD *)v3;
  }
  else
  {
    v7 = *(_DWORD *)v3;
  }
  v8 = v7 & 0x7FFFFFFF;
  v9 = *(_DWORD *)a2 & 0x7FFFFFFF;
  if ( *(_DWORD *)(v6 + 316) <= v9 != *(_DWORD *)(v6 + 316) <= (v7 & 0x7FFFFFFFu) )
    return 0;
  result = 1;
  if ( v9 != v8 )
    return 0;
  return result;
}
