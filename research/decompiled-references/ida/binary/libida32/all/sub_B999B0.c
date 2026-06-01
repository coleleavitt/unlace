__int64 __fastcall sub_B999B0(__int64 a1)
{
  unsigned int v1; // r13d
  __int64 *v2; // rbx
  __int64 v3; // r12
  __int64 v4; // rbp
  char v6; // al
  int v7; // eax

  v1 = 0;
  v2 = (__int64 *)(a1 + 24);
  v3 = a1 + 24 + 8LL * (*(_DWORD *)(a1 + 20) & 0x1FFFFFFF);
  if ( a1 + 24 == v3 )
    return v1;
  while ( 1 )
  {
    v4 = *v2;
    if ( !(unsigned __int8)sub_B68150(*v2) )
    {
      if ( (*(_QWORD *)(v4 + 72) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        return v1;
      ++v1;
      goto LABEL_5;
    }
    v6 = *(_BYTE *)(v4 + 28) & 0x7F;
    if ( v6 == 67 )
    {
      v7 = *(_DWORD *)(v4 + 64);
      if ( !v7 )
        return v1;
      goto LABEL_9;
    }
    if ( v6 == 47 )
    {
      if ( !*(_BYTE *)(v4 + 81) )
        return v1;
      v7 = *(_DWORD *)(v4 + 84) + 1;
      if ( *(_DWORD *)(v4 + 84) == -1 )
        return v1;
      goto LABEL_9;
    }
    if ( v6 != 68 || (*(_BYTE *)(v4 + 80) & 4) == 0 )
      return v1;
    v7 = *(_DWORD *)(v4 + 84) + 1;
    if ( *(_DWORD *)(v4 + 84) == -1 )
      return v1;
LABEL_9:
    v1 = v7 + v1 - 1;
LABEL_5:
    if ( (__int64 *)v3 == ++v2 )
      return v1;
  }
}

