__int64 __fastcall sub_62A680(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  __int64 v4; // rcx
  int v5; // r9d
  bool v6; // al
  int v7; // eax

  v2 = *(_DWORD *)(*(_QWORD *)(a2 + 40) + 12LL);
  v3 = *(unsigned int *)(a2 + 56);
  if ( (_DWORD)v3 )
  {
    v4 = a2 + 8 * v3;
    do
    {
      v5 = *(_DWORD *)((*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL) + 12);
      v6 = (*(_QWORD *)(a2 + 80) & 7LL) == 1;
      a2 += 8;
      v7 = (v2 << 8)
         ^ (((((v6 - v5) ^ (v5 << 8) ^ ((v5 - ((v6 - v5) ^ (v5 << 8))) << 16)) + ((v6 - v5) ^ (v5 << 8)) - v5)
           ^ ((v5 - ((v6 - v5) ^ (v5 << 8))) << 10))
          - v2);
      v2 = (v7 - v2 + (v7 ^ ((v2 - v7) << 16))) ^ ((v2 - v7) << 10);
    }
    while ( v4 != a2 );
  }
  return v2;
}

