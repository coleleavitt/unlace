__int64 __fastcall sub_5BD8D0(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax
  unsigned int v4; // edx
  _QWORD *v5; // rsi
  unsigned int v6; // ecx
  unsigned int v7; // r9d
  __int64 v8; // rax
  _DWORD *v9; // r8
  int v10; // eax

  v3 = sub_5BCCC0(a1, *(_QWORD *)(a2 + 16));
  v4 = *(_DWORD *)(a2 + 24);
  if ( !v4 )
    return 0;
  v5 = v3;
  v6 = 0;
  v7 = 0;
  do
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(a2 + 8LL * v6 + 32);
      if ( *(_WORD *)(v8 + 4) == 1 && !*(_BYTE *)(*(_QWORD *)(a1 + 80) + *(unsigned int *)(v8 + 16)) )
      {
        v9 = (_DWORD *)(v5[1] + 4LL * (v6 >> 5));
        v10 = 1 << v6;
        if ( ((1 << v6) & *v9) != 0 )
          break;
      }
      if ( ++v6 >= v4 )
        return v7;
    }
    ++v6;
    v7 = 1;
    *v9 &= ~v10;
    v4 = *(_DWORD *)(a2 + 24);
  }
  while ( v6 < v4 );
  return v7;
}

