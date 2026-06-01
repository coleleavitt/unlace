__int64 __fastcall sub_478380(double a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int128 v7; // rdi
  int v8; // ecx
  __int64 v9; // rcx
  unsigned int v10; // edx

  if ( (*(_BYTE *)(a3 + 114) & 8) != 0 )
  {
    *((_QWORD *)&v7 + 1) = *(_QWORD *)(a3 + 64);
    *(_QWORD *)&v7 = *(_QWORD *)(a3 + 72);
    if ( ((unsigned __int64)v7 & *((_QWORD *)&v7 + 1)) == 0xFFFFFFFFFFFFFFFFLL )
      return 5
           * (unsigned int)((*(_QWORD *)(a4 + 352) & *(_QWORD *)(a3 + 88) & 0xFFFFFFFF00000000LL) != (*(_QWORD *)(a3 + 88) & 0xFFFFFFFF00000000LL))
           + 2;
    if ( v7 != 0 )
    {
      v8 = *(_DWORD *)(a4 + 8);
      if ( v8 != -1 )
      {
        *((_QWORD *)&v7 + 1) &= (unsigned __int64)((v8 & 0x40) == 0) << v8;
        *(_QWORD *)&v7 = ((unsigned __int64)((v8 & 0x40) != 0) << v8) & v7;
        if ( v7 != 0 )
          return 5
               * (unsigned int)((*(_QWORD *)(a4 + 352) & *(_QWORD *)(a3 + 88) & 0xFFFFFFFF00000000LL) != (*(_QWORD *)(a3 + 88) & 0xFFFFFFFF00000000LL))
               + 2;
      }
    }
    v9 = *(_QWORD *)(a3 + 80);
    v10 = 6;
    if ( v9 )
    {
      if ( (*(_QWORD *)(a4 + 344) & v9) != 0 )
        return 5
             * (unsigned int)((*(_QWORD *)(a4 + 352) & *(_QWORD *)(a3 + 88) & 0xFFFFFFFF00000000LL) != (*(_QWORD *)(a3 + 88) & 0xFFFFFFFF00000000LL))
             + 2;
    }
    return v10;
  }
  else
  {
    if ( under_debugger )
      BUG();
    interr(40725, a3, a4, a5, a1);
    return sub_478440();
  }
}
