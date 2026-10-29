__int64 __fastcall sub_62A5E0(__int64 a1)
{
  unsigned int v1; // esi
  __int64 v2; // rax
  __int64 v3; // rcx
  int v4; // r9d
  bool v5; // al
  int v6; // eax

  v1 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 12LL);
  v2 = *(unsigned int *)(a1 + 56);
  if ( (_DWORD)v2 )
  {
    v3 = a1 + 8 * v2;
    do
    {
      v4 = *(_DWORD *)((*(_QWORD *)(a1 + 80) & 0xFFFFFFFFFFFFFFF8LL) + 12);
      v5 = (*(_QWORD *)(a1 + 80) & 7LL) == 1;
      a1 += 8;
      v6 = (v1 << 8)
         ^ (((((v5 - v4) ^ (v4 << 8) ^ ((v4 - ((v5 - v4) ^ (v4 << 8))) << 16)) + ((v5 - v4) ^ (v4 << 8)) - v4)
           ^ ((v4 - ((v5 - v4) ^ (v4 << 8))) << 10))
          - v1);
      v1 = (v6 - v1 + (v6 ^ ((v1 - v6) << 16))) ^ ((v1 - v6) << 10);
    }
    while ( v3 != a1 );
  }
  return v1;
}

