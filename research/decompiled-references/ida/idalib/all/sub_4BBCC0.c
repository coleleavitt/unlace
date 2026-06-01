__int64 __fastcall sub_4BBCC0(__int64 a1, int a2, int a3, char a4)
{
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rdi
  int v8; // eax

  if ( (a3 | a2) < 0 || a2 == a3 )
    return 0;
  if ( a2 > a3 )
  {
    v8 = a2;
    a2 = a3;
    a3 = v8;
  }
  v4 = *(_QWORD *)(a1 + 56);
  if ( !v4 )
    return 0;
  v5 = *(_QWORD *)(a1 + 48);
  v6 = 0;
  while ( *(_DWORD *)v5 != a2 || *(_DWORD *)(v5 + 4) != a3 || *(_BYTE *)(v5 + 16) != a4 )
  {
    ++v6;
    v5 += 24;
    if ( v4 == v6 )
      return 0;
  }
  return *(_QWORD *)(v5 + 8);
}
