__int64 __fastcall sub_1EC2140(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  _BYTE v10[9]; // [rsp+Fh] [rbp-9h] BYREF

  v2 = *(_DWORD *)(a2 + 812);
  if ( !v2 )
  {
    if ( *(_DWORD *)(a2 + 3272) )
    {
      v3 = **(_QWORD **)(a2 + 3264);
      if ( v3 )
        return *(unsigned int *)(v3 + 816);
    }
    v5 = *(_QWORD *)(a1 + 80);
    v10[0] = 0;
    v6 = *(unsigned int *)(v5 + 520);
    if ( (unsigned int)(v6 + 1) > 1 )
    {
      if ( (int)v6 < 0 )
      {
        v8 = (unsigned int)(-2 - v6);
        v9 = *(_QWORD *)(*(_QWORD *)(v5 + 320) + 8LL * ((unsigned int)(-2 - v6) >> 6));
        if ( _bittest64(&v9, v8) )
          v7 = sub_101F8A0(v5 + 264, (int)v8);
        else
          v7 = sub_101F930(v5, v8, v10);
        if ( v10[0] )
          return v2;
      }
      else
      {
        v7 = *(_QWORD *)(v5 + 184) + 24 * v6;
      }
      if ( v7 )
      {
        if ( *(char *)(v7 + 3) >= 0 )
          return *(_DWORD *)v7 & 0x7FFFFFFF;
      }
    }
  }
  return v2;
}
