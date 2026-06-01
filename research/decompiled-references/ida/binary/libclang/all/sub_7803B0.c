__int64 __fastcall sub_7803B0(__int64 a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // rdi
  __int64 *v4; // rax
  unsigned int v5; // r8d
  unsigned int v6; // esi
  __int64 v7; // rcx

  if ( (*(_BYTE *)(*(_QWORD *)(sub_798D40(a1) + 2160) + 1LL) & 8) == 0 )
    return sub_77F620(a1);
  v2 = *(__int64 **)(a1 + 120);
  v3 = &v2[(unsigned int)sub_77F620(a1)];
  if ( v2 == v3 )
  {
    return 0;
  }
  else
  {
    v4 = v2;
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = *v4;
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v4 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 37 )
      {
        ++v6;
        if ( (((*(_BYTE *)(v7 + 97) & 6) - 2) & 0xFC) != 0 && *(_QWORD *)(v7 + 88) <= 7u )
          v5 = v6;
      }
      ++v4;
    }
    while ( v4 != v3 );
  }
  return v5;
}

