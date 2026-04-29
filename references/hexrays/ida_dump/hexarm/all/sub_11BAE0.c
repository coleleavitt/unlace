__int64 __fastcall sub_11BAE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // edx
  bool v10; // al

  v6 = *(_QWORD *)(a1 + 32);
  if ( *(_BYTE *)(a1 + 48) )
  {
    v10 = sub_11A020(*(_QWORD *)(a1 + 40), 0, 0, v6, a5, a6);
    v8 = 1;
    if ( v10 )
      return v8;
    v6 = *(_QWORD *)(a1 + 32);
    v7 = *(_DWORD *)v6;
    if ( *(_DWORD *)v6 == 2 )
      return v8;
  }
  else
  {
    v7 = *(_DWORD *)v6;
  }
  v8 = 0;
  if ( (unsigned int)(v7 - 56) > 1 )
    return v8;
  v8 = 1;
  if ( *(_BYTE *)(v6 + 64) != 8 )
    return v8;
  return (*(_BYTE *)(*(_QWORD *)(v6 + 72) + 280LL) & 0x30) == 0;
}
