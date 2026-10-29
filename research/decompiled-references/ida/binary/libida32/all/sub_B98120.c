__int64 __fastcall sub_B98120(__int64 a1, __int64 a2)
{
  unsigned int v2; // r15d
  __int64 *v3; // rbx
  __int64 v4; // r13
  __int64 v5; // rbp
  unsigned int v6; // eax

  v2 = 0;
  v3 = (__int64 *)(a1 + 24);
  v4 = a1 + 8LL * (*(_DWORD *)(a1 + 20) & 0x1FFFFFFF) + 24;
  if ( v4 != a1 + 24 )
  {
    do
    {
      v5 = *v3;
      sub_B68340(*v3, a2);
      if ( (*(_BYTE *)(v5 + 28) & 0x7F) == 0x44 )
      {
        v6 = sub_B98120(*(_QWORD *)(v5 + 56), a2);
        if ( (_BYTE)v6 )
          v2 = v6;
      }
      if ( *(char *)(v5 + 28) < 0 )
        v2 = 1;
      ++v3;
    }
    while ( (__int64 *)v4 != v3 );
  }
  return v2;
}

