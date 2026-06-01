__int64 __fastcall sub_174080(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 v5; // rdi
  int v6; // ecx
  __int64 v7; // rcx
  unsigned int v8; // edx

  if ( (*(_BYTE *)(a2 + 114) & 8) != 0 )
  {
    *((_QWORD *)&v5 + 1) = *(_QWORD *)(a2 + 64);
    *(_QWORD *)&v5 = *(_QWORD *)(a2 + 72);
    if ( ((unsigned __int64)v5 & *((_QWORD *)&v5 + 1)) == 0xFFFFFFFFFFFFFFFFLL )
      return 5
           * (unsigned int)((*(_QWORD *)(a3 + 264) & *(_QWORD *)(a2 + 88) & 0xFFFFFFFF00000000LL) != (*(_QWORD *)(a2 + 88) & 0xFFFFFFFF00000000LL))
           + 2;
    if ( v5 != 0 )
    {
      v6 = *(_DWORD *)(a3 + 8);
      if ( v6 != -1 )
      {
        *((_QWORD *)&v5 + 1) &= (unsigned __int64)((v6 & 0x40) == 0) << v6;
        *(_QWORD *)&v5 = ((unsigned __int64)((v6 & 0x40) != 0) << v6) & v5;
        if ( v5 != 0 )
          return 5
               * (unsigned int)((*(_QWORD *)(a3 + 264) & *(_QWORD *)(a2 + 88) & 0xFFFFFFFF00000000LL) != (*(_QWORD *)(a2 + 88) & 0xFFFFFFFF00000000LL))
               + 2;
      }
    }
    v7 = *(_QWORD *)(a2 + 80);
    v8 = 6;
    if ( v7 )
    {
      if ( (*(_QWORD *)(a3 + 256) & v7) != 0 )
        return 5
             * (unsigned int)((*(_QWORD *)(a3 + 264) & *(_QWORD *)(a2 + 88) & 0xFFFFFFFF00000000LL) != (*(_QWORD *)(a2 + 88) & 0xFFFFFFFF00000000LL))
             + 2;
    }
    return v8;
  }
  else
  {
    if ( under_debugger )
      BUG();
    interr();
    return sub_174140(40725);
  }
}

